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
      $._statement
    ),

    _statement: $ => seq(
      choice(
        $.set_statement,
        $.rec_statement,
        $.expression_statement
      ),
      optional(';'),
    ),

    set_statement: $ => seq(
      'set',
      choice($.integer, $.float)
    ),

    rec_statement: $ => seq(
      'rec',
      $.integer
    ),

    expression_statement: $ => $._expressions,

    _expressions: $ => choice(
      alias($.identifier, $.plain),
      $.integer,
      $.float,
      $.signal,
      $.parenthesized,
      $.boolean_operator,
      $.binary_operator,
      $.unary_operator,
      $.comparison_operator,
      $.call_expression
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

    call_expression: $ => seq(
      alias($.identifier, $.function_name),
      $.arguments
    ),

    arguments: $ => seq(
      token.immediate('('),
      sep(choice(','), repeat1($._expressions)),
      ')'
    ),

    identifier: $ => /[a-z]+/,

    integer: $ => /[0-9]+/,

    float: $ => /(([1-9][0-9]*\.[0-9]*)|(0?\.[0-9]+))/,

    signal: $ => '$v1',

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

function sep (separator, rule) {
  return optional(sep1(separator, rule))
}

function sep1 (separator, rule) {
  return seq(rule, repeat(seq(separator, rule)))
}