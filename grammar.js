const PREC = {
  or: 1,
  and: 2,
  bitwise_or: 3,
  xor: 4,
  bitwise_and: 5,
  compare: 6,
  shift: 7,
  plus: 8,
  times: 9,
  unary: 10
}

module.exports = grammar({
  name: "rampcode",

  extras: $ => [
    /[\s\n]/,
    $.comment,
  ],

  inline: $ => [
    $._statement
  ],

  word: $ => $.identifier,

  rules: {
    program: $ => repeat(
      seq($._statement, ';')
    ),

    _statement: $ => choice(
        $.expression_statement,
        $.hz_statement,
        $.amp_statement,
        $.reset_statement,
        $.ramp_statement,
        $.channel_statement,
        $.define_statement
    ),

    hz_statement: $ => seq(
      'hz',
      $.reserved_word,
      choice($.integer, $.float)
    ),

    amp_statement: $ => seq(
      'amp',
      $.reserved_word,
      choice($.integer, $.float)
    ),

    reset_statement: $ => 'reset',

    ramp_statement: $ => seq(
      'ramp',
      $.reserved_word,
      $._expressions
    ),

    channel_statement: $ => seq(
      choice(
        alias('l', $.left),
        alias('r', $.right)
      ),
      $.reserved_word,
      $._expressions
    ),

    define_statement: $ => seq(
      'define',
      choice($.macro_variable, $.macro_function),
      $.expression_statement
    ),

    macro_variable: $ => alias($.variable_name, $.name),

    macro_function: $ => seq(
      alias($.variable_name, $.name),
      alias($._macro_function_arguments, $.arguments)
    ),

    _macro_function_arguments: $ => args(',', repeat1($.variable_name)),

    expression_statement: $ => $._expressions,

    _expressions: $ => choice(
      $.integer,
      $.float,
      $.signal,
      $.parenthesized,
      $.boolean_operator,
      $.binary_operator,
      $.unary_operator,
      $.comparison_operator,
      $._call_expressions,
      $.variable_name
    ),

    boolean_operator: $ => choice(
      prec.left(PREC.and, seq($._expressions, '&&', $._expressions)),
      prec.left(PREC.or, seq($._expressions, '||', $._expressions))
    ),

    binary_operator: $ => choice(
      prec.left(PREC.times, seq($._expressions, '*', $._expressions)),
      prec.left(PREC.times, seq($._expressions, '/', $._expressions)),
      prec.left(PREC.times, seq($._expressions, '%', $._expressions)),
      prec.left(PREC.plus, seq($._expressions, '+', $._expressions)),
      prec.left(PREC.plus, seq($._expressions, '-', $._expressions)),
      prec.left(PREC.shift, seq($._expressions, '<<', $._expressions)),
      prec.left(PREC.shift, seq($._expressions, '>>', $._expressions)),
      prec.left(PREC.bitwise_and, seq($._expressions, '&', $._expressions)),
      prec.left(PREC.xor, seq($._expressions, '^', $._expressions)),
      prec.left(PREC.bitwise_or, seq($._expressions, '|', $._expressions)),
    ),

    unary_operator: $ => choice(
      prec(PREC.unary, seq('~', $._expressions))
    ),

    comparison_operator: $ => prec.left(PREC.compare,
      seq(
        $._expressions,
        repeat1(seq(choice(
              '<',
              '<=',
              '==',
              '!=',
              '>=',
              '>',
            ),
            $._expressions
          )
        )
      )
    ),

    parenthesized: $ => seq(
      '(',
      $._expressions,
      ')'
    ),

    _call_expressions: $ => choice(
      $.call_function,
      $.call_macro
    ),

    call_function: $ => seq(
      alias($.function_name, $.name),
      $.arguments
    ),

    call_macro: $ => choice(
      alias($._call_macro_variable, $.variable),
      alias($._call_macro_function, $.function)
    ),

    _call_macro_variable: $ => /\$[a-zA-Z_]+\w*/,

    _call_macro_function: $ => seq(alias($._call_macro_variable, $.name), $.arguments),

    arguments: $ => args(',', repeat1($._expressions)),

    reserved_word: $ => /@|:/,

    identifier: $ => /[a-zA-Z_]+/,

    integer: $ => /[0-9]+/,

    float: $ => /(([1-9][0-9]*\.[0-9]*)|(0?\.[0-9]+))/,

    signal: $ => '$v1',

    function_name: $ => /(if|int|rint|float|min|max|abs|floor|ceil|fmod|pow|sqrt|cbrt|exp|expm1|log|log1p|log10|fact|sin|cos|tan|asin|acos|atan|atan2|sinh|cosh|tanh|asinh|acosh|atanh)/,

    variable_name: $ => /[a-zA-Z_]+\w*/,

    comment: $ => token(choice(
      seq('--', /.*/),
      seq(
        '/*',
        repeat(choice(
          /[^*]/,
          /\*[^/]/,
        )),
        '*/'
      )
    )),
  }
});

function sep(separator, rule) {
  return optional(sep1(separator, rule))
}

function sep1(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)))
}

function args(separator, rule) {
  return seq(token.immediate('('), sep(separator, rule), ')')
}