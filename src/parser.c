#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 65
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 2
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_set = 3,
  anon_sym_rec = 4,
  anon_sym_hz = 5,
  anon_sym_amp = 6,
  sym_reset_statement = 7,
  anon_sym_ramp = 8,
  anon_sym_l = 9,
  anon_sym_r = 10,
  sym_reserved_word = 11,
  anon_sym_AMP_AMP = 12,
  anon_sym_PIPE_PIPE = 13,
  anon_sym_STAR = 14,
  anon_sym_SLASH = 15,
  anon_sym_PERCENT = 16,
  anon_sym_PLUS = 17,
  anon_sym_DASH = 18,
  anon_sym_LT_LT = 19,
  anon_sym_GT_GT = 20,
  anon_sym_AMP = 21,
  anon_sym_CARET = 22,
  anon_sym_PIPE = 23,
  anon_sym_TILDE = 24,
  anon_sym_LT = 25,
  anon_sym_LT_EQ = 26,
  anon_sym_EQ_EQ = 27,
  anon_sym_BANG_EQ = 28,
  anon_sym_GT_EQ = 29,
  anon_sym_GT = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  anon_sym_LPAREN2 = 33,
  anon_sym_COMMA = 34,
  sym_integer = 35,
  sym_float = 36,
  sym_signal = 37,
  sym_comment = 38,
  sym_program = 39,
  sym_set_statement = 40,
  sym_rec_statement = 41,
  sym_hz_statement = 42,
  sym_amp_statement = 43,
  sym_ramp_statement = 44,
  sym_left_channel_statement = 45,
  sym_right_channel_statement = 46,
  sym_expression_statement = 47,
  sym__expressions = 48,
  sym_boolean_operator = 49,
  sym_binary_operator = 50,
  sym_unary_operator = 51,
  sym_comparison_operator = 52,
  sym_parenthesized = 53,
  sym_call_expression = 54,
  sym_arguments = 55,
  aux_sym_program_repeat1 = 56,
  aux_sym_comparison_operator_repeat1 = 57,
  aux_sym_arguments_repeat1 = 58,
  aux_sym_arguments_repeat2 = 59,
  alias_sym_function_name = 60,
  alias_sym_plain = 61,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_set] = "set",
  [anon_sym_rec] = "rec",
  [anon_sym_hz] = "hz",
  [anon_sym_amp] = "amp",
  [sym_reset_statement] = "reset_statement",
  [anon_sym_ramp] = "ramp",
  [anon_sym_l] = "l",
  [anon_sym_r] = "r",
  [sym_reserved_word] = "reserved_word",
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
  [sym_hz_statement] = "hz_statement",
  [sym_amp_statement] = "amp_statement",
  [sym_ramp_statement] = "ramp_statement",
  [sym_left_channel_statement] = "left_channel_statement",
  [sym_right_channel_statement] = "right_channel_statement",
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
  [anon_sym_hz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_amp] = {
    .visible = true,
    .named = false,
  },
  [sym_reset_statement] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ramp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r] = {
    .visible = true,
    .named = false,
  },
  [sym_reserved_word] = {
    .visible = true,
    .named = true,
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
  [sym_hz_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_amp_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_ramp_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_left_channel_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_right_channel_statement] = {
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
      if (lookahead == ':' ||
          lookahead == '@')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '^')
        ADVANCE(20);
      if (lookahead == '|')
        ADVANCE(21);
      if (lookahead == '~')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(23);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '=')
        ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == 'v')
        ADVANCE(27);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(28);
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
        ADVANCE(29);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(31);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_reserved_word);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == '=')
        ADVANCE(35);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(36);
      if (lookahead == '>')
        ADVANCE(37);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(38);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 23:
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
        ADVANCE(39);
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
      if (lookahead == ':' ||
          lookahead == '@')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '^')
        ADVANCE(20);
      if (lookahead == '|')
        ADVANCE(21);
      if (lookahead == '~')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(23);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 27:
      if (lookahead == '1')
        ADVANCE(40);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '*')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_signal);
      END_STATE();
    case 41:
      if (lookahead == '/')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(31);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 43:
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
        ADVANCE(39);
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
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '^')
        ADVANCE(20);
      if (lookahead == '|')
        ADVANCE(21);
      if (lookahead == '~')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(43);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 44:
      if (lookahead == '-')
        ADVANCE(45);
      if (lookahead == '/')
        ADVANCE(46);
      if (lookahead == ':' ||
          lookahead == '@')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(44);
      END_STATE();
    case 45:
      if (lookahead == '-')
        ADVANCE(29);
      END_STATE();
    case 46:
      if (lookahead == '*')
        ADVANCE(31);
      END_STATE();
    case 47:
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
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '^')
        ADVANCE(20);
      if (lookahead == '|')
        ADVANCE(21);
      if (lookahead == '~')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(48);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 48:
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
        ADVANCE(39);
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
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '^')
        ADVANCE(20);
      if (lookahead == '|')
        ADVANCE(21);
      if (lookahead == '~')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(48);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 49:
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
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '^')
        ADVANCE(20);
      if (lookahead == '|')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(49);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 50:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(39);
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
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '^')
        ADVANCE(20);
      if (lookahead == '|')
        ADVANCE(21);
      if (lookahead == '~')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(50);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 'a')
        ADVANCE(1);
      if (lookahead == 'h')
        ADVANCE(2);
      if (lookahead == 'l')
        ADVANCE(3);
      if (lookahead == 'r')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'm')
        ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'z')
        ADVANCE(7);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'a')
        ADVANCE(8);
      if (lookahead == 'e')
        ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'e')
        ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'p')
        ADVANCE(11);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_hz);
      END_STATE();
    case 8:
      if (lookahead == 'm')
        ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'c')
        ADVANCE(13);
      if (lookahead == 's')
        ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 't')
        ADVANCE(15);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_amp);
      END_STATE();
    case 12:
      if (lookahead == 'p')
        ADVANCE(16);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_rec);
      END_STATE();
    case 14:
      if (lookahead == 'e')
        ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_ramp);
      END_STATE();
    case 17:
      if (lookahead == 't')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_reset_statement);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 43},
  [2] = {.lex_state = 44},
  [3] = {.lex_state = 44},
  [4] = {.lex_state = 43},
  [5] = {.lex_state = 43},
  [6] = {.lex_state = 43},
  [7] = {.lex_state = 44},
  [8] = {.lex_state = 47},
  [9] = {.lex_state = 44},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 49},
  [12] = {.lex_state = 44},
  [13] = {.lex_state = 43},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 43},
  [16] = {.lex_state = 43},
  [17] = {.lex_state = 43},
  [18] = {.lex_state = 49},
  [19] = {.lex_state = 43},
  [20] = {.lex_state = 43},
  [21] = {.lex_state = 43},
  [22] = {.lex_state = 50},
  [23] = {.lex_state = 48},
  [24] = {.lex_state = 43},
  [25] = {.lex_state = 48},
  [26] = {.lex_state = 43},
  [27] = {.lex_state = 43},
  [28] = {.lex_state = 43},
  [29] = {.lex_state = 43},
  [30] = {.lex_state = 43},
  [31] = {.lex_state = 43},
  [32] = {.lex_state = 43},
  [33] = {.lex_state = 43},
  [34] = {.lex_state = 43},
  [35] = {.lex_state = 43},
  [36] = {.lex_state = 43},
  [37] = {.lex_state = 48},
  [38] = {.lex_state = 43},
  [39] = {.lex_state = 43},
  [40] = {.lex_state = 43},
  [41] = {.lex_state = 48},
  [42] = {.lex_state = 43},
  [43] = {.lex_state = 48},
  [44] = {.lex_state = 50},
  [45] = {.lex_state = 50},
  [46] = {.lex_state = 43},
  [47] = {.lex_state = 43},
  [48] = {.lex_state = 48},
  [49] = {.lex_state = 48},
  [50] = {.lex_state = 48},
  [51] = {.lex_state = 48},
  [52] = {.lex_state = 48},
  [53] = {.lex_state = 48},
  [54] = {.lex_state = 48},
  [55] = {.lex_state = 48},
  [56] = {.lex_state = 48},
  [57] = {.lex_state = 48},
  [58] = {.lex_state = 48},
  [59] = {.lex_state = 43},
  [60] = {.lex_state = 50},
  [61] = {.lex_state = 49},
  [62] = {.lex_state = 50},
  [63] = {.lex_state = 48},
  [64] = {.lex_state = 49},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_CARET] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_rec] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_amp] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_reserved_word] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_hz] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_reset_statement] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_signal] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_ramp] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
  },
  [1] = {
    [sym_rec_statement] = STATE(5),
    [sym_hz_statement] = STATE(5),
    [sym_expression_statement] = STATE(5),
    [sym__expressions] = STATE(13),
    [sym_parenthesized] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_set_statement] = STATE(5),
    [sym_left_channel_statement] = STATE(5),
    [sym_right_channel_statement] = STATE(5),
    [sym_unary_operator] = STATE(13),
    [sym_comparison_operator] = STATE(13),
    [sym_program] = STATE(14),
    [sym_amp_statement] = STATE(5),
    [sym_ramp_statement] = STATE(5),
    [sym_boolean_operator] = STATE(13),
    [sym_binary_operator] = STATE(13),
    [aux_sym_program_repeat1] = STATE(15),
    [anon_sym_hz] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [sym_reset_statement] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_r] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [anon_sym_amp] = ACTIONS(19),
    [sym_signal] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_l] = ACTIONS(23),
    [anon_sym_set] = ACTIONS(25),
    [anon_sym_ramp] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
  },
  [2] = {
    [sym_reserved_word] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_reserved_word] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_comparison_operator] = STATE(18),
    [sym__expressions] = STATE(18),
    [sym_parenthesized] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_boolean_operator] = STATE(18),
    [sym_binary_operator] = STATE(18),
    [sym_unary_operator] = STATE(18),
    [sym_signal] = ACTIONS(37),
    [sym_float] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_integer] = ACTIONS(41),
  },
  [5] = {
    [anon_sym_hz] = ACTIONS(43),
    [sym_float] = ACTIONS(45),
    [sym_reset_statement] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_r] = ACTIONS(43),
    [sym_integer] = ACTIONS(43),
    [anon_sym_rec] = ACTIONS(43),
    [anon_sym_amp] = ACTIONS(43),
    [sym_signal] = ACTIONS(45),
    [anon_sym_l] = ACTIONS(43),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_set] = ACTIONS(43),
    [anon_sym_ramp] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [6] = {
    [sym_comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(49),
    [sym_float] = ACTIONS(51),
  },
  [7] = {
    [sym_reserved_word] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_arguments] = STATE(23),
    [anon_sym_CARET] = ACTIONS(55),
    [sym_float] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(55),
    [anon_sym_r] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_rec] = ACTIONS(57),
    [anon_sym_l] = ACTIONS(57),
    [anon_sym_amp] = ACTIONS(57),
    [anon_sym_EQ_EQ] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(57),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_hz] = ACTIONS(57),
    [anon_sym_SEMI] = ACTIONS(55),
    [sym_reset_statement] = ACTIONS(57),
    [anon_sym_BANG_EQ] = ACTIONS(55),
    [anon_sym_LPAREN2] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(55),
    [sym_integer] = ACTIONS(57),
    [sym_signal] = ACTIONS(55),
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_AMP_AMP] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_set] = ACTIONS(57),
    [anon_sym_ramp] = ACTIONS(57),
    [anon_sym_GT_EQ] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_GT_GT] = ACTIONS(55),
    [anon_sym_LT] = ACTIONS(57),
  },
  [9] = {
    [sym_reserved_word] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_comparison_operator] = STATE(25),
    [sym__expressions] = STATE(25),
    [sym_parenthesized] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_boolean_operator] = STATE(25),
    [sym_binary_operator] = STATE(25),
    [sym_unary_operator] = STATE(25),
    [sym_signal] = ACTIONS(63),
    [sym_float] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_integer] = ACTIONS(65),
  },
  [11] = {
    [sym_comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(67),
  },
  [12] = {
    [sym_reserved_word] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_CARET] = ACTIONS(71),
    [sym_float] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [anon_sym_r] = ACTIONS(77),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_rec] = ACTIONS(77),
    [anon_sym_l] = ACTIONS(77),
    [anon_sym_amp] = ACTIONS(77),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(87),
    [sym_identifier] = ACTIONS(77),
    [anon_sym_PERCENT] = ACTIONS(89),
    [anon_sym_hz] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(73),
    [sym_reset_statement] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(73),
    [sym_integer] = ACTIONS(77),
    [sym_signal] = ACTIONS(73),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_AMP_AMP] = ACTIONS(95),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_set] = ACTIONS(77),
    [anon_sym_ramp] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(91),
  },
  [14] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(99),
  },
  [15] = {
    [sym_rec_statement] = STATE(5),
    [sym_hz_statement] = STATE(5),
    [sym_expression_statement] = STATE(5),
    [sym__expressions] = STATE(13),
    [sym_parenthesized] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_set_statement] = STATE(5),
    [sym_left_channel_statement] = STATE(5),
    [sym_right_channel_statement] = STATE(5),
    [sym_unary_operator] = STATE(13),
    [sym_comparison_operator] = STATE(13),
    [sym_amp_statement] = STATE(5),
    [sym_ramp_statement] = STATE(5),
    [sym_boolean_operator] = STATE(13),
    [sym_binary_operator] = STATE(13),
    [aux_sym_program_repeat1] = STATE(38),
    [anon_sym_hz] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [sym_reset_statement] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_r] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [anon_sym_amp] = ACTIONS(19),
    [sym_signal] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_l] = ACTIONS(23),
    [anon_sym_set] = ACTIONS(25),
    [anon_sym_ramp] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
  },
  [16] = {
    [sym_comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(103),
    [sym_float] = ACTIONS(105),
  },
  [17] = {
    [sym_comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(107),
    [sym_float] = ACTIONS(109),
  },
  [18] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_CARET] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_AMP] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(87),
    [anon_sym_PERCENT] = ACTIONS(89),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_AMP_AMP] = ACTIONS(95),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(91),
  },
  [19] = {
    [anon_sym_hz] = ACTIONS(113),
    [sym_float] = ACTIONS(115),
    [sym_reset_statement] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(115),
    [anon_sym_r] = ACTIONS(113),
    [sym_integer] = ACTIONS(113),
    [anon_sym_rec] = ACTIONS(113),
    [anon_sym_amp] = ACTIONS(113),
    [sym_signal] = ACTIONS(115),
    [anon_sym_l] = ACTIONS(113),
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_identifier] = ACTIONS(113),
    [anon_sym_set] = ACTIONS(113),
    [anon_sym_ramp] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(115),
  },
  [20] = {
    [anon_sym_hz] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(119),
    [sym_reset_statement] = ACTIONS(117),
    [sym_float] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(119),
    [anon_sym_r] = ACTIONS(117),
    [sym_integer] = ACTIONS(117),
    [anon_sym_rec] = ACTIONS(117),
    [anon_sym_amp] = ACTIONS(117),
    [anon_sym_l] = ACTIONS(117),
    [sym_signal] = ACTIONS(119),
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_identifier] = ACTIONS(117),
    [anon_sym_set] = ACTIONS(117),
    [anon_sym_ramp] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(119),
  },
  [21] = {
    [sym_comparison_operator] = STATE(42),
    [sym_boolean_operator] = STATE(42),
    [sym_binary_operator] = STATE(42),
    [sym__expressions] = STATE(42),
    [sym_parenthesized] = STATE(42),
    [sym_call_expression] = STATE(42),
    [sym_unary_operator] = STATE(42),
    [sym_signal] = ACTIONS(121),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(11),
    [sym_float] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_integer] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_comparison_operator] = STATE(45),
    [aux_sym_arguments_repeat1] = STATE(44),
    [sym__expressions] = STATE(45),
    [sym_parenthesized] = STATE(45),
    [sym_call_expression] = STATE(45),
    [sym_boolean_operator] = STATE(45),
    [sym_binary_operator] = STATE(45),
    [sym_unary_operator] = STATE(45),
    [sym_signal] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(127),
    [sym_float] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_integer] = ACTIONS(129),
  },
  [23] = {
    [anon_sym_CARET] = ACTIONS(131),
    [sym_float] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(131),
    [anon_sym_r] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(133),
    [anon_sym_rec] = ACTIONS(133),
    [anon_sym_l] = ACTIONS(133),
    [anon_sym_amp] = ACTIONS(133),
    [anon_sym_EQ_EQ] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_AMP] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(133),
    [sym_identifier] = ACTIONS(133),
    [anon_sym_PERCENT] = ACTIONS(131),
    [anon_sym_hz] = ACTIONS(133),
    [anon_sym_SEMI] = ACTIONS(131),
    [sym_reset_statement] = ACTIONS(133),
    [anon_sym_BANG_EQ] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_LT_LT] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [sym_integer] = ACTIONS(133),
    [sym_signal] = ACTIONS(131),
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_AMP_AMP] = ACTIONS(131),
    [anon_sym_PLUS] = ACTIONS(131),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_set] = ACTIONS(133),
    [anon_sym_ramp] = ACTIONS(133),
    [anon_sym_GT_EQ] = ACTIONS(131),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_LT] = ACTIONS(133),
  },
  [24] = {
    [sym_comparison_operator] = STATE(46),
    [sym_boolean_operator] = STATE(46),
    [sym_binary_operator] = STATE(46),
    [sym__expressions] = STATE(46),
    [sym_parenthesized] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_unary_operator] = STATE(46),
    [sym_signal] = ACTIONS(135),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(11),
    [sym_float] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_integer] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_CARET] = ACTIONS(139),
    [sym_float] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(139),
    [anon_sym_r] = ACTIONS(141),
    [anon_sym_SLASH] = ACTIONS(141),
    [anon_sym_rec] = ACTIONS(141),
    [anon_sym_l] = ACTIONS(141),
    [anon_sym_amp] = ACTIONS(141),
    [anon_sym_EQ_EQ] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_PIPE] = ACTIONS(141),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_hz] = ACTIONS(141),
    [anon_sym_SEMI] = ACTIONS(139),
    [sym_reset_statement] = ACTIONS(141),
    [anon_sym_BANG_EQ] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(139),
    [sym_integer] = ACTIONS(141),
    [sym_signal] = ACTIONS(139),
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_AMP_AMP] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_set] = ACTIONS(141),
    [anon_sym_ramp] = ACTIONS(141),
    [anon_sym_GT_EQ] = ACTIONS(139),
    [anon_sym_LT_EQ] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_GT_GT] = ACTIONS(139),
    [anon_sym_LT] = ACTIONS(141),
  },
  [26] = {
    [anon_sym_hz] = ACTIONS(143),
    [anon_sym_SEMI] = ACTIONS(145),
    [sym_reset_statement] = ACTIONS(143),
    [sym_float] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_r] = ACTIONS(143),
    [sym_integer] = ACTIONS(143),
    [anon_sym_rec] = ACTIONS(143),
    [anon_sym_amp] = ACTIONS(143),
    [anon_sym_l] = ACTIONS(143),
    [sym_signal] = ACTIONS(145),
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_identifier] = ACTIONS(143),
    [anon_sym_set] = ACTIONS(143),
    [anon_sym_ramp] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(145),
  },
  [27] = {
    [sym_comparison_operator] = STATE(47),
    [sym_boolean_operator] = STATE(47),
    [sym_binary_operator] = STATE(47),
    [sym__expressions] = STATE(47),
    [sym_parenthesized] = STATE(47),
    [sym_call_expression] = STATE(47),
    [sym_unary_operator] = STATE(47),
    [sym_signal] = ACTIONS(147),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(11),
    [sym_float] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_integer] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_comparison_operator] = STATE(48),
    [sym__expressions] = STATE(48),
    [sym_parenthesized] = STATE(48),
    [sym_call_expression] = STATE(48),
    [sym_boolean_operator] = STATE(48),
    [sym_binary_operator] = STATE(48),
    [sym_unary_operator] = STATE(48),
    [sym_signal] = ACTIONS(151),
    [sym_float] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_integer] = ACTIONS(153),
  },
  [29] = {
    [sym_comparison_operator] = STATE(49),
    [sym__expressions] = STATE(49),
    [sym_parenthesized] = STATE(49),
    [sym_call_expression] = STATE(49),
    [sym_boolean_operator] = STATE(49),
    [sym_binary_operator] = STATE(49),
    [sym_unary_operator] = STATE(49),
    [sym_signal] = ACTIONS(155),
    [sym_float] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_integer] = ACTIONS(157),
  },
  [30] = {
    [sym_comparison_operator] = STATE(50),
    [sym__expressions] = STATE(50),
    [sym_parenthesized] = STATE(50),
    [sym_call_expression] = STATE(50),
    [sym_boolean_operator] = STATE(50),
    [sym_binary_operator] = STATE(50),
    [sym_unary_operator] = STATE(50),
    [sym_signal] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_integer] = ACTIONS(161),
  },
  [31] = {
    [sym_comparison_operator] = STATE(51),
    [sym__expressions] = STATE(51),
    [sym_parenthesized] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_boolean_operator] = STATE(51),
    [sym_binary_operator] = STATE(51),
    [sym_unary_operator] = STATE(51),
    [sym_signal] = ACTIONS(163),
    [sym_float] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_integer] = ACTIONS(165),
  },
  [32] = {
    [sym_comparison_operator] = STATE(52),
    [sym__expressions] = STATE(52),
    [sym_parenthesized] = STATE(52),
    [sym_call_expression] = STATE(52),
    [sym_boolean_operator] = STATE(52),
    [sym_binary_operator] = STATE(52),
    [sym_unary_operator] = STATE(52),
    [sym_signal] = ACTIONS(167),
    [sym_float] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_integer] = ACTIONS(169),
  },
  [33] = {
    [sym_comparison_operator] = STATE(53),
    [sym__expressions] = STATE(53),
    [sym_parenthesized] = STATE(53),
    [sym_call_expression] = STATE(53),
    [sym_boolean_operator] = STATE(53),
    [sym_binary_operator] = STATE(53),
    [sym_unary_operator] = STATE(53),
    [sym_signal] = ACTIONS(171),
    [sym_float] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_integer] = ACTIONS(173),
  },
  [34] = {
    [sym_comparison_operator] = STATE(54),
    [sym__expressions] = STATE(54),
    [sym_parenthesized] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_boolean_operator] = STATE(54),
    [sym_binary_operator] = STATE(54),
    [sym_unary_operator] = STATE(54),
    [sym_signal] = ACTIONS(175),
    [sym_float] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_integer] = ACTIONS(177),
  },
  [35] = {
    [sym_comparison_operator] = STATE(55),
    [sym__expressions] = STATE(55),
    [sym_parenthesized] = STATE(55),
    [sym_call_expression] = STATE(55),
    [sym_boolean_operator] = STATE(55),
    [sym_binary_operator] = STATE(55),
    [sym_unary_operator] = STATE(55),
    [sym_signal] = ACTIONS(179),
    [sym_float] = ACTIONS(179),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_integer] = ACTIONS(181),
  },
  [36] = {
    [sym_comparison_operator] = STATE(56),
    [sym__expressions] = STATE(56),
    [sym_parenthesized] = STATE(56),
    [sym_call_expression] = STATE(56),
    [sym_boolean_operator] = STATE(56),
    [sym_binary_operator] = STATE(56),
    [sym_unary_operator] = STATE(56),
    [sym_signal] = ACTIONS(183),
    [sym_float] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_integer] = ACTIONS(185),
  },
  [37] = {
    [aux_sym_comparison_operator_repeat1] = STATE(57),
    [anon_sym_CARET] = ACTIONS(187),
    [sym_float] = ACTIONS(187),
    [anon_sym_COMMA] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(187),
    [anon_sym_r] = ACTIONS(189),
    [anon_sym_SLASH] = ACTIONS(189),
    [anon_sym_rec] = ACTIONS(189),
    [anon_sym_l] = ACTIONS(189),
    [anon_sym_amp] = ACTIONS(189),
    [anon_sym_EQ_EQ] = ACTIONS(187),
    [anon_sym_RPAREN] = ACTIONS(187),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_DASH] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(189),
    [sym_identifier] = ACTIONS(189),
    [anon_sym_PERCENT] = ACTIONS(187),
    [anon_sym_hz] = ACTIONS(189),
    [anon_sym_SEMI] = ACTIONS(187),
    [sym_reset_statement] = ACTIONS(189),
    [anon_sym_BANG_EQ] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_LT_LT] = ACTIONS(187),
    [anon_sym_TILDE] = ACTIONS(187),
    [sym_integer] = ACTIONS(189),
    [sym_signal] = ACTIONS(187),
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(187),
    [anon_sym_set] = ACTIONS(189),
    [anon_sym_ramp] = ACTIONS(189),
    [anon_sym_GT_EQ] = ACTIONS(187),
    [anon_sym_LT_EQ] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_GT_GT] = ACTIONS(187),
    [anon_sym_LT] = ACTIONS(189),
  },
  [38] = {
    [sym_rec_statement] = STATE(5),
    [sym_hz_statement] = STATE(5),
    [sym_expression_statement] = STATE(5),
    [sym__expressions] = STATE(13),
    [sym_parenthesized] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_set_statement] = STATE(5),
    [sym_left_channel_statement] = STATE(5),
    [sym_right_channel_statement] = STATE(5),
    [sym_unary_operator] = STATE(13),
    [sym_comparison_operator] = STATE(13),
    [sym_amp_statement] = STATE(5),
    [sym_ramp_statement] = STATE(5),
    [sym_boolean_operator] = STATE(13),
    [sym_binary_operator] = STATE(13),
    [aux_sym_program_repeat1] = STATE(38),
    [anon_sym_hz] = ACTIONS(191),
    [sym_float] = ACTIONS(194),
    [sym_reset_statement] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(200),
    [anon_sym_r] = ACTIONS(203),
    [sym_integer] = ACTIONS(206),
    [anon_sym_rec] = ACTIONS(209),
    [anon_sym_amp] = ACTIONS(212),
    [sym_signal] = ACTIONS(194),
    [anon_sym_l] = ACTIONS(215),
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_identifier] = ACTIONS(218),
    [anon_sym_set] = ACTIONS(221),
    [anon_sym_ramp] = ACTIONS(224),
    [anon_sym_LPAREN] = ACTIONS(227),
  },
  [39] = {
    [anon_sym_hz] = ACTIONS(230),
    [anon_sym_SEMI] = ACTIONS(232),
    [sym_reset_statement] = ACTIONS(230),
    [sym_float] = ACTIONS(232),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(232),
    [anon_sym_r] = ACTIONS(230),
    [sym_integer] = ACTIONS(230),
    [anon_sym_rec] = ACTIONS(230),
    [anon_sym_amp] = ACTIONS(230),
    [anon_sym_l] = ACTIONS(230),
    [sym_signal] = ACTIONS(232),
    [ts_builtin_sym_end] = ACTIONS(232),
    [sym_identifier] = ACTIONS(230),
    [anon_sym_set] = ACTIONS(230),
    [anon_sym_ramp] = ACTIONS(230),
    [anon_sym_LPAREN] = ACTIONS(232),
  },
  [40] = {
    [anon_sym_hz] = ACTIONS(234),
    [anon_sym_SEMI] = ACTIONS(236),
    [sym_reset_statement] = ACTIONS(234),
    [sym_float] = ACTIONS(236),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(236),
    [anon_sym_r] = ACTIONS(234),
    [sym_integer] = ACTIONS(234),
    [anon_sym_rec] = ACTIONS(234),
    [anon_sym_amp] = ACTIONS(234),
    [anon_sym_l] = ACTIONS(234),
    [sym_signal] = ACTIONS(236),
    [ts_builtin_sym_end] = ACTIONS(236),
    [sym_identifier] = ACTIONS(234),
    [anon_sym_set] = ACTIONS(234),
    [anon_sym_ramp] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(236),
  },
  [41] = {
    [anon_sym_CARET] = ACTIONS(238),
    [sym_float] = ACTIONS(238),
    [anon_sym_COMMA] = ACTIONS(238),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(238),
    [anon_sym_r] = ACTIONS(240),
    [anon_sym_SLASH] = ACTIONS(240),
    [anon_sym_rec] = ACTIONS(240),
    [anon_sym_l] = ACTIONS(240),
    [anon_sym_amp] = ACTIONS(240),
    [anon_sym_EQ_EQ] = ACTIONS(238),
    [anon_sym_RPAREN] = ACTIONS(238),
    [anon_sym_AMP] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym_PIPE] = ACTIONS(240),
    [sym_identifier] = ACTIONS(240),
    [anon_sym_PERCENT] = ACTIONS(238),
    [anon_sym_hz] = ACTIONS(240),
    [anon_sym_SEMI] = ACTIONS(238),
    [sym_reset_statement] = ACTIONS(240),
    [anon_sym_BANG_EQ] = ACTIONS(238),
    [anon_sym_GT] = ACTIONS(240),
    [anon_sym_LT_LT] = ACTIONS(238),
    [anon_sym_TILDE] = ACTIONS(238),
    [sym_integer] = ACTIONS(240),
    [sym_signal] = ACTIONS(238),
    [ts_builtin_sym_end] = ACTIONS(238),
    [anon_sym_AMP_AMP] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(238),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_set] = ACTIONS(240),
    [anon_sym_ramp] = ACTIONS(240),
    [anon_sym_GT_EQ] = ACTIONS(238),
    [anon_sym_LT_EQ] = ACTIONS(238),
    [anon_sym_LPAREN] = ACTIONS(238),
    [anon_sym_GT_GT] = ACTIONS(238),
    [anon_sym_LT] = ACTIONS(240),
  },
  [42] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_CARET] = ACTIONS(71),
    [sym_float] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [anon_sym_r] = ACTIONS(244),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_rec] = ACTIONS(244),
    [anon_sym_l] = ACTIONS(244),
    [anon_sym_amp] = ACTIONS(244),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(87),
    [sym_identifier] = ACTIONS(244),
    [anon_sym_PERCENT] = ACTIONS(89),
    [anon_sym_hz] = ACTIONS(244),
    [anon_sym_SEMI] = ACTIONS(242),
    [sym_reset_statement] = ACTIONS(244),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(242),
    [sym_integer] = ACTIONS(244),
    [sym_signal] = ACTIONS(242),
    [ts_builtin_sym_end] = ACTIONS(242),
    [anon_sym_AMP_AMP] = ACTIONS(95),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_set] = ACTIONS(244),
    [anon_sym_ramp] = ACTIONS(244),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(242),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(91),
  },
  [43] = {
    [anon_sym_CARET] = ACTIONS(246),
    [sym_float] = ACTIONS(246),
    [anon_sym_COMMA] = ACTIONS(246),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(246),
    [anon_sym_r] = ACTIONS(248),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_rec] = ACTIONS(248),
    [anon_sym_l] = ACTIONS(248),
    [anon_sym_amp] = ACTIONS(248),
    [anon_sym_EQ_EQ] = ACTIONS(246),
    [anon_sym_RPAREN] = ACTIONS(246),
    [anon_sym_AMP] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(248),
    [anon_sym_PIPE] = ACTIONS(248),
    [sym_identifier] = ACTIONS(248),
    [anon_sym_PERCENT] = ACTIONS(246),
    [anon_sym_hz] = ACTIONS(248),
    [anon_sym_SEMI] = ACTIONS(246),
    [sym_reset_statement] = ACTIONS(248),
    [anon_sym_BANG_EQ] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(248),
    [anon_sym_LT_LT] = ACTIONS(246),
    [anon_sym_TILDE] = ACTIONS(246),
    [sym_integer] = ACTIONS(248),
    [sym_signal] = ACTIONS(246),
    [ts_builtin_sym_end] = ACTIONS(246),
    [anon_sym_AMP_AMP] = ACTIONS(246),
    [anon_sym_PLUS] = ACTIONS(246),
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_set] = ACTIONS(248),
    [anon_sym_ramp] = ACTIONS(248),
    [anon_sym_GT_EQ] = ACTIONS(246),
    [anon_sym_LT_EQ] = ACTIONS(246),
    [anon_sym_LPAREN] = ACTIONS(246),
    [anon_sym_GT_GT] = ACTIONS(246),
    [anon_sym_LT] = ACTIONS(248),
  },
  [44] = {
    [sym_comparison_operator] = STATE(45),
    [aux_sym_arguments_repeat1] = STATE(60),
    [sym__expressions] = STATE(45),
    [sym_parenthesized] = STATE(45),
    [sym_call_expression] = STATE(45),
    [aux_sym_arguments_repeat2] = STATE(61),
    [sym_boolean_operator] = STATE(45),
    [sym_binary_operator] = STATE(45),
    [sym_unary_operator] = STATE(45),
    [sym_signal] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(250),
    [sym_float] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(252),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_integer] = ACTIONS(129),
  },
  [45] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_PERCENT] = ACTIONS(89),
    [sym_float] = ACTIONS(254),
    [anon_sym_COMMA] = ACTIONS(254),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(254),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [anon_sym_SLASH] = ACTIONS(79),
    [sym_integer] = ACTIONS(256),
    [sym_signal] = ACTIONS(254),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(254),
    [anon_sym_AMP] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(87),
    [anon_sym_AMP_AMP] = ACTIONS(95),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(89),
    [sym_identifier] = ACTIONS(254),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(254),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(91),
  },
  [46] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_CARET] = ACTIONS(71),
    [sym_float] = ACTIONS(258),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [anon_sym_r] = ACTIONS(260),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_rec] = ACTIONS(260),
    [anon_sym_l] = ACTIONS(260),
    [anon_sym_amp] = ACTIONS(260),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(87),
    [sym_identifier] = ACTIONS(260),
    [anon_sym_PERCENT] = ACTIONS(89),
    [anon_sym_hz] = ACTIONS(260),
    [anon_sym_SEMI] = ACTIONS(258),
    [sym_reset_statement] = ACTIONS(260),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(258),
    [sym_integer] = ACTIONS(260),
    [sym_signal] = ACTIONS(258),
    [ts_builtin_sym_end] = ACTIONS(258),
    [anon_sym_AMP_AMP] = ACTIONS(95),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_set] = ACTIONS(260),
    [anon_sym_ramp] = ACTIONS(260),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(258),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(91),
  },
  [47] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_CARET] = ACTIONS(71),
    [sym_float] = ACTIONS(262),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [anon_sym_r] = ACTIONS(264),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_rec] = ACTIONS(264),
    [anon_sym_l] = ACTIONS(264),
    [anon_sym_amp] = ACTIONS(264),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(87),
    [sym_identifier] = ACTIONS(264),
    [anon_sym_PERCENT] = ACTIONS(89),
    [anon_sym_hz] = ACTIONS(264),
    [anon_sym_SEMI] = ACTIONS(262),
    [sym_reset_statement] = ACTIONS(264),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(262),
    [sym_integer] = ACTIONS(264),
    [sym_signal] = ACTIONS(262),
    [ts_builtin_sym_end] = ACTIONS(262),
    [anon_sym_AMP_AMP] = ACTIONS(95),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_set] = ACTIONS(264),
    [anon_sym_ramp] = ACTIONS(264),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(262),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(91),
  },
  [48] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_CARET] = ACTIONS(266),
    [sym_float] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(266),
    [anon_sym_r] = ACTIONS(268),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_rec] = ACTIONS(268),
    [anon_sym_l] = ACTIONS(268),
    [anon_sym_amp] = ACTIONS(268),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(266),
    [anon_sym_AMP] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(268),
    [sym_identifier] = ACTIONS(268),
    [anon_sym_PERCENT] = ACTIONS(89),
    [anon_sym_hz] = ACTIONS(268),
    [anon_sym_SEMI] = ACTIONS(266),
    [sym_reset_statement] = ACTIONS(268),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(266),
    [sym_integer] = ACTIONS(268),
    [sym_signal] = ACTIONS(266),
    [ts_builtin_sym_end] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(266),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_set] = ACTIONS(268),
    [anon_sym_ramp] = ACTIONS(268),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(266),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(91),
  },
  [49] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_CARET] = ACTIONS(266),
    [sym_float] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(266),
    [anon_sym_r] = ACTIONS(268),
    [anon_sym_SLASH] = ACTIONS(268),
    [anon_sym_rec] = ACTIONS(268),
    [anon_sym_l] = ACTIONS(268),
    [anon_sym_amp] = ACTIONS(268),
    [anon_sym_EQ_EQ] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(266),
    [anon_sym_AMP] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(268),
    [anon_sym_PIPE] = ACTIONS(268),
    [sym_identifier] = ACTIONS(268),
    [anon_sym_PERCENT] = ACTIONS(266),
    [anon_sym_hz] = ACTIONS(268),
    [anon_sym_SEMI] = ACTIONS(266),
    [sym_reset_statement] = ACTIONS(268),
    [anon_sym_BANG_EQ] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(268),
    [anon_sym_LT_LT] = ACTIONS(266),
    [anon_sym_TILDE] = ACTIONS(266),
    [sym_integer] = ACTIONS(268),
    [sym_signal] = ACTIONS(266),
    [ts_builtin_sym_end] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(266),
    [anon_sym_PLUS] = ACTIONS(266),
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_set] = ACTIONS(268),
    [anon_sym_ramp] = ACTIONS(268),
    [anon_sym_GT_EQ] = ACTIONS(266),
    [anon_sym_LT_EQ] = ACTIONS(266),
    [anon_sym_LPAREN] = ACTIONS(266),
    [anon_sym_GT_GT] = ACTIONS(266),
    [anon_sym_LT] = ACTIONS(268),
  },
  [50] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_CARET] = ACTIONS(71),
    [sym_float] = ACTIONS(270),
    [anon_sym_COMMA] = ACTIONS(270),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [anon_sym_r] = ACTIONS(272),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_rec] = ACTIONS(272),
    [anon_sym_l] = ACTIONS(272),
    [anon_sym_amp] = ACTIONS(272),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(270),
    [anon_sym_AMP] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(87),
    [sym_identifier] = ACTIONS(272),
    [anon_sym_PERCENT] = ACTIONS(89),
    [anon_sym_hz] = ACTIONS(272),
    [anon_sym_SEMI] = ACTIONS(270),
    [sym_reset_statement] = ACTIONS(272),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(270),
    [sym_integer] = ACTIONS(272),
    [sym_signal] = ACTIONS(270),
    [ts_builtin_sym_end] = ACTIONS(270),
    [anon_sym_AMP_AMP] = ACTIONS(95),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_set] = ACTIONS(272),
    [anon_sym_ramp] = ACTIONS(272),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(270),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(91),
  },
  [51] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_CARET] = ACTIONS(266),
    [sym_float] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(266),
    [anon_sym_r] = ACTIONS(268),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_rec] = ACTIONS(268),
    [anon_sym_l] = ACTIONS(268),
    [anon_sym_amp] = ACTIONS(268),
    [anon_sym_EQ_EQ] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(266),
    [anon_sym_AMP] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(268),
    [sym_identifier] = ACTIONS(268),
    [anon_sym_PERCENT] = ACTIONS(89),
    [anon_sym_hz] = ACTIONS(268),
    [anon_sym_SEMI] = ACTIONS(266),
    [sym_reset_statement] = ACTIONS(268),
    [anon_sym_BANG_EQ] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(268),
    [anon_sym_LT_LT] = ACTIONS(266),
    [anon_sym_TILDE] = ACTIONS(266),
    [sym_integer] = ACTIONS(268),
    [sym_signal] = ACTIONS(266),
    [ts_builtin_sym_end] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(266),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_set] = ACTIONS(268),
    [anon_sym_ramp] = ACTIONS(268),
    [anon_sym_GT_EQ] = ACTIONS(266),
    [anon_sym_LT_EQ] = ACTIONS(266),
    [anon_sym_LPAREN] = ACTIONS(266),
    [anon_sym_GT_GT] = ACTIONS(266),
    [anon_sym_LT] = ACTIONS(268),
  },
  [52] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_CARET] = ACTIONS(71),
    [sym_float] = ACTIONS(274),
    [anon_sym_COMMA] = ACTIONS(274),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(274),
    [anon_sym_r] = ACTIONS(276),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_rec] = ACTIONS(276),
    [anon_sym_l] = ACTIONS(276),
    [anon_sym_amp] = ACTIONS(276),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(274),
    [anon_sym_AMP] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(87),
    [sym_identifier] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(89),
    [anon_sym_hz] = ACTIONS(276),
    [anon_sym_SEMI] = ACTIONS(274),
    [sym_reset_statement] = ACTIONS(276),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(274),
    [sym_integer] = ACTIONS(276),
    [sym_signal] = ACTIONS(274),
    [ts_builtin_sym_end] = ACTIONS(274),
    [anon_sym_AMP_AMP] = ACTIONS(95),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_set] = ACTIONS(276),
    [anon_sym_ramp] = ACTIONS(276),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(274),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(91),
  },
  [53] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_CARET] = ACTIONS(266),
    [sym_float] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(266),
    [anon_sym_r] = ACTIONS(268),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_rec] = ACTIONS(268),
    [anon_sym_l] = ACTIONS(268),
    [anon_sym_amp] = ACTIONS(268),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(266),
    [anon_sym_AMP] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(268),
    [sym_identifier] = ACTIONS(268),
    [anon_sym_PERCENT] = ACTIONS(89),
    [anon_sym_hz] = ACTIONS(268),
    [anon_sym_SEMI] = ACTIONS(266),
    [sym_reset_statement] = ACTIONS(268),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(266),
    [sym_integer] = ACTIONS(268),
    [sym_signal] = ACTIONS(266),
    [ts_builtin_sym_end] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(266),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_set] = ACTIONS(268),
    [anon_sym_ramp] = ACTIONS(268),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(266),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(91),
  },
  [54] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_CARET] = ACTIONS(266),
    [sym_float] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(266),
    [anon_sym_r] = ACTIONS(268),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_rec] = ACTIONS(268),
    [anon_sym_l] = ACTIONS(268),
    [anon_sym_amp] = ACTIONS(268),
    [anon_sym_EQ_EQ] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(266),
    [anon_sym_AMP] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(268),
    [anon_sym_PIPE] = ACTIONS(268),
    [sym_identifier] = ACTIONS(268),
    [anon_sym_PERCENT] = ACTIONS(89),
    [anon_sym_hz] = ACTIONS(268),
    [anon_sym_SEMI] = ACTIONS(266),
    [sym_reset_statement] = ACTIONS(268),
    [anon_sym_BANG_EQ] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(268),
    [anon_sym_LT_LT] = ACTIONS(266),
    [anon_sym_TILDE] = ACTIONS(266),
    [sym_integer] = ACTIONS(268),
    [sym_signal] = ACTIONS(266),
    [ts_builtin_sym_end] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(266),
    [anon_sym_PLUS] = ACTIONS(266),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_set] = ACTIONS(268),
    [anon_sym_ramp] = ACTIONS(268),
    [anon_sym_GT_EQ] = ACTIONS(266),
    [anon_sym_LT_EQ] = ACTIONS(266),
    [anon_sym_LPAREN] = ACTIONS(266),
    [anon_sym_GT_GT] = ACTIONS(266),
    [anon_sym_LT] = ACTIONS(268),
  },
  [55] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_CARET] = ACTIONS(71),
    [sym_float] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(266),
    [anon_sym_r] = ACTIONS(268),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_rec] = ACTIONS(268),
    [anon_sym_l] = ACTIONS(268),
    [anon_sym_amp] = ACTIONS(268),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(266),
    [anon_sym_AMP] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(268),
    [sym_identifier] = ACTIONS(268),
    [anon_sym_PERCENT] = ACTIONS(89),
    [anon_sym_hz] = ACTIONS(268),
    [anon_sym_SEMI] = ACTIONS(266),
    [sym_reset_statement] = ACTIONS(268),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(266),
    [sym_integer] = ACTIONS(268),
    [sym_signal] = ACTIONS(266),
    [ts_builtin_sym_end] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(266),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_set] = ACTIONS(268),
    [anon_sym_ramp] = ACTIONS(268),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(266),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(91),
  },
  [56] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_CARET] = ACTIONS(71),
    [sym_float] = ACTIONS(274),
    [anon_sym_COMMA] = ACTIONS(274),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(274),
    [anon_sym_r] = ACTIONS(276),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_rec] = ACTIONS(276),
    [anon_sym_l] = ACTIONS(276),
    [anon_sym_amp] = ACTIONS(276),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(274),
    [anon_sym_AMP] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(87),
    [sym_identifier] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(89),
    [anon_sym_hz] = ACTIONS(276),
    [anon_sym_SEMI] = ACTIONS(274),
    [sym_reset_statement] = ACTIONS(276),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(274),
    [sym_integer] = ACTIONS(276),
    [sym_signal] = ACTIONS(274),
    [ts_builtin_sym_end] = ACTIONS(274),
    [anon_sym_AMP_AMP] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_set] = ACTIONS(276),
    [anon_sym_ramp] = ACTIONS(276),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(274),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(91),
  },
  [57] = {
    [aux_sym_comparison_operator_repeat1] = STATE(57),
    [anon_sym_CARET] = ACTIONS(270),
    [sym_float] = ACTIONS(270),
    [anon_sym_COMMA] = ACTIONS(270),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(270),
    [anon_sym_r] = ACTIONS(272),
    [anon_sym_SLASH] = ACTIONS(272),
    [anon_sym_rec] = ACTIONS(272),
    [anon_sym_l] = ACTIONS(272),
    [anon_sym_amp] = ACTIONS(272),
    [anon_sym_EQ_EQ] = ACTIONS(278),
    [anon_sym_RPAREN] = ACTIONS(270),
    [anon_sym_AMP] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [anon_sym_PIPE] = ACTIONS(272),
    [sym_identifier] = ACTIONS(272),
    [anon_sym_PERCENT] = ACTIONS(270),
    [anon_sym_hz] = ACTIONS(272),
    [anon_sym_SEMI] = ACTIONS(270),
    [sym_reset_statement] = ACTIONS(272),
    [anon_sym_BANG_EQ] = ACTIONS(278),
    [anon_sym_GT] = ACTIONS(281),
    [anon_sym_LT_LT] = ACTIONS(270),
    [anon_sym_TILDE] = ACTIONS(270),
    [sym_integer] = ACTIONS(272),
    [sym_signal] = ACTIONS(270),
    [ts_builtin_sym_end] = ACTIONS(270),
    [anon_sym_AMP_AMP] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(270),
    [anon_sym_STAR] = ACTIONS(270),
    [anon_sym_set] = ACTIONS(272),
    [anon_sym_ramp] = ACTIONS(272),
    [anon_sym_GT_EQ] = ACTIONS(278),
    [anon_sym_LT_EQ] = ACTIONS(278),
    [anon_sym_LPAREN] = ACTIONS(270),
    [anon_sym_GT_GT] = ACTIONS(270),
    [anon_sym_LT] = ACTIONS(281),
  },
  [58] = {
    [anon_sym_CARET] = ACTIONS(284),
    [sym_float] = ACTIONS(284),
    [anon_sym_COMMA] = ACTIONS(284),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(284),
    [anon_sym_r] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(286),
    [anon_sym_rec] = ACTIONS(286),
    [anon_sym_l] = ACTIONS(286),
    [anon_sym_amp] = ACTIONS(286),
    [anon_sym_EQ_EQ] = ACTIONS(284),
    [anon_sym_RPAREN] = ACTIONS(284),
    [anon_sym_AMP] = ACTIONS(286),
    [anon_sym_DASH] = ACTIONS(286),
    [anon_sym_PIPE] = ACTIONS(286),
    [sym_identifier] = ACTIONS(286),
    [anon_sym_PERCENT] = ACTIONS(284),
    [anon_sym_hz] = ACTIONS(286),
    [anon_sym_SEMI] = ACTIONS(284),
    [sym_reset_statement] = ACTIONS(286),
    [anon_sym_BANG_EQ] = ACTIONS(284),
    [anon_sym_GT] = ACTIONS(286),
    [anon_sym_LT_LT] = ACTIONS(284),
    [anon_sym_TILDE] = ACTIONS(284),
    [sym_integer] = ACTIONS(286),
    [sym_signal] = ACTIONS(284),
    [ts_builtin_sym_end] = ACTIONS(284),
    [anon_sym_AMP_AMP] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(284),
    [anon_sym_STAR] = ACTIONS(284),
    [anon_sym_set] = ACTIONS(286),
    [anon_sym_ramp] = ACTIONS(286),
    [anon_sym_GT_EQ] = ACTIONS(284),
    [anon_sym_LT_EQ] = ACTIONS(284),
    [anon_sym_LPAREN] = ACTIONS(284),
    [anon_sym_GT_GT] = ACTIONS(284),
    [anon_sym_LT] = ACTIONS(286),
  },
  [59] = {
    [sym_comparison_operator] = STATE(45),
    [aux_sym_arguments_repeat1] = STATE(62),
    [sym__expressions] = STATE(45),
    [sym_parenthesized] = STATE(45),
    [sym_call_expression] = STATE(45),
    [sym_boolean_operator] = STATE(45),
    [sym_binary_operator] = STATE(45),
    [sym_unary_operator] = STATE(45),
    [sym_signal] = ACTIONS(125),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(11),
    [sym_float] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_integer] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [sym_comparison_operator] = STATE(45),
    [aux_sym_arguments_repeat1] = STATE(60),
    [sym__expressions] = STATE(45),
    [sym_parenthesized] = STATE(45),
    [sym_call_expression] = STATE(45),
    [sym_boolean_operator] = STATE(45),
    [sym_binary_operator] = STATE(45),
    [sym_unary_operator] = STATE(45),
    [sym_signal] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(291),
    [sym_float] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(291),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(293),
    [anon_sym_TILDE] = ACTIONS(296),
    [anon_sym_LPAREN] = ACTIONS(299),
    [sym_integer] = ACTIONS(302),
  },
  [61] = {
    [aux_sym_arguments_repeat2] = STATE(64),
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_COMMA] = ACTIONS(252),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [sym_comparison_operator] = STATE(45),
    [aux_sym_arguments_repeat1] = STATE(60),
    [sym__expressions] = STATE(45),
    [sym_parenthesized] = STATE(45),
    [sym_call_expression] = STATE(45),
    [sym_boolean_operator] = STATE(45),
    [sym_binary_operator] = STATE(45),
    [sym_unary_operator] = STATE(45),
    [sym_signal] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(307),
    [sym_float] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(307),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_integer] = ACTIONS(129),
  },
  [63] = {
    [anon_sym_CARET] = ACTIONS(309),
    [sym_float] = ACTIONS(309),
    [anon_sym_COMMA] = ACTIONS(309),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(309),
    [anon_sym_r] = ACTIONS(311),
    [anon_sym_SLASH] = ACTIONS(311),
    [anon_sym_rec] = ACTIONS(311),
    [anon_sym_l] = ACTIONS(311),
    [anon_sym_amp] = ACTIONS(311),
    [anon_sym_EQ_EQ] = ACTIONS(309),
    [anon_sym_RPAREN] = ACTIONS(309),
    [anon_sym_AMP] = ACTIONS(311),
    [anon_sym_DASH] = ACTIONS(311),
    [anon_sym_PIPE] = ACTIONS(311),
    [sym_identifier] = ACTIONS(311),
    [anon_sym_PERCENT] = ACTIONS(309),
    [anon_sym_hz] = ACTIONS(311),
    [anon_sym_SEMI] = ACTIONS(309),
    [sym_reset_statement] = ACTIONS(311),
    [anon_sym_BANG_EQ] = ACTIONS(309),
    [anon_sym_GT] = ACTIONS(311),
    [anon_sym_LT_LT] = ACTIONS(309),
    [anon_sym_TILDE] = ACTIONS(309),
    [sym_integer] = ACTIONS(311),
    [sym_signal] = ACTIONS(309),
    [ts_builtin_sym_end] = ACTIONS(309),
    [anon_sym_AMP_AMP] = ACTIONS(309),
    [anon_sym_PLUS] = ACTIONS(309),
    [anon_sym_STAR] = ACTIONS(309),
    [anon_sym_set] = ACTIONS(311),
    [anon_sym_ramp] = ACTIONS(311),
    [anon_sym_GT_EQ] = ACTIONS(309),
    [anon_sym_LT_EQ] = ACTIONS(309),
    [anon_sym_LPAREN] = ACTIONS(309),
    [anon_sym_GT_GT] = ACTIONS(309),
    [anon_sym_LT] = ACTIONS(311),
  },
  [64] = {
    [aux_sym_arguments_repeat2] = STATE(64),
    [anon_sym_COMMA] = ACTIONS(313),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(307),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, SHIFT(13),
  [9] = {.count = 1, .reusable = false}, SHIFT(5),
  [11] = {.count = 1, .reusable = true}, SHIFT(10),
  [13] = {.count = 1, .reusable = false}, SHIFT(9),
  [15] = {.count = 1, .reusable = false}, SHIFT(11),
  [17] = {.count = 1, .reusable = false}, SHIFT(13),
  [19] = {.count = 1, .reusable = false}, SHIFT(2),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [23] = {.count = 1, .reusable = false}, SHIFT(12),
  [25] = {.count = 1, .reusable = false}, SHIFT(6),
  [27] = {.count = 1, .reusable = false}, SHIFT(7),
  [29] = {.count = 1, .reusable = false}, SHIFT(8),
  [31] = {.count = 1, .reusable = true}, SHIFT(4),
  [33] = {.count = 1, .reusable = true}, SHIFT(16),
  [35] = {.count = 1, .reusable = true}, SHIFT(17),
  [37] = {.count = 1, .reusable = true}, SHIFT(18),
  [39] = {.count = 1, .reusable = true}, SHIFT(8),
  [41] = {.count = 1, .reusable = false}, SHIFT(18),
  [43] = {.count = 1, .reusable = false}, REDUCE(aux_sym_program_repeat1, 1),
  [45] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 1),
  [47] = {.count = 1, .reusable = true}, SHIFT(19),
  [49] = {.count = 1, .reusable = false}, SHIFT(20),
  [51] = {.count = 1, .reusable = true}, SHIFT(20),
  [53] = {.count = 1, .reusable = true}, SHIFT(21),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym__expressions, 1, .production_id = 1),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym__expressions, 1, .production_id = 1),
  [59] = {.count = 1, .reusable = true}, SHIFT(22),
  [61] = {.count = 1, .reusable = true}, SHIFT(24),
  [63] = {.count = 1, .reusable = true}, SHIFT(25),
  [65] = {.count = 1, .reusable = false}, SHIFT(25),
  [67] = {.count = 1, .reusable = true}, SHIFT(26),
  [69] = {.count = 1, .reusable = true}, SHIFT(27),
  [71] = {.count = 1, .reusable = true}, SHIFT(28),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [75] = {.count = 1, .reusable = true}, SHIFT(32),
  [77] = {.count = 1, .reusable = false}, REDUCE(sym_expression_statement, 1),
  [79] = {.count = 1, .reusable = false}, SHIFT(29),
  [81] = {.count = 1, .reusable = true}, SHIFT(30),
  [83] = {.count = 1, .reusable = false}, SHIFT(33),
  [85] = {.count = 1, .reusable = false}, SHIFT(34),
  [87] = {.count = 1, .reusable = false}, SHIFT(35),
  [89] = {.count = 1, .reusable = true}, SHIFT(29),
  [91] = {.count = 1, .reusable = false}, SHIFT(30),
  [93] = {.count = 1, .reusable = true}, SHIFT(31),
  [95] = {.count = 1, .reusable = true}, SHIFT(36),
  [97] = {.count = 1, .reusable = true}, SHIFT(34),
  [99] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [103] = {.count = 1, .reusable = false}, SHIFT(39),
  [105] = {.count = 1, .reusable = true}, SHIFT(39),
  [107] = {.count = 1, .reusable = false}, SHIFT(40),
  [109] = {.count = 1, .reusable = true}, SHIFT(40),
  [111] = {.count = 1, .reusable = true}, SHIFT(41),
  [113] = {.count = 1, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2),
  [115] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_set_statement, 2),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_set_statement, 2),
  [121] = {.count = 1, .reusable = true}, SHIFT(42),
  [123] = {.count = 1, .reusable = false}, SHIFT(42),
  [125] = {.count = 1, .reusable = true}, SHIFT(45),
  [127] = {.count = 1, .reusable = true}, SHIFT(43),
  [129] = {.count = 1, .reusable = false}, SHIFT(45),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 2),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2, .production_id = 2),
  [135] = {.count = 1, .reusable = true}, SHIFT(46),
  [137] = {.count = 1, .reusable = false}, SHIFT(46),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_unary_operator, 2),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_unary_operator, 2),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_rec_statement, 2),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_rec_statement, 2),
  [147] = {.count = 1, .reusable = true}, SHIFT(47),
  [149] = {.count = 1, .reusable = false}, SHIFT(47),
  [151] = {.count = 1, .reusable = true}, SHIFT(48),
  [153] = {.count = 1, .reusable = false}, SHIFT(48),
  [155] = {.count = 1, .reusable = true}, SHIFT(49),
  [157] = {.count = 1, .reusable = false}, SHIFT(49),
  [159] = {.count = 1, .reusable = true}, SHIFT(50),
  [161] = {.count = 1, .reusable = false}, SHIFT(50),
  [163] = {.count = 1, .reusable = true}, SHIFT(51),
  [165] = {.count = 1, .reusable = false}, SHIFT(51),
  [167] = {.count = 1, .reusable = true}, SHIFT(52),
  [169] = {.count = 1, .reusable = false}, SHIFT(52),
  [171] = {.count = 1, .reusable = true}, SHIFT(53),
  [173] = {.count = 1, .reusable = false}, SHIFT(53),
  [175] = {.count = 1, .reusable = true}, SHIFT(54),
  [177] = {.count = 1, .reusable = false}, SHIFT(54),
  [179] = {.count = 1, .reusable = true}, SHIFT(55),
  [181] = {.count = 1, .reusable = false}, SHIFT(55),
  [183] = {.count = 1, .reusable = true}, SHIFT(56),
  [185] = {.count = 1, .reusable = false}, SHIFT(56),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_comparison_operator, 2),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_comparison_operator, 2),
  [191] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [197] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [203] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [206] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [209] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [212] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [215] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [218] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [221] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [224] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [227] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [230] = {.count = 1, .reusable = false}, REDUCE(sym_amp_statement, 3),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_amp_statement, 3),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym_hz_statement, 3),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym_hz_statement, 3),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized, 3),
  [240] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized, 3),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_ramp_statement, 3),
  [244] = {.count = 1, .reusable = false}, REDUCE(sym_ramp_statement, 3),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [248] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [250] = {.count = 1, .reusable = true}, SHIFT(58),
  [252] = {.count = 1, .reusable = true}, SHIFT(59),
  [254] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 1),
  [256] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 1),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym_right_channel_statement, 3),
  [260] = {.count = 1, .reusable = false}, REDUCE(sym_right_channel_statement, 3),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_left_channel_statement, 3),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym_left_channel_statement, 3),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_binary_operator, 3),
  [268] = {.count = 1, .reusable = false}, REDUCE(sym_binary_operator, 3),
  [270] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [272] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_operator, 3),
  [276] = {.count = 1, .reusable = false}, REDUCE(sym_boolean_operator, 3),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(30),
  [281] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(30),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [286] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [288] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(45),
  [291] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [293] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(8),
  [296] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(10),
  [299] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(4),
  [302] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(45),
  [305] = {.count = 1, .reusable = true}, SHIFT(63),
  [307] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [311] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [313] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(59),
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
