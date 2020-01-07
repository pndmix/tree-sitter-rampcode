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
  unary: 10,
  parameter: 11
}

module.exports = grammar({
  name: "rampcode",

  extras: $ => [
    /[\s\n]/,
    $.comment,
  ],

  inline: $ => [
    $._default_statement,
    $._extended_statement
  ],

  word: $ => $.identifier,

  rules: {
    program: $ => repeat($._statement),

    _statement: $ => seq(
      choice(
        $._default_statement,
        $._extended_statement
      ),
      optional($._semicolon)
    ),

    _default_statement: $ => choice(
      $.hz_statement,
      $.ramp_statement,
      $.const_statement
    ),

    hz_statement: $ => seq(
      alias(/hz/, $.keyword_identifier),
      $._keyword_operator,
      $.expression
    ),

    ramp_statement: $ => seq(
      $.expression,
      $._keyword_operator,
      $.expression
    ),

    const_statement: $ => prec(12, seq(
      alias($.value, $.keyword_identifier),
      $._keyword_operator,
      $.number
    )),

    _extended_statement: $ => choice(
      $.ramp1_statement,
      $.ramp2_statement,
      $.macro_statement,
      $.macro_function_statement
    ),

    ramp1_statement: $ => seq(
      alias(/ramp1/, $.keyword_identifier),
      $._keyword_operator,
      $.expression
    ),

    ramp2_statement: $ => seq(
      alias(/ramp2/, $.keyword_identifier),
      $._keyword_operator,
      $.expression
    ),

    macro_statement: $ => seq(
      alias($.identifier, $.name),
      '=',
      $.expression
    ),

    macro_function_statement: $ => seq(
      alias($.identifier, $.name),
      $.parameters,
      '=',
      $.expression
    ),

    parameters: $ => args($._delimiter, repeat1($._parameter)),

    _parameter: $ => prec(PREC.parameter, alias($.identifier, $.name)),

    expression: $ => $._expressions,

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
      $.call_macro_function,
      $.value
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

    arguments: $ => args($._delimiter, repeat1($._argument)),

    _argument: $ => $._expressions,

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

    _keyword_operator: $ => choice(':', '@'),

    _semicolon: $ => ';',

    signal: $ => '$v1',

    function_name: $ => {
      const base = /(if|int|rint|float|min|max|abs|)/
      const power = /(pow|sqrt|exp|ln|log|log10|fact|cbrt|expm1|log1p|ldexp)/
      const trigonometric = /(sin|cos|tan|asin|acos|atan|atan2|sinh|cosh|tanh|asinh|acosh|atanh|floor|ceil|fmod)/
      return token(choice(base, power, trigonometric))
    },

    value: $ => 'c',

    _keyword_identifier: $ => alias(
      choice('hz', $.value, 'ramp1', 'ramp2'),
      $.identifier
    ),

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