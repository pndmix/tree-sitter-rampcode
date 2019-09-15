#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 76
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 1
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_hz = 3,
  anon_sym_amp = 4,
  sym_reset_statement = 5,
  anon_sym_ramp = 6,
  anon_sym_l = 7,
  anon_sym_r = 8,
  anon_sym_define = 9,
  anon_sym_LPAREN = 10,
  anon_sym_COMMA = 11,
  anon_sym_RPAREN = 12,
  anon_sym_AMP_AMP = 13,
  anon_sym_PIPE_PIPE = 14,
  anon_sym_STAR = 15,
  anon_sym_SLASH = 16,
  anon_sym_PERCENT = 17,
  anon_sym_PLUS = 18,
  anon_sym_DASH = 19,
  anon_sym_LT_LT = 20,
  anon_sym_GT_GT = 21,
  anon_sym_AMP = 22,
  anon_sym_CARET = 23,
  anon_sym_PIPE = 24,
  anon_sym_TILDE = 25,
  anon_sym_LT = 26,
  anon_sym_LT_EQ = 27,
  anon_sym_EQ_EQ = 28,
  anon_sym_BANG_EQ = 29,
  anon_sym_GT_EQ = 30,
  anon_sym_GT = 31,
  anon_sym_LPAREN2 = 32,
  sym_reserved_word = 33,
  sym_integer = 34,
  sym_float = 35,
  sym_signal = 36,
  sym_function_name = 37,
  sym_variable_name = 38,
  sym_comment = 39,
  sym_program = 40,
  sym_hz_statement = 41,
  sym_amp_statement = 42,
  sym_ramp_statement = 43,
  sym_channel_statement = 44,
  sym_define_statement = 45,
  sym_macro_variable = 46,
  sym_macro_function = 47,
  sym__macro_arguments = 48,
  sym_expression_statement = 49,
  sym__expressions = 50,
  sym_boolean_operator = 51,
  sym_binary_operator = 52,
  sym_unary_operator = 53,
  sym_comparison_operator = 54,
  sym_parenthesized = 55,
  sym__call_expressions = 56,
  sym_call_function = 57,
  sym_call_macro_function = 58,
  sym__call_arguments = 59,
  aux_sym_program_repeat1 = 60,
  aux_sym__macro_arguments_repeat1 = 61,
  aux_sym__macro_arguments_repeat2 = 62,
  aux_sym_comparison_operator_repeat1 = 63,
  aux_sym__call_arguments_repeat1 = 64,
  aux_sym__call_arguments_repeat2 = 65,
  alias_sym_call_macro_variable = 66,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_hz] = "hz",
  [anon_sym_amp] = "amp",
  [sym_reset_statement] = "reset_statement",
  [anon_sym_ramp] = "ramp",
  [anon_sym_l] = "left",
  [anon_sym_r] = "right",
  [anon_sym_define] = "define",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
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
  [anon_sym_LPAREN2] = "(",
  [sym_reserved_word] = "reserved_word",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_signal] = "signal",
  [sym_function_name] = "function_name",
  [sym_variable_name] = "variable_name",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym_hz_statement] = "hz_statement",
  [sym_amp_statement] = "amp_statement",
  [sym_ramp_statement] = "ramp_statement",
  [sym_channel_statement] = "channel_statement",
  [sym_define_statement] = "define_statement",
  [sym_macro_variable] = "macro_variable",
  [sym_macro_function] = "macro_function",
  [sym__macro_arguments] = "arguments",
  [sym_expression_statement] = "expression_statement",
  [sym__expressions] = "_expressions",
  [sym_boolean_operator] = "boolean_operator",
  [sym_binary_operator] = "binary_operator",
  [sym_unary_operator] = "unary_operator",
  [sym_comparison_operator] = "comparison_operator",
  [sym_parenthesized] = "parenthesized",
  [sym__call_expressions] = "_call_expressions",
  [sym_call_function] = "call_function",
  [sym_call_macro_function] = "call_macro_function",
  [sym__call_arguments] = "arguments",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__macro_arguments_repeat1] = "_macro_arguments_repeat1",
  [aux_sym__macro_arguments_repeat2] = "_macro_arguments_repeat2",
  [aux_sym_comparison_operator_repeat1] = "comparison_operator_repeat1",
  [aux_sym__call_arguments_repeat1] = "_call_arguments_repeat1",
  [aux_sym__call_arguments_repeat2] = "_call_arguments_repeat2",
  [alias_sym_call_macro_variable] = "call_macro_variable",
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
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [sym_reserved_word] = {
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
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_name] = {
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
  [sym_define_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_function] = {
    .visible = true,
    .named = true,
  },
  [sym__macro_arguments] = {
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
  [sym__call_expressions] = {
    .visible = false,
    .named = true,
  },
  [sym_call_function] = {
    .visible = true,
    .named = true,
  },
  [sym_call_macro_function] = {
    .visible = true,
    .named = true,
  },
  [sym__call_arguments] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__macro_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__macro_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comparison_operator_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__call_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__call_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_call_macro_variable] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_call_macro_variable,
  },
  [2] = {
    [0] = sym_function_name,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(15);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '%') ADVANCE(38);
      if (lookahead == '&') ADVANCE(43);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(33);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(54);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '^') ADVANCE(44);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'h') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == 'p') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '~') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(15);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '%') ADVANCE(38);
      if (lookahead == '&') ADVANCE(43);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(33);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(54);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '^') ADVANCE(44);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'h') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == 'p') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '~') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(15);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(146);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '~') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '%') ADVANCE(38);
      if (lookahead == '&') ADVANCE(43);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(33);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '^') ADVANCE(44);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(146);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '~') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '%') ADVANCE(38);
      if (lookahead == '&') ADVANCE(43);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(33);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '^') ADVANCE(44);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(146);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '~') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(33);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(168);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(167);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(109);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == 'v') ADVANCE(10);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_hz);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_hz);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_amp);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_amp);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_reset_statement);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_reset_statement);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_ramp);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_ramp);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'o') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'o') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_define);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_define);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(168);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(34);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(35);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_reserved_word);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'm') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(95);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead == 't') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'q') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_signal);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == '1') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == '2') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'h') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'm') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_function_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_function_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '1') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == 'm') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'b') ADVANCE(155);
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'b') ADVANCE(155);
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'b') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'f') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'g') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == 'q') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'm') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'p') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'p') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'p') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'w') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'x') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'x') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'z') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '0' ||
          lookahead == 'p') ADVANCE(115);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(168);
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
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_AMP] = ACTIONS(1),
    [sym_signal] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_variable_name] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_amp] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_ramp] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_reset_statement] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [sym_reserved_word] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_function_name] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_hz] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
  },
  [1] = {
    [sym_amp_statement] = STATE(8),
    [sym_ramp_statement] = STATE(8),
    [sym_expression_statement] = STATE(8),
    [sym_comparison_operator] = STATE(15),
    [sym_parenthesized] = STATE(15),
    [aux_sym_program_repeat1] = STATE(12),
    [sym_hz_statement] = STATE(8),
    [sym_macro_variable] = STATE(13),
    [sym_binary_operator] = STATE(15),
    [sym_unary_operator] = STATE(15),
    [sym_call_macro_function] = STATE(15),
    [sym_program] = STATE(14),
    [sym_channel_statement] = STATE(8),
    [sym_define_statement] = STATE(8),
    [sym__expressions] = STATE(15),
    [sym_boolean_operator] = STATE(15),
    [sym__call_expressions] = STATE(15),
    [sym_call_function] = STATE(15),
    [sym_signal] = ACTIONS(5),
    [sym_reset_statement] = ACTIONS(7),
    [sym_variable_name] = ACTIONS(9),
    [anon_sym_l] = ACTIONS(11),
    [anon_sym_amp] = ACTIONS(13),
    [sym_float] = ACTIONS(5),
    [anon_sym_ramp] = ACTIONS(15),
    [sym_function_name] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LPAREN2] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(23),
    [anon_sym_hz] = ACTIONS(25),
    [anon_sym_r] = ACTIONS(11),
    [sym_integer] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [2] = {
    [sym_comment] = ACTIONS(3),
    [sym_reserved_word] = ACTIONS(31),
  },
  [3] = {
    [sym_comparison_operator] = STATE(17),
    [sym_parenthesized] = STATE(17),
    [sym_macro_variable] = STATE(13),
    [sym_binary_operator] = STATE(17),
    [sym_unary_operator] = STATE(17),
    [sym_call_macro_function] = STATE(17),
    [sym__expressions] = STATE(17),
    [sym_boolean_operator] = STATE(17),
    [sym__call_expressions] = STATE(17),
    [sym_call_function] = STATE(17),
    [sym_function_name] = ACTIONS(17),
    [anon_sym_LPAREN2] = ACTIONS(21),
    [sym_signal] = ACTIONS(33),
    [sym_variable_name] = ACTIONS(9),
    [sym_integer] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [4] = {
    [sym_comparison_operator] = STATE(18),
    [sym_parenthesized] = STATE(18),
    [sym_macro_variable] = STATE(13),
    [sym_binary_operator] = STATE(18),
    [sym_unary_operator] = STATE(18),
    [sym_call_macro_function] = STATE(18),
    [sym__expressions] = STATE(18),
    [sym_boolean_operator] = STATE(18),
    [sym__call_expressions] = STATE(18),
    [sym_call_function] = STATE(18),
    [sym_function_name] = ACTIONS(17),
    [anon_sym_LPAREN2] = ACTIONS(21),
    [sym_signal] = ACTIONS(37),
    [sym_variable_name] = ACTIONS(9),
    [sym_integer] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [5] = {
    [sym__call_arguments] = STATE(20),
    [anon_sym_AMP] = ACTIONS(41),
    [sym_signal] = ACTIONS(43),
    [sym_variable_name] = ACTIONS(41),
    [anon_sym_AMP_AMP] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_LPAREN2] = ACTIONS(41),
    [anon_sym_GT_GT] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_CARET] = ACTIONS(43),
    [sym_integer] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_EQ_EQ] = ACTIONS(43),
    [anon_sym_GT_EQ] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(41),
    [sym_float] = ACTIONS(43),
    [sym_function_name] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_PERCENT] = ACTIONS(43),
    [anon_sym_PIPE_PIPE] = ACTIONS(43),
    [anon_sym_BANG_EQ] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_LT_LT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(43),
  },
  [6] = {
    [sym_comment] = ACTIONS(3),
    [sym_reserved_word] = ACTIONS(47),
  },
  [7] = {
    [sym__call_arguments] = STATE(22),
    [anon_sym_LPAREN] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [anon_sym_SEMI] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_comment] = ACTIONS(3),
    [sym_reserved_word] = ACTIONS(51),
  },
  [10] = {
    [sym_comment] = ACTIONS(3),
    [sym_reserved_word] = ACTIONS(53),
  },
  [11] = {
    [sym_macro_variable] = STATE(27),
    [sym_macro_function] = STATE(27),
    [sym_variable_name] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_amp_statement] = STATE(8),
    [sym_ramp_statement] = STATE(8),
    [sym_expression_statement] = STATE(8),
    [sym_comparison_operator] = STATE(15),
    [sym_parenthesized] = STATE(15),
    [aux_sym_program_repeat1] = STATE(28),
    [sym_hz_statement] = STATE(8),
    [sym_macro_variable] = STATE(13),
    [sym_binary_operator] = STATE(15),
    [sym_unary_operator] = STATE(15),
    [sym_call_macro_function] = STATE(15),
    [sym_channel_statement] = STATE(8),
    [sym_define_statement] = STATE(8),
    [sym__expressions] = STATE(15),
    [sym_boolean_operator] = STATE(15),
    [sym__call_expressions] = STATE(15),
    [sym_call_function] = STATE(15),
    [sym_signal] = ACTIONS(5),
    [sym_reset_statement] = ACTIONS(7),
    [sym_variable_name] = ACTIONS(9),
    [anon_sym_l] = ACTIONS(11),
    [anon_sym_amp] = ACTIONS(13),
    [sym_float] = ACTIONS(5),
    [anon_sym_ramp] = ACTIONS(15),
    [sym_function_name] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_LPAREN2] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(23),
    [anon_sym_hz] = ACTIONS(25),
    [anon_sym_r] = ACTIONS(11),
    [sym_integer] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [13] = {
    [anon_sym_AMP] = ACTIONS(59),
    [sym_signal] = ACTIONS(61),
    [sym_variable_name] = ACTIONS(59),
    [anon_sym_AMP_AMP] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_LPAREN2] = ACTIONS(61),
    [anon_sym_GT_GT] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_CARET] = ACTIONS(61),
    [sym_integer] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_EQ_EQ] = ACTIONS(61),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(59),
    [sym_float] = ACTIONS(61),
    [sym_function_name] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_PIPE_PIPE] = ACTIONS(61),
    [anon_sym_BANG_EQ] = ACTIONS(61),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(61),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(69),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(81),
  },
  [16] = {
    [sym_unary_operator] = STATE(39),
    [sym_call_macro_function] = STATE(39),
    [sym_comparison_operator] = STATE(39),
    [sym_parenthesized] = STATE(39),
    [sym__expressions] = STATE(39),
    [sym_boolean_operator] = STATE(39),
    [sym__call_expressions] = STATE(39),
    [sym_call_function] = STATE(39),
    [sym_macro_variable] = STATE(13),
    [sym_binary_operator] = STATE(39),
    [sym_function_name] = ACTIONS(17),
    [anon_sym_LPAREN2] = ACTIONS(21),
    [sym_signal] = ACTIONS(91),
    [sym_variable_name] = ACTIONS(9),
    [sym_integer] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [17] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(95),
    [sym_signal] = ACTIONS(97),
    [sym_variable_name] = ACTIONS(95),
    [anon_sym_AMP_AMP] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(97),
    [anon_sym_LT_EQ] = ACTIONS(97),
    [anon_sym_LPAREN2] = ACTIONS(97),
    [anon_sym_GT_GT] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(97),
    [sym_integer] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(97),
    [anon_sym_GT_EQ] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(95),
    [sym_float] = ACTIONS(97),
    [sym_function_name] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_PIPE_PIPE] = ACTIONS(97),
    [anon_sym_BANG_EQ] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_TILDE] = ACTIONS(97),
  },
  [18] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(81),
  },
  [19] = {
    [sym_comparison_operator] = STATE(43),
    [sym_parenthesized] = STATE(43),
    [sym_macro_variable] = STATE(13),
    [sym_binary_operator] = STATE(43),
    [sym_unary_operator] = STATE(43),
    [sym_call_macro_function] = STATE(43),
    [aux_sym__call_arguments_repeat1] = STATE(42),
    [sym__expressions] = STATE(43),
    [sym_boolean_operator] = STATE(43),
    [sym__call_expressions] = STATE(43),
    [sym_call_function] = STATE(43),
    [sym_function_name] = ACTIONS(17),
    [anon_sym_LPAREN2] = ACTIONS(21),
    [sym_signal] = ACTIONS(101),
    [sym_variable_name] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(103),
    [sym_integer] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(101),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [20] = {
    [anon_sym_AMP] = ACTIONS(107),
    [sym_signal] = ACTIONS(109),
    [sym_variable_name] = ACTIONS(107),
    [anon_sym_AMP_AMP] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_LT_EQ] = ACTIONS(109),
    [anon_sym_LPAREN2] = ACTIONS(109),
    [anon_sym_GT_GT] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [sym_integer] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_SEMI] = ACTIONS(109),
    [anon_sym_EQ_EQ] = ACTIONS(109),
    [anon_sym_GT_EQ] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [sym_float] = ACTIONS(109),
    [sym_function_name] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_PIPE_PIPE] = ACTIONS(109),
    [anon_sym_BANG_EQ] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_LT_LT] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
  },
  [21] = {
    [sym_unary_operator] = STATE(44),
    [sym_call_macro_function] = STATE(44),
    [sym_comparison_operator] = STATE(44),
    [sym_parenthesized] = STATE(44),
    [sym__expressions] = STATE(44),
    [sym_boolean_operator] = STATE(44),
    [sym__call_expressions] = STATE(44),
    [sym_call_function] = STATE(44),
    [sym_macro_variable] = STATE(13),
    [sym_binary_operator] = STATE(44),
    [sym_function_name] = ACTIONS(17),
    [anon_sym_LPAREN2] = ACTIONS(21),
    [sym_signal] = ACTIONS(111),
    [sym_variable_name] = ACTIONS(9),
    [sym_integer] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(111),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [22] = {
    [anon_sym_AMP] = ACTIONS(115),
    [sym_signal] = ACTIONS(117),
    [sym_variable_name] = ACTIONS(115),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_LT_EQ] = ACTIONS(117),
    [anon_sym_LPAREN2] = ACTIONS(117),
    [anon_sym_GT_GT] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_CARET] = ACTIONS(117),
    [sym_integer] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym_SEMI] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_PIPE] = ACTIONS(115),
    [sym_float] = ACTIONS(117),
    [sym_function_name] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_LT_LT] = ACTIONS(117),
    [anon_sym_TILDE] = ACTIONS(117),
  },
  [23] = {
    [sym_reset_statement] = ACTIONS(119),
    [sym_signal] = ACTIONS(121),
    [anon_sym_l] = ACTIONS(119),
    [sym_variable_name] = ACTIONS(119),
    [sym_float] = ACTIONS(121),
    [anon_sym_amp] = ACTIONS(119),
    [anon_sym_ramp] = ACTIONS(119),
    [sym_function_name] = ACTIONS(119),
    [anon_sym_LPAREN2] = ACTIONS(121),
    [anon_sym_define] = ACTIONS(119),
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_hz] = ACTIONS(119),
    [anon_sym_r] = ACTIONS(119),
    [sym_integer] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(121),
  },
  [24] = {
    [sym_integer] = ACTIONS(123),
    [sym_float] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_integer] = ACTIONS(127),
    [sym_float] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym__macro_arguments] = STATE(48),
    [sym_function_name] = ACTIONS(41),
    [anon_sym_LPAREN2] = ACTIONS(41),
    [sym_signal] = ACTIONS(43),
    [sym_variable_name] = ACTIONS(41),
    [sym_integer] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(131),
    [sym_float] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(43),
  },
  [27] = {
    [sym_unary_operator] = STATE(15),
    [sym_call_macro_function] = STATE(15),
    [sym_expression_statement] = STATE(49),
    [sym_comparison_operator] = STATE(15),
    [sym_parenthesized] = STATE(15),
    [sym__expressions] = STATE(15),
    [sym_boolean_operator] = STATE(15),
    [sym__call_expressions] = STATE(15),
    [sym_call_function] = STATE(15),
    [sym_macro_variable] = STATE(13),
    [sym_binary_operator] = STATE(15),
    [sym_function_name] = ACTIONS(17),
    [anon_sym_LPAREN2] = ACTIONS(21),
    [sym_signal] = ACTIONS(5),
    [sym_variable_name] = ACTIONS(9),
    [sym_integer] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [28] = {
    [sym_amp_statement] = STATE(8),
    [sym_ramp_statement] = STATE(8),
    [sym_expression_statement] = STATE(8),
    [sym_comparison_operator] = STATE(15),
    [sym_parenthesized] = STATE(15),
    [aux_sym_program_repeat1] = STATE(28),
    [sym_hz_statement] = STATE(8),
    [sym_macro_variable] = STATE(13),
    [sym_binary_operator] = STATE(15),
    [sym_unary_operator] = STATE(15),
    [sym_call_macro_function] = STATE(15),
    [sym_channel_statement] = STATE(8),
    [sym_define_statement] = STATE(8),
    [sym__expressions] = STATE(15),
    [sym_boolean_operator] = STATE(15),
    [sym__call_expressions] = STATE(15),
    [sym_call_function] = STATE(15),
    [sym_reset_statement] = ACTIONS(133),
    [sym_signal] = ACTIONS(136),
    [anon_sym_l] = ACTIONS(139),
    [sym_variable_name] = ACTIONS(142),
    [sym_float] = ACTIONS(136),
    [anon_sym_amp] = ACTIONS(145),
    [anon_sym_ramp] = ACTIONS(148),
    [sym_function_name] = ACTIONS(151),
    [anon_sym_LPAREN2] = ACTIONS(154),
    [anon_sym_define] = ACTIONS(157),
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_hz] = ACTIONS(160),
    [anon_sym_r] = ACTIONS(139),
    [sym_integer] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(166),
  },
  [29] = {
    [sym_comparison_operator] = STATE(50),
    [sym_parenthesized] = STATE(50),
    [sym_macro_variable] = STATE(13),
    [sym_binary_operator] = STATE(50),
    [sym_unary_operator] = STATE(50),
    [sym_call_macro_function] = STATE(50),
    [sym__expressions] = STATE(50),
    [sym_boolean_operator] = STATE(50),
    [sym__call_expressions] = STATE(50),
    [sym_call_function] = STATE(50),
    [sym_function_name] = ACTIONS(17),
    [anon_sym_LPAREN2] = ACTIONS(21),
    [sym_signal] = ACTIONS(169),
    [sym_variable_name] = ACTIONS(9),
    [sym_integer] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(169),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [30] = {
    [sym_comparison_operator] = STATE(51),
    [sym_parenthesized] = STATE(51),
    [sym_macro_variable] = STATE(13),
    [sym_binary_operator] = STATE(51),
    [sym_unary_operator] = STATE(51),
    [sym_call_macro_function] = STATE(51),
    [sym__expressions] = STATE(51),
    [sym_boolean_operator] = STATE(51),
    [sym__call_expressions] = STATE(51),
    [sym_call_function] = STATE(51),
    [sym_function_name] = ACTIONS(17),
    [anon_sym_LPAREN2] = ACTIONS(21),
    [sym_signal] = ACTIONS(173),
    [sym_variable_name] = ACTIONS(9),
    [sym_integer] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [31] = {
    [sym_comparison_operator] = STATE(52),
    [sym_parenthesized] = STATE(52),
    [sym_macro_variable] = STATE(13),
    [sym_binary_operator] = STATE(52),
    [sym_unary_operator] = STATE(52),
    [sym_call_macro_function] = STATE(52),
    [sym__expressions] = STATE(52),
    [sym_boolean_operator] = STATE(52),
    [sym__call_expressions] = STATE(52),
    [sym_call_function] = STATE(52),
    [sym_function_name] = ACTIONS(17),
    [anon_sym_LPAREN2] = ACTIONS(21),
    [sym_signal] = ACTIONS(177),
    [sym_variable_name] = ACTIONS(9),
    [sym_integer] = ACTIONS(179),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [32] = {
    [sym_comparison_operator] = STATE(53),
    [sym_parenthesized] = STATE(53),
    [sym_macro_variable] = STATE(13),
    [sym_binary_operator] = STATE(53),
    [sym_unary_operator] = STATE(53),
    [sym_call_macro_function] = STATE(53),
    [sym__expressions] = STATE(53),
    [sym_boolean_operator] = STATE(53),
    [sym__call_expressions] = STATE(53),
    [sym_call_function] = STATE(53),
    [sym_function_name] = ACTIONS(17),
    [anon_sym_LPAREN2] = ACTIONS(21),
    [sym_signal] = ACTIONS(181),
    [sym_variable_name] = ACTIONS(9),
    [sym_integer] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(181),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [33] = {
    [sym_comparison_operator] = STATE(54),
    [sym_parenthesized] = STATE(54),
    [sym_macro_variable] = STATE(13),
    [sym_binary_operator] = STATE(54),
    [sym_unary_operator] = STATE(54),
    [sym_call_macro_function] = STATE(54),
    [sym__expressions] = STATE(54),
    [sym_boolean_operator] = STATE(54),
    [sym__call_expressions] = STATE(54),
    [sym_call_function] = STATE(54),
    [sym_function_name] = ACTIONS(17),
    [anon_sym_LPAREN2] = ACTIONS(21),
    [sym_signal] = ACTIONS(185),
    [sym_variable_name] = ACTIONS(9),
    [sym_integer] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(185),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [34] = {
    [sym_comparison_operator] = STATE(55),
    [sym_parenthesized] = STATE(55),
    [sym_macro_variable] = STATE(13),
    [sym_binary_operator] = STATE(55),
    [sym_unary_operator] = STATE(55),
    [sym_call_macro_function] = STATE(55),
    [sym__expressions] = STATE(55),
    [sym_boolean_operator] = STATE(55),
    [sym__call_expressions] = STATE(55),
    [sym_call_function] = STATE(55),
    [sym_function_name] = ACTIONS(17),
    [anon_sym_LPAREN2] = ACTIONS(21),
    [sym_signal] = ACTIONS(189),
    [sym_variable_name] = ACTIONS(9),
    [sym_integer] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [35] = {
    [sym_comparison_operator] = STATE(56),
    [sym_parenthesized] = STATE(56),
    [sym_macro_variable] = STATE(13),
    [sym_binary_operator] = STATE(56),
    [sym_unary_operator] = STATE(56),
    [sym_call_macro_function] = STATE(56),
    [sym__expressions] = STATE(56),
    [sym_boolean_operator] = STATE(56),
    [sym__call_expressions] = STATE(56),
    [sym_call_function] = STATE(56),
    [sym_function_name] = ACTIONS(17),
    [anon_sym_LPAREN2] = ACTIONS(21),
    [sym_signal] = ACTIONS(193),
    [sym_variable_name] = ACTIONS(9),
    [sym_integer] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(193),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [36] = {
    [sym_comparison_operator] = STATE(57),
    [sym_parenthesized] = STATE(57),
    [sym_macro_variable] = STATE(13),
    [sym_binary_operator] = STATE(57),
    [sym_unary_operator] = STATE(57),
    [sym_call_macro_function] = STATE(57),
    [sym__expressions] = STATE(57),
    [sym_boolean_operator] = STATE(57),
    [sym__call_expressions] = STATE(57),
    [sym_call_function] = STATE(57),
    [sym_function_name] = ACTIONS(17),
    [anon_sym_LPAREN2] = ACTIONS(21),
    [sym_signal] = ACTIONS(197),
    [sym_variable_name] = ACTIONS(9),
    [sym_integer] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(197),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [37] = {
    [sym_comparison_operator] = STATE(58),
    [sym_parenthesized] = STATE(58),
    [sym_macro_variable] = STATE(13),
    [sym_binary_operator] = STATE(58),
    [sym_unary_operator] = STATE(58),
    [sym_call_macro_function] = STATE(58),
    [sym__expressions] = STATE(58),
    [sym_boolean_operator] = STATE(58),
    [sym__call_expressions] = STATE(58),
    [sym_call_function] = STATE(58),
    [sym_function_name] = ACTIONS(17),
    [anon_sym_LPAREN2] = ACTIONS(21),
    [sym_signal] = ACTIONS(201),
    [sym_variable_name] = ACTIONS(9),
    [sym_integer] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(201),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [38] = {
    [aux_sym_comparison_operator_repeat1] = STATE(59),
    [anon_sym_AMP] = ACTIONS(205),
    [sym_signal] = ACTIONS(207),
    [sym_variable_name] = ACTIONS(205),
    [anon_sym_AMP_AMP] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_LT_EQ] = ACTIONS(207),
    [anon_sym_LPAREN2] = ACTIONS(207),
    [anon_sym_GT_GT] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(207),
    [anon_sym_CARET] = ACTIONS(207),
    [sym_integer] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_SEMI] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(207),
    [anon_sym_GT_EQ] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_PIPE] = ACTIONS(205),
    [sym_float] = ACTIONS(207),
    [sym_function_name] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_PERCENT] = ACTIONS(207),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [anon_sym_BANG_EQ] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_LT_LT] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
  },
  [39] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(81),
  },
  [40] = {
    [anon_sym_AMP] = ACTIONS(211),
    [sym_signal] = ACTIONS(213),
    [sym_variable_name] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(213),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [anon_sym_LPAREN2] = ACTIONS(213),
    [anon_sym_GT_GT] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_CARET] = ACTIONS(213),
    [sym_integer] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(213),
    [anon_sym_SLASH] = ACTIONS(211),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_EQ_EQ] = ACTIONS(213),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(211),
    [sym_float] = ACTIONS(213),
    [sym_function_name] = ACTIONS(211),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_PERCENT] = ACTIONS(213),
    [anon_sym_PIPE_PIPE] = ACTIONS(213),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_LT] = ACTIONS(211),
    [anon_sym_GT] = ACTIONS(211),
    [anon_sym_LT_LT] = ACTIONS(213),
    [anon_sym_TILDE] = ACTIONS(213),
  },
  [41] = {
    [anon_sym_AMP] = ACTIONS(215),
    [sym_signal] = ACTIONS(217),
    [sym_variable_name] = ACTIONS(215),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_LPAREN2] = ACTIONS(217),
    [anon_sym_GT_GT] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_CARET] = ACTIONS(217),
    [sym_integer] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(215),
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_GT_EQ] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_PIPE] = ACTIONS(215),
    [sym_float] = ACTIONS(217),
    [sym_function_name] = ACTIONS(215),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_PERCENT] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(215),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_LT_LT] = ACTIONS(217),
    [anon_sym_TILDE] = ACTIONS(217),
  },
  [42] = {
    [sym_comparison_operator] = STATE(43),
    [sym_parenthesized] = STATE(43),
    [sym_macro_variable] = STATE(13),
    [sym_binary_operator] = STATE(43),
    [sym_unary_operator] = STATE(43),
    [sym_call_macro_function] = STATE(43),
    [aux_sym__call_arguments_repeat1] = STATE(62),
    [aux_sym__call_arguments_repeat2] = STATE(63),
    [sym__expressions] = STATE(43),
    [sym_boolean_operator] = STATE(43),
    [sym__call_expressions] = STATE(43),
    [sym_call_function] = STATE(43),
    [anon_sym_COMMA] = ACTIONS(219),
    [sym_signal] = ACTIONS(101),
    [sym_variable_name] = ACTIONS(9),
    [sym_float] = ACTIONS(101),
    [sym_function_name] = ACTIONS(17),
    [anon_sym_LPAREN2] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(221),
    [sym_integer] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [43] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(67),
    [sym_signal] = ACTIONS(223),
    [sym_variable_name] = ACTIONS(225),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [sym_float] = ACTIONS(223),
    [sym_function_name] = ACTIONS(225),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LPAREN2] = ACTIONS(223),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [sym_integer] = ACTIONS(225),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(223),
  },
  [44] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(227),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(81),
  },
  [45] = {
    [anon_sym_SEMI] = ACTIONS(229),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [anon_sym_SEMI] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [aux_sym__macro_arguments_repeat1] = STATE(65),
    [sym_variable_name] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [sym_function_name] = ACTIONS(237),
    [anon_sym_LPAREN2] = ACTIONS(239),
    [sym_signal] = ACTIONS(239),
    [sym_variable_name] = ACTIONS(237),
    [sym_integer] = ACTIONS(237),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(239),
    [anon_sym_TILDE] = ACTIONS(239),
  },
  [49] = {
    [anon_sym_SEMI] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(243),
    [sym_signal] = ACTIONS(245),
    [sym_variable_name] = ACTIONS(243),
    [anon_sym_AMP_AMP] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LPAREN2] = ACTIONS(245),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(245),
    [sym_integer] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(243),
    [sym_float] = ACTIONS(245),
    [sym_function_name] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(245),
  },
  [51] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(243),
    [sym_signal] = ACTIONS(245),
    [sym_variable_name] = ACTIONS(243),
    [anon_sym_AMP_AMP] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_LPAREN2] = ACTIONS(245),
    [anon_sym_GT_GT] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_CARET] = ACTIONS(245),
    [sym_integer] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(243),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(245),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(243),
    [sym_float] = ACTIONS(245),
    [sym_function_name] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_PERCENT] = ACTIONS(245),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_LT_LT] = ACTIONS(245),
    [anon_sym_TILDE] = ACTIONS(245),
  },
  [52] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(65),
    [sym_signal] = ACTIONS(247),
    [sym_variable_name] = ACTIONS(249),
    [anon_sym_AMP_AMP] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LPAREN2] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(85),
    [sym_integer] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(75),
    [sym_float] = ACTIONS(247),
    [sym_function_name] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(247),
  },
  [53] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(243),
    [sym_signal] = ACTIONS(245),
    [sym_variable_name] = ACTIONS(243),
    [anon_sym_AMP_AMP] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_LPAREN2] = ACTIONS(245),
    [anon_sym_GT_GT] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_CARET] = ACTIONS(245),
    [sym_integer] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(245),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(243),
    [sym_float] = ACTIONS(245),
    [sym_function_name] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_LT_LT] = ACTIONS(245),
    [anon_sym_TILDE] = ACTIONS(245),
  },
  [54] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(65),
    [sym_signal] = ACTIONS(245),
    [sym_variable_name] = ACTIONS(243),
    [anon_sym_AMP_AMP] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LPAREN2] = ACTIONS(245),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(85),
    [sym_integer] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(243),
    [sym_float] = ACTIONS(245),
    [sym_function_name] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(245),
  },
  [55] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(65),
    [sym_signal] = ACTIONS(251),
    [sym_variable_name] = ACTIONS(253),
    [anon_sym_AMP_AMP] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LPAREN2] = ACTIONS(251),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(85),
    [sym_integer] = ACTIONS(253),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(75),
    [sym_float] = ACTIONS(251),
    [sym_function_name] = ACTIONS(253),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(251),
  },
  [56] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(243),
    [sym_signal] = ACTIONS(245),
    [sym_variable_name] = ACTIONS(243),
    [anon_sym_AMP_AMP] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_LPAREN2] = ACTIONS(245),
    [anon_sym_GT_GT] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(245),
    [sym_integer] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(245),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(243),
    [sym_float] = ACTIONS(245),
    [sym_function_name] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_LT_LT] = ACTIONS(245),
    [anon_sym_TILDE] = ACTIONS(245),
  },
  [57] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(65),
    [sym_signal] = ACTIONS(245),
    [sym_variable_name] = ACTIONS(243),
    [anon_sym_AMP_AMP] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LPAREN2] = ACTIONS(245),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(245),
    [sym_integer] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(243),
    [sym_float] = ACTIONS(245),
    [sym_function_name] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(245),
  },
  [58] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(65),
    [sym_signal] = ACTIONS(251),
    [sym_variable_name] = ACTIONS(253),
    [anon_sym_AMP_AMP] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LPAREN2] = ACTIONS(251),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(85),
    [sym_integer] = ACTIONS(253),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(75),
    [sym_float] = ACTIONS(251),
    [sym_function_name] = ACTIONS(253),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(251),
  },
  [59] = {
    [aux_sym_comparison_operator_repeat1] = STATE(59),
    [anon_sym_AMP] = ACTIONS(249),
    [sym_signal] = ACTIONS(247),
    [sym_variable_name] = ACTIONS(249),
    [anon_sym_AMP_AMP] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_LPAREN2] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(247),
    [sym_integer] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(255),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(249),
    [anon_sym_PIPE] = ACTIONS(249),
    [sym_float] = ACTIONS(247),
    [sym_function_name] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(247),
    [anon_sym_PIPE_PIPE] = ACTIONS(247),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(258),
    [anon_sym_GT] = ACTIONS(258),
    [anon_sym_LT_LT] = ACTIONS(247),
    [anon_sym_TILDE] = ACTIONS(247),
  },
  [60] = {
    [sym_unary_operator] = STATE(43),
    [sym_call_macro_function] = STATE(43),
    [aux_sym__call_arguments_repeat1] = STATE(66),
    [sym_comparison_operator] = STATE(43),
    [sym_parenthesized] = STATE(43),
    [sym__expressions] = STATE(43),
    [sym_boolean_operator] = STATE(43),
    [sym__call_expressions] = STATE(43),
    [sym_call_function] = STATE(43),
    [sym_macro_variable] = STATE(13),
    [sym_binary_operator] = STATE(43),
    [sym_function_name] = ACTIONS(17),
    [anon_sym_LPAREN2] = ACTIONS(21),
    [sym_signal] = ACTIONS(101),
    [sym_variable_name] = ACTIONS(9),
    [sym_integer] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(101),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [61] = {
    [anon_sym_AMP] = ACTIONS(261),
    [sym_signal] = ACTIONS(263),
    [sym_variable_name] = ACTIONS(261),
    [anon_sym_AMP_AMP] = ACTIONS(263),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_LT_EQ] = ACTIONS(263),
    [anon_sym_LPAREN2] = ACTIONS(263),
    [anon_sym_GT_GT] = ACTIONS(263),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_CARET] = ACTIONS(263),
    [sym_integer] = ACTIONS(261),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(263),
    [anon_sym_SLASH] = ACTIONS(261),
    [anon_sym_SEMI] = ACTIONS(263),
    [anon_sym_EQ_EQ] = ACTIONS(263),
    [anon_sym_GT_EQ] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_PIPE] = ACTIONS(261),
    [sym_float] = ACTIONS(263),
    [sym_function_name] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(263),
    [anon_sym_PERCENT] = ACTIONS(263),
    [anon_sym_PIPE_PIPE] = ACTIONS(263),
    [anon_sym_BANG_EQ] = ACTIONS(263),
    [anon_sym_LT] = ACTIONS(261),
    [anon_sym_GT] = ACTIONS(261),
    [anon_sym_LT_LT] = ACTIONS(263),
    [anon_sym_TILDE] = ACTIONS(263),
  },
  [62] = {
    [sym_unary_operator] = STATE(43),
    [sym_call_macro_function] = STATE(43),
    [aux_sym__call_arguments_repeat1] = STATE(62),
    [sym_comparison_operator] = STATE(43),
    [sym_parenthesized] = STATE(43),
    [sym__expressions] = STATE(43),
    [sym_boolean_operator] = STATE(43),
    [sym__call_expressions] = STATE(43),
    [sym_call_function] = STATE(43),
    [sym_macro_variable] = STATE(13),
    [sym_binary_operator] = STATE(43),
    [sym_function_name] = ACTIONS(265),
    [anon_sym_COMMA] = ACTIONS(268),
    [anon_sym_LPAREN2] = ACTIONS(270),
    [sym_signal] = ACTIONS(273),
    [sym_variable_name] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(268),
    [sym_integer] = ACTIONS(279),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(273),
    [anon_sym_TILDE] = ACTIONS(282),
  },
  [63] = {
    [aux_sym__call_arguments_repeat2] = STATE(68),
    [anon_sym_COMMA] = ACTIONS(219),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(285),
  },
  [64] = {
    [sym_function_name] = ACTIONS(287),
    [anon_sym_LPAREN2] = ACTIONS(289),
    [sym_signal] = ACTIONS(289),
    [sym_variable_name] = ACTIONS(287),
    [sym_integer] = ACTIONS(287),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(289),
    [anon_sym_TILDE] = ACTIONS(289),
  },
  [65] = {
    [aux_sym__macro_arguments_repeat1] = STATE(71),
    [aux_sym__macro_arguments_repeat2] = STATE(72),
    [anon_sym_COMMA] = ACTIONS(291),
    [sym_comment] = ACTIONS(3),
    [sym_variable_name] = ACTIONS(293),
    [anon_sym_RPAREN] = ACTIONS(295),
  },
  [66] = {
    [sym_unary_operator] = STATE(43),
    [sym_call_macro_function] = STATE(43),
    [aux_sym__call_arguments_repeat1] = STATE(62),
    [sym_comparison_operator] = STATE(43),
    [sym_parenthesized] = STATE(43),
    [sym__expressions] = STATE(43),
    [sym_boolean_operator] = STATE(43),
    [sym__call_expressions] = STATE(43),
    [sym_call_function] = STATE(43),
    [sym_macro_variable] = STATE(13),
    [sym_binary_operator] = STATE(43),
    [sym_function_name] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(297),
    [anon_sym_LPAREN2] = ACTIONS(21),
    [sym_signal] = ACTIONS(101),
    [sym_variable_name] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(297),
    [sym_integer] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(101),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [67] = {
    [anon_sym_AMP] = ACTIONS(299),
    [sym_signal] = ACTIONS(301),
    [sym_variable_name] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_STAR] = ACTIONS(301),
    [anon_sym_LT_EQ] = ACTIONS(301),
    [anon_sym_LPAREN2] = ACTIONS(301),
    [anon_sym_GT_GT] = ACTIONS(301),
    [anon_sym_PLUS] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [sym_integer] = ACTIONS(299),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_SLASH] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(301),
    [anon_sym_EQ_EQ] = ACTIONS(301),
    [anon_sym_GT_EQ] = ACTIONS(301),
    [anon_sym_DASH] = ACTIONS(299),
    [anon_sym_PIPE] = ACTIONS(299),
    [sym_float] = ACTIONS(301),
    [sym_function_name] = ACTIONS(299),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_PERCENT] = ACTIONS(301),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_BANG_EQ] = ACTIONS(301),
    [anon_sym_LT] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(299),
    [anon_sym_LT_LT] = ACTIONS(301),
    [anon_sym_TILDE] = ACTIONS(301),
  },
  [68] = {
    [aux_sym__call_arguments_repeat2] = STATE(68),
    [anon_sym_COMMA] = ACTIONS(303),
    [anon_sym_RPAREN] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
  },
  [69] = {
    [aux_sym__macro_arguments_repeat1] = STATE(73),
    [sym_variable_name] = ACTIONS(306),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [sym_function_name] = ACTIONS(308),
    [anon_sym_LPAREN2] = ACTIONS(310),
    [sym_signal] = ACTIONS(310),
    [sym_variable_name] = ACTIONS(308),
    [sym_integer] = ACTIONS(308),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(310),
    [anon_sym_TILDE] = ACTIONS(310),
  },
  [71] = {
    [aux_sym__macro_arguments_repeat1] = STATE(71),
    [anon_sym_COMMA] = ACTIONS(312),
    [sym_comment] = ACTIONS(3),
    [sym_variable_name] = ACTIONS(314),
    [anon_sym_RPAREN] = ACTIONS(312),
  },
  [72] = {
    [aux_sym__macro_arguments_repeat2] = STATE(75),
    [anon_sym_COMMA] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(317),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [aux_sym__macro_arguments_repeat1] = STATE(71),
    [anon_sym_COMMA] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_variable_name] = ACTIONS(293),
    [anon_sym_RPAREN] = ACTIONS(319),
  },
  [74] = {
    [sym_function_name] = ACTIONS(321),
    [anon_sym_LPAREN2] = ACTIONS(323),
    [sym_signal] = ACTIONS(323),
    [sym_variable_name] = ACTIONS(321),
    [sym_integer] = ACTIONS(321),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(323),
    [anon_sym_TILDE] = ACTIONS(323),
  },
  [75] = {
    [aux_sym__macro_arguments_repeat2] = STATE(75),
    [anon_sym_COMMA] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(15),
  [7] = {.count = 1, .reusable = false}, SHIFT(8),
  [9] = {.count = 1, .reusable = false}, SHIFT(5),
  [11] = {.count = 1, .reusable = false}, SHIFT(6),
  [13] = {.count = 1, .reusable = false}, SHIFT(10),
  [15] = {.count = 1, .reusable = false}, SHIFT(2),
  [17] = {.count = 1, .reusable = false}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [21] = {.count = 1, .reusable = true}, SHIFT(4),
  [23] = {.count = 1, .reusable = false}, SHIFT(11),
  [25] = {.count = 1, .reusable = false}, SHIFT(9),
  [27] = {.count = 1, .reusable = false}, SHIFT(15),
  [29] = {.count = 1, .reusable = true}, SHIFT(3),
  [31] = {.count = 1, .reusable = true}, SHIFT(16),
  [33] = {.count = 1, .reusable = true}, SHIFT(17),
  [35] = {.count = 1, .reusable = false}, SHIFT(17),
  [37] = {.count = 1, .reusable = true}, SHIFT(18),
  [39] = {.count = 1, .reusable = false}, SHIFT(18),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym_macro_variable, 1),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_macro_variable, 1),
  [45] = {.count = 1, .reusable = true}, SHIFT(19),
  [47] = {.count = 1, .reusable = true}, SHIFT(21),
  [49] = {.count = 1, .reusable = true}, SHIFT(23),
  [51] = {.count = 1, .reusable = true}, SHIFT(24),
  [53] = {.count = 1, .reusable = true}, SHIFT(25),
  [55] = {.count = 1, .reusable = true}, SHIFT(26),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym__call_expressions, 1, .production_id = 1),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym__call_expressions, 1, .production_id = 1),
  [63] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [65] = {.count = 1, .reusable = false}, SHIFT(29),
  [67] = {.count = 1, .reusable = false}, SHIFT(30),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [71] = {.count = 1, .reusable = true}, SHIFT(31),
  [73] = {.count = 1, .reusable = false}, SHIFT(32),
  [75] = {.count = 1, .reusable = false}, SHIFT(33),
  [77] = {.count = 1, .reusable = true}, SHIFT(34),
  [79] = {.count = 1, .reusable = true}, SHIFT(30),
  [81] = {.count = 1, .reusable = true}, SHIFT(35),
  [83] = {.count = 1, .reusable = true}, SHIFT(32),
  [85] = {.count = 1, .reusable = true}, SHIFT(36),
  [87] = {.count = 1, .reusable = true}, SHIFT(37),
  [89] = {.count = 1, .reusable = false}, SHIFT(31),
  [91] = {.count = 1, .reusable = true}, SHIFT(39),
  [93] = {.count = 1, .reusable = false}, SHIFT(39),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_unary_operator, 2),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_unary_operator, 2),
  [99] = {.count = 1, .reusable = true}, SHIFT(40),
  [101] = {.count = 1, .reusable = true}, SHIFT(43),
  [103] = {.count = 1, .reusable = true}, SHIFT(41),
  [105] = {.count = 1, .reusable = false}, SHIFT(43),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_call_macro_function, 2, .production_id = 2),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_call_macro_function, 2, .production_id = 2),
  [111] = {.count = 1, .reusable = true}, SHIFT(44),
  [113] = {.count = 1, .reusable = false}, SHIFT(44),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_call_function, 2),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_call_function, 2),
  [119] = {.count = 1, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2),
  [121] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [123] = {.count = 1, .reusable = false}, SHIFT(45),
  [125] = {.count = 1, .reusable = true}, SHIFT(45),
  [127] = {.count = 1, .reusable = false}, SHIFT(46),
  [129] = {.count = 1, .reusable = true}, SHIFT(46),
  [131] = {.count = 1, .reusable = true}, SHIFT(47),
  [133] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [136] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [139] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [142] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [145] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [148] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [151] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [154] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [157] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [160] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [163] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [169] = {.count = 1, .reusable = true}, SHIFT(50),
  [171] = {.count = 1, .reusable = false}, SHIFT(50),
  [173] = {.count = 1, .reusable = true}, SHIFT(51),
  [175] = {.count = 1, .reusable = false}, SHIFT(51),
  [177] = {.count = 1, .reusable = true}, SHIFT(52),
  [179] = {.count = 1, .reusable = false}, SHIFT(52),
  [181] = {.count = 1, .reusable = true}, SHIFT(53),
  [183] = {.count = 1, .reusable = false}, SHIFT(53),
  [185] = {.count = 1, .reusable = true}, SHIFT(54),
  [187] = {.count = 1, .reusable = false}, SHIFT(54),
  [189] = {.count = 1, .reusable = true}, SHIFT(55),
  [191] = {.count = 1, .reusable = false}, SHIFT(55),
  [193] = {.count = 1, .reusable = true}, SHIFT(56),
  [195] = {.count = 1, .reusable = false}, SHIFT(56),
  [197] = {.count = 1, .reusable = true}, SHIFT(57),
  [199] = {.count = 1, .reusable = false}, SHIFT(57),
  [201] = {.count = 1, .reusable = true}, SHIFT(58),
  [203] = {.count = 1, .reusable = false}, SHIFT(58),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_comparison_operator, 2),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_comparison_operator, 2),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_ramp_statement, 3),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized, 3),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized, 3),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym__call_arguments, 2),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym__call_arguments, 2),
  [219] = {.count = 1, .reusable = true}, SHIFT(60),
  [221] = {.count = 1, .reusable = true}, SHIFT(61),
  [223] = {.count = 1, .reusable = true}, REDUCE(aux_sym__call_arguments_repeat1, 1),
  [225] = {.count = 1, .reusable = false}, REDUCE(aux_sym__call_arguments_repeat1, 1),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_channel_statement, 3),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_hz_statement, 3),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_amp_statement, 3),
  [233] = {.count = 1, .reusable = true}, SHIFT(65),
  [235] = {.count = 1, .reusable = true}, SHIFT(64),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym_macro_function, 2, .production_id = 2),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_macro_function, 2, .production_id = 2),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_define_statement, 3),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym_binary_operator, 3),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_binary_operator, 3),
  [247] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [249] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_operator, 3),
  [253] = {.count = 1, .reusable = false}, REDUCE(sym_boolean_operator, 3),
  [255] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(31),
  [258] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(31),
  [261] = {.count = 1, .reusable = false}, REDUCE(sym__call_arguments, 3),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym__call_arguments, 3),
  [265] = {.count = 2, .reusable = false}, REDUCE(aux_sym__call_arguments_repeat1, 2), SHIFT_REPEAT(7),
  [268] = {.count = 1, .reusable = true}, REDUCE(aux_sym__call_arguments_repeat1, 2),
  [270] = {.count = 2, .reusable = true}, REDUCE(aux_sym__call_arguments_repeat1, 2), SHIFT_REPEAT(4),
  [273] = {.count = 2, .reusable = true}, REDUCE(aux_sym__call_arguments_repeat1, 2), SHIFT_REPEAT(43),
  [276] = {.count = 2, .reusable = false}, REDUCE(aux_sym__call_arguments_repeat1, 2), SHIFT_REPEAT(5),
  [279] = {.count = 2, .reusable = false}, REDUCE(aux_sym__call_arguments_repeat1, 2), SHIFT_REPEAT(43),
  [282] = {.count = 2, .reusable = true}, REDUCE(aux_sym__call_arguments_repeat1, 2), SHIFT_REPEAT(3),
  [285] = {.count = 1, .reusable = true}, SHIFT(67),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arguments, 2),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arguments, 2),
  [291] = {.count = 1, .reusable = true}, SHIFT(69),
  [293] = {.count = 1, .reusable = true}, SHIFT(71),
  [295] = {.count = 1, .reusable = true}, SHIFT(70),
  [297] = {.count = 1, .reusable = true}, REDUCE(aux_sym__call_arguments_repeat2, 2),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym__call_arguments, 4),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym__call_arguments, 4),
  [303] = {.count = 2, .reusable = true}, REDUCE(aux_sym__call_arguments_repeat2, 2), SHIFT_REPEAT(60),
  [306] = {.count = 1, .reusable = true}, SHIFT(73),
  [308] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arguments, 3),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arguments, 3),
  [312] = {.count = 1, .reusable = true}, REDUCE(aux_sym__macro_arguments_repeat1, 2),
  [314] = {.count = 2, .reusable = true}, REDUCE(aux_sym__macro_arguments_repeat1, 2), SHIFT_REPEAT(71),
  [317] = {.count = 1, .reusable = true}, SHIFT(74),
  [319] = {.count = 1, .reusable = true}, REDUCE(aux_sym__macro_arguments_repeat2, 2),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arguments, 4),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arguments, 4),
  [325] = {.count = 2, .reusable = true}, REDUCE(aux_sym__macro_arguments_repeat2, 2), SHIFT_REPEAT(69),
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
