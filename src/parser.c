#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 76
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 2
#define TOKEN_COUNT 41
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
  sym__call_macro_variable = 33,
  sym_reserved_word = 34,
  sym_integer = 35,
  sym_float = 36,
  sym_signal = 37,
  sym_function_name = 38,
  sym_variable_name = 39,
  sym_comment = 40,
  sym_program = 41,
  sym_hz_statement = 42,
  sym_amp_statement = 43,
  sym_ramp_statement = 44,
  sym_channel_statement = 45,
  sym_define_statement = 46,
  sym_macro_variable = 47,
  sym_macro_function = 48,
  sym__macro_function_arguments = 49,
  sym_expression_statement = 50,
  sym__expressions = 51,
  sym_boolean_operator = 52,
  sym_binary_operator = 53,
  sym_unary_operator = 54,
  sym_comparison_operator = 55,
  sym_parenthesized = 56,
  sym__call_expressions = 57,
  sym_call_function = 58,
  sym_call_macro = 59,
  sym__call_macro_function = 60,
  sym_arguments = 61,
  aux_sym_program_repeat1 = 62,
  aux_sym__macro_function_arguments_repeat1 = 63,
  aux_sym__macro_function_arguments_repeat2 = 64,
  aux_sym_comparison_operator_repeat1 = 65,
  aux_sym_arguments_repeat1 = 66,
  aux_sym_arguments_repeat2 = 67,
  alias_sym_name = 68,
  alias_sym_variable = 69,
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
  [sym__call_macro_variable] = "_call_macro_variable",
  [sym_reserved_word] = "reserved_word",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_signal] = "signal",
  [sym_function_name] = "name",
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
  [sym__macro_function_arguments] = "arguments",
  [sym_expression_statement] = "expression_statement",
  [sym__expressions] = "_expressions",
  [sym_boolean_operator] = "boolean_operator",
  [sym_binary_operator] = "binary_operator",
  [sym_unary_operator] = "unary_operator",
  [sym_comparison_operator] = "comparison_operator",
  [sym_parenthesized] = "parenthesized",
  [sym__call_expressions] = "_call_expressions",
  [sym_call_function] = "call_function",
  [sym_call_macro] = "call_macro",
  [sym__call_macro_function] = "function",
  [sym_arguments] = "arguments",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__macro_function_arguments_repeat1] = "_macro_function_arguments_repeat1",
  [aux_sym__macro_function_arguments_repeat2] = "_macro_function_arguments_repeat2",
  [aux_sym_comparison_operator_repeat1] = "comparison_operator_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_repeat2] = "arguments_repeat2",
  [alias_sym_name] = "name",
  [alias_sym_variable] = "variable",
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
  [sym__call_macro_variable] = {
    .visible = false,
    .named = true,
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
  [sym__macro_function_arguments] = {
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
  [sym_call_macro] = {
    .visible = true,
    .named = true,
  },
  [sym__call_macro_function] = {
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
  [aux_sym__macro_function_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__macro_function_arguments_repeat2] = {
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
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_variable,
  },
  [2] = {
    [0] = alias_sym_name,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(14);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '%') ADVANCE(37);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '0') ADVANCE(107);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(56);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '^') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'h') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == 't') ADVANCE(63);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '~') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(14);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '%') ADVANCE(37);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '0') ADVANCE(107);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(56);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '^') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'h') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == 't') ADVANCE(63);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '~') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(14);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == 'd') ADVANCE(129);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'h') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == '~') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '%') ADVANCE(37);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '0') ADVANCE(107);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '^') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(136);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '~') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '%') ADVANCE(37);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '0') ADVANCE(107);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '^') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(136);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '~') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(170);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(169);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == 'v') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_hz);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_hz);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_amp);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_amp);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_reset_statement);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_reset_statement);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_ramp);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_ramp);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'o') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'o') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_define);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_define);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(170);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(33);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(34);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '>') ADVANCE(41);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__call_macro_variable);
      if (lookahead == '1') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__call_macro_variable);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__call_macro_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_reserved_word);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(117);
      if (lookahead == 'h') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 'm') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'q') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_signal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == '1') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == '2') ADVANCE(117);
      if (lookahead == 'h') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'h') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'm') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_function_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_function_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '1') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'o') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'i') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'b') ADVANCE(157);
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead == 'm') ADVANCE(153);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead == 't') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'b') ADVANCE(157);
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead == 't') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'o') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead == 'n') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'f') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'g') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'q') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'm') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'p') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'p') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'p') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'w') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'x') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'x') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'z') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(167);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '0' ||
          lookahead == 'p') ADVANCE(117);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
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
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
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
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 0},
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
    [sym_float] = ACTIONS(1),
    [sym_reserved_word] = ACTIONS(1),
    [sym_function_name] = ACTIONS(1),
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
    [sym_identifier] = ACTIONS(1),
    [sym_variable_name] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_reset_statement] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [sym__call_macro_variable] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(1),
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
    [sym_amp_statement] = STATE(2),
    [sym_ramp_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_comparison_operator] = STATE(15),
    [sym_parenthesized] = STATE(15),
    [aux_sym_program_repeat1] = STATE(12),
    [sym_hz_statement] = STATE(2),
    [sym_binary_operator] = STATE(15),
    [sym_unary_operator] = STATE(15),
    [sym_call_macro] = STATE(15),
    [sym__call_macro_function] = STATE(13),
    [sym_program] = STATE(14),
    [sym_channel_statement] = STATE(2),
    [sym_define_statement] = STATE(2),
    [sym__expressions] = STATE(15),
    [sym_boolean_operator] = STATE(15),
    [sym__call_expressions] = STATE(15),
    [sym_call_function] = STATE(15),
    [sym_reset_statement] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [anon_sym_l] = ACTIONS(9),
    [sym_function_name] = ACTIONS(11),
    [sym__call_macro_variable] = ACTIONS(13),
    [anon_sym_amp] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [anon_sym_ramp] = ACTIONS(19),
    [sym_signal] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [anon_sym_define] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_hz] = ACTIONS(27),
    [anon_sym_r] = ACTIONS(9),
    [sym_variable_name] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [2] = {
    [anon_sym_SEMI] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_reserved_word] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_arguments] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_arguments] = STATE(20),
    [anon_sym_AMP] = ACTIONS(37),
    [sym_float] = ACTIONS(39),
    [sym_function_name] = ACTIONS(37),
    [anon_sym_AMP_AMP] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_LPAREN2] = ACTIONS(37),
    [anon_sym_GT_GT] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(39),
    [sym_variable_name] = ACTIONS(37),
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_EQ_EQ] = ACTIONS(39),
    [sym__call_macro_variable] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_integer] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_PIPE_PIPE] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LT_LT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(39),
  },
  [6] = {
    [sym_macro_variable] = STATE(22),
    [sym_macro_function] = STATE(22),
    [sym_variable_name] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_reserved_word] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_comparison_operator] = STATE(24),
    [sym_parenthesized] = STATE(24),
    [sym_binary_operator] = STATE(24),
    [sym_unary_operator] = STATE(24),
    [sym_call_macro] = STATE(24),
    [sym__call_macro_function] = STATE(13),
    [sym__expressions] = STATE(24),
    [sym_boolean_operator] = STATE(24),
    [sym__call_expressions] = STATE(24),
    [sym_call_function] = STATE(24),
    [sym_signal] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_float] = ACTIONS(47),
    [sym_function_name] = ACTIONS(11),
    [sym__call_macro_variable] = ACTIONS(13),
    [sym_variable_name] = ACTIONS(45),
    [sym_integer] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [9] = {
    [sym_reserved_word] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_reserved_word] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_comparison_operator] = STATE(27),
    [sym_parenthesized] = STATE(27),
    [sym_binary_operator] = STATE(27),
    [sym_unary_operator] = STATE(27),
    [sym_call_macro] = STATE(27),
    [sym__call_macro_function] = STATE(13),
    [sym__expressions] = STATE(27),
    [sym_boolean_operator] = STATE(27),
    [sym__call_expressions] = STATE(27),
    [sym_call_function] = STATE(27),
    [sym_signal] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_float] = ACTIONS(55),
    [sym_function_name] = ACTIONS(11),
    [sym__call_macro_variable] = ACTIONS(13),
    [sym_variable_name] = ACTIONS(53),
    [sym_integer] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [12] = {
    [sym_amp_statement] = STATE(2),
    [sym_ramp_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_comparison_operator] = STATE(15),
    [sym_parenthesized] = STATE(15),
    [aux_sym_program_repeat1] = STATE(28),
    [sym_hz_statement] = STATE(2),
    [sym_binary_operator] = STATE(15),
    [sym_unary_operator] = STATE(15),
    [sym_call_macro] = STATE(15),
    [sym__call_macro_function] = STATE(13),
    [sym_channel_statement] = STATE(2),
    [sym_define_statement] = STATE(2),
    [sym__expressions] = STATE(15),
    [sym_boolean_operator] = STATE(15),
    [sym__call_expressions] = STATE(15),
    [sym_call_function] = STATE(15),
    [sym_reset_statement] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [anon_sym_l] = ACTIONS(9),
    [sym_function_name] = ACTIONS(11),
    [sym__call_macro_variable] = ACTIONS(13),
    [anon_sym_amp] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [anon_sym_ramp] = ACTIONS(19),
    [sym_signal] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [anon_sym_define] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_hz] = ACTIONS(27),
    [anon_sym_r] = ACTIONS(9),
    [sym_variable_name] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [13] = {
    [anon_sym_AMP] = ACTIONS(59),
    [sym_float] = ACTIONS(61),
    [sym_function_name] = ACTIONS(59),
    [anon_sym_AMP_AMP] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_LPAREN2] = ACTIONS(61),
    [anon_sym_GT_GT] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_CARET] = ACTIONS(61),
    [sym_variable_name] = ACTIONS(59),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_EQ_EQ] = ACTIONS(61),
    [sym__call_macro_variable] = ACTIONS(59),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(59),
    [sym_integer] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(59),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(81),
  },
  [16] = {
    [sym_reset_statement] = ACTIONS(91),
    [sym_float] = ACTIONS(93),
    [anon_sym_l] = ACTIONS(91),
    [sym_function_name] = ACTIONS(91),
    [sym__call_macro_variable] = ACTIONS(91),
    [sym_integer] = ACTIONS(91),
    [anon_sym_amp] = ACTIONS(91),
    [anon_sym_ramp] = ACTIONS(91),
    [sym_signal] = ACTIONS(91),
    [anon_sym_LPAREN2] = ACTIONS(93),
    [anon_sym_define] = ACTIONS(91),
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_hz] = ACTIONS(91),
    [anon_sym_r] = ACTIONS(91),
    [sym_variable_name] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(93),
  },
  [17] = {
    [sym_unary_operator] = STATE(39),
    [sym_call_macro] = STATE(39),
    [sym__call_macro_function] = STATE(13),
    [sym_comparison_operator] = STATE(39),
    [sym_parenthesized] = STATE(39),
    [sym__expressions] = STATE(39),
    [sym_boolean_operator] = STATE(39),
    [sym__call_expressions] = STATE(39),
    [sym_call_function] = STATE(39),
    [sym_binary_operator] = STATE(39),
    [sym_signal] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_float] = ACTIONS(97),
    [sym_function_name] = ACTIONS(11),
    [sym__call_macro_variable] = ACTIONS(13),
    [sym_variable_name] = ACTIONS(95),
    [sym_integer] = ACTIONS(95),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [18] = {
    [sym_comparison_operator] = STATE(42),
    [sym_parenthesized] = STATE(42),
    [sym_binary_operator] = STATE(42),
    [sym_unary_operator] = STATE(42),
    [sym_call_macro] = STATE(42),
    [sym__call_macro_function] = STATE(13),
    [aux_sym_arguments_repeat1] = STATE(41),
    [sym__expressions] = STATE(42),
    [sym_boolean_operator] = STATE(42),
    [sym__call_expressions] = STATE(42),
    [sym_call_function] = STATE(42),
    [sym_float] = ACTIONS(99),
    [sym_function_name] = ACTIONS(11),
    [sym__call_macro_variable] = ACTIONS(13),
    [sym_integer] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(101),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(103),
    [sym_variable_name] = ACTIONS(101),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [19] = {
    [anon_sym_AMP] = ACTIONS(105),
    [sym_float] = ACTIONS(107),
    [sym_function_name] = ACTIONS(105),
    [anon_sym_AMP_AMP] = ACTIONS(107),
    [anon_sym_STAR] = ACTIONS(107),
    [anon_sym_LT_EQ] = ACTIONS(107),
    [anon_sym_LPAREN2] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [sym_variable_name] = ACTIONS(105),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(105),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_EQ_EQ] = ACTIONS(107),
    [sym__call_macro_variable] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_PIPE] = ACTIONS(105),
    [sym_integer] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_PIPE_PIPE] = ACTIONS(107),
    [anon_sym_BANG_EQ] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(105),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_LT_LT] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
  },
  [20] = {
    [anon_sym_AMP] = ACTIONS(109),
    [sym_float] = ACTIONS(111),
    [sym_function_name] = ACTIONS(109),
    [anon_sym_AMP_AMP] = ACTIONS(111),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_LT_EQ] = ACTIONS(111),
    [anon_sym_LPAREN2] = ACTIONS(111),
    [anon_sym_GT_GT] = ACTIONS(111),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_CARET] = ACTIONS(111),
    [sym_variable_name] = ACTIONS(109),
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_EQ_EQ] = ACTIONS(111),
    [sym__call_macro_variable] = ACTIONS(109),
    [anon_sym_GT_EQ] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [sym_integer] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_PERCENT] = ACTIONS(111),
    [anon_sym_PIPE_PIPE] = ACTIONS(111),
    [anon_sym_BANG_EQ] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_LT_LT] = ACTIONS(111),
    [anon_sym_TILDE] = ACTIONS(111),
  },
  [21] = {
    [sym__macro_function_arguments] = STATE(44),
    [sym_signal] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN2] = ACTIONS(113),
    [sym_float] = ACTIONS(115),
    [sym_function_name] = ACTIONS(113),
    [sym__call_macro_variable] = ACTIONS(113),
    [sym_variable_name] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(117),
    [sym_integer] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(115),
  },
  [22] = {
    [sym_unary_operator] = STATE(15),
    [sym_call_macro] = STATE(15),
    [sym__call_macro_function] = STATE(13),
    [sym_expression_statement] = STATE(45),
    [sym_comparison_operator] = STATE(15),
    [sym_parenthesized] = STATE(15),
    [sym__expressions] = STATE(15),
    [sym_boolean_operator] = STATE(15),
    [sym__call_expressions] = STATE(15),
    [sym_call_function] = STATE(15),
    [sym_binary_operator] = STATE(15),
    [sym_signal] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_float] = ACTIONS(7),
    [sym_function_name] = ACTIONS(11),
    [sym__call_macro_variable] = ACTIONS(13),
    [sym_variable_name] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [23] = {
    [sym_unary_operator] = STATE(46),
    [sym_call_macro] = STATE(46),
    [sym__call_macro_function] = STATE(13),
    [sym_comparison_operator] = STATE(46),
    [sym_parenthesized] = STATE(46),
    [sym__expressions] = STATE(46),
    [sym_boolean_operator] = STATE(46),
    [sym__call_expressions] = STATE(46),
    [sym_call_function] = STATE(46),
    [sym_binary_operator] = STATE(46),
    [sym_signal] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_float] = ACTIONS(121),
    [sym_function_name] = ACTIONS(11),
    [sym__call_macro_variable] = ACTIONS(13),
    [sym_variable_name] = ACTIONS(119),
    [sym_integer] = ACTIONS(119),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [24] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(81),
  },
  [25] = {
    [sym_comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(125),
    [sym_float] = ACTIONS(127),
  },
  [26] = {
    [sym_comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(129),
    [sym_float] = ACTIONS(131),
  },
  [27] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(133),
    [sym_float] = ACTIONS(135),
    [sym_function_name] = ACTIONS(133),
    [anon_sym_AMP_AMP] = ACTIONS(135),
    [anon_sym_STAR] = ACTIONS(135),
    [anon_sym_LT_EQ] = ACTIONS(135),
    [anon_sym_LPAREN2] = ACTIONS(135),
    [anon_sym_GT_GT] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(135),
    [sym_variable_name] = ACTIONS(133),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(133),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_EQ_EQ] = ACTIONS(135),
    [sym__call_macro_variable] = ACTIONS(133),
    [anon_sym_GT_EQ] = ACTIONS(135),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(133),
    [sym_integer] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_PERCENT] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(135),
    [anon_sym_BANG_EQ] = ACTIONS(135),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_LT_LT] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(135),
  },
  [28] = {
    [sym_amp_statement] = STATE(2),
    [sym_ramp_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_comparison_operator] = STATE(15),
    [sym_parenthesized] = STATE(15),
    [aux_sym_program_repeat1] = STATE(28),
    [sym_hz_statement] = STATE(2),
    [sym_binary_operator] = STATE(15),
    [sym_unary_operator] = STATE(15),
    [sym_call_macro] = STATE(15),
    [sym__call_macro_function] = STATE(13),
    [sym_channel_statement] = STATE(2),
    [sym_define_statement] = STATE(2),
    [sym__expressions] = STATE(15),
    [sym_boolean_operator] = STATE(15),
    [sym__call_expressions] = STATE(15),
    [sym_call_function] = STATE(15),
    [sym_reset_statement] = ACTIONS(137),
    [sym_float] = ACTIONS(140),
    [anon_sym_l] = ACTIONS(143),
    [sym_function_name] = ACTIONS(146),
    [sym__call_macro_variable] = ACTIONS(149),
    [sym_integer] = ACTIONS(152),
    [anon_sym_amp] = ACTIONS(155),
    [anon_sym_ramp] = ACTIONS(158),
    [sym_signal] = ACTIONS(152),
    [anon_sym_LPAREN2] = ACTIONS(161),
    [anon_sym_define] = ACTIONS(164),
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_hz] = ACTIONS(167),
    [anon_sym_r] = ACTIONS(143),
    [sym_variable_name] = ACTIONS(152),
    [anon_sym_TILDE] = ACTIONS(170),
  },
  [29] = {
    [sym_comparison_operator] = STATE(50),
    [sym_parenthesized] = STATE(50),
    [sym_binary_operator] = STATE(50),
    [sym_unary_operator] = STATE(50),
    [sym_call_macro] = STATE(50),
    [sym__call_macro_function] = STATE(13),
    [sym__expressions] = STATE(50),
    [sym_boolean_operator] = STATE(50),
    [sym__call_expressions] = STATE(50),
    [sym_call_function] = STATE(50),
    [sym_signal] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_float] = ACTIONS(175),
    [sym_function_name] = ACTIONS(11),
    [sym__call_macro_variable] = ACTIONS(13),
    [sym_variable_name] = ACTIONS(173),
    [sym_integer] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [30] = {
    [sym_comparison_operator] = STATE(51),
    [sym_parenthesized] = STATE(51),
    [sym_binary_operator] = STATE(51),
    [sym_unary_operator] = STATE(51),
    [sym_call_macro] = STATE(51),
    [sym__call_macro_function] = STATE(13),
    [sym__expressions] = STATE(51),
    [sym_boolean_operator] = STATE(51),
    [sym__call_expressions] = STATE(51),
    [sym_call_function] = STATE(51),
    [sym_signal] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_float] = ACTIONS(179),
    [sym_function_name] = ACTIONS(11),
    [sym__call_macro_variable] = ACTIONS(13),
    [sym_variable_name] = ACTIONS(177),
    [sym_integer] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [31] = {
    [sym_comparison_operator] = STATE(52),
    [sym_parenthesized] = STATE(52),
    [sym_binary_operator] = STATE(52),
    [sym_unary_operator] = STATE(52),
    [sym_call_macro] = STATE(52),
    [sym__call_macro_function] = STATE(13),
    [sym__expressions] = STATE(52),
    [sym_boolean_operator] = STATE(52),
    [sym__call_expressions] = STATE(52),
    [sym_call_function] = STATE(52),
    [sym_signal] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_float] = ACTIONS(183),
    [sym_function_name] = ACTIONS(11),
    [sym__call_macro_variable] = ACTIONS(13),
    [sym_variable_name] = ACTIONS(181),
    [sym_integer] = ACTIONS(181),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [32] = {
    [sym_comparison_operator] = STATE(53),
    [sym_parenthesized] = STATE(53),
    [sym_binary_operator] = STATE(53),
    [sym_unary_operator] = STATE(53),
    [sym_call_macro] = STATE(53),
    [sym__call_macro_function] = STATE(13),
    [sym__expressions] = STATE(53),
    [sym_boolean_operator] = STATE(53),
    [sym__call_expressions] = STATE(53),
    [sym_call_function] = STATE(53),
    [sym_signal] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_float] = ACTIONS(187),
    [sym_function_name] = ACTIONS(11),
    [sym__call_macro_variable] = ACTIONS(13),
    [sym_variable_name] = ACTIONS(185),
    [sym_integer] = ACTIONS(185),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [33] = {
    [sym_comparison_operator] = STATE(54),
    [sym_parenthesized] = STATE(54),
    [sym_binary_operator] = STATE(54),
    [sym_unary_operator] = STATE(54),
    [sym_call_macro] = STATE(54),
    [sym__call_macro_function] = STATE(13),
    [sym__expressions] = STATE(54),
    [sym_boolean_operator] = STATE(54),
    [sym__call_expressions] = STATE(54),
    [sym_call_function] = STATE(54),
    [sym_signal] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_float] = ACTIONS(191),
    [sym_function_name] = ACTIONS(11),
    [sym__call_macro_variable] = ACTIONS(13),
    [sym_variable_name] = ACTIONS(189),
    [sym_integer] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [34] = {
    [sym_comparison_operator] = STATE(55),
    [sym_parenthesized] = STATE(55),
    [sym_binary_operator] = STATE(55),
    [sym_unary_operator] = STATE(55),
    [sym_call_macro] = STATE(55),
    [sym__call_macro_function] = STATE(13),
    [sym__expressions] = STATE(55),
    [sym_boolean_operator] = STATE(55),
    [sym__call_expressions] = STATE(55),
    [sym_call_function] = STATE(55),
    [sym_signal] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_float] = ACTIONS(195),
    [sym_function_name] = ACTIONS(11),
    [sym__call_macro_variable] = ACTIONS(13),
    [sym_variable_name] = ACTIONS(193),
    [sym_integer] = ACTIONS(193),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [35] = {
    [sym_comparison_operator] = STATE(56),
    [sym_parenthesized] = STATE(56),
    [sym_binary_operator] = STATE(56),
    [sym_unary_operator] = STATE(56),
    [sym_call_macro] = STATE(56),
    [sym__call_macro_function] = STATE(13),
    [sym__expressions] = STATE(56),
    [sym_boolean_operator] = STATE(56),
    [sym__call_expressions] = STATE(56),
    [sym_call_function] = STATE(56),
    [sym_signal] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_float] = ACTIONS(199),
    [sym_function_name] = ACTIONS(11),
    [sym__call_macro_variable] = ACTIONS(13),
    [sym_variable_name] = ACTIONS(197),
    [sym_integer] = ACTIONS(197),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [36] = {
    [sym_comparison_operator] = STATE(57),
    [sym_parenthesized] = STATE(57),
    [sym_binary_operator] = STATE(57),
    [sym_unary_operator] = STATE(57),
    [sym_call_macro] = STATE(57),
    [sym__call_macro_function] = STATE(13),
    [sym__expressions] = STATE(57),
    [sym_boolean_operator] = STATE(57),
    [sym__call_expressions] = STATE(57),
    [sym_call_function] = STATE(57),
    [sym_signal] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_float] = ACTIONS(203),
    [sym_function_name] = ACTIONS(11),
    [sym__call_macro_variable] = ACTIONS(13),
    [sym_variable_name] = ACTIONS(201),
    [sym_integer] = ACTIONS(201),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [37] = {
    [sym_comparison_operator] = STATE(58),
    [sym_parenthesized] = STATE(58),
    [sym_binary_operator] = STATE(58),
    [sym_unary_operator] = STATE(58),
    [sym_call_macro] = STATE(58),
    [sym__call_macro_function] = STATE(13),
    [sym__expressions] = STATE(58),
    [sym_boolean_operator] = STATE(58),
    [sym__call_expressions] = STATE(58),
    [sym_call_function] = STATE(58),
    [sym_signal] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_float] = ACTIONS(207),
    [sym_function_name] = ACTIONS(11),
    [sym__call_macro_variable] = ACTIONS(13),
    [sym_variable_name] = ACTIONS(205),
    [sym_integer] = ACTIONS(205),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [38] = {
    [aux_sym_comparison_operator_repeat1] = STATE(59),
    [anon_sym_AMP] = ACTIONS(209),
    [sym_float] = ACTIONS(211),
    [sym_function_name] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_LPAREN2] = ACTIONS(211),
    [anon_sym_GT_GT] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_CARET] = ACTIONS(211),
    [sym_variable_name] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_SEMI] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [sym__call_macro_variable] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_PIPE] = ACTIONS(209),
    [sym_integer] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_PERCENT] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_LT_LT] = ACTIONS(211),
    [anon_sym_TILDE] = ACTIONS(211),
  },
  [39] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(81),
  },
  [40] = {
    [anon_sym_AMP] = ACTIONS(215),
    [sym_float] = ACTIONS(217),
    [sym_function_name] = ACTIONS(215),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_LPAREN2] = ACTIONS(217),
    [anon_sym_GT_GT] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_CARET] = ACTIONS(217),
    [sym_variable_name] = ACTIONS(215),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(215),
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [sym__call_macro_variable] = ACTIONS(215),
    [anon_sym_GT_EQ] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_PIPE] = ACTIONS(215),
    [sym_integer] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(215),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_PERCENT] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(215),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_LT_LT] = ACTIONS(217),
    [anon_sym_TILDE] = ACTIONS(217),
  },
  [41] = {
    [sym_comparison_operator] = STATE(42),
    [sym_parenthesized] = STATE(42),
    [aux_sym_arguments_repeat2] = STATE(63),
    [sym_binary_operator] = STATE(42),
    [sym_unary_operator] = STATE(42),
    [sym_call_macro] = STATE(42),
    [sym__call_macro_function] = STATE(13),
    [aux_sym_arguments_repeat1] = STATE(62),
    [sym__expressions] = STATE(42),
    [sym_boolean_operator] = STATE(42),
    [sym__call_expressions] = STATE(42),
    [sym_call_function] = STATE(42),
    [anon_sym_COMMA] = ACTIONS(219),
    [sym_float] = ACTIONS(99),
    [sym_function_name] = ACTIONS(11),
    [sym__call_macro_variable] = ACTIONS(13),
    [sym_integer] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(101),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(221),
    [sym_variable_name] = ACTIONS(101),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [42] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(65),
    [sym_float] = ACTIONS(223),
    [sym_function_name] = ACTIONS(225),
    [anon_sym_AMP_AMP] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LPAREN2] = ACTIONS(223),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(85),
    [sym_variable_name] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [sym__call_macro_variable] = ACTIONS(225),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(75),
    [sym_integer] = ACTIONS(225),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(223),
  },
  [43] = {
    [aux_sym__macro_function_arguments_repeat1] = STATE(65),
    [sym_comment] = ACTIONS(3),
    [sym_variable_name] = ACTIONS(227),
    [anon_sym_RPAREN] = ACTIONS(229),
  },
  [44] = {
    [sym_signal] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN2] = ACTIONS(233),
    [sym_float] = ACTIONS(233),
    [sym_function_name] = ACTIONS(231),
    [sym__call_macro_variable] = ACTIONS(231),
    [sym_variable_name] = ACTIONS(231),
    [sym_integer] = ACTIONS(231),
    [anon_sym_TILDE] = ACTIONS(233),
  },
  [45] = {
    [anon_sym_SEMI] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(81),
  },
  [47] = {
    [anon_sym_AMP] = ACTIONS(239),
    [sym_float] = ACTIONS(241),
    [sym_function_name] = ACTIONS(239),
    [anon_sym_AMP_AMP] = ACTIONS(241),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_LT_EQ] = ACTIONS(241),
    [anon_sym_LPAREN2] = ACTIONS(241),
    [anon_sym_GT_GT] = ACTIONS(241),
    [anon_sym_PLUS] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(241),
    [sym_variable_name] = ACTIONS(239),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(239),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_EQ_EQ] = ACTIONS(241),
    [sym__call_macro_variable] = ACTIONS(239),
    [anon_sym_GT_EQ] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(239),
    [sym_integer] = ACTIONS(239),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_PIPE_PIPE] = ACTIONS(241),
    [anon_sym_BANG_EQ] = ACTIONS(241),
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_LT_LT] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(241),
  },
  [48] = {
    [anon_sym_SEMI] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [anon_sym_SEMI] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(247),
    [sym_float] = ACTIONS(249),
    [sym_function_name] = ACTIONS(247),
    [anon_sym_AMP_AMP] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LPAREN2] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(249),
    [sym_variable_name] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [sym__call_macro_variable] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(247),
    [sym_integer] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(247),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(249),
  },
  [51] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(247),
    [sym_float] = ACTIONS(249),
    [sym_function_name] = ACTIONS(247),
    [anon_sym_AMP_AMP] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_LPAREN2] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_CARET] = ACTIONS(249),
    [sym_variable_name] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [sym__call_macro_variable] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(247),
    [sym_integer] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(247),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_PIPE_PIPE] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(249),
  },
  [52] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(65),
    [sym_float] = ACTIONS(251),
    [sym_function_name] = ACTIONS(253),
    [anon_sym_AMP_AMP] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LPAREN2] = ACTIONS(251),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(85),
    [sym_variable_name] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [sym__call_macro_variable] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(75),
    [sym_integer] = ACTIONS(253),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(253),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(251),
  },
  [53] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(247),
    [sym_float] = ACTIONS(249),
    [sym_function_name] = ACTIONS(247),
    [anon_sym_AMP_AMP] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_LPAREN2] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_CARET] = ACTIONS(249),
    [sym_variable_name] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [sym__call_macro_variable] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(247),
    [sym_integer] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(247),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(249),
  },
  [54] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(65),
    [sym_float] = ACTIONS(249),
    [sym_function_name] = ACTIONS(247),
    [anon_sym_AMP_AMP] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LPAREN2] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(85),
    [sym_variable_name] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [sym__call_macro_variable] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(247),
    [sym_integer] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(247),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(249),
  },
  [55] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(65),
    [sym_float] = ACTIONS(255),
    [sym_function_name] = ACTIONS(257),
    [anon_sym_AMP_AMP] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LPAREN2] = ACTIONS(255),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(85),
    [sym_variable_name] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [sym__call_macro_variable] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(75),
    [sym_integer] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(257),
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(255),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(255),
  },
  [56] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(247),
    [sym_float] = ACTIONS(249),
    [sym_function_name] = ACTIONS(247),
    [anon_sym_AMP_AMP] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_LPAREN2] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(249),
    [sym_variable_name] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [sym__call_macro_variable] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(247),
    [sym_integer] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(247),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(249),
  },
  [57] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(65),
    [sym_float] = ACTIONS(249),
    [sym_function_name] = ACTIONS(247),
    [anon_sym_AMP_AMP] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LPAREN2] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(249),
    [sym_variable_name] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [sym__call_macro_variable] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(247),
    [sym_integer] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(247),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(249),
  },
  [58] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_AMP] = ACTIONS(65),
    [sym_float] = ACTIONS(255),
    [sym_function_name] = ACTIONS(257),
    [anon_sym_AMP_AMP] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LPAREN2] = ACTIONS(255),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(85),
    [sym_variable_name] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [sym__call_macro_variable] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(75),
    [sym_integer] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(257),
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(255),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(255),
  },
  [59] = {
    [aux_sym_comparison_operator_repeat1] = STATE(59),
    [anon_sym_AMP] = ACTIONS(253),
    [sym_float] = ACTIONS(251),
    [sym_function_name] = ACTIONS(253),
    [anon_sym_AMP_AMP] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(259),
    [anon_sym_LPAREN2] = ACTIONS(251),
    [anon_sym_GT_GT] = ACTIONS(251),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_CARET] = ACTIONS(251),
    [sym_variable_name] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_EQ_EQ] = ACTIONS(259),
    [sym__call_macro_variable] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(259),
    [anon_sym_DASH] = ACTIONS(253),
    [anon_sym_PIPE] = ACTIONS(253),
    [sym_integer] = ACTIONS(253),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(253),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_PERCENT] = ACTIONS(251),
    [anon_sym_PIPE_PIPE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(259),
    [anon_sym_LT] = ACTIONS(262),
    [anon_sym_GT] = ACTIONS(262),
    [anon_sym_LT_LT] = ACTIONS(251),
    [anon_sym_TILDE] = ACTIONS(251),
  },
  [60] = {
    [sym_unary_operator] = STATE(42),
    [sym_call_macro] = STATE(42),
    [sym__call_macro_function] = STATE(13),
    [aux_sym_arguments_repeat1] = STATE(66),
    [sym_comparison_operator] = STATE(42),
    [sym_parenthesized] = STATE(42),
    [sym__expressions] = STATE(42),
    [sym_boolean_operator] = STATE(42),
    [sym__call_expressions] = STATE(42),
    [sym_call_function] = STATE(42),
    [sym_binary_operator] = STATE(42),
    [sym_signal] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_float] = ACTIONS(99),
    [sym_function_name] = ACTIONS(11),
    [sym__call_macro_variable] = ACTIONS(13),
    [sym_variable_name] = ACTIONS(101),
    [sym_integer] = ACTIONS(101),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [61] = {
    [anon_sym_AMP] = ACTIONS(265),
    [sym_float] = ACTIONS(267),
    [sym_function_name] = ACTIONS(265),
    [anon_sym_AMP_AMP] = ACTIONS(267),
    [anon_sym_STAR] = ACTIONS(267),
    [anon_sym_LT_EQ] = ACTIONS(267),
    [anon_sym_LPAREN2] = ACTIONS(267),
    [anon_sym_GT_GT] = ACTIONS(267),
    [anon_sym_PLUS] = ACTIONS(267),
    [anon_sym_CARET] = ACTIONS(267),
    [sym_variable_name] = ACTIONS(265),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_SLASH] = ACTIONS(265),
    [anon_sym_SEMI] = ACTIONS(267),
    [anon_sym_EQ_EQ] = ACTIONS(267),
    [sym__call_macro_variable] = ACTIONS(265),
    [anon_sym_GT_EQ] = ACTIONS(267),
    [anon_sym_DASH] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(265),
    [sym_integer] = ACTIONS(265),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(265),
    [anon_sym_RPAREN] = ACTIONS(267),
    [anon_sym_PERCENT] = ACTIONS(267),
    [anon_sym_PIPE_PIPE] = ACTIONS(267),
    [anon_sym_BANG_EQ] = ACTIONS(267),
    [anon_sym_LT] = ACTIONS(265),
    [anon_sym_GT] = ACTIONS(265),
    [anon_sym_LT_LT] = ACTIONS(267),
    [anon_sym_TILDE] = ACTIONS(267),
  },
  [62] = {
    [sym_unary_operator] = STATE(42),
    [sym_call_macro] = STATE(42),
    [sym__call_macro_function] = STATE(13),
    [aux_sym_arguments_repeat1] = STATE(62),
    [sym_comparison_operator] = STATE(42),
    [sym_parenthesized] = STATE(42),
    [sym__expressions] = STATE(42),
    [sym_boolean_operator] = STATE(42),
    [sym__call_expressions] = STATE(42),
    [sym_call_function] = STATE(42),
    [sym_binary_operator] = STATE(42),
    [sym_signal] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(272),
    [anon_sym_LPAREN2] = ACTIONS(274),
    [sym_float] = ACTIONS(277),
    [sym_comment] = ACTIONS(3),
    [sym_function_name] = ACTIONS(280),
    [anon_sym_RPAREN] = ACTIONS(272),
    [sym__call_macro_variable] = ACTIONS(283),
    [sym_variable_name] = ACTIONS(269),
    [sym_integer] = ACTIONS(269),
    [anon_sym_TILDE] = ACTIONS(286),
  },
  [63] = {
    [aux_sym_arguments_repeat2] = STATE(68),
    [anon_sym_COMMA] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(289),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [sym_signal] = ACTIONS(291),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN2] = ACTIONS(293),
    [sym_float] = ACTIONS(293),
    [sym_function_name] = ACTIONS(291),
    [sym__call_macro_variable] = ACTIONS(291),
    [sym_variable_name] = ACTIONS(291),
    [sym_integer] = ACTIONS(291),
    [anon_sym_TILDE] = ACTIONS(293),
  },
  [65] = {
    [aux_sym__macro_function_arguments_repeat1] = STATE(71),
    [aux_sym__macro_function_arguments_repeat2] = STATE(72),
    [anon_sym_COMMA] = ACTIONS(295),
    [sym_variable_name] = ACTIONS(297),
    [anon_sym_RPAREN] = ACTIONS(299),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [sym_unary_operator] = STATE(42),
    [sym_call_macro] = STATE(42),
    [sym__call_macro_function] = STATE(13),
    [aux_sym_arguments_repeat1] = STATE(62),
    [sym_comparison_operator] = STATE(42),
    [sym_parenthesized] = STATE(42),
    [sym__expressions] = STATE(42),
    [sym_boolean_operator] = STATE(42),
    [sym__call_expressions] = STATE(42),
    [sym_call_function] = STATE(42),
    [sym_binary_operator] = STATE(42),
    [sym_signal] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_float] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [sym_function_name] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(301),
    [sym__call_macro_variable] = ACTIONS(13),
    [sym_variable_name] = ACTIONS(101),
    [sym_integer] = ACTIONS(101),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [67] = {
    [anon_sym_AMP] = ACTIONS(303),
    [sym_float] = ACTIONS(305),
    [sym_function_name] = ACTIONS(303),
    [anon_sym_AMP_AMP] = ACTIONS(305),
    [anon_sym_STAR] = ACTIONS(305),
    [anon_sym_LT_EQ] = ACTIONS(305),
    [anon_sym_LPAREN2] = ACTIONS(305),
    [anon_sym_GT_GT] = ACTIONS(305),
    [anon_sym_PLUS] = ACTIONS(305),
    [anon_sym_CARET] = ACTIONS(305),
    [sym_variable_name] = ACTIONS(303),
    [anon_sym_COMMA] = ACTIONS(305),
    [anon_sym_SLASH] = ACTIONS(303),
    [anon_sym_SEMI] = ACTIONS(305),
    [anon_sym_EQ_EQ] = ACTIONS(305),
    [sym__call_macro_variable] = ACTIONS(303),
    [anon_sym_GT_EQ] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(303),
    [anon_sym_PIPE] = ACTIONS(303),
    [sym_integer] = ACTIONS(303),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(303),
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_PERCENT] = ACTIONS(305),
    [anon_sym_PIPE_PIPE] = ACTIONS(305),
    [anon_sym_BANG_EQ] = ACTIONS(305),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_LT_LT] = ACTIONS(305),
    [anon_sym_TILDE] = ACTIONS(305),
  },
  [68] = {
    [aux_sym_arguments_repeat2] = STATE(68),
    [anon_sym_COMMA] = ACTIONS(307),
    [anon_sym_RPAREN] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
  },
  [69] = {
    [aux_sym__macro_function_arguments_repeat1] = STATE(73),
    [sym_variable_name] = ACTIONS(310),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [sym_signal] = ACTIONS(312),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN2] = ACTIONS(314),
    [sym_float] = ACTIONS(314),
    [sym_function_name] = ACTIONS(312),
    [sym__call_macro_variable] = ACTIONS(312),
    [sym_variable_name] = ACTIONS(312),
    [sym_integer] = ACTIONS(312),
    [anon_sym_TILDE] = ACTIONS(314),
  },
  [71] = {
    [aux_sym__macro_function_arguments_repeat1] = STATE(71),
    [anon_sym_COMMA] = ACTIONS(316),
    [sym_variable_name] = ACTIONS(318),
    [anon_sym_RPAREN] = ACTIONS(316),
    [sym_comment] = ACTIONS(3),
  },
  [72] = {
    [aux_sym__macro_function_arguments_repeat2] = STATE(75),
    [anon_sym_COMMA] = ACTIONS(295),
    [anon_sym_RPAREN] = ACTIONS(321),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [aux_sym__macro_function_arguments_repeat1] = STATE(71),
    [anon_sym_COMMA] = ACTIONS(323),
    [sym_variable_name] = ACTIONS(297),
    [anon_sym_RPAREN] = ACTIONS(323),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [sym_signal] = ACTIONS(325),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN2] = ACTIONS(327),
    [sym_float] = ACTIONS(327),
    [sym_function_name] = ACTIONS(325),
    [sym__call_macro_variable] = ACTIONS(325),
    [sym_variable_name] = ACTIONS(325),
    [sym_integer] = ACTIONS(325),
    [anon_sym_TILDE] = ACTIONS(327),
  },
  [75] = {
    [aux_sym__macro_function_arguments_repeat2] = STATE(75),
    [anon_sym_COMMA] = ACTIONS(329),
    [anon_sym_RPAREN] = ACTIONS(323),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(15),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = false}, SHIFT(5),
  [15] = {.count = 1, .reusable = false}, SHIFT(9),
  [17] = {.count = 1, .reusable = false}, SHIFT(15),
  [19] = {.count = 1, .reusable = false}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [23] = {.count = 1, .reusable = true}, SHIFT(8),
  [25] = {.count = 1, .reusable = false}, SHIFT(6),
  [27] = {.count = 1, .reusable = false}, SHIFT(10),
  [29] = {.count = 1, .reusable = true}, SHIFT(11),
  [31] = {.count = 1, .reusable = true}, SHIFT(16),
  [33] = {.count = 1, .reusable = true}, SHIFT(17),
  [35] = {.count = 1, .reusable = true}, SHIFT(18),
  [37] = {.count = 1, .reusable = false}, REDUCE(sym_call_macro, 1, .production_id = 1),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_call_macro, 1, .production_id = 1),
  [41] = {.count = 1, .reusable = true}, SHIFT(21),
  [43] = {.count = 1, .reusable = true}, SHIFT(23),
  [45] = {.count = 1, .reusable = false}, SHIFT(24),
  [47] = {.count = 1, .reusable = true}, SHIFT(24),
  [49] = {.count = 1, .reusable = true}, SHIFT(25),
  [51] = {.count = 1, .reusable = true}, SHIFT(26),
  [53] = {.count = 1, .reusable = false}, SHIFT(27),
  [55] = {.count = 1, .reusable = true}, SHIFT(27),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_call_macro, 1),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_call_macro, 1),
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
  [91] = {.count = 1, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2),
  [93] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [95] = {.count = 1, .reusable = false}, SHIFT(39),
  [97] = {.count = 1, .reusable = true}, SHIFT(39),
  [99] = {.count = 1, .reusable = true}, SHIFT(42),
  [101] = {.count = 1, .reusable = false}, SHIFT(42),
  [103] = {.count = 1, .reusable = true}, SHIFT(40),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_call_function, 2),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_call_function, 2),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym__call_macro_function, 2, .production_id = 2),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym__call_macro_function, 2, .production_id = 2),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_macro_variable, 1, .production_id = 2),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_macro_variable, 1, .production_id = 2),
  [117] = {.count = 1, .reusable = true}, SHIFT(43),
  [119] = {.count = 1, .reusable = false}, SHIFT(46),
  [121] = {.count = 1, .reusable = true}, SHIFT(46),
  [123] = {.count = 1, .reusable = true}, SHIFT(47),
  [125] = {.count = 1, .reusable = false}, SHIFT(48),
  [127] = {.count = 1, .reusable = true}, SHIFT(48),
  [129] = {.count = 1, .reusable = false}, SHIFT(49),
  [131] = {.count = 1, .reusable = true}, SHIFT(49),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_unary_operator, 2),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_unary_operator, 2),
  [137] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [140] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [143] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [146] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [149] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [152] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [155] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [158] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [161] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [164] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [167] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [170] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [173] = {.count = 1, .reusable = false}, SHIFT(50),
  [175] = {.count = 1, .reusable = true}, SHIFT(50),
  [177] = {.count = 1, .reusable = false}, SHIFT(51),
  [179] = {.count = 1, .reusable = true}, SHIFT(51),
  [181] = {.count = 1, .reusable = false}, SHIFT(52),
  [183] = {.count = 1, .reusable = true}, SHIFT(52),
  [185] = {.count = 1, .reusable = false}, SHIFT(53),
  [187] = {.count = 1, .reusable = true}, SHIFT(53),
  [189] = {.count = 1, .reusable = false}, SHIFT(54),
  [191] = {.count = 1, .reusable = true}, SHIFT(54),
  [193] = {.count = 1, .reusable = false}, SHIFT(55),
  [195] = {.count = 1, .reusable = true}, SHIFT(55),
  [197] = {.count = 1, .reusable = false}, SHIFT(56),
  [199] = {.count = 1, .reusable = true}, SHIFT(56),
  [201] = {.count = 1, .reusable = false}, SHIFT(57),
  [203] = {.count = 1, .reusable = true}, SHIFT(57),
  [205] = {.count = 1, .reusable = false}, SHIFT(58),
  [207] = {.count = 1, .reusable = true}, SHIFT(58),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_comparison_operator, 2),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_comparison_operator, 2),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_channel_statement, 3),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [219] = {.count = 1, .reusable = true}, SHIFT(60),
  [221] = {.count = 1, .reusable = true}, SHIFT(61),
  [223] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 1),
  [225] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 1),
  [227] = {.count = 1, .reusable = true}, SHIFT(65),
  [229] = {.count = 1, .reusable = true}, SHIFT(64),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym_macro_function, 2, .production_id = 2),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_macro_function, 2, .production_id = 2),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_define_statement, 3),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_ramp_statement, 3),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized, 3),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized, 3),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_amp_statement, 3),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_hz_statement, 3),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym_binary_operator, 3),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_binary_operator, 3),
  [251] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [253] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_operator, 3),
  [257] = {.count = 1, .reusable = false}, REDUCE(sym_boolean_operator, 3),
  [259] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(31),
  [262] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(31),
  [265] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [269] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(42),
  [272] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [274] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(8),
  [277] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(42),
  [280] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(4),
  [283] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(5),
  [286] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(11),
  [289] = {.count = 1, .reusable = true}, SHIFT(67),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym__macro_function_arguments, 2),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym__macro_function_arguments, 2),
  [295] = {.count = 1, .reusable = true}, SHIFT(69),
  [297] = {.count = 1, .reusable = true}, SHIFT(71),
  [299] = {.count = 1, .reusable = true}, SHIFT(70),
  [301] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [307] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(60),
  [310] = {.count = 1, .reusable = true}, SHIFT(73),
  [312] = {.count = 1, .reusable = false}, REDUCE(sym__macro_function_arguments, 3),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym__macro_function_arguments, 3),
  [316] = {.count = 1, .reusable = true}, REDUCE(aux_sym__macro_function_arguments_repeat1, 2),
  [318] = {.count = 2, .reusable = true}, REDUCE(aux_sym__macro_function_arguments_repeat1, 2), SHIFT_REPEAT(71),
  [321] = {.count = 1, .reusable = true}, SHIFT(74),
  [323] = {.count = 1, .reusable = true}, REDUCE(aux_sym__macro_function_arguments_repeat2, 2),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym__macro_function_arguments, 4),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym__macro_function_arguments, 4),
  [329] = {.count = 2, .reusable = true}, REDUCE(aux_sym__macro_function_arguments_repeat2, 2), SHIFT_REPEAT(69),
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
