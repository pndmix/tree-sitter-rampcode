#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 62
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_define = 3,
  aux_sym_define_statement_token1 = 4,
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
  sym_function_name = 38,
  sym_macro_name = 39,
  sym_comment = 40,
  sym_program = 41,
  sym_define_statement = 42,
  sym_hz_statement = 43,
  sym_amp_statement = 44,
  sym_ramp_statement = 45,
  sym_channel_statement = 46,
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
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_define] = "define",
  [aux_sym_define_statement_token1] = "name",
  [anon_sym_hz] = "hz",
  [anon_sym_amp] = "amp",
  [sym_reset_statement] = "reset_statement",
  [anon_sym_ramp] = "ramp",
  [anon_sym_l] = "left",
  [anon_sym_r] = "right",
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
  [sym_function_name] = "function_name",
  [sym_macro_name] = "macro_name",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym_define_statement] = "define_statement",
  [sym_hz_statement] = "hz_statement",
  [sym_amp_statement] = "amp_statement",
  [sym_ramp_statement] = "ramp_statement",
  [sym_channel_statement] = "channel_statement",
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
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_define_statement_token1] = {
    .visible = true,
    .named = true,
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
    .named = true,
  },
  [anon_sym_r] = {
    .visible = true,
    .named = true,
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
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_name] = {
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
  [sym_define_statement] = {
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
  [sym_channel_statement] = {
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
      if (lookahead == 'a')
        ADVANCE(21);
      if (lookahead == 'c')
        ADVANCE(22);
      if (lookahead == 'd')
        ADVANCE(23);
      if (lookahead == 'e')
        ADVANCE(24);
      if (lookahead == 'f')
        ADVANCE(25);
      if (lookahead == 'h')
        ADVANCE(26);
      if (lookahead == 'i')
        ADVANCE(27);
      if (lookahead == 'l')
        ADVANCE(28);
      if (lookahead == 'm')
        ADVANCE(29);
      if (lookahead == 'p')
        ADVANCE(30);
      if (lookahead == 'r')
        ADVANCE(31);
      if (lookahead == 's')
        ADVANCE(32);
      if (lookahead == 't')
        ADVANCE(33);
      if (lookahead == '|')
        ADVANCE(34);
      if (lookahead == '~')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(36);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '=')
        ADVANCE(39);
      END_STATE();
    case 3:
      if (lookahead == 'v')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(42);
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
        ADVANCE(43);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(45);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
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
        ADVANCE(47);
      if (lookahead == '=')
        ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == '=')
        ADVANCE(49);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(50);
      if (lookahead == '>')
        ADVANCE(51);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(52);
      if (lookahead == 'c')
        ADVANCE(53);
      if (lookahead == 'm')
        ADVANCE(54);
      if (lookahead == 's')
        ADVANCE(55);
      if (lookahead == 't')
        ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(57);
      if (lookahead == 'e')
        ADVANCE(58);
      if (lookahead == 'o')
        ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x')
        ADVANCE(61);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(62);
      if (lookahead == 'l')
        ADVANCE(63);
      if (lookahead == 'm')
        ADVANCE(64);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z')
        ADVANCE(65);
      if (('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(38);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(66);
      if (lookahead == 'n')
        ADVANCE(67);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'o')
        ADVANCE(68);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(69);
      if (lookahead == 'i')
        ADVANCE(70);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(71);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'a')
        ADVANCE(72);
      if (lookahead == 'e')
        ADVANCE(73);
      if (lookahead == 'i')
        ADVANCE(74);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(75);
      if (lookahead == 'q')
        ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(75);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(76);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 36:
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
        ADVANCE(77);
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
      if (lookahead == 'a')
        ADVANCE(21);
      if (lookahead == 'c')
        ADVANCE(22);
      if (lookahead == 'd')
        ADVANCE(23);
      if (lookahead == 'e')
        ADVANCE(24);
      if (lookahead == 'f')
        ADVANCE(25);
      if (lookahead == 'h')
        ADVANCE(26);
      if (lookahead == 'i')
        ADVANCE(27);
      if (lookahead == 'l')
        ADVANCE(28);
      if (lookahead == 'm')
        ADVANCE(29);
      if (lookahead == 'p')
        ADVANCE(30);
      if (lookahead == 'r')
        ADVANCE(31);
      if (lookahead == 's')
        ADVANCE(32);
      if (lookahead == 't')
        ADVANCE(33);
      if (lookahead == '|')
        ADVANCE(34);
      if (lookahead == '~')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(36);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '1')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_macro_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '*')
        ADVANCE(79);
      if (lookahead != 0)
        ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(81);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(67);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(83);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(84);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(67);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_hz);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x')
        ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w')
        ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(90);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(67);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(83);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_signal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 79:
      if (lookahead == '/')
        ADVANCE(91);
      if (lookahead != 0)
        ADVANCE(45);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_amp);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(67);
      if (lookahead == 'o')
        ADVANCE(95);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(96);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(97);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(98);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
        ADVANCE(99);
      if (lookahead == 'h')
        ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(100);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(99);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 96:
      if (lookahead == '0' ||
          lookahead == 'p')
        ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_ramp);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(101);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_function_name);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_reset_statement);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_define);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 103:
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
        ADVANCE(77);
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
      if (lookahead == 'a')
        ADVANCE(104);
      if (lookahead == 'c')
        ADVANCE(105);
      if (lookahead == 'd')
        ADVANCE(106);
      if (lookahead == 'e')
        ADVANCE(107);
      if (lookahead == 'f')
        ADVANCE(108);
      if (lookahead == 'h')
        ADVANCE(109);
      if (lookahead == 'i')
        ADVANCE(110);
      if (lookahead == 'l')
        ADVANCE(111);
      if (lookahead == 'm')
        ADVANCE(112);
      if (lookahead == 'p')
        ADVANCE(113);
      if (lookahead == 'r')
        ADVANCE(114);
      if (lookahead == 's')
        ADVANCE(115);
      if (lookahead == 't')
        ADVANCE(116);
      if (lookahead == '|')
        ADVANCE(34);
      if (lookahead == '~')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(103);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      END_STATE();
    case 104:
      if (lookahead == 'b')
        ADVANCE(117);
      if (lookahead == 'c')
        ADVANCE(118);
      if (lookahead == 'm')
        ADVANCE(119);
      if (lookahead == 's')
        ADVANCE(120);
      if (lookahead == 't')
        ADVANCE(121);
      END_STATE();
    case 105:
      if (lookahead == 'b')
        ADVANCE(122);
      if (lookahead == 'e')
        ADVANCE(123);
      if (lookahead == 'o')
        ADVANCE(124);
      END_STATE();
    case 106:
      if (lookahead == 'e')
        ADVANCE(125);
      END_STATE();
    case 107:
      if (lookahead == 'x')
        ADVANCE(126);
      END_STATE();
    case 108:
      if (lookahead == 'a')
        ADVANCE(127);
      if (lookahead == 'l')
        ADVANCE(128);
      if (lookahead == 'm')
        ADVANCE(129);
      END_STATE();
    case 109:
      if (lookahead == 'z')
        ADVANCE(130);
      END_STATE();
    case 110:
      if (lookahead == 'f')
        ADVANCE(99);
      if (lookahead == 'n')
        ADVANCE(131);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'o')
        ADVANCE(132);
      END_STATE();
    case 112:
      if (lookahead == 'a')
        ADVANCE(133);
      if (lookahead == 'i')
        ADVANCE(134);
      END_STATE();
    case 113:
      if (lookahead == 'o')
        ADVANCE(135);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'a')
        ADVANCE(136);
      if (lookahead == 'e')
        ADVANCE(137);
      if (lookahead == 'i')
        ADVANCE(138);
      END_STATE();
    case 115:
      if (lookahead == 'i')
        ADVANCE(139);
      if (lookahead == 'q')
        ADVANCE(122);
      END_STATE();
    case 116:
      if (lookahead == 'a')
        ADVANCE(139);
      END_STATE();
    case 117:
      if (lookahead == 's')
        ADVANCE(99);
      END_STATE();
    case 118:
      if (lookahead == 'o')
        ADVANCE(124);
      END_STATE();
    case 119:
      if (lookahead == 'p')
        ADVANCE(140);
      END_STATE();
    case 120:
      if (lookahead == 'i')
        ADVANCE(139);
      END_STATE();
    case 121:
      if (lookahead == 'a')
        ADVANCE(141);
      END_STATE();
    case 122:
      if (lookahead == 'r')
        ADVANCE(131);
      END_STATE();
    case 123:
      if (lookahead == 'i')
        ADVANCE(142);
      END_STATE();
    case 124:
      if (lookahead == 's')
        ADVANCE(143);
      END_STATE();
    case 125:
      if (lookahead == 'f')
        ADVANCE(144);
      END_STATE();
    case 126:
      if (lookahead == 'p')
        ADVANCE(145);
      END_STATE();
    case 127:
      if (lookahead == 'c')
        ADVANCE(131);
      END_STATE();
    case 128:
      if (lookahead == 'o')
        ADVANCE(146);
      END_STATE();
    case 129:
      if (lookahead == 'o')
        ADVANCE(147);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_hz);
      END_STATE();
    case 131:
      if (lookahead == 't')
        ADVANCE(99);
      END_STATE();
    case 132:
      if (lookahead == 'g')
        ADVANCE(148);
      END_STATE();
    case 133:
      if (lookahead == 'x')
        ADVANCE(99);
      END_STATE();
    case 134:
      if (lookahead == 'n')
        ADVANCE(99);
      END_STATE();
    case 135:
      if (lookahead == 'w')
        ADVANCE(99);
      END_STATE();
    case 136:
      if (lookahead == 'm')
        ADVANCE(149);
      END_STATE();
    case 137:
      if (lookahead == 's')
        ADVANCE(150);
      END_STATE();
    case 138:
      if (lookahead == 'n')
        ADVANCE(131);
      END_STATE();
    case 139:
      if (lookahead == 'n')
        ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_amp);
      END_STATE();
    case 141:
      if (lookahead == 'n')
        ADVANCE(151);
      END_STATE();
    case 142:
      if (lookahead == 'l')
        ADVANCE(99);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'h')
        ADVANCE(99);
      END_STATE();
    case 144:
      if (lookahead == 'i')
        ADVANCE(152);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'm')
        ADVANCE(153);
      END_STATE();
    case 146:
      if (lookahead == 'a')
        ADVANCE(131);
      if (lookahead == 'o')
        ADVANCE(154);
      END_STATE();
    case 147:
      if (lookahead == 'd')
        ADVANCE(99);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == '1')
        ADVANCE(96);
      END_STATE();
    case 149:
      if (lookahead == 'p')
        ADVANCE(155);
      END_STATE();
    case 150:
      if (lookahead == 'e')
        ADVANCE(156);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == '2' ||
          lookahead == 'h')
        ADVANCE(99);
      END_STATE();
    case 152:
      if (lookahead == 'n')
        ADVANCE(157);
      END_STATE();
    case 153:
      if (lookahead == '1')
        ADVANCE(99);
      END_STATE();
    case 154:
      if (lookahead == 'r')
        ADVANCE(99);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_ramp);
      END_STATE();
    case 156:
      if (lookahead == 't')
        ADVANCE(158);
      END_STATE();
    case 157:
      if (lookahead == 'e')
        ADVANCE(159);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_reset_statement);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 160:
      if (lookahead == '-')
        ADVANCE(161);
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == ':' ||
          lookahead == '@')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(160);
      END_STATE();
    case 161:
      if (lookahead == '-')
        ADVANCE(43);
      END_STATE();
    case 162:
      if (lookahead == '*')
        ADVANCE(45);
      END_STATE();
    case 163:
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
      if (lookahead == 'a')
        ADVANCE(104);
      if (lookahead == 'c')
        ADVANCE(105);
      if (lookahead == 'd')
        ADVANCE(106);
      if (lookahead == 'e')
        ADVANCE(107);
      if (lookahead == 'f')
        ADVANCE(108);
      if (lookahead == 'h')
        ADVANCE(109);
      if (lookahead == 'i')
        ADVANCE(110);
      if (lookahead == 'l')
        ADVANCE(111);
      if (lookahead == 'm')
        ADVANCE(112);
      if (lookahead == 'p')
        ADVANCE(113);
      if (lookahead == 'r')
        ADVANCE(114);
      if (lookahead == 's')
        ADVANCE(115);
      if (lookahead == 't')
        ADVANCE(116);
      if (lookahead == '|')
        ADVANCE(34);
      if (lookahead == '~')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(164);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      END_STATE();
    case 164:
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
        ADVANCE(77);
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
      if (lookahead == 'a')
        ADVANCE(104);
      if (lookahead == 'c')
        ADVANCE(105);
      if (lookahead == 'd')
        ADVANCE(106);
      if (lookahead == 'e')
        ADVANCE(107);
      if (lookahead == 'f')
        ADVANCE(108);
      if (lookahead == 'h')
        ADVANCE(109);
      if (lookahead == 'i')
        ADVANCE(110);
      if (lookahead == 'l')
        ADVANCE(111);
      if (lookahead == 'm')
        ADVANCE(112);
      if (lookahead == 'p')
        ADVANCE(113);
      if (lookahead == 'r')
        ADVANCE(114);
      if (lookahead == 's')
        ADVANCE(115);
      if (lookahead == 't')
        ADVANCE(116);
      if (lookahead == '|')
        ADVANCE(34);
      if (lookahead == '~')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(164);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      END_STATE();
    case 165:
      if (lookahead == '-')
        ADVANCE(161);
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_define_statement_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 167:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(77);
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
      if (lookahead == 'a')
        ADVANCE(168);
      if (lookahead == 'c')
        ADVANCE(105);
      if (lookahead == 'e')
        ADVANCE(107);
      if (lookahead == 'f')
        ADVANCE(108);
      if (lookahead == 'i')
        ADVANCE(110);
      if (lookahead == 'l')
        ADVANCE(169);
      if (lookahead == 'm')
        ADVANCE(112);
      if (lookahead == 'p')
        ADVANCE(113);
      if (lookahead == 'r')
        ADVANCE(170);
      if (lookahead == 's')
        ADVANCE(115);
      if (lookahead == 't')
        ADVANCE(116);
      if (lookahead == '|')
        ADVANCE(34);
      if (lookahead == '~')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(167);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      END_STATE();
    case 168:
      if (lookahead == 'b')
        ADVANCE(117);
      if (lookahead == 'c')
        ADVANCE(118);
      if (lookahead == 's')
        ADVANCE(120);
      if (lookahead == 't')
        ADVANCE(121);
      END_STATE();
    case 169:
      if (lookahead == 'o')
        ADVANCE(132);
      END_STATE();
    case 170:
      if (lookahead == 'i')
        ADVANCE(138);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 103},
  [2] = {.lex_state = 160},
  [3] = {.lex_state = 163},
  [4] = {.lex_state = 160},
  [5] = {.lex_state = 163},
  [6] = {.lex_state = 103},
  [7] = {.lex_state = 165},
  [8] = {.lex_state = 160},
  [9] = {.lex_state = 103},
  [10] = {.lex_state = 160},
  [11] = {.lex_state = 103},
  [12] = {.lex_state = 103},
  [13] = {.lex_state = 103},
  [14] = {.lex_state = 103},
  [15] = {.lex_state = 103},
  [16] = {.lex_state = 167},
  [17] = {.lex_state = 164},
  [18] = {.lex_state = 103},
  [19] = {.lex_state = 103},
  [20] = {.lex_state = 103},
  [21] = {.lex_state = 103},
  [22] = {.lex_state = 164},
  [23] = {.lex_state = 103},
  [24] = {.lex_state = 167},
  [25] = {.lex_state = 103},
  [26] = {.lex_state = 103},
  [27] = {.lex_state = 103},
  [28] = {.lex_state = 103},
  [29] = {.lex_state = 103},
  [30] = {.lex_state = 103},
  [31] = {.lex_state = 103},
  [32] = {.lex_state = 103},
  [33] = {.lex_state = 103},
  [34] = {.lex_state = 103},
  [35] = {.lex_state = 164},
  [36] = {.lex_state = 103},
  [37] = {.lex_state = 164},
  [38] = {.lex_state = 167},
  [39] = {.lex_state = 167},
  [40] = {.lex_state = 103},
  [41] = {.lex_state = 103},
  [42] = {.lex_state = 103},
  [43] = {.lex_state = 103},
  [44] = {.lex_state = 164},
  [45] = {.lex_state = 164},
  [46] = {.lex_state = 164},
  [47] = {.lex_state = 164},
  [48] = {.lex_state = 164},
  [49] = {.lex_state = 164},
  [50] = {.lex_state = 164},
  [51] = {.lex_state = 164},
  [52] = {.lex_state = 164},
  [53] = {.lex_state = 164},
  [54] = {.lex_state = 164},
  [55] = {.lex_state = 164},
  [56] = {.lex_state = 103},
  [57] = {.lex_state = 167},
  [58] = {.lex_state = 167},
  [59] = {.lex_state = 167},
  [60] = {.lex_state = 164},
  [61] = {.lex_state = 167},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_CARET] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_function_name] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_amp] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_macro_name] = ACTIONS(1),
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
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_ramp] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
  },
  [1] = {
    [sym_hz_statement] = STATE(6),
    [sym_amp_statement] = STATE(6),
    [sym_boolean_operator] = STATE(13),
    [sym_binary_operator] = STATE(13),
    [aux_sym_program_repeat1] = STATE(12),
    [sym_define_statement] = STATE(6),
    [sym_expression_statement] = STATE(6),
    [sym__expressions] = STATE(13),
    [sym_parenthesized] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_program] = STATE(14),
    [sym_ramp_statement] = STATE(6),
    [sym_channel_statement] = STATE(6),
    [sym_unary_operator] = STATE(13),
    [sym_comparison_operator] = STATE(13),
    [anon_sym_hz] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [sym_function_name] = ACTIONS(9),
    [sym_reset_statement] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_r] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [anon_sym_l] = ACTIONS(15),
    [anon_sym_amp] = ACTIONS(19),
    [sym_signal] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [anon_sym_define] = ACTIONS(23),
    [sym_macro_name] = ACTIONS(25),
    [anon_sym_ramp] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
  },
  [2] = {
    [sym_reserved_word] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_arguments] = STATE(17),
    [anon_sym_CARET] = ACTIONS(33),
    [sym_float] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(33),
    [sym_function_name] = ACTIONS(33),
    [anon_sym_PIPE_PIPE] = ACTIONS(33),
    [anon_sym_r] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_l] = ACTIONS(35),
    [anon_sym_amp] = ACTIONS(33),
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(35),
    [sym_macro_name] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(33),
    [anon_sym_hz] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(33),
    [sym_reset_statement] = ACTIONS(33),
    [anon_sym_BANG_EQ] = ACTIONS(33),
    [anon_sym_LPAREN2] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_LT_LT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(33),
    [sym_integer] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(35),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_AMP_AMP] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_define] = ACTIONS(33),
    [anon_sym_ramp] = ACTIONS(33),
    [anon_sym_GT_EQ] = ACTIONS(33),
    [anon_sym_LT_EQ] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_GT_GT] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
  },
  [4] = {
    [sym_reserved_word] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_arguments] = STATE(17),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN2] = ACTIONS(37),
  },
  [6] = {
    [anon_sym_hz] = ACTIONS(41),
    [sym_float] = ACTIONS(41),
    [sym_reset_statement] = ACTIONS(41),
    [sym_function_name] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_r] = ACTIONS(45),
    [sym_integer] = ACTIONS(45),
    [anon_sym_l] = ACTIONS(45),
    [anon_sym_amp] = ACTIONS(41),
    [sym_signal] = ACTIONS(45),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [anon_sym_define] = ACTIONS(41),
    [sym_macro_name] = ACTIONS(45),
    [anon_sym_ramp] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [7] = {
    [aux_sym_define_statement_token1] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_reserved_word] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_call_expression] = STATE(22),
    [sym_boolean_operator] = STATE(22),
    [sym_binary_operator] = STATE(22),
    [sym_unary_operator] = STATE(22),
    [sym_comparison_operator] = STATE(22),
    [sym__expressions] = STATE(22),
    [sym_parenthesized] = STATE(22),
    [sym_signal] = ACTIONS(51),
    [sym_float] = ACTIONS(53),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(13),
    [sym_macro_name] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_integer] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_reserved_word] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_call_expression] = STATE(24),
    [sym_boolean_operator] = STATE(24),
    [sym_binary_operator] = STATE(24),
    [sym_unary_operator] = STATE(24),
    [sym_comparison_operator] = STATE(24),
    [sym__expressions] = STATE(24),
    [sym_parenthesized] = STATE(24),
    [sym_signal] = ACTIONS(57),
    [sym_float] = ACTIONS(59),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(13),
    [sym_macro_name] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_integer] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_call_expression] = STATE(13),
    [sym_hz_statement] = STATE(6),
    [sym_amp_statement] = STATE(6),
    [sym_boolean_operator] = STATE(13),
    [sym_binary_operator] = STATE(13),
    [aux_sym_program_repeat1] = STATE(25),
    [sym_ramp_statement] = STATE(6),
    [sym_channel_statement] = STATE(6),
    [sym_unary_operator] = STATE(13),
    [sym_comparison_operator] = STATE(13),
    [sym_define_statement] = STATE(6),
    [sym_expression_statement] = STATE(6),
    [sym__expressions] = STATE(13),
    [sym_parenthesized] = STATE(13),
    [anon_sym_hz] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [sym_function_name] = ACTIONS(9),
    [sym_reset_statement] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_r] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [anon_sym_l] = ACTIONS(15),
    [anon_sym_amp] = ACTIONS(19),
    [sym_signal] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [anon_sym_define] = ACTIONS(23),
    [sym_macro_name] = ACTIONS(25),
    [anon_sym_ramp] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
  },
  [13] = {
    [aux_sym_comparison_operator_repeat1] = STATE(35),
    [anon_sym_CARET] = ACTIONS(63),
    [sym_float] = ACTIONS(65),
    [sym_function_name] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_r] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_l] = ACTIONS(69),
    [anon_sym_amp] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(79),
    [sym_macro_name] = ACTIONS(69),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_hz] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [sym_reset_statement] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(65),
    [sym_integer] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(69),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_define] = ACTIONS(65),
    [anon_sym_ramp] = ACTIONS(65),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(83),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(93),
    [sym_float] = ACTIONS(95),
  },
  [16] = {
    [sym_call_expression] = STATE(39),
    [sym_boolean_operator] = STATE(39),
    [sym_binary_operator] = STATE(39),
    [sym_unary_operator] = STATE(39),
    [sym_comparison_operator] = STATE(39),
    [aux_sym_arguments_repeat1] = STATE(38),
    [sym__expressions] = STATE(39),
    [sym_parenthesized] = STATE(39),
    [sym_signal] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(99),
    [sym_float] = ACTIONS(101),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(13),
    [sym_macro_name] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_integer] = ACTIONS(97),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [anon_sym_CARET] = ACTIONS(103),
    [sym_float] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [sym_function_name] = ACTIONS(103),
    [anon_sym_PIPE_PIPE] = ACTIONS(103),
    [anon_sym_r] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(105),
    [anon_sym_l] = ACTIONS(105),
    [anon_sym_amp] = ACTIONS(103),
    [anon_sym_EQ_EQ] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_AMP] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_PIPE] = ACTIONS(105),
    [sym_macro_name] = ACTIONS(105),
    [anon_sym_PERCENT] = ACTIONS(103),
    [anon_sym_hz] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(103),
    [sym_reset_statement] = ACTIONS(103),
    [anon_sym_BANG_EQ] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_LT_LT] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(103),
    [sym_integer] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(105),
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_AMP_AMP] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_STAR] = ACTIONS(103),
    [anon_sym_define] = ACTIONS(103),
    [anon_sym_ramp] = ACTIONS(103),
    [anon_sym_GT_EQ] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_GT_GT] = ACTIONS(103),
    [anon_sym_LT] = ACTIONS(105),
  },
  [18] = {
    [sym_comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(107),
    [sym_float] = ACTIONS(109),
  },
  [19] = {
    [anon_sym_hz] = ACTIONS(111),
    [sym_float] = ACTIONS(111),
    [sym_reset_statement] = ACTIONS(111),
    [sym_function_name] = ACTIONS(111),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_r] = ACTIONS(113),
    [sym_integer] = ACTIONS(113),
    [anon_sym_l] = ACTIONS(113),
    [anon_sym_amp] = ACTIONS(111),
    [sym_signal] = ACTIONS(113),
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [anon_sym_define] = ACTIONS(111),
    [sym_macro_name] = ACTIONS(113),
    [anon_sym_ramp] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
  },
  [20] = {
    [sym_call_expression] = STATE(41),
    [sym_unary_operator] = STATE(41),
    [sym_comparison_operator] = STATE(41),
    [sym_boolean_operator] = STATE(41),
    [sym_binary_operator] = STATE(41),
    [sym__expressions] = STATE(41),
    [sym_parenthesized] = STATE(41),
    [sym_signal] = ACTIONS(115),
    [sym_float] = ACTIONS(117),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(13),
    [sym_macro_name] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_integer] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_call_expression] = STATE(42),
    [sym_unary_operator] = STATE(42),
    [sym_comparison_operator] = STATE(42),
    [sym_boolean_operator] = STATE(42),
    [sym_binary_operator] = STATE(42),
    [sym__expressions] = STATE(42),
    [sym_parenthesized] = STATE(42),
    [sym_signal] = ACTIONS(119),
    [sym_float] = ACTIONS(121),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(13),
    [sym_macro_name] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_integer] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [aux_sym_comparison_operator_repeat1] = STATE(35),
    [anon_sym_CARET] = ACTIONS(123),
    [sym_float] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [sym_function_name] = ACTIONS(123),
    [anon_sym_PIPE_PIPE] = ACTIONS(123),
    [anon_sym_r] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(125),
    [anon_sym_l] = ACTIONS(125),
    [anon_sym_amp] = ACTIONS(123),
    [anon_sym_EQ_EQ] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [sym_macro_name] = ACTIONS(125),
    [anon_sym_PERCENT] = ACTIONS(123),
    [anon_sym_hz] = ACTIONS(123),
    [anon_sym_SEMI] = ACTIONS(123),
    [sym_reset_statement] = ACTIONS(123),
    [anon_sym_BANG_EQ] = ACTIONS(123),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_LT_LT] = ACTIONS(123),
    [anon_sym_TILDE] = ACTIONS(123),
    [sym_integer] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(125),
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_AMP_AMP] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_define] = ACTIONS(123),
    [anon_sym_ramp] = ACTIONS(123),
    [anon_sym_GT_EQ] = ACTIONS(123),
    [anon_sym_LT_EQ] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_GT_GT] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(125),
  },
  [23] = {
    [sym_call_expression] = STATE(43),
    [sym_unary_operator] = STATE(43),
    [sym_comparison_operator] = STATE(43),
    [sym_boolean_operator] = STATE(43),
    [sym_binary_operator] = STATE(43),
    [sym__expressions] = STATE(43),
    [sym_parenthesized] = STATE(43),
    [sym_signal] = ACTIONS(127),
    [sym_float] = ACTIONS(129),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(13),
    [sym_macro_name] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_integer] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [aux_sym_comparison_operator_repeat1] = STATE(35),
    [anon_sym_CARET] = ACTIONS(63),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(83),
  },
  [25] = {
    [sym_call_expression] = STATE(13),
    [sym_hz_statement] = STATE(6),
    [sym_amp_statement] = STATE(6),
    [sym_boolean_operator] = STATE(13),
    [sym_binary_operator] = STATE(13),
    [aux_sym_program_repeat1] = STATE(25),
    [sym_ramp_statement] = STATE(6),
    [sym_channel_statement] = STATE(6),
    [sym_unary_operator] = STATE(13),
    [sym_comparison_operator] = STATE(13),
    [sym_define_statement] = STATE(6),
    [sym_expression_statement] = STATE(6),
    [sym__expressions] = STATE(13),
    [sym_parenthesized] = STATE(13),
    [anon_sym_hz] = ACTIONS(133),
    [sym_float] = ACTIONS(136),
    [sym_reset_statement] = ACTIONS(139),
    [sym_function_name] = ACTIONS(142),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_r] = ACTIONS(148),
    [sym_integer] = ACTIONS(151),
    [anon_sym_l] = ACTIONS(148),
    [anon_sym_amp] = ACTIONS(154),
    [sym_signal] = ACTIONS(151),
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [anon_sym_define] = ACTIONS(157),
    [sym_macro_name] = ACTIONS(160),
    [anon_sym_ramp] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(166),
  },
  [26] = {
    [sym_call_expression] = STATE(45),
    [sym_boolean_operator] = STATE(45),
    [sym_binary_operator] = STATE(45),
    [sym_unary_operator] = STATE(45),
    [sym_comparison_operator] = STATE(45),
    [sym__expressions] = STATE(45),
    [sym_parenthesized] = STATE(45),
    [sym_signal] = ACTIONS(169),
    [sym_float] = ACTIONS(171),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(13),
    [sym_macro_name] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_integer] = ACTIONS(169),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_call_expression] = STATE(46),
    [sym_boolean_operator] = STATE(46),
    [sym_binary_operator] = STATE(46),
    [sym_unary_operator] = STATE(46),
    [sym_comparison_operator] = STATE(46),
    [sym__expressions] = STATE(46),
    [sym_parenthesized] = STATE(46),
    [sym_signal] = ACTIONS(173),
    [sym_float] = ACTIONS(175),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(13),
    [sym_macro_name] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_integer] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_call_expression] = STATE(47),
    [sym_boolean_operator] = STATE(47),
    [sym_binary_operator] = STATE(47),
    [sym_unary_operator] = STATE(47),
    [sym_comparison_operator] = STATE(47),
    [sym__expressions] = STATE(47),
    [sym_parenthesized] = STATE(47),
    [sym_signal] = ACTIONS(177),
    [sym_float] = ACTIONS(179),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(13),
    [sym_macro_name] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_integer] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym_call_expression] = STATE(48),
    [sym_boolean_operator] = STATE(48),
    [sym_binary_operator] = STATE(48),
    [sym_unary_operator] = STATE(48),
    [sym_comparison_operator] = STATE(48),
    [sym__expressions] = STATE(48),
    [sym_parenthesized] = STATE(48),
    [sym_signal] = ACTIONS(181),
    [sym_float] = ACTIONS(183),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(13),
    [sym_macro_name] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_integer] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym_call_expression] = STATE(49),
    [sym_boolean_operator] = STATE(49),
    [sym_binary_operator] = STATE(49),
    [sym_unary_operator] = STATE(49),
    [sym_comparison_operator] = STATE(49),
    [sym__expressions] = STATE(49),
    [sym_parenthesized] = STATE(49),
    [sym_signal] = ACTIONS(185),
    [sym_float] = ACTIONS(187),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(13),
    [sym_macro_name] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_integer] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym_call_expression] = STATE(50),
    [sym_boolean_operator] = STATE(50),
    [sym_binary_operator] = STATE(50),
    [sym_unary_operator] = STATE(50),
    [sym_comparison_operator] = STATE(50),
    [sym__expressions] = STATE(50),
    [sym_parenthesized] = STATE(50),
    [sym_signal] = ACTIONS(189),
    [sym_float] = ACTIONS(191),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(13),
    [sym_macro_name] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_integer] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym_call_expression] = STATE(51),
    [sym_boolean_operator] = STATE(51),
    [sym_binary_operator] = STATE(51),
    [sym_unary_operator] = STATE(51),
    [sym_comparison_operator] = STATE(51),
    [sym__expressions] = STATE(51),
    [sym_parenthesized] = STATE(51),
    [sym_signal] = ACTIONS(193),
    [sym_float] = ACTIONS(195),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(13),
    [sym_macro_name] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_integer] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym_call_expression] = STATE(52),
    [sym_boolean_operator] = STATE(52),
    [sym_binary_operator] = STATE(52),
    [sym_unary_operator] = STATE(52),
    [sym_comparison_operator] = STATE(52),
    [sym__expressions] = STATE(52),
    [sym_parenthesized] = STATE(52),
    [sym_signal] = ACTIONS(197),
    [sym_float] = ACTIONS(199),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(13),
    [sym_macro_name] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_integer] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym_call_expression] = STATE(53),
    [sym_boolean_operator] = STATE(53),
    [sym_binary_operator] = STATE(53),
    [sym_unary_operator] = STATE(53),
    [sym_comparison_operator] = STATE(53),
    [sym__expressions] = STATE(53),
    [sym_parenthesized] = STATE(53),
    [sym_signal] = ACTIONS(201),
    [sym_float] = ACTIONS(203),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(13),
    [sym_macro_name] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_integer] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [aux_sym_comparison_operator_repeat1] = STATE(54),
    [anon_sym_CARET] = ACTIONS(205),
    [sym_float] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(205),
    [sym_function_name] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(205),
    [anon_sym_r] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_l] = ACTIONS(207),
    [anon_sym_amp] = ACTIONS(205),
    [anon_sym_EQ_EQ] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_AMP] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
    [sym_macro_name] = ACTIONS(207),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_hz] = ACTIONS(205),
    [anon_sym_SEMI] = ACTIONS(205),
    [sym_reset_statement] = ACTIONS(205),
    [anon_sym_BANG_EQ] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_LT_LT] = ACTIONS(205),
    [anon_sym_TILDE] = ACTIONS(205),
    [sym_integer] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(207),
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_AMP_AMP] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_define] = ACTIONS(205),
    [anon_sym_ramp] = ACTIONS(205),
    [anon_sym_GT_EQ] = ACTIONS(205),
    [anon_sym_LT_EQ] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_GT_GT] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(207),
  },
  [36] = {
    [anon_sym_hz] = ACTIONS(209),
    [anon_sym_SEMI] = ACTIONS(209),
    [sym_reset_statement] = ACTIONS(209),
    [sym_float] = ACTIONS(209),
    [sym_function_name] = ACTIONS(209),
    [anon_sym_TILDE] = ACTIONS(209),
    [anon_sym_r] = ACTIONS(211),
    [sym_integer] = ACTIONS(211),
    [anon_sym_l] = ACTIONS(211),
    [anon_sym_amp] = ACTIONS(209),
    [sym_signal] = ACTIONS(211),
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [anon_sym_define] = ACTIONS(209),
    [anon_sym_ramp] = ACTIONS(209),
    [sym_macro_name] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
  },
  [37] = {
    [anon_sym_CARET] = ACTIONS(213),
    [sym_float] = ACTIONS(213),
    [anon_sym_COMMA] = ACTIONS(213),
    [sym_function_name] = ACTIONS(213),
    [anon_sym_PIPE_PIPE] = ACTIONS(213),
    [anon_sym_r] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(215),
    [anon_sym_l] = ACTIONS(215),
    [anon_sym_amp] = ACTIONS(213),
    [anon_sym_EQ_EQ] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_AMP] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_PIPE] = ACTIONS(215),
    [sym_macro_name] = ACTIONS(215),
    [anon_sym_PERCENT] = ACTIONS(213),
    [anon_sym_hz] = ACTIONS(213),
    [anon_sym_SEMI] = ACTIONS(213),
    [sym_reset_statement] = ACTIONS(213),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_LT_LT] = ACTIONS(213),
    [anon_sym_TILDE] = ACTIONS(213),
    [sym_integer] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(215),
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_AMP_AMP] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(213),
    [anon_sym_define] = ACTIONS(213),
    [anon_sym_ramp] = ACTIONS(213),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_GT_GT] = ACTIONS(213),
    [anon_sym_LT] = ACTIONS(215),
  },
  [38] = {
    [sym_call_expression] = STATE(39),
    [aux_sym_arguments_repeat2] = STATE(57),
    [sym_boolean_operator] = STATE(39),
    [sym_binary_operator] = STATE(39),
    [sym_unary_operator] = STATE(39),
    [sym_comparison_operator] = STATE(39),
    [aux_sym_arguments_repeat1] = STATE(58),
    [sym__expressions] = STATE(39),
    [sym_parenthesized] = STATE(39),
    [sym_float] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(217),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(13),
    [sym_integer] = ACTIONS(97),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(219),
    [sym_macro_name] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(29),
  },
  [39] = {
    [aux_sym_comparison_operator_repeat1] = STATE(35),
    [anon_sym_CARET] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(81),
    [sym_float] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [sym_function_name] = ACTIONS(221),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(71),
    [sym_integer] = ACTIONS(223),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(223),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(81),
    [sym_macro_name] = ACTIONS(223),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(83),
  },
  [40] = {
    [anon_sym_hz] = ACTIONS(225),
    [anon_sym_SEMI] = ACTIONS(225),
    [sym_reset_statement] = ACTIONS(225),
    [sym_float] = ACTIONS(225),
    [sym_function_name] = ACTIONS(225),
    [anon_sym_TILDE] = ACTIONS(225),
    [anon_sym_r] = ACTIONS(227),
    [sym_integer] = ACTIONS(227),
    [anon_sym_l] = ACTIONS(227),
    [anon_sym_amp] = ACTIONS(225),
    [sym_signal] = ACTIONS(227),
    [ts_builtin_sym_end] = ACTIONS(225),
    [sym_comment] = ACTIONS(3),
    [anon_sym_define] = ACTIONS(225),
    [anon_sym_ramp] = ACTIONS(225),
    [sym_macro_name] = ACTIONS(227),
    [anon_sym_LPAREN] = ACTIONS(225),
  },
  [41] = {
    [aux_sym_comparison_operator_repeat1] = STATE(35),
    [anon_sym_CARET] = ACTIONS(63),
    [sym_float] = ACTIONS(229),
    [sym_function_name] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_r] = ACTIONS(231),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_l] = ACTIONS(231),
    [anon_sym_amp] = ACTIONS(229),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(79),
    [sym_macro_name] = ACTIONS(231),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_hz] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(229),
    [sym_reset_statement] = ACTIONS(229),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(229),
    [sym_integer] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(231),
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_define] = ACTIONS(229),
    [anon_sym_ramp] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(229),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(83),
  },
  [42] = {
    [aux_sym_comparison_operator_repeat1] = STATE(35),
    [anon_sym_CARET] = ACTIONS(63),
    [sym_float] = ACTIONS(233),
    [sym_function_name] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_r] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_l] = ACTIONS(235),
    [anon_sym_amp] = ACTIONS(233),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(79),
    [sym_macro_name] = ACTIONS(235),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_hz] = ACTIONS(233),
    [anon_sym_SEMI] = ACTIONS(233),
    [sym_reset_statement] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(233),
    [sym_integer] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(235),
    [ts_builtin_sym_end] = ACTIONS(233),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_define] = ACTIONS(233),
    [anon_sym_ramp] = ACTIONS(233),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(83),
  },
  [43] = {
    [aux_sym_comparison_operator_repeat1] = STATE(35),
    [anon_sym_CARET] = ACTIONS(63),
    [sym_float] = ACTIONS(237),
    [sym_function_name] = ACTIONS(237),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_r] = ACTIONS(239),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_l] = ACTIONS(239),
    [anon_sym_amp] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(79),
    [sym_macro_name] = ACTIONS(239),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_hz] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(237),
    [sym_reset_statement] = ACTIONS(237),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(237),
    [sym_integer] = ACTIONS(239),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(239),
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_define] = ACTIONS(237),
    [anon_sym_ramp] = ACTIONS(237),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(237),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(83),
  },
  [44] = {
    [anon_sym_CARET] = ACTIONS(241),
    [sym_float] = ACTIONS(241),
    [anon_sym_COMMA] = ACTIONS(241),
    [sym_function_name] = ACTIONS(241),
    [anon_sym_PIPE_PIPE] = ACTIONS(241),
    [anon_sym_r] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(243),
    [anon_sym_l] = ACTIONS(243),
    [anon_sym_amp] = ACTIONS(241),
    [anon_sym_EQ_EQ] = ACTIONS(241),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_AMP] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(243),
    [sym_macro_name] = ACTIONS(243),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_hz] = ACTIONS(241),
    [anon_sym_SEMI] = ACTIONS(241),
    [sym_reset_statement] = ACTIONS(241),
    [anon_sym_BANG_EQ] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_LT_LT] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(241),
    [sym_integer] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(243),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_AMP_AMP] = ACTIONS(241),
    [anon_sym_PLUS] = ACTIONS(241),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_define] = ACTIONS(241),
    [anon_sym_ramp] = ACTIONS(241),
    [anon_sym_GT_EQ] = ACTIONS(241),
    [anon_sym_LT_EQ] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(241),
    [anon_sym_GT_GT] = ACTIONS(241),
    [anon_sym_LT] = ACTIONS(243),
  },
  [45] = {
    [aux_sym_comparison_operator_repeat1] = STATE(35),
    [anon_sym_CARET] = ACTIONS(245),
    [sym_float] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [sym_function_name] = ACTIONS(245),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_r] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_l] = ACTIONS(247),
    [anon_sym_amp] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(247),
    [sym_macro_name] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_hz] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(245),
    [sym_reset_statement] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(245),
    [sym_integer] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(247),
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_AMP_AMP] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_define] = ACTIONS(245),
    [anon_sym_ramp] = ACTIONS(245),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(83),
  },
  [46] = {
    [aux_sym_comparison_operator_repeat1] = STATE(35),
    [anon_sym_CARET] = ACTIONS(245),
    [sym_float] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [sym_function_name] = ACTIONS(245),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_r] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_l] = ACTIONS(247),
    [anon_sym_amp] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_AMP] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(247),
    [sym_macro_name] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(245),
    [anon_sym_hz] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(245),
    [sym_reset_statement] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_LT_LT] = ACTIONS(245),
    [anon_sym_TILDE] = ACTIONS(245),
    [sym_integer] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(247),
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_AMP_AMP] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_define] = ACTIONS(245),
    [anon_sym_ramp] = ACTIONS(245),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_GT_GT] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(247),
  },
  [47] = {
    [aux_sym_comparison_operator_repeat1] = STATE(35),
    [anon_sym_CARET] = ACTIONS(63),
    [sym_float] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [sym_function_name] = ACTIONS(249),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_r] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_l] = ACTIONS(251),
    [anon_sym_amp] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(79),
    [sym_macro_name] = ACTIONS(251),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_hz] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
    [sym_reset_statement] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(249),
    [sym_integer] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(251),
    [ts_builtin_sym_end] = ACTIONS(249),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_define] = ACTIONS(249),
    [anon_sym_ramp] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(83),
  },
  [48] = {
    [aux_sym_comparison_operator_repeat1] = STATE(35),
    [anon_sym_CARET] = ACTIONS(245),
    [sym_float] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [sym_function_name] = ACTIONS(245),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_r] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_l] = ACTIONS(247),
    [anon_sym_amp] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_AMP] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(247),
    [sym_macro_name] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_hz] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(245),
    [sym_reset_statement] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_LT_LT] = ACTIONS(245),
    [anon_sym_TILDE] = ACTIONS(245),
    [sym_integer] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(247),
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_AMP_AMP] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_define] = ACTIONS(245),
    [anon_sym_ramp] = ACTIONS(245),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_GT_GT] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(247),
  },
  [49] = {
    [aux_sym_comparison_operator_repeat1] = STATE(35),
    [anon_sym_CARET] = ACTIONS(63),
    [sym_float] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(253),
    [sym_function_name] = ACTIONS(253),
    [anon_sym_PIPE_PIPE] = ACTIONS(253),
    [anon_sym_r] = ACTIONS(255),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_l] = ACTIONS(255),
    [anon_sym_amp] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(79),
    [sym_macro_name] = ACTIONS(255),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_hz] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(253),
    [sym_reset_statement] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(253),
    [sym_integer] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(255),
    [ts_builtin_sym_end] = ACTIONS(253),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_define] = ACTIONS(253),
    [anon_sym_ramp] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(253),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(83),
  },
  [50] = {
    [aux_sym_comparison_operator_repeat1] = STATE(35),
    [anon_sym_CARET] = ACTIONS(245),
    [sym_float] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [sym_function_name] = ACTIONS(245),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_r] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_l] = ACTIONS(247),
    [anon_sym_amp] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_AMP] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(247),
    [sym_macro_name] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_hz] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(245),
    [sym_reset_statement] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(245),
    [sym_integer] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(247),
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_AMP_AMP] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_define] = ACTIONS(245),
    [anon_sym_ramp] = ACTIONS(245),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(83),
  },
  [51] = {
    [aux_sym_comparison_operator_repeat1] = STATE(35),
    [anon_sym_CARET] = ACTIONS(245),
    [sym_float] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [sym_function_name] = ACTIONS(245),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_r] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_l] = ACTIONS(247),
    [anon_sym_amp] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_AMP] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(247),
    [sym_macro_name] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_hz] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(245),
    [sym_reset_statement] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_LT_LT] = ACTIONS(245),
    [anon_sym_TILDE] = ACTIONS(245),
    [sym_integer] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(247),
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_AMP_AMP] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_define] = ACTIONS(245),
    [anon_sym_ramp] = ACTIONS(245),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_GT_GT] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(247),
  },
  [52] = {
    [aux_sym_comparison_operator_repeat1] = STATE(35),
    [anon_sym_CARET] = ACTIONS(63),
    [sym_float] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [sym_function_name] = ACTIONS(245),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_r] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_l] = ACTIONS(247),
    [anon_sym_amp] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(247),
    [sym_macro_name] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_hz] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(245),
    [sym_reset_statement] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(245),
    [sym_integer] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(247),
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_AMP_AMP] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_define] = ACTIONS(245),
    [anon_sym_ramp] = ACTIONS(245),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(83),
  },
  [53] = {
    [aux_sym_comparison_operator_repeat1] = STATE(35),
    [anon_sym_CARET] = ACTIONS(63),
    [sym_float] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(253),
    [sym_function_name] = ACTIONS(253),
    [anon_sym_PIPE_PIPE] = ACTIONS(253),
    [anon_sym_r] = ACTIONS(255),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_l] = ACTIONS(255),
    [anon_sym_amp] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(79),
    [sym_macro_name] = ACTIONS(255),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_hz] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(253),
    [sym_reset_statement] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(253),
    [sym_integer] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(255),
    [ts_builtin_sym_end] = ACTIONS(253),
    [anon_sym_AMP_AMP] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_define] = ACTIONS(253),
    [anon_sym_ramp] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(253),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(83),
  },
  [54] = {
    [aux_sym_comparison_operator_repeat1] = STATE(54),
    [anon_sym_CARET] = ACTIONS(249),
    [sym_float] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [sym_function_name] = ACTIONS(249),
    [anon_sym_PIPE_PIPE] = ACTIONS(249),
    [anon_sym_r] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(251),
    [anon_sym_l] = ACTIONS(251),
    [anon_sym_amp] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(257),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_AMP] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(251),
    [sym_macro_name] = ACTIONS(251),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_hz] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
    [sym_reset_statement] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(257),
    [anon_sym_GT] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(249),
    [sym_integer] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(251),
    [ts_builtin_sym_end] = ACTIONS(249),
    [anon_sym_AMP_AMP] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_define] = ACTIONS(249),
    [anon_sym_ramp] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(257),
    [anon_sym_LPAREN] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(260),
  },
  [55] = {
    [anon_sym_CARET] = ACTIONS(263),
    [sym_float] = ACTIONS(263),
    [anon_sym_COMMA] = ACTIONS(263),
    [sym_function_name] = ACTIONS(263),
    [anon_sym_PIPE_PIPE] = ACTIONS(263),
    [anon_sym_r] = ACTIONS(265),
    [anon_sym_SLASH] = ACTIONS(265),
    [anon_sym_l] = ACTIONS(265),
    [anon_sym_amp] = ACTIONS(263),
    [anon_sym_EQ_EQ] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(263),
    [anon_sym_AMP] = ACTIONS(265),
    [anon_sym_DASH] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(265),
    [sym_macro_name] = ACTIONS(265),
    [anon_sym_PERCENT] = ACTIONS(263),
    [anon_sym_hz] = ACTIONS(263),
    [anon_sym_SEMI] = ACTIONS(263),
    [sym_reset_statement] = ACTIONS(263),
    [anon_sym_BANG_EQ] = ACTIONS(263),
    [anon_sym_GT] = ACTIONS(265),
    [anon_sym_LT_LT] = ACTIONS(263),
    [anon_sym_TILDE] = ACTIONS(263),
    [sym_integer] = ACTIONS(265),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(265),
    [ts_builtin_sym_end] = ACTIONS(263),
    [anon_sym_AMP_AMP] = ACTIONS(263),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_define] = ACTIONS(263),
    [anon_sym_ramp] = ACTIONS(263),
    [anon_sym_GT_EQ] = ACTIONS(263),
    [anon_sym_LT_EQ] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_GT_GT] = ACTIONS(263),
    [anon_sym_LT] = ACTIONS(265),
  },
  [56] = {
    [sym_call_expression] = STATE(39),
    [sym_boolean_operator] = STATE(39),
    [sym_binary_operator] = STATE(39),
    [sym_unary_operator] = STATE(39),
    [sym_comparison_operator] = STATE(39),
    [aux_sym_arguments_repeat1] = STATE(59),
    [sym__expressions] = STATE(39),
    [sym_parenthesized] = STATE(39),
    [sym_signal] = ACTIONS(97),
    [sym_float] = ACTIONS(101),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(13),
    [sym_macro_name] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_integer] = ACTIONS(97),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [aux_sym_arguments_repeat2] = STATE(61),
    [anon_sym_RPAREN] = ACTIONS(267),
    [anon_sym_COMMA] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [sym_call_expression] = STATE(39),
    [sym_boolean_operator] = STATE(39),
    [sym_binary_operator] = STATE(39),
    [sym_unary_operator] = STATE(39),
    [sym_comparison_operator] = STATE(39),
    [aux_sym_arguments_repeat1] = STATE(58),
    [sym__expressions] = STATE(39),
    [sym_parenthesized] = STATE(39),
    [sym_signal] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(272),
    [sym_float] = ACTIONS(274),
    [anon_sym_COMMA] = ACTIONS(272),
    [sym_function_name] = ACTIONS(277),
    [anon_sym_TILDE] = ACTIONS(280),
    [sym_macro_name] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(286),
    [sym_integer] = ACTIONS(269),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [sym_call_expression] = STATE(39),
    [sym_boolean_operator] = STATE(39),
    [sym_binary_operator] = STATE(39),
    [sym_unary_operator] = STATE(39),
    [sym_comparison_operator] = STATE(39),
    [aux_sym_arguments_repeat1] = STATE(58),
    [sym__expressions] = STATE(39),
    [sym_parenthesized] = STATE(39),
    [sym_signal] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(289),
    [sym_float] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(289),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(13),
    [sym_macro_name] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_integer] = ACTIONS(97),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [anon_sym_CARET] = ACTIONS(291),
    [sym_float] = ACTIONS(291),
    [anon_sym_COMMA] = ACTIONS(291),
    [sym_function_name] = ACTIONS(291),
    [anon_sym_PIPE_PIPE] = ACTIONS(291),
    [anon_sym_r] = ACTIONS(293),
    [anon_sym_SLASH] = ACTIONS(293),
    [anon_sym_l] = ACTIONS(293),
    [anon_sym_amp] = ACTIONS(291),
    [anon_sym_EQ_EQ] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_AMP] = ACTIONS(293),
    [anon_sym_DASH] = ACTIONS(293),
    [anon_sym_PIPE] = ACTIONS(293),
    [sym_macro_name] = ACTIONS(293),
    [anon_sym_PERCENT] = ACTIONS(291),
    [anon_sym_hz] = ACTIONS(291),
    [anon_sym_SEMI] = ACTIONS(291),
    [sym_reset_statement] = ACTIONS(291),
    [anon_sym_BANG_EQ] = ACTIONS(291),
    [anon_sym_GT] = ACTIONS(293),
    [anon_sym_LT_LT] = ACTIONS(291),
    [anon_sym_TILDE] = ACTIONS(291),
    [sym_integer] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(293),
    [ts_builtin_sym_end] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(291),
    [anon_sym_PLUS] = ACTIONS(291),
    [anon_sym_STAR] = ACTIONS(291),
    [anon_sym_define] = ACTIONS(291),
    [anon_sym_ramp] = ACTIONS(291),
    [anon_sym_GT_EQ] = ACTIONS(291),
    [anon_sym_LT_EQ] = ACTIONS(291),
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_GT_GT] = ACTIONS(291),
    [anon_sym_LT] = ACTIONS(293),
  },
  [61] = {
    [aux_sym_arguments_repeat2] = STATE(61),
    [anon_sym_COMMA] = ACTIONS(295),
    [anon_sym_RPAREN] = ACTIONS(289),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(4),
  [7] = {.count = 1, .reusable = true}, SHIFT(13),
  [9] = {.count = 1, .reusable = true}, SHIFT(5),
  [11] = {.count = 1, .reusable = true}, SHIFT(6),
  [13] = {.count = 1, .reusable = true}, SHIFT(9),
  [15] = {.count = 1, .reusable = false}, SHIFT(10),
  [17] = {.count = 1, .reusable = false}, SHIFT(13),
  [19] = {.count = 1, .reusable = true}, SHIFT(2),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [23] = {.count = 1, .reusable = true}, SHIFT(7),
  [25] = {.count = 1, .reusable = false}, SHIFT(3),
  [27] = {.count = 1, .reusable = true}, SHIFT(8),
  [29] = {.count = 1, .reusable = true}, SHIFT(11),
  [31] = {.count = 1, .reusable = true}, SHIFT(15),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 1),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(16),
  [39] = {.count = 1, .reusable = true}, SHIFT(18),
  [41] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 1),
  [43] = {.count = 1, .reusable = true}, SHIFT(19),
  [45] = {.count = 1, .reusable = false}, REDUCE(aux_sym_program_repeat1, 1),
  [47] = {.count = 1, .reusable = true}, SHIFT(20),
  [49] = {.count = 1, .reusable = true}, SHIFT(21),
  [51] = {.count = 1, .reusable = false}, SHIFT(22),
  [53] = {.count = 1, .reusable = true}, SHIFT(22),
  [55] = {.count = 1, .reusable = true}, SHIFT(23),
  [57] = {.count = 1, .reusable = false}, SHIFT(24),
  [59] = {.count = 1, .reusable = true}, SHIFT(24),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [63] = {.count = 1, .reusable = true}, SHIFT(26),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [67] = {.count = 1, .reusable = true}, SHIFT(30),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym_expression_statement, 1),
  [71] = {.count = 1, .reusable = false}, SHIFT(27),
  [73] = {.count = 1, .reusable = true}, SHIFT(28),
  [75] = {.count = 1, .reusable = false}, SHIFT(31),
  [77] = {.count = 1, .reusable = false}, SHIFT(32),
  [79] = {.count = 1, .reusable = false}, SHIFT(33),
  [81] = {.count = 1, .reusable = true}, SHIFT(27),
  [83] = {.count = 1, .reusable = false}, SHIFT(28),
  [85] = {.count = 1, .reusable = true}, SHIFT(29),
  [87] = {.count = 1, .reusable = true}, SHIFT(34),
  [89] = {.count = 1, .reusable = true}, SHIFT(32),
  [91] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [93] = {.count = 1, .reusable = false}, SHIFT(36),
  [95] = {.count = 1, .reusable = true}, SHIFT(36),
  [97] = {.count = 1, .reusable = false}, SHIFT(39),
  [99] = {.count = 1, .reusable = true}, SHIFT(37),
  [101] = {.count = 1, .reusable = true}, SHIFT(39),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2),
  [107] = {.count = 1, .reusable = false}, SHIFT(40),
  [109] = {.count = 1, .reusable = true}, SHIFT(40),
  [111] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [113] = {.count = 1, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2),
  [115] = {.count = 1, .reusable = false}, SHIFT(41),
  [117] = {.count = 1, .reusable = true}, SHIFT(41),
  [119] = {.count = 1, .reusable = false}, SHIFT(42),
  [121] = {.count = 1, .reusable = true}, SHIFT(42),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_unary_operator, 2),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_unary_operator, 2),
  [127] = {.count = 1, .reusable = false}, SHIFT(43),
  [129] = {.count = 1, .reusable = true}, SHIFT(43),
  [131] = {.count = 1, .reusable = true}, SHIFT(44),
  [133] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [136] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [139] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [142] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [145] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [148] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [151] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [154] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [157] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [160] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [169] = {.count = 1, .reusable = false}, SHIFT(45),
  [171] = {.count = 1, .reusable = true}, SHIFT(45),
  [173] = {.count = 1, .reusable = false}, SHIFT(46),
  [175] = {.count = 1, .reusable = true}, SHIFT(46),
  [177] = {.count = 1, .reusable = false}, SHIFT(47),
  [179] = {.count = 1, .reusable = true}, SHIFT(47),
  [181] = {.count = 1, .reusable = false}, SHIFT(48),
  [183] = {.count = 1, .reusable = true}, SHIFT(48),
  [185] = {.count = 1, .reusable = false}, SHIFT(49),
  [187] = {.count = 1, .reusable = true}, SHIFT(49),
  [189] = {.count = 1, .reusable = false}, SHIFT(50),
  [191] = {.count = 1, .reusable = true}, SHIFT(50),
  [193] = {.count = 1, .reusable = false}, SHIFT(51),
  [195] = {.count = 1, .reusable = true}, SHIFT(51),
  [197] = {.count = 1, .reusable = false}, SHIFT(52),
  [199] = {.count = 1, .reusable = true}, SHIFT(52),
  [201] = {.count = 1, .reusable = false}, SHIFT(53),
  [203] = {.count = 1, .reusable = true}, SHIFT(53),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_comparison_operator, 2),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_comparison_operator, 2),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_amp_statement, 3),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_amp_statement, 3),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [217] = {.count = 1, .reusable = true}, SHIFT(56),
  [219] = {.count = 1, .reusable = true}, SHIFT(55),
  [221] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 1),
  [223] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 1),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_hz_statement, 3),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym_hz_statement, 3),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_define_statement, 3),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym_define_statement, 3),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_ramp_statement, 3),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym_ramp_statement, 3),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_channel_statement, 3),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_channel_statement, 3),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized, 3),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized, 3),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_binary_operator, 3),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym_binary_operator, 3),
  [249] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [251] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_operator, 3),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_boolean_operator, 3),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(28),
  [260] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(28),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [265] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [267] = {.count = 1, .reusable = true}, SHIFT(60),
  [269] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(39),
  [272] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [274] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(39),
  [277] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(5),
  [280] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(9),
  [283] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(3),
  [286] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(11),
  [289] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [295] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(56),
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
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
