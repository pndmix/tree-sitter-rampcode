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
  parameter: 11,
  constant: 12,
}

function sep(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)))
}

function args(separator, rule) {
  return seq('(', sep(separator, rule), ')')
}


module.exports = grammar({
  name: "rampcode",

  extras: $ => [
    /[\s\n]/,
    $.comment,
  ],

  inline: $ => [
    $._statement,
  ],

  word: $ => $.identifier,

  rules: {
    program: $ => repeat(
      choice(
        $.address_statement,
        $._statement
      )
    ),

    identifier: $ => /[a-zA-Z_]\w*/,

    comment: $ => choice(
      seq('//', /.*/),
      seq('/*', repeat(choice(/[^*]/, /\*[^/]/)), '*/')
    ),

    address_statement: $ => seq(
      $.port,
      optional(
        choice(
          $.host,
          seq($.host, $.protocol)
        )
      ),
      $.statement_block
    ),

    port: $ => /[0-9]+/,

    host: $ => /[a-zA-Z0-9][a-zA-Z0-9.-]*/,

    protocol: $ => /tcp|udp/,

    statement_block: $ => seq(
      '{',
      optional(repeat($._statement)),
      '}'
    ),

    _statement: $ => seq(
      choice(
        $.hz_statement,
        $.constant_statement,
        $.main_statement,
      ),
      optional(';')
    ),

    hz_statement: $ => seq(
      alias('hz', $.keyword_identifier),
      $.special_parameter,
      $.expression
    ),

    constant_statement: $ => prec(PREC.constant, seq(
      alias('c', $.keyword_identifier),
      $.special_parameter,
      $.number
    )),

    main_statement: $ => seq(
      $.expression,
      $.special_parameter,
      $.expression
    ),

    special_parameter: $ => '@',

    expression: $ => $._expressions,

    _expressions: $ => choice(
      $.boolean_operator,
      $.binary_operator,
      $.comparison_operator,
      $.unary_operator,
      $._variables,
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

    comparison_operator: $ => choice(
      prec.left(PREC.compare, seq($._expressions, '<', $._expressions)),
      prec.left(PREC.compare, seq($._expressions, '<=', $._expressions)),
      prec.left(PREC.compare, seq($._expressions, '==', $._expressions)),
      prec.left(PREC.compare, seq($._expressions, '!=', $._expressions)),
      prec.left(PREC.compare, seq($._expressions, '>=', $._expressions)),
      prec.left(PREC.compare, seq($._expressions, '>', $._expressions)),
    ),

    unary_operator: $ => choice(
      prec(PREC.unary, seq('~', $._variables)),
      prec(PREC.unary, seq('!', $._variables)),
      prec(PREC.unary, seq('-', $._variables))
    ),

    _variables: $ => choice(
      $.parenthesized,
      $.variable,
      $.number,
      $.function,
    ),

    parenthesized: $ => seq('(', $._expressions, ')'),

    variable: $ => choice('$v1', 'c'),

    number: $ => {
      const integer = /[0-9]+/
      const float = /([1-9][0-9]*\.[0-9]*)|(0?\.[0-9]+)/
      const exponent = seq(
        choice(integer, float),
        choice('e', 'E'),
        optional(choice('-', '+')),
        integer
      )
      return choice(integer, float, exponent)
    },

    function: $ => {
      const base = /if|int|rint|float|min|max|abs/
      const power = /pow|sqrt|exp|ln|log|log10|fact|cbrt|expm1|log1p|ldexp/
      const trigonometric = /sin|cos|tan|asin|acos|atan|atan2|sinh|cosh|tanh|asinh|acosh|atanh|floor|ceil|fmod/
      return seq(alias(choice(base, power, trigonometric), $.name), $.arguments)
    },

    arguments: $ => args($._delimiter, repeat1($._expressions)),

    _delimiter: $ => choice(',', '\\,'),
  }
});
