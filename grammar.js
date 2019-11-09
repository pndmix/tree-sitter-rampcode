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
    program: $ => repeat($._statement),

    _statement: $ => choice(
      $.default_statement,
      $.cps_statement,
      $.ramp1_statement,
      $.ramp2_statement,
      $.macro_statement,
      $.macro_function_statement,
    ),

    default_statement: $ => seq(
      $.signed_number,
      $.expression_statement,
      $.expression_statement
    ),

    cps_statement: $ => seq(
      'cps',
      ':',
      $.signed_number
    ),

    ramp1_statement: $ => seq(
      'ramp1',
      ':',
      $.expression_statement
    ),

    ramp2_statement: $ => seq(
      'ramp2',
      ':',
      $.expression_statement
    ),

    macro_statement: $ => seq(
      alias($.identifier, $.name),
      '=',
      $.expression_statement
    ),

    macro_function_statement: $ => seq(
      alias($.identifier, $.name),
      $.macro_arguments,
      '=',
      $.expression_statement
    ),

    macro_arguments: $ => args($._delimiter, repeat1(alias($.identifier, $.name))),

    expression_statement: $ => $._expressions,

    _expressions: $ => choice(
      $.number,
      $.signal,
      $.parenthesized,
      $.boolean_operator,
      $.binary_operator,
      $.unary_operator,
      $.comparison_operator,
      $.call_function,
      $.call_macro,
      $.call_macro_function
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

    unary_operator: $ => {
      const exprs = choice(
        $.parenthesized,
        $.call_function,
        $.call_macro,
        $.call_macro_function,
        $.number,
        $.signal  
      )
      return choice(
        prec(PREC.unary, seq('~', exprs)),
        prec(PREC.unary, seq('!', exprs)),
        prec(PREC.unary, seq('-', exprs))
      )
    },

    comparison_operator: $ => prec.left(
      PREC.compare,
      seq(
        $._expressions,
        repeat1(seq(choice('<', '<=', '==', '!=', '>=', '>'), $._expressions))
      )
    ),

    parenthesized: $ => seq('(', $._expressions, ')'),

    call_function: $ => seq(
      alias($.function_name, $.name),
      $.arguments
    ),

    call_macro: $ => alias($.identifier, $.name),

    call_macro_function: $ => seq(
      alias($.identifier, $.name),
      $.arguments
    ),

    arguments: $ => args($._delimiter, repeat1($._expressions)),

    _delimiter: $ => choice(',', '\\,'),

    number: $ => {
      const integer = /[0-9]+/
      const float = /([1-9][0-9]*\.[0-9]*)|(0?\.[0-9]+)/
      const exponent = seq(
        choice(integer, float),
        choice('e', 'E'),
        optional(choice('-', '+')),
        integer
      )
      return token(choice(integer, float, exponent))
    },

    signed_number: $ => seq(
      optional('-'),
      $.number
    ),

    signal: $ => '$v1',

    function_name: $ => {
      const base = /(if|int|rint|float|min|max|abs|)/
      const power = /(pow|sqrt|exp|ln|log|log10|fact|cbrt|expm1|log1p|ldexp)/
      const trigonometric = /(sin|cos|tan|asin|acos|atan|atan2|sinh|cosh|tanh|asinh|acosh|atanh|floor|ceil|fmod)/
      return token(choice(base, power, trigonometric))
    },

    identifier: $ => /[a-zA-Z_][a-zA-Z_0-9]*/,

    comment: $ => token(
      choice(
        seq('//', /.*/),
        seq('/*', repeat(choice(/[^*]/, /\*[^/]/)), '*/')
      )
    ),
  }
});

function sep(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)))
}

function args(separator, rule) {
  return seq(token.immediate('('), sep(separator, rule), ')')
}