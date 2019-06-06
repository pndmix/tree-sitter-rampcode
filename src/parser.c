#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 94
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 2
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2

enum {
  anon_sym_SEMI = 1,
  anon_sym_set = 2,
  anon_sym_rec = 3,
  anon_sym_AMP_AMP = 4,
  anon_sym_PIPE_PIPE = 5,
  anon_sym_STAR = 6,
  anon_sym_SLASH = 7,
  anon_sym_PERCENT = 8,
  anon_sym_PLUS = 9,
  anon_sym_DASH = 10,
  anon_sym_LT_LT = 11,
  anon_sym_GT_GT = 12,
  anon_sym_AMP = 13,
  anon_sym_CARET = 14,
  anon_sym_PIPE = 15,
  anon_sym_TILDE = 16,
  anon_sym_LT = 17,
  anon_sym_LT_EQ = 18,
  anon_sym_EQ_EQ = 19,
  anon_sym_BANG_EQ = 20,
  anon_sym_GT_EQ = 21,
  anon_sym_GT = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  anon_sym_LPAREN2 = 25,
  anon_sym_COMMA = 26,
  sym_identifier = 27,
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
  [ts_builtin_sym_end] = "END",
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
  [sym_identifier] = "identifier",
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '*')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(23);
      if (lookahead == ';')
        ADVANCE(25);
      if (lookahead == '<')
        ADVANCE(26);
      if (lookahead == '=')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '^')
        ADVANCE(34);
      if (lookahead == '|')
        ADVANCE(35);
      if (lookahead == '~')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(38);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 4:
      if (lookahead == 'v')
        ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '1')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_signal);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(16);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '*')
        ADVANCE(21);
      if (lookahead != 0)
        ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '/')
        ADVANCE(22);
      if (lookahead != 0)
        ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 29:
      if (lookahead == '=')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(32);
      if (lookahead == '>')
        ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 38:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(39);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '*')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(23);
      if (lookahead == ';')
        ADVANCE(25);
      if (lookahead == '<')
        ADVANCE(26);
      if (lookahead == '=')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '^')
        ADVANCE(34);
      if (lookahead == '|')
        ADVANCE(35);
      if (lookahead == '~')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(38);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(39);
      if (lookahead == '-')
        ADVANCE(43);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(44);
      if (lookahead == '0')
        ADVANCE(23);
      if (lookahead == '~')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == '-')
        ADVANCE(16);
      END_STATE();
    case 44:
      if (lookahead == '*')
        ADVANCE(20);
      END_STATE();
    case 45:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '*')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(26);
      if (lookahead == '=')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '^')
        ADVANCE(34);
      if (lookahead == '|')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(45);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 46:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(43);
      if (lookahead == '/')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(46);
      END_STATE();
    case 47:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(39);
      if (lookahead == '-')
        ADVANCE(43);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(44);
      if (lookahead == '0')
        ADVANCE(23);
      if (lookahead == ';')
        ADVANCE(25);
      if (lookahead == '~')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(47);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 48:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(39);
      if (lookahead == '*')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(23);
      if (lookahead == ';')
        ADVANCE(25);
      if (lookahead == '<')
        ADVANCE(26);
      if (lookahead == '=')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '^')
        ADVANCE(34);
      if (lookahead == '|')
        ADVANCE(35);
      if (lookahead == '~')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(48);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(39);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '*')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(23);
      if (lookahead == '<')
        ADVANCE(26);
      if (lookahead == '=')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '^')
        ADVANCE(34);
      if (lookahead == '|')
        ADVANCE(35);
      if (lookahead == '~')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(49);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
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
        ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == 'e')
        ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'c')
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_rec);
      END_STATE();
    case 4:
      if (lookahead == 'e')
        ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 't')
        ADVANCE(6);
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
  [3] = {.lex_state = 45},
  [4] = {.lex_state = 42},
  [5] = {.lex_state = 42},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 46},
  [8] = {.lex_state = 47},
  [9] = {.lex_state = 48},
  [10] = {.lex_state = 42},
  [11] = {.lex_state = 47},
  [12] = {.lex_state = 47},
  [13] = {.lex_state = 48},
  [14] = {.lex_state = 42},
  [15] = {.lex_state = 45},
  [16] = {.lex_state = 49},
  [17] = {.lex_state = 38},
  [18] = {.lex_state = 42},
  [19] = {.lex_state = 42},
  [20] = {.lex_state = 42},
  [21] = {.lex_state = 42},
  [22] = {.lex_state = 42},
  [23] = {.lex_state = 42},
  [24] = {.lex_state = 42},
  [25] = {.lex_state = 42},
  [26] = {.lex_state = 42},
  [27] = {.lex_state = 42},
  [28] = {.lex_state = 48},
  [29] = {.lex_state = 42},
  [30] = {.lex_state = 45},
  [31] = {.lex_state = 42},
  [32] = {.lex_state = 42},
  [33] = {.lex_state = 42},
  [34] = {.lex_state = 42},
  [35] = {.lex_state = 42},
  [36] = {.lex_state = 42},
  [37] = {.lex_state = 42},
  [38] = {.lex_state = 42},
  [39] = {.lex_state = 42},
  [40] = {.lex_state = 38},
  [41] = {.lex_state = 45},
  [42] = {.lex_state = 42},
  [43] = {.lex_state = 38},
  [44] = {.lex_state = 49},
  [45] = {.lex_state = 49},
  [46] = {.lex_state = 48},
  [47] = {.lex_state = 48},
  [48] = {.lex_state = 48},
  [49] = {.lex_state = 48},
  [50] = {.lex_state = 48},
  [51] = {.lex_state = 48},
  [52] = {.lex_state = 48},
  [53] = {.lex_state = 48},
  [54] = {.lex_state = 48},
  [55] = {.lex_state = 48},
  [56] = {.lex_state = 45},
  [57] = {.lex_state = 45},
  [58] = {.lex_state = 45},
  [59] = {.lex_state = 45},
  [60] = {.lex_state = 45},
  [61] = {.lex_state = 45},
  [62] = {.lex_state = 45},
  [63] = {.lex_state = 45},
  [64] = {.lex_state = 45},
  [65] = {.lex_state = 45},
  [66] = {.lex_state = 49},
  [67] = {.lex_state = 42},
  [68] = {.lex_state = 42},
  [69] = {.lex_state = 42},
  [70] = {.lex_state = 42},
  [71] = {.lex_state = 42},
  [72] = {.lex_state = 42},
  [73] = {.lex_state = 42},
  [74] = {.lex_state = 42},
  [75] = {.lex_state = 42},
  [76] = {.lex_state = 49},
  [77] = {.lex_state = 38},
  [78] = {.lex_state = 42},
  [79] = {.lex_state = 49},
  [80] = {.lex_state = 45},
  [81] = {.lex_state = 49},
  [82] = {.lex_state = 49},
  [83] = {.lex_state = 49},
  [84] = {.lex_state = 49},
  [85] = {.lex_state = 49},
  [86] = {.lex_state = 49},
  [87] = {.lex_state = 49},
  [88] = {.lex_state = 49},
  [89] = {.lex_state = 49},
  [90] = {.lex_state = 49},
  [91] = {.lex_state = 49},
  [92] = {.lex_state = 38},
  [93] = {.lex_state = 45},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(3),
    [anon_sym_rec] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(1),
    [sym_signal] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(7),
    [sym_set_statement] = STATE(8),
    [sym_rec_statement] = STATE(8),
    [sym_expression_statement] = STATE(8),
    [sym__expressions] = STATE(9),
    [sym_boolean_operator] = STATE(9),
    [sym_binary_operator] = STATE(9),
    [sym_unary_operator] = STATE(9),
    [sym_comparison_operator] = STATE(9),
    [sym_parenthesized] = STATE(9),
    [sym_call_expression] = STATE(9),
    [aux_sym_program_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(7),
    [anon_sym_rec] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [sym_float] = ACTIONS(19),
    [sym_signal] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
  },
  [2] = {
    [sym_integer] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [sym_comment] = ACTIONS(21),
  },
  [3] = {
    [sym_integer] = ACTIONS(27),
    [sym_comment] = ACTIONS(21),
  },
  [4] = {
    [sym__expressions] = STATE(13),
    [sym_boolean_operator] = STATE(13),
    [sym_binary_operator] = STATE(13),
    [sym_unary_operator] = STATE(13),
    [sym_comparison_operator] = STATE(13),
    [sym_parenthesized] = STATE(13),
    [sym_call_expression] = STATE(13),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(31),
    [sym_float] = ACTIONS(33),
    [sym_signal] = ACTIONS(33),
    [sym_comment] = ACTIONS(21),
  },
  [5] = {
    [sym__expressions] = STATE(15),
    [sym_boolean_operator] = STATE(15),
    [sym_binary_operator] = STATE(15),
    [sym_unary_operator] = STATE(15),
    [sym_comparison_operator] = STATE(15),
    [sym_parenthesized] = STATE(15),
    [sym_call_expression] = STATE(15),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(37),
    [sym_float] = ACTIONS(39),
    [sym_signal] = ACTIONS(39),
    [sym_comment] = ACTIONS(21),
  },
  [6] = {
    [sym_arguments] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(41),
    [anon_sym_set] = ACTIONS(43),
    [anon_sym_rec] = ACTIONS(43),
    [anon_sym_AMP_AMP] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_PERCENT] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_LT_LT] = ACTIONS(41),
    [anon_sym_GT_GT] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(41),
    [anon_sym_EQ_EQ] = ACTIONS(41),
    [anon_sym_BANG_EQ] = ACTIONS(41),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(41),
    [anon_sym_LPAREN2] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_integer] = ACTIONS(43),
    [sym_float] = ACTIONS(41),
    [sym_signal] = ACTIONS(41),
    [sym_comment] = ACTIONS(21),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_comment] = ACTIONS(21),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_set] = ACTIONS(53),
    [anon_sym_rec] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(49),
    [sym_identifier] = ACTIONS(53),
    [sym_integer] = ACTIONS(53),
    [sym_float] = ACTIONS(49),
    [sym_signal] = ACTIONS(49),
    [sym_comment] = ACTIONS(21),
  },
  [9] = {
    [aux_sym_comparison_operator_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_SEMI] = ACTIONS(55),
    [anon_sym_set] = ACTIONS(57),
    [anon_sym_rec] = ACTIONS(57),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_PIPE_PIPE] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_AMP] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(55),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym_integer] = ACTIONS(57),
    [sym_float] = ACTIONS(55),
    [sym_signal] = ACTIONS(55),
    [sym_comment] = ACTIONS(21),
  },
  [10] = {
    [sym_set_statement] = STATE(8),
    [sym_rec_statement] = STATE(8),
    [sym_expression_statement] = STATE(8),
    [sym__expressions] = STATE(9),
    [sym_boolean_operator] = STATE(9),
    [sym_binary_operator] = STATE(9),
    [sym_unary_operator] = STATE(9),
    [sym_comparison_operator] = STATE(9),
    [sym_parenthesized] = STATE(9),
    [sym_call_expression] = STATE(9),
    [aux_sym_program_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_set] = ACTIONS(7),
    [anon_sym_rec] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [sym_float] = ACTIONS(19),
    [sym_signal] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_set] = ACTIONS(87),
    [anon_sym_rec] = ACTIONS(87),
    [anon_sym_TILDE] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(85),
    [sym_signal] = ACTIONS(85),
    [sym_comment] = ACTIONS(21),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_SEMI] = ACTIONS(89),
    [anon_sym_set] = ACTIONS(91),
    [anon_sym_rec] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(89),
    [sym_identifier] = ACTIONS(91),
    [sym_integer] = ACTIONS(91),
    [sym_float] = ACTIONS(89),
    [sym_signal] = ACTIONS(89),
    [sym_comment] = ACTIONS(21),
  },
  [13] = {
    [aux_sym_comparison_operator_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_set] = ACTIONS(95),
    [anon_sym_rec] = ACTIONS(95),
    [anon_sym_AMP_AMP] = ACTIONS(93),
    [anon_sym_PIPE_PIPE] = ACTIONS(93),
    [anon_sym_STAR] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(95),
    [anon_sym_PERCENT] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(95),
    [anon_sym_CARET] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_TILDE] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_LT_EQ] = ACTIONS(93),
    [anon_sym_EQ_EQ] = ACTIONS(93),
    [anon_sym_BANG_EQ] = ACTIONS(93),
    [anon_sym_GT_EQ] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(93),
    [sym_identifier] = ACTIONS(95),
    [sym_integer] = ACTIONS(95),
    [sym_float] = ACTIONS(93),
    [sym_signal] = ACTIONS(93),
    [sym_comment] = ACTIONS(21),
  },
  [14] = {
    [sym__expressions] = STATE(30),
    [sym_boolean_operator] = STATE(30),
    [sym_binary_operator] = STATE(30),
    [sym_unary_operator] = STATE(30),
    [sym_comparison_operator] = STATE(30),
    [sym_parenthesized] = STATE(30),
    [sym_call_expression] = STATE(30),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(97),
    [sym_float] = ACTIONS(99),
    [sym_signal] = ACTIONS(99),
    [sym_comment] = ACTIONS(21),
  },
  [15] = {
    [aux_sym_comparison_operator_repeat1] = STATE(41),
    [anon_sym_AMP_AMP] = ACTIONS(101),
    [anon_sym_PIPE_PIPE] = ACTIONS(103),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_LT_LT] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_CARET] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_LT_EQ] = ACTIONS(123),
    [anon_sym_EQ_EQ] = ACTIONS(123),
    [anon_sym_BANG_EQ] = ACTIONS(123),
    [anon_sym_GT_EQ] = ACTIONS(123),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(125),
    [sym_comment] = ACTIONS(21),
  },
  [16] = {
    [sym__expressions] = STATE(44),
    [sym_boolean_operator] = STATE(44),
    [sym_binary_operator] = STATE(44),
    [sym_unary_operator] = STATE(44),
    [sym_comparison_operator] = STATE(44),
    [sym_parenthesized] = STATE(44),
    [sym_call_expression] = STATE(44),
    [aux_sym_arguments_repeat1] = STATE(45),
    [anon_sym_TILDE] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(129),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(131),
    [sym_float] = ACTIONS(133),
    [sym_signal] = ACTIONS(133),
    [sym_comment] = ACTIONS(21),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_set] = ACTIONS(137),
    [anon_sym_rec] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(135),
    [anon_sym_STAR] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(137),
    [anon_sym_PERCENT] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_LT_LT] = ACTIONS(135),
    [anon_sym_GT_GT] = ACTIONS(135),
    [anon_sym_AMP] = ACTIONS(137),
    [anon_sym_CARET] = ACTIONS(135),
    [anon_sym_PIPE] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(135),
    [anon_sym_LT] = ACTIONS(137),
    [anon_sym_LT_EQ] = ACTIONS(135),
    [anon_sym_EQ_EQ] = ACTIONS(135),
    [anon_sym_BANG_EQ] = ACTIONS(135),
    [anon_sym_GT_EQ] = ACTIONS(135),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(135),
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(135),
    [sym_identifier] = ACTIONS(137),
    [sym_integer] = ACTIONS(137),
    [sym_float] = ACTIONS(135),
    [sym_signal] = ACTIONS(135),
    [sym_comment] = ACTIONS(21),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_set] = ACTIONS(141),
    [anon_sym_rec] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(139),
    [sym_identifier] = ACTIONS(141),
    [sym_integer] = ACTIONS(141),
    [sym_float] = ACTIONS(139),
    [sym_signal] = ACTIONS(139),
    [sym_comment] = ACTIONS(21),
  },
  [19] = {
    [sym__expressions] = STATE(46),
    [sym_boolean_operator] = STATE(46),
    [sym_binary_operator] = STATE(46),
    [sym_unary_operator] = STATE(46),
    [sym_comparison_operator] = STATE(46),
    [sym_parenthesized] = STATE(46),
    [sym_call_expression] = STATE(46),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(143),
    [sym_float] = ACTIONS(145),
    [sym_signal] = ACTIONS(145),
    [sym_comment] = ACTIONS(21),
  },
  [20] = {
    [sym__expressions] = STATE(47),
    [sym_boolean_operator] = STATE(47),
    [sym_binary_operator] = STATE(47),
    [sym_unary_operator] = STATE(47),
    [sym_comparison_operator] = STATE(47),
    [sym_parenthesized] = STATE(47),
    [sym_call_expression] = STATE(47),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(147),
    [sym_float] = ACTIONS(149),
    [sym_signal] = ACTIONS(149),
    [sym_comment] = ACTIONS(21),
  },
  [21] = {
    [sym__expressions] = STATE(48),
    [sym_boolean_operator] = STATE(48),
    [sym_binary_operator] = STATE(48),
    [sym_unary_operator] = STATE(48),
    [sym_comparison_operator] = STATE(48),
    [sym_parenthesized] = STATE(48),
    [sym_call_expression] = STATE(48),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(151),
    [sym_float] = ACTIONS(153),
    [sym_signal] = ACTIONS(153),
    [sym_comment] = ACTIONS(21),
  },
  [22] = {
    [sym__expressions] = STATE(49),
    [sym_boolean_operator] = STATE(49),
    [sym_binary_operator] = STATE(49),
    [sym_unary_operator] = STATE(49),
    [sym_comparison_operator] = STATE(49),
    [sym_parenthesized] = STATE(49),
    [sym_call_expression] = STATE(49),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(155),
    [sym_float] = ACTIONS(157),
    [sym_signal] = ACTIONS(157),
    [sym_comment] = ACTIONS(21),
  },
  [23] = {
    [sym__expressions] = STATE(50),
    [sym_boolean_operator] = STATE(50),
    [sym_binary_operator] = STATE(50),
    [sym_unary_operator] = STATE(50),
    [sym_comparison_operator] = STATE(50),
    [sym_parenthesized] = STATE(50),
    [sym_call_expression] = STATE(50),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(159),
    [sym_float] = ACTIONS(161),
    [sym_signal] = ACTIONS(161),
    [sym_comment] = ACTIONS(21),
  },
  [24] = {
    [sym__expressions] = STATE(51),
    [sym_boolean_operator] = STATE(51),
    [sym_binary_operator] = STATE(51),
    [sym_unary_operator] = STATE(51),
    [sym_comparison_operator] = STATE(51),
    [sym_parenthesized] = STATE(51),
    [sym_call_expression] = STATE(51),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(163),
    [sym_float] = ACTIONS(165),
    [sym_signal] = ACTIONS(165),
    [sym_comment] = ACTIONS(21),
  },
  [25] = {
    [sym__expressions] = STATE(52),
    [sym_boolean_operator] = STATE(52),
    [sym_binary_operator] = STATE(52),
    [sym_unary_operator] = STATE(52),
    [sym_comparison_operator] = STATE(52),
    [sym_parenthesized] = STATE(52),
    [sym_call_expression] = STATE(52),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(167),
    [sym_float] = ACTIONS(169),
    [sym_signal] = ACTIONS(169),
    [sym_comment] = ACTIONS(21),
  },
  [26] = {
    [sym__expressions] = STATE(53),
    [sym_boolean_operator] = STATE(53),
    [sym_binary_operator] = STATE(53),
    [sym_unary_operator] = STATE(53),
    [sym_comparison_operator] = STATE(53),
    [sym_parenthesized] = STATE(53),
    [sym_call_expression] = STATE(53),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(171),
    [sym_float] = ACTIONS(173),
    [sym_signal] = ACTIONS(173),
    [sym_comment] = ACTIONS(21),
  },
  [27] = {
    [sym__expressions] = STATE(54),
    [sym_boolean_operator] = STATE(54),
    [sym_binary_operator] = STATE(54),
    [sym_unary_operator] = STATE(54),
    [sym_comparison_operator] = STATE(54),
    [sym_parenthesized] = STATE(54),
    [sym_call_expression] = STATE(54),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(175),
    [sym_float] = ACTIONS(177),
    [sym_signal] = ACTIONS(177),
    [sym_comment] = ACTIONS(21),
  },
  [28] = {
    [aux_sym_comparison_operator_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_set] = ACTIONS(181),
    [anon_sym_rec] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_LT_LT] = ACTIONS(179),
    [anon_sym_GT_GT] = ACTIONS(179),
    [anon_sym_AMP] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_LT_EQ] = ACTIONS(179),
    [anon_sym_EQ_EQ] = ACTIONS(179),
    [anon_sym_BANG_EQ] = ACTIONS(179),
    [anon_sym_GT_EQ] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(179),
    [sym_identifier] = ACTIONS(181),
    [sym_integer] = ACTIONS(181),
    [sym_float] = ACTIONS(179),
    [sym_signal] = ACTIONS(179),
    [sym_comment] = ACTIONS(21),
  },
  [29] = {
    [sym_set_statement] = STATE(8),
    [sym_rec_statement] = STATE(8),
    [sym_expression_statement] = STATE(8),
    [sym__expressions] = STATE(9),
    [sym_boolean_operator] = STATE(9),
    [sym_binary_operator] = STATE(9),
    [sym_unary_operator] = STATE(9),
    [sym_comparison_operator] = STATE(9),
    [sym_parenthesized] = STATE(9),
    [sym_call_expression] = STATE(9),
    [aux_sym_program_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_set] = ACTIONS(183),
    [anon_sym_rec] = ACTIONS(186),
    [anon_sym_TILDE] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(192),
    [sym_identifier] = ACTIONS(195),
    [sym_integer] = ACTIONS(198),
    [sym_float] = ACTIONS(201),
    [sym_signal] = ACTIONS(201),
    [sym_comment] = ACTIONS(21),
  },
  [30] = {
    [aux_sym_comparison_operator_repeat1] = STATE(41),
    [anon_sym_AMP_AMP] = ACTIONS(93),
    [anon_sym_PIPE_PIPE] = ACTIONS(93),
    [anon_sym_STAR] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(95),
    [anon_sym_PERCENT] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(95),
    [anon_sym_CARET] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_LT_EQ] = ACTIONS(93),
    [anon_sym_EQ_EQ] = ACTIONS(93),
    [anon_sym_BANG_EQ] = ACTIONS(93),
    [anon_sym_GT_EQ] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(93),
    [sym_comment] = ACTIONS(21),
  },
  [31] = {
    [sym__expressions] = STATE(56),
    [sym_boolean_operator] = STATE(56),
    [sym_binary_operator] = STATE(56),
    [sym_unary_operator] = STATE(56),
    [sym_comparison_operator] = STATE(56),
    [sym_parenthesized] = STATE(56),
    [sym_call_expression] = STATE(56),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(204),
    [sym_float] = ACTIONS(206),
    [sym_signal] = ACTIONS(206),
    [sym_comment] = ACTIONS(21),
  },
  [32] = {
    [sym__expressions] = STATE(57),
    [sym_boolean_operator] = STATE(57),
    [sym_binary_operator] = STATE(57),
    [sym_unary_operator] = STATE(57),
    [sym_comparison_operator] = STATE(57),
    [sym_parenthesized] = STATE(57),
    [sym_call_expression] = STATE(57),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(208),
    [sym_float] = ACTIONS(210),
    [sym_signal] = ACTIONS(210),
    [sym_comment] = ACTIONS(21),
  },
  [33] = {
    [sym__expressions] = STATE(58),
    [sym_boolean_operator] = STATE(58),
    [sym_binary_operator] = STATE(58),
    [sym_unary_operator] = STATE(58),
    [sym_comparison_operator] = STATE(58),
    [sym_parenthesized] = STATE(58),
    [sym_call_expression] = STATE(58),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(212),
    [sym_float] = ACTIONS(214),
    [sym_signal] = ACTIONS(214),
    [sym_comment] = ACTIONS(21),
  },
  [34] = {
    [sym__expressions] = STATE(59),
    [sym_boolean_operator] = STATE(59),
    [sym_binary_operator] = STATE(59),
    [sym_unary_operator] = STATE(59),
    [sym_comparison_operator] = STATE(59),
    [sym_parenthesized] = STATE(59),
    [sym_call_expression] = STATE(59),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(216),
    [sym_float] = ACTIONS(218),
    [sym_signal] = ACTIONS(218),
    [sym_comment] = ACTIONS(21),
  },
  [35] = {
    [sym__expressions] = STATE(60),
    [sym_boolean_operator] = STATE(60),
    [sym_binary_operator] = STATE(60),
    [sym_unary_operator] = STATE(60),
    [sym_comparison_operator] = STATE(60),
    [sym_parenthesized] = STATE(60),
    [sym_call_expression] = STATE(60),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(220),
    [sym_float] = ACTIONS(222),
    [sym_signal] = ACTIONS(222),
    [sym_comment] = ACTIONS(21),
  },
  [36] = {
    [sym__expressions] = STATE(61),
    [sym_boolean_operator] = STATE(61),
    [sym_binary_operator] = STATE(61),
    [sym_unary_operator] = STATE(61),
    [sym_comparison_operator] = STATE(61),
    [sym_parenthesized] = STATE(61),
    [sym_call_expression] = STATE(61),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(224),
    [sym_float] = ACTIONS(226),
    [sym_signal] = ACTIONS(226),
    [sym_comment] = ACTIONS(21),
  },
  [37] = {
    [sym__expressions] = STATE(62),
    [sym_boolean_operator] = STATE(62),
    [sym_binary_operator] = STATE(62),
    [sym_unary_operator] = STATE(62),
    [sym_comparison_operator] = STATE(62),
    [sym_parenthesized] = STATE(62),
    [sym_call_expression] = STATE(62),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(228),
    [sym_float] = ACTIONS(230),
    [sym_signal] = ACTIONS(230),
    [sym_comment] = ACTIONS(21),
  },
  [38] = {
    [sym__expressions] = STATE(63),
    [sym_boolean_operator] = STATE(63),
    [sym_binary_operator] = STATE(63),
    [sym_unary_operator] = STATE(63),
    [sym_comparison_operator] = STATE(63),
    [sym_parenthesized] = STATE(63),
    [sym_call_expression] = STATE(63),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(232),
    [sym_float] = ACTIONS(234),
    [sym_signal] = ACTIONS(234),
    [sym_comment] = ACTIONS(21),
  },
  [39] = {
    [sym__expressions] = STATE(64),
    [sym_boolean_operator] = STATE(64),
    [sym_binary_operator] = STATE(64),
    [sym_unary_operator] = STATE(64),
    [sym_comparison_operator] = STATE(64),
    [sym_parenthesized] = STATE(64),
    [sym_call_expression] = STATE(64),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(236),
    [sym_float] = ACTIONS(238),
    [sym_signal] = ACTIONS(238),
    [sym_comment] = ACTIONS(21),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(240),
    [anon_sym_SEMI] = ACTIONS(240),
    [anon_sym_set] = ACTIONS(242),
    [anon_sym_rec] = ACTIONS(242),
    [anon_sym_AMP_AMP] = ACTIONS(240),
    [anon_sym_PIPE_PIPE] = ACTIONS(240),
    [anon_sym_STAR] = ACTIONS(240),
    [anon_sym_SLASH] = ACTIONS(242),
    [anon_sym_PERCENT] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(242),
    [anon_sym_LT_LT] = ACTIONS(240),
    [anon_sym_GT_GT] = ACTIONS(240),
    [anon_sym_AMP] = ACTIONS(242),
    [anon_sym_CARET] = ACTIONS(240),
    [anon_sym_PIPE] = ACTIONS(242),
    [anon_sym_TILDE] = ACTIONS(240),
    [anon_sym_LT] = ACTIONS(242),
    [anon_sym_LT_EQ] = ACTIONS(240),
    [anon_sym_EQ_EQ] = ACTIONS(240),
    [anon_sym_BANG_EQ] = ACTIONS(240),
    [anon_sym_GT_EQ] = ACTIONS(240),
    [anon_sym_GT] = ACTIONS(242),
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_COMMA] = ACTIONS(240),
    [sym_identifier] = ACTIONS(242),
    [sym_integer] = ACTIONS(242),
    [sym_float] = ACTIONS(240),
    [sym_signal] = ACTIONS(240),
    [sym_comment] = ACTIONS(21),
  },
  [41] = {
    [aux_sym_comparison_operator_repeat1] = STATE(65),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_LT_LT] = ACTIONS(179),
    [anon_sym_GT_GT] = ACTIONS(179),
    [anon_sym_AMP] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_LT_EQ] = ACTIONS(179),
    [anon_sym_EQ_EQ] = ACTIONS(179),
    [anon_sym_BANG_EQ] = ACTIONS(179),
    [anon_sym_GT_EQ] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(179),
    [sym_comment] = ACTIONS(21),
  },
  [42] = {
    [sym__expressions] = STATE(66),
    [sym_boolean_operator] = STATE(66),
    [sym_binary_operator] = STATE(66),
    [sym_unary_operator] = STATE(66),
    [sym_comparison_operator] = STATE(66),
    [sym_parenthesized] = STATE(66),
    [sym_call_expression] = STATE(66),
    [anon_sym_TILDE] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(244),
    [sym_float] = ACTIONS(246),
    [sym_signal] = ACTIONS(246),
    [sym_comment] = ACTIONS(21),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(248),
    [anon_sym_SEMI] = ACTIONS(248),
    [anon_sym_set] = ACTIONS(250),
    [anon_sym_rec] = ACTIONS(250),
    [anon_sym_AMP_AMP] = ACTIONS(248),
    [anon_sym_PIPE_PIPE] = ACTIONS(248),
    [anon_sym_STAR] = ACTIONS(248),
    [anon_sym_SLASH] = ACTIONS(250),
    [anon_sym_PERCENT] = ACTIONS(248),
    [anon_sym_PLUS] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_LT_LT] = ACTIONS(248),
    [anon_sym_GT_GT] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_CARET] = ACTIONS(248),
    [anon_sym_PIPE] = ACTIONS(250),
    [anon_sym_TILDE] = ACTIONS(248),
    [anon_sym_LT] = ACTIONS(250),
    [anon_sym_LT_EQ] = ACTIONS(248),
    [anon_sym_EQ_EQ] = ACTIONS(248),
    [anon_sym_BANG_EQ] = ACTIONS(248),
    [anon_sym_GT_EQ] = ACTIONS(248),
    [anon_sym_GT] = ACTIONS(250),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(248),
    [sym_identifier] = ACTIONS(250),
    [sym_integer] = ACTIONS(250),
    [sym_float] = ACTIONS(248),
    [sym_signal] = ACTIONS(248),
    [sym_comment] = ACTIONS(21),
  },
  [44] = {
    [aux_sym_comparison_operator_repeat1] = STATE(76),
    [anon_sym_AMP_AMP] = ACTIONS(252),
    [anon_sym_PIPE_PIPE] = ACTIONS(254),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_LT_LT] = ACTIONS(264),
    [anon_sym_GT_GT] = ACTIONS(264),
    [anon_sym_AMP] = ACTIONS(266),
    [anon_sym_CARET] = ACTIONS(268),
    [anon_sym_PIPE] = ACTIONS(270),
    [anon_sym_TILDE] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(274),
    [anon_sym_LT_EQ] = ACTIONS(276),
    [anon_sym_EQ_EQ] = ACTIONS(276),
    [anon_sym_BANG_EQ] = ACTIONS(276),
    [anon_sym_GT_EQ] = ACTIONS(276),
    [anon_sym_GT] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_RPAREN] = ACTIONS(272),
    [anon_sym_COMMA] = ACTIONS(272),
    [sym_identifier] = ACTIONS(272),
    [sym_integer] = ACTIONS(278),
    [sym_float] = ACTIONS(272),
    [sym_signal] = ACTIONS(272),
    [sym_comment] = ACTIONS(21),
  },
  [45] = {
    [sym__expressions] = STATE(44),
    [sym_boolean_operator] = STATE(44),
    [sym_binary_operator] = STATE(44),
    [sym_unary_operator] = STATE(44),
    [sym_comparison_operator] = STATE(44),
    [sym_parenthesized] = STATE(44),
    [sym_call_expression] = STATE(44),
    [aux_sym_arguments_repeat1] = STATE(79),
    [aux_sym_arguments_repeat2] = STATE(80),
    [anon_sym_TILDE] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym_COMMA] = ACTIONS(282),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(131),
    [sym_float] = ACTIONS(133),
    [sym_signal] = ACTIONS(133),
    [sym_comment] = ACTIONS(21),
  },
  [46] = {
    [aux_sym_comparison_operator_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(284),
    [anon_sym_SEMI] = ACTIONS(284),
    [anon_sym_set] = ACTIONS(286),
    [anon_sym_rec] = ACTIONS(286),
    [anon_sym_AMP_AMP] = ACTIONS(284),
    [anon_sym_PIPE_PIPE] = ACTIONS(284),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_AMP] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(284),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(284),
    [sym_identifier] = ACTIONS(286),
    [sym_integer] = ACTIONS(286),
    [sym_float] = ACTIONS(284),
    [sym_signal] = ACTIONS(284),
    [sym_comment] = ACTIONS(21),
  },
  [47] = {
    [aux_sym_comparison_operator_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(284),
    [anon_sym_SEMI] = ACTIONS(284),
    [anon_sym_set] = ACTIONS(286),
    [anon_sym_rec] = ACTIONS(286),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_PIPE_PIPE] = ACTIONS(284),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_AMP] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(284),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(284),
    [sym_identifier] = ACTIONS(286),
    [sym_integer] = ACTIONS(286),
    [sym_float] = ACTIONS(284),
    [sym_signal] = ACTIONS(284),
    [sym_comment] = ACTIONS(21),
  },
  [48] = {
    [aux_sym_comparison_operator_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(288),
    [anon_sym_SEMI] = ACTIONS(288),
    [anon_sym_set] = ACTIONS(290),
    [anon_sym_rec] = ACTIONS(290),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(290),
    [anon_sym_PERCENT] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(290),
    [anon_sym_LT_LT] = ACTIONS(288),
    [anon_sym_GT_GT] = ACTIONS(288),
    [anon_sym_AMP] = ACTIONS(290),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_TILDE] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(288),
    [anon_sym_EQ_EQ] = ACTIONS(288),
    [anon_sym_BANG_EQ] = ACTIONS(288),
    [anon_sym_GT_EQ] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [sym_integer] = ACTIONS(290),
    [sym_float] = ACTIONS(288),
    [sym_signal] = ACTIONS(288),
    [sym_comment] = ACTIONS(21),
  },
  [49] = {
    [aux_sym_comparison_operator_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(288),
    [anon_sym_SEMI] = ACTIONS(288),
    [anon_sym_set] = ACTIONS(290),
    [anon_sym_rec] = ACTIONS(290),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(290),
    [anon_sym_LT_LT] = ACTIONS(288),
    [anon_sym_GT_GT] = ACTIONS(288),
    [anon_sym_AMP] = ACTIONS(290),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_TILDE] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(288),
    [anon_sym_EQ_EQ] = ACTIONS(288),
    [anon_sym_BANG_EQ] = ACTIONS(288),
    [anon_sym_GT_EQ] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [sym_integer] = ACTIONS(290),
    [sym_float] = ACTIONS(288),
    [sym_signal] = ACTIONS(288),
    [sym_comment] = ACTIONS(21),
  },
  [50] = {
    [aux_sym_comparison_operator_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(288),
    [anon_sym_SEMI] = ACTIONS(288),
    [anon_sym_set] = ACTIONS(290),
    [anon_sym_rec] = ACTIONS(290),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_LT_LT] = ACTIONS(288),
    [anon_sym_GT_GT] = ACTIONS(288),
    [anon_sym_AMP] = ACTIONS(290),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_TILDE] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(288),
    [anon_sym_EQ_EQ] = ACTIONS(288),
    [anon_sym_BANG_EQ] = ACTIONS(288),
    [anon_sym_GT_EQ] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [sym_integer] = ACTIONS(290),
    [sym_float] = ACTIONS(288),
    [sym_signal] = ACTIONS(288),
    [sym_comment] = ACTIONS(21),
  },
  [51] = {
    [aux_sym_comparison_operator_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(288),
    [anon_sym_SEMI] = ACTIONS(288),
    [anon_sym_set] = ACTIONS(290),
    [anon_sym_rec] = ACTIONS(290),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_AMP] = ACTIONS(290),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_TILDE] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [sym_integer] = ACTIONS(290),
    [sym_float] = ACTIONS(288),
    [sym_signal] = ACTIONS(288),
    [sym_comment] = ACTIONS(21),
  },
  [52] = {
    [aux_sym_comparison_operator_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(288),
    [anon_sym_SEMI] = ACTIONS(288),
    [anon_sym_set] = ACTIONS(290),
    [anon_sym_rec] = ACTIONS(290),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_AMP] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_TILDE] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [sym_integer] = ACTIONS(290),
    [sym_float] = ACTIONS(288),
    [sym_signal] = ACTIONS(288),
    [sym_comment] = ACTIONS(21),
  },
  [53] = {
    [aux_sym_comparison_operator_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(288),
    [anon_sym_SEMI] = ACTIONS(288),
    [anon_sym_set] = ACTIONS(290),
    [anon_sym_rec] = ACTIONS(290),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_AMP] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_TILDE] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [sym_integer] = ACTIONS(290),
    [sym_float] = ACTIONS(288),
    [sym_signal] = ACTIONS(288),
    [sym_comment] = ACTIONS(21),
  },
  [54] = {
    [aux_sym_comparison_operator_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(292),
    [anon_sym_SEMI] = ACTIONS(292),
    [anon_sym_set] = ACTIONS(294),
    [anon_sym_rec] = ACTIONS(294),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_PIPE_PIPE] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_AMP] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(292),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(292),
    [sym_identifier] = ACTIONS(294),
    [sym_integer] = ACTIONS(294),
    [sym_float] = ACTIONS(292),
    [sym_signal] = ACTIONS(292),
    [sym_comment] = ACTIONS(21),
  },
  [55] = {
    [aux_sym_comparison_operator_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(292),
    [anon_sym_SEMI] = ACTIONS(292),
    [anon_sym_set] = ACTIONS(294),
    [anon_sym_rec] = ACTIONS(294),
    [anon_sym_AMP_AMP] = ACTIONS(292),
    [anon_sym_PIPE_PIPE] = ACTIONS(292),
    [anon_sym_STAR] = ACTIONS(292),
    [anon_sym_SLASH] = ACTIONS(294),
    [anon_sym_PERCENT] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(292),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_LT_LT] = ACTIONS(292),
    [anon_sym_GT_GT] = ACTIONS(292),
    [anon_sym_AMP] = ACTIONS(294),
    [anon_sym_CARET] = ACTIONS(292),
    [anon_sym_PIPE] = ACTIONS(294),
    [anon_sym_TILDE] = ACTIONS(292),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_LT_EQ] = ACTIONS(299),
    [anon_sym_EQ_EQ] = ACTIONS(299),
    [anon_sym_BANG_EQ] = ACTIONS(299),
    [anon_sym_GT_EQ] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(296),
    [anon_sym_LPAREN] = ACTIONS(292),
    [sym_identifier] = ACTIONS(294),
    [sym_integer] = ACTIONS(294),
    [sym_float] = ACTIONS(292),
    [sym_signal] = ACTIONS(292),
    [sym_comment] = ACTIONS(21),
  },
  [56] = {
    [aux_sym_comparison_operator_repeat1] = STATE(41),
    [anon_sym_AMP_AMP] = ACTIONS(284),
    [anon_sym_PIPE_PIPE] = ACTIONS(284),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_LT_LT] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_CARET] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_LT_EQ] = ACTIONS(123),
    [anon_sym_EQ_EQ] = ACTIONS(123),
    [anon_sym_BANG_EQ] = ACTIONS(123),
    [anon_sym_GT_EQ] = ACTIONS(123),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(284),
    [sym_comment] = ACTIONS(21),
  },
  [57] = {
    [aux_sym_comparison_operator_repeat1] = STATE(41),
    [anon_sym_AMP_AMP] = ACTIONS(101),
    [anon_sym_PIPE_PIPE] = ACTIONS(284),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_LT_LT] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_CARET] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_LT_EQ] = ACTIONS(123),
    [anon_sym_EQ_EQ] = ACTIONS(123),
    [anon_sym_BANG_EQ] = ACTIONS(123),
    [anon_sym_GT_EQ] = ACTIONS(123),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(284),
    [sym_comment] = ACTIONS(21),
  },
  [58] = {
    [aux_sym_comparison_operator_repeat1] = STATE(41),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(290),
    [anon_sym_PERCENT] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(290),
    [anon_sym_LT_LT] = ACTIONS(288),
    [anon_sym_GT_GT] = ACTIONS(288),
    [anon_sym_AMP] = ACTIONS(290),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_LT] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(288),
    [anon_sym_EQ_EQ] = ACTIONS(288),
    [anon_sym_BANG_EQ] = ACTIONS(288),
    [anon_sym_GT_EQ] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(290),
    [anon_sym_RPAREN] = ACTIONS(288),
    [sym_comment] = ACTIONS(21),
  },
  [59] = {
    [aux_sym_comparison_operator_repeat1] = STATE(41),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(290),
    [anon_sym_LT_LT] = ACTIONS(288),
    [anon_sym_GT_GT] = ACTIONS(288),
    [anon_sym_AMP] = ACTIONS(290),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_LT] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(288),
    [anon_sym_EQ_EQ] = ACTIONS(288),
    [anon_sym_BANG_EQ] = ACTIONS(288),
    [anon_sym_GT_EQ] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(290),
    [anon_sym_RPAREN] = ACTIONS(288),
    [sym_comment] = ACTIONS(21),
  },
  [60] = {
    [aux_sym_comparison_operator_repeat1] = STATE(41),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_LT_LT] = ACTIONS(288),
    [anon_sym_GT_GT] = ACTIONS(288),
    [anon_sym_AMP] = ACTIONS(290),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_LT] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(288),
    [anon_sym_EQ_EQ] = ACTIONS(288),
    [anon_sym_BANG_EQ] = ACTIONS(288),
    [anon_sym_GT_EQ] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(290),
    [anon_sym_RPAREN] = ACTIONS(288),
    [sym_comment] = ACTIONS(21),
  },
  [61] = {
    [aux_sym_comparison_operator_repeat1] = STATE(41),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_LT_LT] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(290),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_LT_EQ] = ACTIONS(123),
    [anon_sym_EQ_EQ] = ACTIONS(123),
    [anon_sym_BANG_EQ] = ACTIONS(123),
    [anon_sym_GT_EQ] = ACTIONS(123),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(288),
    [sym_comment] = ACTIONS(21),
  },
  [62] = {
    [aux_sym_comparison_operator_repeat1] = STATE(41),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_LT_LT] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_LT_EQ] = ACTIONS(123),
    [anon_sym_EQ_EQ] = ACTIONS(123),
    [anon_sym_BANG_EQ] = ACTIONS(123),
    [anon_sym_GT_EQ] = ACTIONS(123),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(288),
    [sym_comment] = ACTIONS(21),
  },
  [63] = {
    [aux_sym_comparison_operator_repeat1] = STATE(41),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_LT_LT] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_CARET] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_LT_EQ] = ACTIONS(123),
    [anon_sym_EQ_EQ] = ACTIONS(123),
    [anon_sym_BANG_EQ] = ACTIONS(123),
    [anon_sym_GT_EQ] = ACTIONS(123),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(288),
    [sym_comment] = ACTIONS(21),
  },
  [64] = {
    [aux_sym_comparison_operator_repeat1] = STATE(41),
    [anon_sym_AMP_AMP] = ACTIONS(101),
    [anon_sym_PIPE_PIPE] = ACTIONS(103),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_LT_LT] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_CARET] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_LT_EQ] = ACTIONS(123),
    [anon_sym_EQ_EQ] = ACTIONS(123),
    [anon_sym_BANG_EQ] = ACTIONS(123),
    [anon_sym_GT_EQ] = ACTIONS(123),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(292),
    [sym_comment] = ACTIONS(21),
  },
  [65] = {
    [aux_sym_comparison_operator_repeat1] = STATE(65),
    [anon_sym_AMP_AMP] = ACTIONS(292),
    [anon_sym_PIPE_PIPE] = ACTIONS(292),
    [anon_sym_STAR] = ACTIONS(292),
    [anon_sym_SLASH] = ACTIONS(294),
    [anon_sym_PERCENT] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(292),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_LT_LT] = ACTIONS(292),
    [anon_sym_GT_GT] = ACTIONS(292),
    [anon_sym_AMP] = ACTIONS(294),
    [anon_sym_CARET] = ACTIONS(292),
    [anon_sym_PIPE] = ACTIONS(294),
    [anon_sym_LT] = ACTIONS(302),
    [anon_sym_LT_EQ] = ACTIONS(305),
    [anon_sym_EQ_EQ] = ACTIONS(305),
    [anon_sym_BANG_EQ] = ACTIONS(305),
    [anon_sym_GT_EQ] = ACTIONS(305),
    [anon_sym_GT] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(292),
    [sym_comment] = ACTIONS(21),
  },
  [66] = {
    [aux_sym_comparison_operator_repeat1] = STATE(76),
    [anon_sym_AMP_AMP] = ACTIONS(93),
    [anon_sym_PIPE_PIPE] = ACTIONS(93),
    [anon_sym_STAR] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(95),
    [anon_sym_PERCENT] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(95),
    [anon_sym_CARET] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_TILDE] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_LT_EQ] = ACTIONS(93),
    [anon_sym_EQ_EQ] = ACTIONS(93),
    [anon_sym_BANG_EQ] = ACTIONS(93),
    [anon_sym_GT_EQ] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(93),
    [sym_identifier] = ACTIONS(93),
    [sym_integer] = ACTIONS(95),
    [sym_float] = ACTIONS(93),
    [sym_signal] = ACTIONS(93),
    [sym_comment] = ACTIONS(21),
  },
  [67] = {
    [sym__expressions] = STATE(81),
    [sym_boolean_operator] = STATE(81),
    [sym_binary_operator] = STATE(81),
    [sym_unary_operator] = STATE(81),
    [sym_comparison_operator] = STATE(81),
    [sym_parenthesized] = STATE(81),
    [sym_call_expression] = STATE(81),
    [anon_sym_TILDE] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(308),
    [sym_float] = ACTIONS(310),
    [sym_signal] = ACTIONS(310),
    [sym_comment] = ACTIONS(21),
  },
  [68] = {
    [sym__expressions] = STATE(82),
    [sym_boolean_operator] = STATE(82),
    [sym_binary_operator] = STATE(82),
    [sym_unary_operator] = STATE(82),
    [sym_comparison_operator] = STATE(82),
    [sym_parenthesized] = STATE(82),
    [sym_call_expression] = STATE(82),
    [anon_sym_TILDE] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(312),
    [sym_float] = ACTIONS(314),
    [sym_signal] = ACTIONS(314),
    [sym_comment] = ACTIONS(21),
  },
  [69] = {
    [sym__expressions] = STATE(83),
    [sym_boolean_operator] = STATE(83),
    [sym_binary_operator] = STATE(83),
    [sym_unary_operator] = STATE(83),
    [sym_comparison_operator] = STATE(83),
    [sym_parenthesized] = STATE(83),
    [sym_call_expression] = STATE(83),
    [anon_sym_TILDE] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(316),
    [sym_float] = ACTIONS(318),
    [sym_signal] = ACTIONS(318),
    [sym_comment] = ACTIONS(21),
  },
  [70] = {
    [sym__expressions] = STATE(84),
    [sym_boolean_operator] = STATE(84),
    [sym_binary_operator] = STATE(84),
    [sym_unary_operator] = STATE(84),
    [sym_comparison_operator] = STATE(84),
    [sym_parenthesized] = STATE(84),
    [sym_call_expression] = STATE(84),
    [anon_sym_TILDE] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(320),
    [sym_float] = ACTIONS(322),
    [sym_signal] = ACTIONS(322),
    [sym_comment] = ACTIONS(21),
  },
  [71] = {
    [sym__expressions] = STATE(85),
    [sym_boolean_operator] = STATE(85),
    [sym_binary_operator] = STATE(85),
    [sym_unary_operator] = STATE(85),
    [sym_comparison_operator] = STATE(85),
    [sym_parenthesized] = STATE(85),
    [sym_call_expression] = STATE(85),
    [anon_sym_TILDE] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(324),
    [sym_float] = ACTIONS(326),
    [sym_signal] = ACTIONS(326),
    [sym_comment] = ACTIONS(21),
  },
  [72] = {
    [sym__expressions] = STATE(86),
    [sym_boolean_operator] = STATE(86),
    [sym_binary_operator] = STATE(86),
    [sym_unary_operator] = STATE(86),
    [sym_comparison_operator] = STATE(86),
    [sym_parenthesized] = STATE(86),
    [sym_call_expression] = STATE(86),
    [anon_sym_TILDE] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(328),
    [sym_float] = ACTIONS(330),
    [sym_signal] = ACTIONS(330),
    [sym_comment] = ACTIONS(21),
  },
  [73] = {
    [sym__expressions] = STATE(87),
    [sym_boolean_operator] = STATE(87),
    [sym_binary_operator] = STATE(87),
    [sym_unary_operator] = STATE(87),
    [sym_comparison_operator] = STATE(87),
    [sym_parenthesized] = STATE(87),
    [sym_call_expression] = STATE(87),
    [anon_sym_TILDE] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(332),
    [sym_float] = ACTIONS(334),
    [sym_signal] = ACTIONS(334),
    [sym_comment] = ACTIONS(21),
  },
  [74] = {
    [sym__expressions] = STATE(88),
    [sym_boolean_operator] = STATE(88),
    [sym_binary_operator] = STATE(88),
    [sym_unary_operator] = STATE(88),
    [sym_comparison_operator] = STATE(88),
    [sym_parenthesized] = STATE(88),
    [sym_call_expression] = STATE(88),
    [anon_sym_TILDE] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(336),
    [sym_float] = ACTIONS(338),
    [sym_signal] = ACTIONS(338),
    [sym_comment] = ACTIONS(21),
  },
  [75] = {
    [sym__expressions] = STATE(89),
    [sym_boolean_operator] = STATE(89),
    [sym_binary_operator] = STATE(89),
    [sym_unary_operator] = STATE(89),
    [sym_comparison_operator] = STATE(89),
    [sym_parenthesized] = STATE(89),
    [sym_call_expression] = STATE(89),
    [anon_sym_TILDE] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(340),
    [sym_float] = ACTIONS(342),
    [sym_signal] = ACTIONS(342),
    [sym_comment] = ACTIONS(21),
  },
  [76] = {
    [aux_sym_comparison_operator_repeat1] = STATE(90),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_LT_LT] = ACTIONS(179),
    [anon_sym_GT_GT] = ACTIONS(179),
    [anon_sym_AMP] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_LT_EQ] = ACTIONS(179),
    [anon_sym_EQ_EQ] = ACTIONS(179),
    [anon_sym_BANG_EQ] = ACTIONS(179),
    [anon_sym_GT_EQ] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_COMMA] = ACTIONS(179),
    [sym_identifier] = ACTIONS(179),
    [sym_integer] = ACTIONS(181),
    [sym_float] = ACTIONS(179),
    [sym_signal] = ACTIONS(179),
    [sym_comment] = ACTIONS(21),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(344),
    [anon_sym_SEMI] = ACTIONS(344),
    [anon_sym_set] = ACTIONS(346),
    [anon_sym_rec] = ACTIONS(346),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(344),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(344),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(346),
    [anon_sym_LT_LT] = ACTIONS(344),
    [anon_sym_GT_GT] = ACTIONS(344),
    [anon_sym_AMP] = ACTIONS(346),
    [anon_sym_CARET] = ACTIONS(344),
    [anon_sym_PIPE] = ACTIONS(346),
    [anon_sym_TILDE] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(346),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(344),
    [anon_sym_BANG_EQ] = ACTIONS(344),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_GT] = ACTIONS(346),
    [anon_sym_LPAREN] = ACTIONS(344),
    [anon_sym_RPAREN] = ACTIONS(344),
    [anon_sym_COMMA] = ACTIONS(344),
    [sym_identifier] = ACTIONS(346),
    [sym_integer] = ACTIONS(346),
    [sym_float] = ACTIONS(344),
    [sym_signal] = ACTIONS(344),
    [sym_comment] = ACTIONS(21),
  },
  [78] = {
    [sym__expressions] = STATE(44),
    [sym_boolean_operator] = STATE(44),
    [sym_binary_operator] = STATE(44),
    [sym_unary_operator] = STATE(44),
    [sym_comparison_operator] = STATE(44),
    [sym_parenthesized] = STATE(44),
    [sym_call_expression] = STATE(44),
    [aux_sym_arguments_repeat1] = STATE(91),
    [anon_sym_TILDE] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(131),
    [sym_float] = ACTIONS(133),
    [sym_signal] = ACTIONS(133),
    [sym_comment] = ACTIONS(21),
  },
  [79] = {
    [sym__expressions] = STATE(44),
    [sym_boolean_operator] = STATE(44),
    [sym_binary_operator] = STATE(44),
    [sym_unary_operator] = STATE(44),
    [sym_comparison_operator] = STATE(44),
    [sym_parenthesized] = STATE(44),
    [sym_call_expression] = STATE(44),
    [aux_sym_arguments_repeat1] = STATE(79),
    [anon_sym_TILDE] = ACTIONS(348),
    [anon_sym_LPAREN] = ACTIONS(351),
    [anon_sym_RPAREN] = ACTIONS(354),
    [anon_sym_COMMA] = ACTIONS(354),
    [sym_identifier] = ACTIONS(356),
    [sym_integer] = ACTIONS(359),
    [sym_float] = ACTIONS(362),
    [sym_signal] = ACTIONS(362),
    [sym_comment] = ACTIONS(21),
  },
  [80] = {
    [aux_sym_arguments_repeat2] = STATE(93),
    [anon_sym_RPAREN] = ACTIONS(365),
    [anon_sym_COMMA] = ACTIONS(282),
    [sym_comment] = ACTIONS(21),
  },
  [81] = {
    [aux_sym_comparison_operator_repeat1] = STATE(76),
    [anon_sym_AMP_AMP] = ACTIONS(284),
    [anon_sym_PIPE_PIPE] = ACTIONS(284),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_LT_LT] = ACTIONS(264),
    [anon_sym_GT_GT] = ACTIONS(264),
    [anon_sym_AMP] = ACTIONS(266),
    [anon_sym_CARET] = ACTIONS(268),
    [anon_sym_PIPE] = ACTIONS(270),
    [anon_sym_TILDE] = ACTIONS(284),
    [anon_sym_LT] = ACTIONS(274),
    [anon_sym_LT_EQ] = ACTIONS(276),
    [anon_sym_EQ_EQ] = ACTIONS(276),
    [anon_sym_BANG_EQ] = ACTIONS(276),
    [anon_sym_GT_EQ] = ACTIONS(276),
    [anon_sym_GT] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(284),
    [anon_sym_RPAREN] = ACTIONS(284),
    [anon_sym_COMMA] = ACTIONS(284),
    [sym_identifier] = ACTIONS(284),
    [sym_integer] = ACTIONS(286),
    [sym_float] = ACTIONS(284),
    [sym_signal] = ACTIONS(284),
    [sym_comment] = ACTIONS(21),
  },
  [82] = {
    [aux_sym_comparison_operator_repeat1] = STATE(76),
    [anon_sym_AMP_AMP] = ACTIONS(252),
    [anon_sym_PIPE_PIPE] = ACTIONS(284),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_LT_LT] = ACTIONS(264),
    [anon_sym_GT_GT] = ACTIONS(264),
    [anon_sym_AMP] = ACTIONS(266),
    [anon_sym_CARET] = ACTIONS(268),
    [anon_sym_PIPE] = ACTIONS(270),
    [anon_sym_TILDE] = ACTIONS(284),
    [anon_sym_LT] = ACTIONS(274),
    [anon_sym_LT_EQ] = ACTIONS(276),
    [anon_sym_EQ_EQ] = ACTIONS(276),
    [anon_sym_BANG_EQ] = ACTIONS(276),
    [anon_sym_GT_EQ] = ACTIONS(276),
    [anon_sym_GT] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(284),
    [anon_sym_RPAREN] = ACTIONS(284),
    [anon_sym_COMMA] = ACTIONS(284),
    [sym_identifier] = ACTIONS(284),
    [sym_integer] = ACTIONS(286),
    [sym_float] = ACTIONS(284),
    [sym_signal] = ACTIONS(284),
    [sym_comment] = ACTIONS(21),
  },
  [83] = {
    [aux_sym_comparison_operator_repeat1] = STATE(76),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(290),
    [anon_sym_PERCENT] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(290),
    [anon_sym_LT_LT] = ACTIONS(288),
    [anon_sym_GT_GT] = ACTIONS(288),
    [anon_sym_AMP] = ACTIONS(290),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_TILDE] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(288),
    [anon_sym_EQ_EQ] = ACTIONS(288),
    [anon_sym_BANG_EQ] = ACTIONS(288),
    [anon_sym_GT_EQ] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(288),
    [sym_identifier] = ACTIONS(288),
    [sym_integer] = ACTIONS(290),
    [sym_float] = ACTIONS(288),
    [sym_signal] = ACTIONS(288),
    [sym_comment] = ACTIONS(21),
  },
  [84] = {
    [aux_sym_comparison_operator_repeat1] = STATE(76),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(290),
    [anon_sym_LT_LT] = ACTIONS(288),
    [anon_sym_GT_GT] = ACTIONS(288),
    [anon_sym_AMP] = ACTIONS(290),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_TILDE] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(288),
    [anon_sym_EQ_EQ] = ACTIONS(288),
    [anon_sym_BANG_EQ] = ACTIONS(288),
    [anon_sym_GT_EQ] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(288),
    [sym_identifier] = ACTIONS(288),
    [sym_integer] = ACTIONS(290),
    [sym_float] = ACTIONS(288),
    [sym_signal] = ACTIONS(288),
    [sym_comment] = ACTIONS(21),
  },
  [85] = {
    [aux_sym_comparison_operator_repeat1] = STATE(76),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_LT_LT] = ACTIONS(288),
    [anon_sym_GT_GT] = ACTIONS(288),
    [anon_sym_AMP] = ACTIONS(290),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_TILDE] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(288),
    [anon_sym_EQ_EQ] = ACTIONS(288),
    [anon_sym_BANG_EQ] = ACTIONS(288),
    [anon_sym_GT_EQ] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(288),
    [sym_identifier] = ACTIONS(288),
    [sym_integer] = ACTIONS(290),
    [sym_float] = ACTIONS(288),
    [sym_signal] = ACTIONS(288),
    [sym_comment] = ACTIONS(21),
  },
  [86] = {
    [aux_sym_comparison_operator_repeat1] = STATE(76),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_LT_LT] = ACTIONS(264),
    [anon_sym_GT_GT] = ACTIONS(264),
    [anon_sym_AMP] = ACTIONS(290),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_TILDE] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(274),
    [anon_sym_LT_EQ] = ACTIONS(276),
    [anon_sym_EQ_EQ] = ACTIONS(276),
    [anon_sym_BANG_EQ] = ACTIONS(276),
    [anon_sym_GT_EQ] = ACTIONS(276),
    [anon_sym_GT] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(288),
    [sym_identifier] = ACTIONS(288),
    [sym_integer] = ACTIONS(290),
    [sym_float] = ACTIONS(288),
    [sym_signal] = ACTIONS(288),
    [sym_comment] = ACTIONS(21),
  },
  [87] = {
    [aux_sym_comparison_operator_repeat1] = STATE(76),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_LT_LT] = ACTIONS(264),
    [anon_sym_GT_GT] = ACTIONS(264),
    [anon_sym_AMP] = ACTIONS(266),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_TILDE] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(274),
    [anon_sym_LT_EQ] = ACTIONS(276),
    [anon_sym_EQ_EQ] = ACTIONS(276),
    [anon_sym_BANG_EQ] = ACTIONS(276),
    [anon_sym_GT_EQ] = ACTIONS(276),
    [anon_sym_GT] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(288),
    [sym_identifier] = ACTIONS(288),
    [sym_integer] = ACTIONS(290),
    [sym_float] = ACTIONS(288),
    [sym_signal] = ACTIONS(288),
    [sym_comment] = ACTIONS(21),
  },
  [88] = {
    [aux_sym_comparison_operator_repeat1] = STATE(76),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_LT_LT] = ACTIONS(264),
    [anon_sym_GT_GT] = ACTIONS(264),
    [anon_sym_AMP] = ACTIONS(266),
    [anon_sym_CARET] = ACTIONS(268),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_TILDE] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(274),
    [anon_sym_LT_EQ] = ACTIONS(276),
    [anon_sym_EQ_EQ] = ACTIONS(276),
    [anon_sym_BANG_EQ] = ACTIONS(276),
    [anon_sym_GT_EQ] = ACTIONS(276),
    [anon_sym_GT] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(288),
    [sym_identifier] = ACTIONS(288),
    [sym_integer] = ACTIONS(290),
    [sym_float] = ACTIONS(288),
    [sym_signal] = ACTIONS(288),
    [sym_comment] = ACTIONS(21),
  },
  [89] = {
    [aux_sym_comparison_operator_repeat1] = STATE(76),
    [anon_sym_AMP_AMP] = ACTIONS(252),
    [anon_sym_PIPE_PIPE] = ACTIONS(254),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_LT_LT] = ACTIONS(264),
    [anon_sym_GT_GT] = ACTIONS(264),
    [anon_sym_AMP] = ACTIONS(266),
    [anon_sym_CARET] = ACTIONS(268),
    [anon_sym_PIPE] = ACTIONS(270),
    [anon_sym_TILDE] = ACTIONS(292),
    [anon_sym_LT] = ACTIONS(274),
    [anon_sym_LT_EQ] = ACTIONS(276),
    [anon_sym_EQ_EQ] = ACTIONS(276),
    [anon_sym_BANG_EQ] = ACTIONS(276),
    [anon_sym_GT_EQ] = ACTIONS(276),
    [anon_sym_GT] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(292),
    [anon_sym_RPAREN] = ACTIONS(292),
    [anon_sym_COMMA] = ACTIONS(292),
    [sym_identifier] = ACTIONS(292),
    [sym_integer] = ACTIONS(294),
    [sym_float] = ACTIONS(292),
    [sym_signal] = ACTIONS(292),
    [sym_comment] = ACTIONS(21),
  },
  [90] = {
    [aux_sym_comparison_operator_repeat1] = STATE(90),
    [anon_sym_AMP_AMP] = ACTIONS(292),
    [anon_sym_PIPE_PIPE] = ACTIONS(292),
    [anon_sym_STAR] = ACTIONS(292),
    [anon_sym_SLASH] = ACTIONS(294),
    [anon_sym_PERCENT] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(292),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_LT_LT] = ACTIONS(292),
    [anon_sym_GT_GT] = ACTIONS(292),
    [anon_sym_AMP] = ACTIONS(294),
    [anon_sym_CARET] = ACTIONS(292),
    [anon_sym_PIPE] = ACTIONS(294),
    [anon_sym_TILDE] = ACTIONS(292),
    [anon_sym_LT] = ACTIONS(367),
    [anon_sym_LT_EQ] = ACTIONS(370),
    [anon_sym_EQ_EQ] = ACTIONS(370),
    [anon_sym_BANG_EQ] = ACTIONS(370),
    [anon_sym_GT_EQ] = ACTIONS(370),
    [anon_sym_GT] = ACTIONS(367),
    [anon_sym_LPAREN] = ACTIONS(292),
    [anon_sym_RPAREN] = ACTIONS(292),
    [anon_sym_COMMA] = ACTIONS(292),
    [sym_identifier] = ACTIONS(292),
    [sym_integer] = ACTIONS(294),
    [sym_float] = ACTIONS(292),
    [sym_signal] = ACTIONS(292),
    [sym_comment] = ACTIONS(21),
  },
  [91] = {
    [sym__expressions] = STATE(44),
    [sym_boolean_operator] = STATE(44),
    [sym_binary_operator] = STATE(44),
    [sym_unary_operator] = STATE(44),
    [sym_comparison_operator] = STATE(44),
    [sym_parenthesized] = STATE(44),
    [sym_call_expression] = STATE(44),
    [aux_sym_arguments_repeat1] = STATE(79),
    [anon_sym_TILDE] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(373),
    [anon_sym_COMMA] = ACTIONS(373),
    [sym_identifier] = ACTIONS(29),
    [sym_integer] = ACTIONS(131),
    [sym_float] = ACTIONS(133),
    [sym_signal] = ACTIONS(133),
    [sym_comment] = ACTIONS(21),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(375),
    [anon_sym_SEMI] = ACTIONS(375),
    [anon_sym_set] = ACTIONS(377),
    [anon_sym_rec] = ACTIONS(377),
    [anon_sym_AMP_AMP] = ACTIONS(375),
    [anon_sym_PIPE_PIPE] = ACTIONS(375),
    [anon_sym_STAR] = ACTIONS(375),
    [anon_sym_SLASH] = ACTIONS(377),
    [anon_sym_PERCENT] = ACTIONS(375),
    [anon_sym_PLUS] = ACTIONS(375),
    [anon_sym_DASH] = ACTIONS(377),
    [anon_sym_LT_LT] = ACTIONS(375),
    [anon_sym_GT_GT] = ACTIONS(375),
    [anon_sym_AMP] = ACTIONS(377),
    [anon_sym_CARET] = ACTIONS(375),
    [anon_sym_PIPE] = ACTIONS(377),
    [anon_sym_TILDE] = ACTIONS(375),
    [anon_sym_LT] = ACTIONS(377),
    [anon_sym_LT_EQ] = ACTIONS(375),
    [anon_sym_EQ_EQ] = ACTIONS(375),
    [anon_sym_BANG_EQ] = ACTIONS(375),
    [anon_sym_GT_EQ] = ACTIONS(375),
    [anon_sym_GT] = ACTIONS(377),
    [anon_sym_LPAREN] = ACTIONS(375),
    [anon_sym_RPAREN] = ACTIONS(375),
    [anon_sym_COMMA] = ACTIONS(375),
    [sym_identifier] = ACTIONS(377),
    [sym_integer] = ACTIONS(377),
    [sym_float] = ACTIONS(375),
    [sym_signal] = ACTIONS(375),
    [sym_comment] = ACTIONS(21),
  },
  [93] = {
    [aux_sym_arguments_repeat2] = STATE(93),
    [anon_sym_RPAREN] = ACTIONS(373),
    [anon_sym_COMMA] = ACTIONS(379),
    [sym_comment] = ACTIONS(21),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = false}, SHIFT(6),
  [17] = {.count = 1, .reusable = false}, SHIFT(9),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [23] = {.count = 1, .reusable = false}, SHIFT(11),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, SHIFT(12),
  [29] = {.count = 1, .reusable = true}, SHIFT(6),
  [31] = {.count = 1, .reusable = false}, SHIFT(13),
  [33] = {.count = 1, .reusable = true}, SHIFT(13),
  [35] = {.count = 1, .reusable = true}, SHIFT(14),
  [37] = {.count = 1, .reusable = false}, SHIFT(15),
  [39] = {.count = 1, .reusable = true}, SHIFT(15),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym__expressions, 1, .alias_sequence_id = 1),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym__expressions, 1, .alias_sequence_id = 1),
  [45] = {.count = 1, .reusable = true}, SHIFT(16),
  [47] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [49] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 1),
  [51] = {.count = 1, .reusable = true}, SHIFT(18),
  [53] = {.count = 1, .reusable = false}, REDUCE(aux_sym_program_repeat1, 1),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_expression_statement, 1),
  [59] = {.count = 1, .reusable = true}, SHIFT(19),
  [61] = {.count = 1, .reusable = true}, SHIFT(20),
  [63] = {.count = 1, .reusable = true}, SHIFT(21),
  [65] = {.count = 1, .reusable = false}, SHIFT(21),
  [67] = {.count = 1, .reusable = true}, SHIFT(22),
  [69] = {.count = 1, .reusable = false}, SHIFT(22),
  [71] = {.count = 1, .reusable = true}, SHIFT(23),
  [73] = {.count = 1, .reusable = false}, SHIFT(24),
  [75] = {.count = 1, .reusable = true}, SHIFT(25),
  [77] = {.count = 1, .reusable = false}, SHIFT(26),
  [79] = {.count = 1, .reusable = false}, SHIFT(27),
  [81] = {.count = 1, .reusable = true}, SHIFT(27),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_set_statement, 2),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_set_statement, 2),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_rec_statement, 2),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_rec_statement, 2),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_unary_operator, 2),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_unary_operator, 2),
  [97] = {.count = 1, .reusable = false}, SHIFT(30),
  [99] = {.count = 1, .reusable = true}, SHIFT(30),
  [101] = {.count = 1, .reusable = true}, SHIFT(31),
  [103] = {.count = 1, .reusable = true}, SHIFT(32),
  [105] = {.count = 1, .reusable = true}, SHIFT(33),
  [107] = {.count = 1, .reusable = false}, SHIFT(33),
  [109] = {.count = 1, .reusable = true}, SHIFT(34),
  [111] = {.count = 1, .reusable = false}, SHIFT(34),
  [113] = {.count = 1, .reusable = true}, SHIFT(35),
  [115] = {.count = 1, .reusable = false}, SHIFT(36),
  [117] = {.count = 1, .reusable = true}, SHIFT(37),
  [119] = {.count = 1, .reusable = false}, SHIFT(38),
  [121] = {.count = 1, .reusable = false}, SHIFT(39),
  [123] = {.count = 1, .reusable = true}, SHIFT(39),
  [125] = {.count = 1, .reusable = true}, SHIFT(40),
  [127] = {.count = 1, .reusable = true}, SHIFT(42),
  [129] = {.count = 1, .reusable = true}, SHIFT(43),
  [131] = {.count = 1, .reusable = false}, SHIFT(44),
  [133] = {.count = 1, .reusable = true}, SHIFT(44),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 2),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 2),
  [139] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [141] = {.count = 1, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2),
  [143] = {.count = 1, .reusable = false}, SHIFT(46),
  [145] = {.count = 1, .reusable = true}, SHIFT(46),
  [147] = {.count = 1, .reusable = false}, SHIFT(47),
  [149] = {.count = 1, .reusable = true}, SHIFT(47),
  [151] = {.count = 1, .reusable = false}, SHIFT(48),
  [153] = {.count = 1, .reusable = true}, SHIFT(48),
  [155] = {.count = 1, .reusable = false}, SHIFT(49),
  [157] = {.count = 1, .reusable = true}, SHIFT(49),
  [159] = {.count = 1, .reusable = false}, SHIFT(50),
  [161] = {.count = 1, .reusable = true}, SHIFT(50),
  [163] = {.count = 1, .reusable = false}, SHIFT(51),
  [165] = {.count = 1, .reusable = true}, SHIFT(51),
  [167] = {.count = 1, .reusable = false}, SHIFT(52),
  [169] = {.count = 1, .reusable = true}, SHIFT(52),
  [171] = {.count = 1, .reusable = false}, SHIFT(53),
  [173] = {.count = 1, .reusable = true}, SHIFT(53),
  [175] = {.count = 1, .reusable = false}, SHIFT(54),
  [177] = {.count = 1, .reusable = true}, SHIFT(54),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_comparison_operator, 2),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_comparison_operator, 2),
  [183] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [186] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [189] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [192] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [195] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [198] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [201] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [204] = {.count = 1, .reusable = false}, SHIFT(56),
  [206] = {.count = 1, .reusable = true}, SHIFT(56),
  [208] = {.count = 1, .reusable = false}, SHIFT(57),
  [210] = {.count = 1, .reusable = true}, SHIFT(57),
  [212] = {.count = 1, .reusable = false}, SHIFT(58),
  [214] = {.count = 1, .reusable = true}, SHIFT(58),
  [216] = {.count = 1, .reusable = false}, SHIFT(59),
  [218] = {.count = 1, .reusable = true}, SHIFT(59),
  [220] = {.count = 1, .reusable = false}, SHIFT(60),
  [222] = {.count = 1, .reusable = true}, SHIFT(60),
  [224] = {.count = 1, .reusable = false}, SHIFT(61),
  [226] = {.count = 1, .reusable = true}, SHIFT(61),
  [228] = {.count = 1, .reusable = false}, SHIFT(62),
  [230] = {.count = 1, .reusable = true}, SHIFT(62),
  [232] = {.count = 1, .reusable = false}, SHIFT(63),
  [234] = {.count = 1, .reusable = true}, SHIFT(63),
  [236] = {.count = 1, .reusable = false}, SHIFT(64),
  [238] = {.count = 1, .reusable = true}, SHIFT(64),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized, 3),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized, 3),
  [244] = {.count = 1, .reusable = false}, SHIFT(66),
  [246] = {.count = 1, .reusable = true}, SHIFT(66),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [250] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [252] = {.count = 1, .reusable = true}, SHIFT(67),
  [254] = {.count = 1, .reusable = true}, SHIFT(68),
  [256] = {.count = 1, .reusable = true}, SHIFT(69),
  [258] = {.count = 1, .reusable = false}, SHIFT(69),
  [260] = {.count = 1, .reusable = true}, SHIFT(70),
  [262] = {.count = 1, .reusable = false}, SHIFT(70),
  [264] = {.count = 1, .reusable = true}, SHIFT(71),
  [266] = {.count = 1, .reusable = false}, SHIFT(72),
  [268] = {.count = 1, .reusable = true}, SHIFT(73),
  [270] = {.count = 1, .reusable = false}, SHIFT(74),
  [272] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 1),
  [274] = {.count = 1, .reusable = false}, SHIFT(75),
  [276] = {.count = 1, .reusable = true}, SHIFT(75),
  [278] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 1),
  [280] = {.count = 1, .reusable = true}, SHIFT(77),
  [282] = {.count = 1, .reusable = true}, SHIFT(78),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_operator, 3),
  [286] = {.count = 1, .reusable = false}, REDUCE(sym_boolean_operator, 3),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_binary_operator, 3),
  [290] = {.count = 1, .reusable = false}, REDUCE(sym_binary_operator, 3),
  [292] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [294] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [296] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(27),
  [299] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(27),
  [302] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(39),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(39),
  [308] = {.count = 1, .reusable = false}, SHIFT(81),
  [310] = {.count = 1, .reusable = true}, SHIFT(81),
  [312] = {.count = 1, .reusable = false}, SHIFT(82),
  [314] = {.count = 1, .reusable = true}, SHIFT(82),
  [316] = {.count = 1, .reusable = false}, SHIFT(83),
  [318] = {.count = 1, .reusable = true}, SHIFT(83),
  [320] = {.count = 1, .reusable = false}, SHIFT(84),
  [322] = {.count = 1, .reusable = true}, SHIFT(84),
  [324] = {.count = 1, .reusable = false}, SHIFT(85),
  [326] = {.count = 1, .reusable = true}, SHIFT(85),
  [328] = {.count = 1, .reusable = false}, SHIFT(86),
  [330] = {.count = 1, .reusable = true}, SHIFT(86),
  [332] = {.count = 1, .reusable = false}, SHIFT(87),
  [334] = {.count = 1, .reusable = true}, SHIFT(87),
  [336] = {.count = 1, .reusable = false}, SHIFT(88),
  [338] = {.count = 1, .reusable = true}, SHIFT(88),
  [340] = {.count = 1, .reusable = false}, SHIFT(89),
  [342] = {.count = 1, .reusable = true}, SHIFT(89),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [346] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [348] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(42),
  [351] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(5),
  [354] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [356] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(6),
  [359] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(44),
  [362] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(44),
  [365] = {.count = 1, .reusable = true}, SHIFT(92),
  [367] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(75),
  [370] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(75),
  [373] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [377] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [379] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(78),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rampcode() {
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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
