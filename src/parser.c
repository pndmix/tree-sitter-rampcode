#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 50
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 2
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_set = 3,
  anon_sym_rec = 4,
  anon_sym_AMP_AMP = 5,
  anon_sym_PIPE_PIPE = 6,
  anon_sym_STAR = 7,
  anon_sym_SLASH = 8,
  anon_sym_PERCENT = 9,
  anon_sym_PLUS = 10,
  anon_sym_DASH = 11,
  anon_sym_LT_LT = 12,
  anon_sym_GT_GT = 13,
  anon_sym_AMP = 14,
  anon_sym_CARET = 15,
  anon_sym_PIPE = 16,
  anon_sym_TILDE = 17,
  anon_sym_LT = 18,
  anon_sym_LT_EQ = 19,
  anon_sym_EQ_EQ = 20,
  anon_sym_BANG_EQ = 21,
  anon_sym_GT_EQ = 22,
  anon_sym_GT = 23,
  anon_sym_LPAREN = 24,
  anon_sym_RPAREN = 25,
  anon_sym_LPAREN2 = 26,
  anon_sym_COMMA = 27,
  sym_integer = 28,
  sym_float = 29,
  sym_signal = 30,
  sym_comment = 31,
  sym_program = 32,
  sym_set_statement = 33,
  sym_rec_statement = 34,
  sym_expression_statement = 35,
  sym__expressions = 36,
  sym_boolean_operator = 37,
  sym_binary_operator = 38,
  sym_unary_operator = 39,
  sym_comparison_operator = 40,
  sym_parenthesized = 41,
  sym_call_expression = 42,
  sym_arguments = 43,
  aux_sym_program_repeat1 = 44,
  aux_sym_comparison_operator_repeat1 = 45,
  aux_sym_arguments_repeat1 = 46,
  aux_sym_arguments_repeat2 = 47,
  alias_sym_function_name = 48,
  alias_sym_plain = 49,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_set] = "set",
  [anon_sym_rec] = "rec",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym_PIPE] = "|",
  [anon_sym_TILDE] = "~",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_COMMA] = ",",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_signal] = "signal",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym_set_statement] = "set_statement",
  [sym_rec_statement] = "rec_statement",
  [sym_expression_statement] = "expression_statement",
  [sym__expressions] = "_expressions",
  [sym_boolean_operator] = "boolean_operator",
  [sym_binary_operator] = "binary_operator",
  [sym_unary_operator] = "unary_operator",
  [sym_comparison_operator] = "comparison_operator",
  [sym_parenthesized] = "parenthesized",
  [sym_call_expression] = "call_expression",
  [sym_arguments] = "arguments",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_comparison_operator_repeat1] = "comparison_operator_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_repeat2] = "arguments_repeat2",
  [alias_sym_function_name] = "function_name",
  [alias_sym_plain] = "plain",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_signal] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_set_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_rec_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expressions] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comparison_operator_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_plain] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_plain,
  },
  [2] = {
    [0] = alias_sym_function_name,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == '|')
        ADVANCE(20);
      if (lookahead == '~')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(22);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '=')
        ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == 'v')
        ADVANCE(26);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(27);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(28);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(30);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == '=')
        ADVANCE(34);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(35);
      if (lookahead == '>')
        ADVANCE(36);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(37);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 22:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(38);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == '|')
        ADVANCE(20);
      if (lookahead == '~')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(22);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 26:
      if (lookahead == '1')
        ADVANCE(39);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '*')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_signal);
      END_STATE();
    case 40:
      if (lookahead == '/')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(30);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 42:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(38);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == '|')
        ADVANCE(20);
      if (lookahead == '~')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 43:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == '|')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(43);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      END_STATE();
    case 44:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(38);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(14);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == '|')
        ADVANCE(20);
      if (lookahead == '~')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(44);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 'r')
        ADVANCE(1);
      if (lookahead == 's')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'e')
        ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'e')
        ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'c')
        ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 't')
        ADVANCE(6);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_rec);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 42},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 42},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 42},
  [6] = {.lex_state = 43},
  [7] = {.lex_state = 42},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 42},
  [10] = {.lex_state = 42},
  [11] = {.lex_state = 44},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 42},
  [15] = {.lex_state = 43},
  [16] = {.lex_state = 42},
  [17] = {.lex_state = 42},
  [18] = {.lex_state = 42},
  [19] = {.lex_state = 42},
  [20] = {.lex_state = 42},
  [21] = {.lex_state = 42},
  [22] = {.lex_state = 42},
  [23] = {.lex_state = 42},
  [24] = {.lex_state = 42},
  [25] = {.lex_state = 42},
  [26] = {.lex_state = 42},
  [27] = {.lex_state = 22},
  [28] = {.lex_state = 42},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 44},
  [31] = {.lex_state = 44},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 22},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 42},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 44},
  [46] = {.lex_state = 43},
  [47] = {.lex_state = 44},
  [48] = {.lex_state = 22},
  [49] = {.lex_state = 43},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_rec] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [sym_signal] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_rec_statement] = STATE(7),
    [sym_expression_statement] = STATE(7),
    [sym_comparison_operator] = STATE(9),
    [sym_parenthesized] = STATE(9),
    [sym_program] = STATE(8),
    [sym__expressions] = STATE(9),
    [sym_boolean_operator] = STATE(9),
    [sym_call_expression] = STATE(9),
    [sym_set_statement] = STATE(7),
    [sym_binary_operator] = STATE(9),
    [sym_unary_operator] = STATE(9),
    [aux_sym_program_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(9),
    [sym_float] = ACTIONS(11),
    [anon_sym_set] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [sym_signal] = ACTIONS(11),
    [anon_sym_rec] = ACTIONS(19),
  },
  [2] = {
    [sym_arguments] = STATE(12),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_rec] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_float] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_set] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN2] = ACTIONS(25),
    [sym_signal] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
  },
  [3] = {
    [sym_comparison_operator] = STATE(13),
    [sym_parenthesized] = STATE(13),
    [sym__expressions] = STATE(13),
    [sym_boolean_operator] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_binary_operator] = STATE(13),
    [sym_unary_operator] = STATE(13),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(9),
    [sym_float] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(31),
    [sym_signal] = ACTIONS(29),
  },
  [4] = {
    [sym_float] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(35),
  },
  [5] = {
    [sym_comparison_operator] = STATE(15),
    [sym_parenthesized] = STATE(15),
    [sym__expressions] = STATE(15),
    [sym_boolean_operator] = STATE(15),
    [sym_call_expression] = STATE(15),
    [sym_binary_operator] = STATE(15),
    [sym_unary_operator] = STATE(15),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(9),
    [sym_float] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(39),
    [sym_signal] = ACTIONS(37),
  },
  [6] = {
    [sym_comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(41),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(43),
    [sym_float] = ACTIONS(43),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(43),
    [sym_integer] = ACTIONS(47),
    [sym_signal] = ACTIONS(43),
    [anon_sym_rec] = ACTIONS(47),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [aux_sym_comparison_operator_repeat1] = STATE(27),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_GT_GT] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_rec] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_PIPE_PIPE] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_AMP_AMP] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(61),
    [sym_identifier] = ACTIONS(59),
    [sym_float] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(73),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_set] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(77),
    [sym_integer] = ACTIONS(59),
    [sym_signal] = ACTIONS(73),
    [anon_sym_EQ_EQ] = ACTIONS(51),
  },
  [10] = {
    [sym_rec_statement] = STATE(7),
    [sym_expression_statement] = STATE(7),
    [sym_comparison_operator] = STATE(9),
    [sym_parenthesized] = STATE(9),
    [sym__expressions] = STATE(9),
    [sym_boolean_operator] = STATE(9),
    [sym_call_expression] = STATE(9),
    [sym_set_statement] = STATE(7),
    [sym_binary_operator] = STATE(9),
    [sym_unary_operator] = STATE(9),
    [aux_sym_program_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(9),
    [sym_float] = ACTIONS(11),
    [anon_sym_set] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [sym_signal] = ACTIONS(11),
    [anon_sym_rec] = ACTIONS(19),
  },
  [11] = {
    [sym_comparison_operator] = STATE(31),
    [sym_parenthesized] = STATE(31),
    [aux_sym_arguments_repeat1] = STATE(30),
    [sym__expressions] = STATE(31),
    [sym_boolean_operator] = STATE(31),
    [sym_call_expression] = STATE(31),
    [sym_binary_operator] = STATE(31),
    [sym_unary_operator] = STATE(31),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(9),
    [sym_float] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(83),
    [sym_signal] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(85),
  },
  [12] = {
    [anon_sym_GT_EQ] = ACTIONS(87),
    [anon_sym_GT_GT] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_CARET] = ACTIONS(87),
    [anon_sym_rec] = ACTIONS(89),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(87),
    [sym_identifier] = ACTIONS(89),
    [sym_float] = ACTIONS(87),
    [anon_sym_LT_EQ] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(87),
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_TILDE] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_set] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(89),
    [sym_integer] = ACTIONS(89),
    [sym_signal] = ACTIONS(87),
    [anon_sym_EQ_EQ] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(87),
  },
  [13] = {
    [aux_sym_comparison_operator_repeat1] = STATE(27),
    [anon_sym_GT_EQ] = ACTIONS(91),
    [anon_sym_GT_GT] = ACTIONS(91),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(91),
    [anon_sym_rec] = ACTIONS(93),
    [anon_sym_PERCENT] = ACTIONS(91),
    [anon_sym_PIPE_PIPE] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_AMP_AMP] = ACTIONS(91),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_STAR] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_float] = ACTIONS(91),
    [anon_sym_LT_EQ] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_set] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(93),
    [sym_integer] = ACTIONS(93),
    [sym_signal] = ACTIONS(91),
    [anon_sym_EQ_EQ] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(95),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_TILDE] = ACTIONS(95),
    [sym_float] = ACTIONS(95),
    [anon_sym_set] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(95),
    [sym_integer] = ACTIONS(97),
    [sym_signal] = ACTIONS(95),
    [anon_sym_rec] = ACTIONS(97),
  },
  [15] = {
    [aux_sym_comparison_operator_repeat1] = STATE(27),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_GT_GT] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_PIPE_PIPE] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_AMP_AMP] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(99),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(101),
    [sym_identifier] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(101),
    [sym_float] = ACTIONS(101),
    [anon_sym_set] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(101),
    [sym_integer] = ACTIONS(103),
    [sym_signal] = ACTIONS(101),
    [anon_sym_rec] = ACTIONS(103),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(105),
    [sym_float] = ACTIONS(105),
    [anon_sym_set] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(105),
    [sym_integer] = ACTIONS(107),
    [sym_signal] = ACTIONS(105),
    [anon_sym_rec] = ACTIONS(107),
  },
  [18] = {
    [sym_comparison_operator] = STATE(33),
    [sym_parenthesized] = STATE(33),
    [sym__expressions] = STATE(33),
    [sym_boolean_operator] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_binary_operator] = STATE(33),
    [sym_unary_operator] = STATE(33),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(9),
    [sym_float] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(111),
    [sym_signal] = ACTIONS(109),
  },
  [19] = {
    [sym_comparison_operator] = STATE(34),
    [sym_parenthesized] = STATE(34),
    [sym__expressions] = STATE(34),
    [sym_boolean_operator] = STATE(34),
    [sym_call_expression] = STATE(34),
    [sym_binary_operator] = STATE(34),
    [sym_unary_operator] = STATE(34),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(9),
    [sym_float] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(115),
    [sym_signal] = ACTIONS(113),
  },
  [20] = {
    [sym_comparison_operator] = STATE(35),
    [sym_parenthesized] = STATE(35),
    [sym__expressions] = STATE(35),
    [sym_boolean_operator] = STATE(35),
    [sym_call_expression] = STATE(35),
    [sym_binary_operator] = STATE(35),
    [sym_unary_operator] = STATE(35),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(9),
    [sym_float] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(119),
    [sym_signal] = ACTIONS(117),
  },
  [21] = {
    [sym_comparison_operator] = STATE(36),
    [sym_parenthesized] = STATE(36),
    [sym__expressions] = STATE(36),
    [sym_boolean_operator] = STATE(36),
    [sym_call_expression] = STATE(36),
    [sym_binary_operator] = STATE(36),
    [sym_unary_operator] = STATE(36),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(9),
    [sym_float] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(123),
    [sym_signal] = ACTIONS(121),
  },
  [22] = {
    [sym_comparison_operator] = STATE(37),
    [sym_parenthesized] = STATE(37),
    [sym__expressions] = STATE(37),
    [sym_boolean_operator] = STATE(37),
    [sym_call_expression] = STATE(37),
    [sym_binary_operator] = STATE(37),
    [sym_unary_operator] = STATE(37),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(9),
    [sym_float] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(127),
    [sym_signal] = ACTIONS(125),
  },
  [23] = {
    [sym_comparison_operator] = STATE(38),
    [sym_parenthesized] = STATE(38),
    [sym__expressions] = STATE(38),
    [sym_boolean_operator] = STATE(38),
    [sym_call_expression] = STATE(38),
    [sym_binary_operator] = STATE(38),
    [sym_unary_operator] = STATE(38),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(9),
    [sym_float] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(131),
    [sym_signal] = ACTIONS(129),
  },
  [24] = {
    [sym_comparison_operator] = STATE(39),
    [sym_parenthesized] = STATE(39),
    [sym__expressions] = STATE(39),
    [sym_boolean_operator] = STATE(39),
    [sym_call_expression] = STATE(39),
    [sym_binary_operator] = STATE(39),
    [sym_unary_operator] = STATE(39),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(9),
    [sym_float] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(135),
    [sym_signal] = ACTIONS(133),
  },
  [25] = {
    [sym_comparison_operator] = STATE(40),
    [sym_parenthesized] = STATE(40),
    [sym__expressions] = STATE(40),
    [sym_boolean_operator] = STATE(40),
    [sym_call_expression] = STATE(40),
    [sym_binary_operator] = STATE(40),
    [sym_unary_operator] = STATE(40),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(9),
    [sym_float] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(139),
    [sym_signal] = ACTIONS(137),
  },
  [26] = {
    [sym_comparison_operator] = STATE(41),
    [sym_parenthesized] = STATE(41),
    [sym__expressions] = STATE(41),
    [sym_boolean_operator] = STATE(41),
    [sym_call_expression] = STATE(41),
    [sym_binary_operator] = STATE(41),
    [sym_unary_operator] = STATE(41),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(9),
    [sym_float] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(143),
    [sym_signal] = ACTIONS(141),
  },
  [27] = {
    [aux_sym_comparison_operator_repeat1] = STATE(42),
    [anon_sym_GT_EQ] = ACTIONS(145),
    [anon_sym_GT_GT] = ACTIONS(145),
    [anon_sym_PLUS] = ACTIONS(145),
    [anon_sym_CARET] = ACTIONS(145),
    [anon_sym_rec] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(145),
    [anon_sym_PIPE_PIPE] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(145),
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PIPE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(145),
    [anon_sym_STAR] = ACTIONS(145),
    [sym_identifier] = ACTIONS(147),
    [sym_float] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(145),
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_AMP] = ACTIONS(147),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [sym_integer] = ACTIONS(147),
    [sym_signal] = ACTIONS(145),
    [anon_sym_EQ_EQ] = ACTIONS(145),
    [anon_sym_RPAREN] = ACTIONS(145),
  },
  [28] = {
    [sym_rec_statement] = STATE(7),
    [sym_expression_statement] = STATE(7),
    [sym_comparison_operator] = STATE(9),
    [sym_parenthesized] = STATE(9),
    [sym__expressions] = STATE(9),
    [sym_boolean_operator] = STATE(9),
    [sym_call_expression] = STATE(9),
    [sym_set_statement] = STATE(7),
    [sym_binary_operator] = STATE(9),
    [sym_unary_operator] = STATE(9),
    [aux_sym_program_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(149),
    [anon_sym_TILDE] = ACTIONS(152),
    [sym_float] = ACTIONS(155),
    [anon_sym_set] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(161),
    [sym_integer] = ACTIONS(164),
    [sym_signal] = ACTIONS(155),
    [anon_sym_rec] = ACTIONS(167),
  },
  [29] = {
    [anon_sym_GT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_CARET] = ACTIONS(170),
    [anon_sym_rec] = ACTIONS(172),
    [anon_sym_PERCENT] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(170),
    [anon_sym_COMMA] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_AMP_AMP] = ACTIONS(170),
    [anon_sym_SEMI] = ACTIONS(170),
    [anon_sym_STAR] = ACTIONS(170),
    [sym_identifier] = ACTIONS(172),
    [sym_float] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(170),
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_LT_LT] = ACTIONS(170),
    [anon_sym_TILDE] = ACTIONS(170),
    [anon_sym_AMP] = ACTIONS(172),
    [anon_sym_set] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(172),
    [sym_integer] = ACTIONS(172),
    [sym_signal] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(170),
  },
  [30] = {
    [sym_comparison_operator] = STATE(31),
    [sym_parenthesized] = STATE(31),
    [aux_sym_arguments_repeat1] = STATE(45),
    [aux_sym_arguments_repeat2] = STATE(46),
    [sym__expressions] = STATE(31),
    [sym_boolean_operator] = STATE(31),
    [sym_call_expression] = STATE(31),
    [sym_binary_operator] = STATE(31),
    [sym_unary_operator] = STATE(31),
    [anon_sym_COMMA] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(9),
    [sym_float] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(83),
    [sym_signal] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(176),
  },
  [31] = {
    [aux_sym_comparison_operator_repeat1] = STATE(27),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_AMP_AMP] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(61),
    [sym_identifier] = ACTIONS(178),
    [sym_float] = ACTIONS(178),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_GT_GT] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_PIPE_PIPE] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(178),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_SLASH] = ACTIONS(77),
    [sym_integer] = ACTIONS(180),
    [sym_signal] = ACTIONS(178),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(178),
  },
  [32] = {
    [anon_sym_GT_EQ] = ACTIONS(182),
    [anon_sym_GT_GT] = ACTIONS(182),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_CARET] = ACTIONS(182),
    [anon_sym_rec] = ACTIONS(184),
    [anon_sym_PERCENT] = ACTIONS(182),
    [anon_sym_PIPE_PIPE] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(182),
    [anon_sym_LT] = ACTIONS(184),
    [anon_sym_GT] = ACTIONS(184),
    [anon_sym_DASH] = ACTIONS(184),
    [anon_sym_PIPE] = ACTIONS(184),
    [anon_sym_AMP_AMP] = ACTIONS(182),
    [anon_sym_SEMI] = ACTIONS(182),
    [anon_sym_STAR] = ACTIONS(182),
    [sym_identifier] = ACTIONS(184),
    [sym_float] = ACTIONS(182),
    [anon_sym_LT_EQ] = ACTIONS(182),
    [anon_sym_LPAREN] = ACTIONS(182),
    [ts_builtin_sym_end] = ACTIONS(182),
    [anon_sym_LT_LT] = ACTIONS(182),
    [anon_sym_TILDE] = ACTIONS(182),
    [anon_sym_AMP] = ACTIONS(184),
    [anon_sym_set] = ACTIONS(184),
    [anon_sym_SLASH] = ACTIONS(184),
    [sym_integer] = ACTIONS(184),
    [sym_signal] = ACTIONS(182),
    [anon_sym_EQ_EQ] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(182),
  },
  [33] = {
    [aux_sym_comparison_operator_repeat1] = STATE(27),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_GT_GT] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_rec] = ACTIONS(186),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_PIPE_PIPE] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(188),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_AMP_AMP] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(188),
    [anon_sym_STAR] = ACTIONS(61),
    [sym_identifier] = ACTIONS(186),
    [sym_float] = ACTIONS(188),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(188),
    [ts_builtin_sym_end] = ACTIONS(188),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_set] = ACTIONS(186),
    [anon_sym_SLASH] = ACTIONS(77),
    [sym_integer] = ACTIONS(186),
    [sym_signal] = ACTIONS(188),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(188),
  },
  [34] = {
    [aux_sym_comparison_operator_repeat1] = STATE(27),
    [anon_sym_GT_EQ] = ACTIONS(190),
    [anon_sym_GT_GT] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_CARET] = ACTIONS(190),
    [anon_sym_rec] = ACTIONS(192),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_PIPE_PIPE] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(190),
    [anon_sym_LT] = ACTIONS(192),
    [anon_sym_GT] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_AMP_AMP] = ACTIONS(190),
    [anon_sym_SEMI] = ACTIONS(190),
    [anon_sym_STAR] = ACTIONS(61),
    [sym_identifier] = ACTIONS(192),
    [sym_float] = ACTIONS(190),
    [anon_sym_LT_EQ] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(190),
    [ts_builtin_sym_end] = ACTIONS(190),
    [anon_sym_LT_LT] = ACTIONS(190),
    [anon_sym_TILDE] = ACTIONS(190),
    [anon_sym_AMP] = ACTIONS(192),
    [anon_sym_set] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(77),
    [sym_integer] = ACTIONS(192),
    [sym_signal] = ACTIONS(190),
    [anon_sym_EQ_EQ] = ACTIONS(190),
    [anon_sym_RPAREN] = ACTIONS(190),
  },
  [35] = {
    [aux_sym_comparison_operator_repeat1] = STATE(27),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_GT_GT] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_rec] = ACTIONS(192),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_PIPE_PIPE] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_AMP_AMP] = ACTIONS(190),
    [anon_sym_SEMI] = ACTIONS(190),
    [anon_sym_STAR] = ACTIONS(61),
    [sym_identifier] = ACTIONS(192),
    [sym_float] = ACTIONS(190),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(190),
    [ts_builtin_sym_end] = ACTIONS(190),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(190),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_set] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(77),
    [sym_integer] = ACTIONS(192),
    [sym_signal] = ACTIONS(190),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(190),
  },
  [36] = {
    [aux_sym_comparison_operator_repeat1] = STATE(27),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_GT_GT] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_rec] = ACTIONS(194),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_PIPE_PIPE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(196),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_AMP_AMP] = ACTIONS(196),
    [anon_sym_SEMI] = ACTIONS(196),
    [anon_sym_STAR] = ACTIONS(61),
    [sym_identifier] = ACTIONS(194),
    [sym_float] = ACTIONS(196),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(196),
    [ts_builtin_sym_end] = ACTIONS(196),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(196),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_set] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(77),
    [sym_integer] = ACTIONS(194),
    [sym_signal] = ACTIONS(196),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(196),
  },
  [37] = {
    [aux_sym_comparison_operator_repeat1] = STATE(27),
    [anon_sym_GT_EQ] = ACTIONS(190),
    [anon_sym_GT_GT] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_CARET] = ACTIONS(190),
    [anon_sym_rec] = ACTIONS(192),
    [anon_sym_PERCENT] = ACTIONS(190),
    [anon_sym_PIPE_PIPE] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(190),
    [anon_sym_LT] = ACTIONS(192),
    [anon_sym_GT] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_AMP_AMP] = ACTIONS(190),
    [anon_sym_SEMI] = ACTIONS(190),
    [anon_sym_STAR] = ACTIONS(190),
    [sym_identifier] = ACTIONS(192),
    [sym_float] = ACTIONS(190),
    [anon_sym_LT_EQ] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(190),
    [ts_builtin_sym_end] = ACTIONS(190),
    [anon_sym_LT_LT] = ACTIONS(190),
    [anon_sym_TILDE] = ACTIONS(190),
    [anon_sym_AMP] = ACTIONS(192),
    [anon_sym_set] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(192),
    [sym_integer] = ACTIONS(192),
    [sym_signal] = ACTIONS(190),
    [anon_sym_EQ_EQ] = ACTIONS(190),
    [anon_sym_RPAREN] = ACTIONS(190),
  },
  [38] = {
    [aux_sym_comparison_operator_repeat1] = STATE(27),
    [anon_sym_GT_EQ] = ACTIONS(190),
    [anon_sym_GT_GT] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(190),
    [anon_sym_rec] = ACTIONS(192),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_PIPE_PIPE] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(190),
    [anon_sym_LT] = ACTIONS(192),
    [anon_sym_GT] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_AMP_AMP] = ACTIONS(190),
    [anon_sym_SEMI] = ACTIONS(190),
    [anon_sym_STAR] = ACTIONS(61),
    [sym_identifier] = ACTIONS(192),
    [sym_float] = ACTIONS(190),
    [anon_sym_LT_EQ] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(190),
    [ts_builtin_sym_end] = ACTIONS(190),
    [anon_sym_LT_LT] = ACTIONS(190),
    [anon_sym_TILDE] = ACTIONS(190),
    [anon_sym_AMP] = ACTIONS(192),
    [anon_sym_set] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(77),
    [sym_integer] = ACTIONS(192),
    [sym_signal] = ACTIONS(190),
    [anon_sym_EQ_EQ] = ACTIONS(190),
    [anon_sym_RPAREN] = ACTIONS(190),
  },
  [39] = {
    [aux_sym_comparison_operator_repeat1] = STATE(27),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_GT_GT] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(190),
    [anon_sym_rec] = ACTIONS(192),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_PIPE_PIPE] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_AMP_AMP] = ACTIONS(190),
    [anon_sym_SEMI] = ACTIONS(190),
    [anon_sym_STAR] = ACTIONS(61),
    [sym_identifier] = ACTIONS(192),
    [sym_float] = ACTIONS(190),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(190),
    [ts_builtin_sym_end] = ACTIONS(190),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(190),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_set] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(77),
    [sym_integer] = ACTIONS(192),
    [sym_signal] = ACTIONS(190),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(190),
  },
  [40] = {
    [aux_sym_comparison_operator_repeat1] = STATE(27),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_GT_GT] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_rec] = ACTIONS(194),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_PIPE_PIPE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(196),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_AMP_AMP] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(196),
    [anon_sym_STAR] = ACTIONS(61),
    [sym_identifier] = ACTIONS(194),
    [sym_float] = ACTIONS(196),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(196),
    [ts_builtin_sym_end] = ACTIONS(196),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(196),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_set] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(77),
    [sym_integer] = ACTIONS(194),
    [sym_signal] = ACTIONS(196),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(196),
  },
  [41] = {
    [aux_sym_comparison_operator_repeat1] = STATE(27),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_GT_GT] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(190),
    [anon_sym_rec] = ACTIONS(192),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_PIPE_PIPE] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_AMP_AMP] = ACTIONS(190),
    [anon_sym_SEMI] = ACTIONS(190),
    [anon_sym_STAR] = ACTIONS(61),
    [sym_identifier] = ACTIONS(192),
    [sym_float] = ACTIONS(190),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(190),
    [ts_builtin_sym_end] = ACTIONS(190),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(190),
    [anon_sym_AMP] = ACTIONS(192),
    [anon_sym_set] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(77),
    [sym_integer] = ACTIONS(192),
    [sym_signal] = ACTIONS(190),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(190),
  },
  [42] = {
    [aux_sym_comparison_operator_repeat1] = STATE(42),
    [anon_sym_GT_EQ] = ACTIONS(198),
    [anon_sym_GT_GT] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_CARET] = ACTIONS(188),
    [anon_sym_rec] = ACTIONS(186),
    [anon_sym_PERCENT] = ACTIONS(188),
    [anon_sym_PIPE_PIPE] = ACTIONS(188),
    [anon_sym_COMMA] = ACTIONS(188),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(198),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(186),
    [anon_sym_PIPE] = ACTIONS(186),
    [anon_sym_AMP_AMP] = ACTIONS(188),
    [anon_sym_SEMI] = ACTIONS(188),
    [anon_sym_STAR] = ACTIONS(188),
    [sym_identifier] = ACTIONS(186),
    [sym_float] = ACTIONS(188),
    [anon_sym_LT_EQ] = ACTIONS(198),
    [anon_sym_LPAREN] = ACTIONS(188),
    [ts_builtin_sym_end] = ACTIONS(188),
    [anon_sym_LT_LT] = ACTIONS(188),
    [anon_sym_TILDE] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(186),
    [anon_sym_set] = ACTIONS(186),
    [anon_sym_SLASH] = ACTIONS(186),
    [sym_integer] = ACTIONS(186),
    [sym_signal] = ACTIONS(188),
    [anon_sym_EQ_EQ] = ACTIONS(198),
    [anon_sym_RPAREN] = ACTIONS(188),
  },
  [43] = {
    [sym_comparison_operator] = STATE(31),
    [sym_parenthesized] = STATE(31),
    [aux_sym_arguments_repeat1] = STATE(47),
    [sym__expressions] = STATE(31),
    [sym_boolean_operator] = STATE(31),
    [sym_call_expression] = STATE(31),
    [sym_binary_operator] = STATE(31),
    [sym_unary_operator] = STATE(31),
    [sym_float] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(81),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(9),
  },
  [44] = {
    [anon_sym_GT_EQ] = ACTIONS(204),
    [anon_sym_GT_GT] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(204),
    [anon_sym_CARET] = ACTIONS(204),
    [anon_sym_rec] = ACTIONS(206),
    [anon_sym_PERCENT] = ACTIONS(204),
    [anon_sym_PIPE_PIPE] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(204),
    [anon_sym_LT] = ACTIONS(206),
    [anon_sym_GT] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [anon_sym_PIPE] = ACTIONS(206),
    [anon_sym_AMP_AMP] = ACTIONS(204),
    [anon_sym_SEMI] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(204),
    [sym_identifier] = ACTIONS(206),
    [sym_float] = ACTIONS(204),
    [anon_sym_LT_EQ] = ACTIONS(204),
    [anon_sym_LPAREN] = ACTIONS(204),
    [ts_builtin_sym_end] = ACTIONS(204),
    [anon_sym_LT_LT] = ACTIONS(204),
    [anon_sym_TILDE] = ACTIONS(204),
    [anon_sym_AMP] = ACTIONS(206),
    [anon_sym_set] = ACTIONS(206),
    [anon_sym_SLASH] = ACTIONS(206),
    [sym_integer] = ACTIONS(206),
    [sym_signal] = ACTIONS(204),
    [anon_sym_EQ_EQ] = ACTIONS(204),
    [anon_sym_RPAREN] = ACTIONS(204),
  },
  [45] = {
    [sym_comparison_operator] = STATE(31),
    [sym_parenthesized] = STATE(31),
    [aux_sym_arguments_repeat1] = STATE(45),
    [sym__expressions] = STATE(31),
    [sym_boolean_operator] = STATE(31),
    [sym_call_expression] = STATE(31),
    [sym_binary_operator] = STATE(31),
    [sym_unary_operator] = STATE(31),
    [anon_sym_COMMA] = ACTIONS(208),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(210),
    [anon_sym_TILDE] = ACTIONS(213),
    [sym_float] = ACTIONS(216),
    [anon_sym_LPAREN] = ACTIONS(219),
    [sym_integer] = ACTIONS(222),
    [sym_signal] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(208),
  },
  [46] = {
    [aux_sym_arguments_repeat2] = STATE(49),
    [anon_sym_COMMA] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(225),
  },
  [47] = {
    [sym_comparison_operator] = STATE(31),
    [sym_parenthesized] = STATE(31),
    [aux_sym_arguments_repeat1] = STATE(45),
    [sym__expressions] = STATE(31),
    [sym_boolean_operator] = STATE(31),
    [sym_call_expression] = STATE(31),
    [sym_binary_operator] = STATE(31),
    [sym_unary_operator] = STATE(31),
    [anon_sym_COMMA] = ACTIONS(227),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(9),
    [sym_float] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(83),
    [sym_signal] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(227),
  },
  [48] = {
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_GT_GT] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(229),
    [anon_sym_rec] = ACTIONS(231),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(229),
    [anon_sym_COMMA] = ACTIONS(229),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(231),
    [anon_sym_GT] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym_PIPE] = ACTIONS(231),
    [anon_sym_AMP_AMP] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(229),
    [anon_sym_STAR] = ACTIONS(229),
    [sym_identifier] = ACTIONS(231),
    [sym_float] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(229),
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_LT_LT] = ACTIONS(229),
    [anon_sym_TILDE] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(231),
    [anon_sym_set] = ACTIONS(231),
    [anon_sym_SLASH] = ACTIONS(231),
    [sym_integer] = ACTIONS(231),
    [sym_signal] = ACTIONS(229),
    [anon_sym_EQ_EQ] = ACTIONS(229),
    [anon_sym_RPAREN] = ACTIONS(229),
  },
  [49] = {
    [aux_sym_arguments_repeat2] = STATE(49),
    [anon_sym_COMMA] = ACTIONS(233),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(227),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(9),
  [13] = {.count = 1, .reusable = false}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = false}, SHIFT(9),
  [19] = {.count = 1, .reusable = false}, SHIFT(6),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym__expressions, 1, .production_id = 1),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym__expressions, 1, .production_id = 1),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, SHIFT(2),
  [29] = {.count = 1, .reusable = true}, SHIFT(13),
  [31] = {.count = 1, .reusable = false}, SHIFT(13),
  [33] = {.count = 1, .reusable = true}, SHIFT(14),
  [35] = {.count = 1, .reusable = false}, SHIFT(14),
  [37] = {.count = 1, .reusable = true}, SHIFT(15),
  [39] = {.count = 1, .reusable = false}, SHIFT(15),
  [41] = {.count = 1, .reusable = true}, SHIFT(16),
  [43] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 1),
  [45] = {.count = 1, .reusable = true}, SHIFT(17),
  [47] = {.count = 1, .reusable = false}, REDUCE(aux_sym_program_repeat1, 1),
  [49] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [51] = {.count = 1, .reusable = true}, SHIFT(18),
  [53] = {.count = 1, .reusable = true}, SHIFT(23),
  [55] = {.count = 1, .reusable = true}, SHIFT(19),
  [57] = {.count = 1, .reusable = true}, SHIFT(24),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_expression_statement, 1),
  [61] = {.count = 1, .reusable = true}, SHIFT(22),
  [63] = {.count = 1, .reusable = true}, SHIFT(25),
  [65] = {.count = 1, .reusable = false}, SHIFT(18),
  [67] = {.count = 1, .reusable = false}, SHIFT(19),
  [69] = {.count = 1, .reusable = false}, SHIFT(20),
  [71] = {.count = 1, .reusable = true}, SHIFT(21),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [75] = {.count = 1, .reusable = false}, SHIFT(26),
  [77] = {.count = 1, .reusable = false}, SHIFT(22),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [81] = {.count = 1, .reusable = true}, SHIFT(31),
  [83] = {.count = 1, .reusable = false}, SHIFT(31),
  [85] = {.count = 1, .reusable = true}, SHIFT(29),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 2),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2, .production_id = 2),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_unary_operator, 2),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_unary_operator, 2),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_set_statement, 2),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_set_statement, 2),
  [99] = {.count = 1, .reusable = true}, SHIFT(32),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_rec_statement, 2),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_rec_statement, 2),
  [105] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [107] = {.count = 1, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2),
  [109] = {.count = 1, .reusable = true}, SHIFT(33),
  [111] = {.count = 1, .reusable = false}, SHIFT(33),
  [113] = {.count = 1, .reusable = true}, SHIFT(34),
  [115] = {.count = 1, .reusable = false}, SHIFT(34),
  [117] = {.count = 1, .reusable = true}, SHIFT(35),
  [119] = {.count = 1, .reusable = false}, SHIFT(35),
  [121] = {.count = 1, .reusable = true}, SHIFT(36),
  [123] = {.count = 1, .reusable = false}, SHIFT(36),
  [125] = {.count = 1, .reusable = true}, SHIFT(37),
  [127] = {.count = 1, .reusable = false}, SHIFT(37),
  [129] = {.count = 1, .reusable = true}, SHIFT(38),
  [131] = {.count = 1, .reusable = false}, SHIFT(38),
  [133] = {.count = 1, .reusable = true}, SHIFT(39),
  [135] = {.count = 1, .reusable = false}, SHIFT(39),
  [137] = {.count = 1, .reusable = true}, SHIFT(40),
  [139] = {.count = 1, .reusable = false}, SHIFT(40),
  [141] = {.count = 1, .reusable = true}, SHIFT(41),
  [143] = {.count = 1, .reusable = false}, SHIFT(41),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_comparison_operator, 2),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_comparison_operator, 2),
  [149] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [152] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [155] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [158] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [161] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [164] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [167] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [174] = {.count = 1, .reusable = true}, SHIFT(43),
  [176] = {.count = 1, .reusable = true}, SHIFT(44),
  [178] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 1),
  [180] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 1),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized, 3),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized, 3),
  [186] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [188] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_binary_operator, 3),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym_binary_operator, 3),
  [194] = {.count = 1, .reusable = false}, REDUCE(sym_boolean_operator, 3),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_operator, 3),
  [198] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(18),
  [201] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(18),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [206] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [208] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [210] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(2),
  [213] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(3),
  [216] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(31),
  [219] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(5),
  [222] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(31),
  [225] = {.count = 1, .reusable = true}, SHIFT(48),
  [227] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [233] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(43),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rampcode(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
