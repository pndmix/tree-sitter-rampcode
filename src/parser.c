#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 77
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 2
#define TOKEN_COUNT 39
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
  sym_comment = 38,
  sym_program = 39,
  sym_hz_statement = 40,
  sym_amp_statement = 41,
  sym_ramp_statement = 42,
  sym_channel_statement = 43,
  sym_define_statement = 44,
  sym_macro_variable = 45,
  sym_macro_function = 46,
  sym__macro_arguments = 47,
  sym_expression_statement = 48,
  sym__expressions = 49,
  sym_boolean_operator = 50,
  sym_binary_operator = 51,
  sym_unary_operator = 52,
  sym_comparison_operator = 53,
  sym_parenthesized = 54,
  sym__call_expressions = 55,
  sym_call_function = 56,
  sym_call_macro_function = 57,
  sym_arguments = 58,
  aux_sym_program_repeat1 = 59,
  aux_sym__macro_arguments_repeat1 = 60,
  aux_sym__macro_arguments_repeat2 = 61,
  aux_sym_comparison_operator_repeat1 = 62,
  aux_sym_arguments_repeat1 = 63,
  aux_sym_arguments_repeat2 = 64,
  alias_sym_call_macro_variable = 65,
  alias_sym_variable_name = 66,
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
  [sym_arguments] = "arguments",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__macro_arguments_repeat1] = "_macro_arguments_repeat1",
  [aux_sym__macro_arguments_repeat2] = "_macro_arguments_repeat2",
  [aux_sym_comparison_operator_repeat1] = "comparison_operator_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_repeat2] = "arguments_repeat2",
  [alias_sym_call_macro_variable] = "call_macro_variable",
  [alias_sym_variable_name] = "variable_name",
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
  [sym_arguments] = {
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
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_call_macro_variable] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable_name] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_call_macro_variable,
  },
  [2] = {
    [0] = sym_function_name,
  },
  [3] = {
    [0] = alias_sym_variable_name,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(10);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '&') ADVANCE(24);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '0') ADVANCE(36);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(35);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(33);
      if (lookahead == '^') ADVANCE(25);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '~') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(10);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '&') ADVANCE(24);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '0') ADVANCE(36);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(33);
      if (lookahead == '^') ADVANCE(25);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '~') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(10);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '&') ADVANCE(24);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '0') ADVANCE(36);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(35);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(33);
      if (lookahead == '^') ADVANCE(25);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '~') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(42);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(40);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'v') ADVANCE(5);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(3);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(43);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(15);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(16);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '=') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(23);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_reserved_word);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_signal);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'h') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(16);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == 'z') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'q') ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_hz);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_function_name);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(52);
      END_STATE();
    case 31:
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 'w') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_amp);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'h') ADVANCE(28);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == '1') ADVANCE(66);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'h') ADVANCE(28);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'h') ADVANCE(28);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'h') ADVANCE(28);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'h') ADVANCE(28);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == '2' ||
          lookahead == 'h') ADVANCE(28);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 63:
      if (lookahead == '1') ADVANCE(28);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 66:
      if (lookahead == '0' ||
          lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_ramp);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_reset_statement);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_AMP] = ACTIONS(1),
    [sym_function_name] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
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
    [sym_float] = ACTIONS(1),
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
    [sym_signal] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
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
    [sym_comparison_operator] = STATE(14),
    [sym_parenthesized] = STATE(14),
    [aux_sym_program_repeat1] = STATE(12),
    [sym_hz_statement] = STATE(8),
    [sym_binary_operator] = STATE(14),
    [sym_unary_operator] = STATE(14),
    [sym_call_macro_function] = STATE(14),
    [sym_program] = STATE(13),
    [sym_channel_statement] = STATE(8),
    [sym_define_statement] = STATE(8),
    [sym__expressions] = STATE(14),
    [sym_boolean_operator] = STATE(14),
    [sym__call_expressions] = STATE(14),
    [sym_call_function] = STATE(14),
    [sym_function_name] = ACTIONS(5),
    [sym_integer] = ACTIONS(7),
    [anon_sym_l] = ACTIONS(9),
    [sym_reset_statement] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_amp] = ACTIONS(13),
    [sym_signal] = ACTIONS(15),
    [anon_sym_ramp] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [anon_sym_define] = ACTIONS(25),
    [anon_sym_hz] = ACTIONS(27),
    [anon_sym_r] = ACTIONS(9),
    [sym_float] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [2] = {
    [sym_comment] = ACTIONS(3),
    [sym_reserved_word] = ACTIONS(31),
  },
  [3] = {
    [sym_unary_operator] = STATE(16),
    [sym_call_macro_function] = STATE(16),
    [sym_comparison_operator] = STATE(16),
    [sym_parenthesized] = STATE(16),
    [sym__expressions] = STATE(16),
    [sym_boolean_operator] = STATE(16),
    [sym__call_expressions] = STATE(16),
    [sym_call_function] = STATE(16),
    [sym_binary_operator] = STATE(16),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_function_name] = ACTIONS(5),
    [sym_integer] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(35),
    [sym_signal] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [4] = {
    [sym_unary_operator] = STATE(17),
    [sym_call_macro_function] = STATE(17),
    [sym_comparison_operator] = STATE(17),
    [sym_parenthesized] = STATE(17),
    [sym__expressions] = STATE(17),
    [sym_boolean_operator] = STATE(17),
    [sym__call_expressions] = STATE(17),
    [sym_call_function] = STATE(17),
    [sym_binary_operator] = STATE(17),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_function_name] = ACTIONS(5),
    [sym_integer] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(39),
    [sym_signal] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [5] = {
    [sym_comment] = ACTIONS(3),
    [sym_reserved_word] = ACTIONS(41),
  },
  [6] = {
    [sym_arguments] = STATE(20),
    [anon_sym_AMP] = ACTIONS(43),
    [sym_function_name] = ACTIONS(43),
    [sym_integer] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_LT_EQ] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(43),
    [anon_sym_GT_GT] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_CARET] = ACTIONS(45),
    [sym_float] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(45),
    [anon_sym_EQ_EQ] = ACTIONS(45),
    [anon_sym_GT_EQ] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PIPE] = ACTIONS(43),
    [sym_signal] = ACTIONS(45),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_PERCENT] = ACTIONS(45),
    [anon_sym_PIPE_PIPE] = ACTIONS(45),
    [anon_sym_BANG_EQ] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT_LT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
  },
  [7] = {
    [sym_arguments] = STATE(21),
    [anon_sym_LPAREN] = ACTIONS(47),
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
    [sym_macro_variable] = STATE(26),
    [sym_macro_function] = STATE(26),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_amp_statement] = STATE(8),
    [sym_ramp_statement] = STATE(8),
    [sym_expression_statement] = STATE(8),
    [sym_comparison_operator] = STATE(14),
    [sym_parenthesized] = STATE(14),
    [aux_sym_program_repeat1] = STATE(27),
    [sym_hz_statement] = STATE(8),
    [sym_binary_operator] = STATE(14),
    [sym_unary_operator] = STATE(14),
    [sym_call_macro_function] = STATE(14),
    [sym_channel_statement] = STATE(8),
    [sym_define_statement] = STATE(8),
    [sym__expressions] = STATE(14),
    [sym_boolean_operator] = STATE(14),
    [sym__call_expressions] = STATE(14),
    [sym_call_function] = STATE(14),
    [sym_function_name] = ACTIONS(5),
    [sym_integer] = ACTIONS(7),
    [anon_sym_l] = ACTIONS(9),
    [sym_reset_statement] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_amp] = ACTIONS(13),
    [sym_signal] = ACTIONS(15),
    [anon_sym_ramp] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [anon_sym_define] = ACTIONS(25),
    [anon_sym_hz] = ACTIONS(27),
    [anon_sym_r] = ACTIONS(9),
    [sym_float] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [13] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(59),
  },
  [14] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_AMP] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_GT_EQ] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(71),
    [anon_sym_AMP_AMP] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_GT_GT] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(83),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(77),
  },
  [15] = {
    [sym_unary_operator] = STATE(38),
    [sym_call_macro_function] = STATE(38),
    [sym_comparison_operator] = STATE(38),
    [sym_parenthesized] = STATE(38),
    [sym__expressions] = STATE(38),
    [sym_boolean_operator] = STATE(38),
    [sym__call_expressions] = STATE(38),
    [sym_call_function] = STATE(38),
    [sym_binary_operator] = STATE(38),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_function_name] = ACTIONS(5),
    [sym_integer] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(89),
    [sym_signal] = ACTIONS(89),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [16] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_AMP] = ACTIONS(91),
    [sym_function_name] = ACTIONS(91),
    [sym_integer] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(93),
    [anon_sym_STAR] = ACTIONS(93),
    [anon_sym_LT_EQ] = ACTIONS(93),
    [anon_sym_LPAREN2] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(93),
    [sym_float] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_EQ_EQ] = ACTIONS(93),
    [anon_sym_GT_EQ] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(91),
    [sym_signal] = ACTIONS(93),
    [sym_identifier] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_PERCENT] = ACTIONS(93),
    [anon_sym_PIPE_PIPE] = ACTIONS(93),
    [anon_sym_BANG_EQ] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(93),
  },
  [17] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_AMP] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_GT_GT] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_GT_EQ] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(83),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(77),
  },
  [18] = {
    [sym_unary_operator] = STATE(40),
    [sym_call_macro_function] = STATE(40),
    [sym_comparison_operator] = STATE(40),
    [sym_parenthesized] = STATE(40),
    [sym__expressions] = STATE(40),
    [sym_boolean_operator] = STATE(40),
    [sym__call_expressions] = STATE(40),
    [sym_call_function] = STATE(40),
    [sym_binary_operator] = STATE(40),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_function_name] = ACTIONS(5),
    [sym_integer] = ACTIONS(97),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(99),
    [sym_signal] = ACTIONS(99),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [19] = {
    [sym_comparison_operator] = STATE(43),
    [sym_parenthesized] = STATE(43),
    [sym_binary_operator] = STATE(43),
    [sym_unary_operator] = STATE(43),
    [sym_call_macro_function] = STATE(43),
    [aux_sym_arguments_repeat1] = STATE(42),
    [sym__expressions] = STATE(43),
    [sym_boolean_operator] = STATE(43),
    [sym__call_expressions] = STATE(43),
    [sym_call_function] = STATE(43),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_function_name] = ACTIONS(5),
    [sym_integer] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(103),
    [sym_float] = ACTIONS(105),
    [sym_signal] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [20] = {
    [anon_sym_AMP] = ACTIONS(107),
    [sym_function_name] = ACTIONS(107),
    [sym_integer] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_LT_EQ] = ACTIONS(109),
    [anon_sym_LPAREN2] = ACTIONS(109),
    [anon_sym_GT_GT] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [sym_float] = ACTIONS(109),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_SEMI] = ACTIONS(109),
    [anon_sym_EQ_EQ] = ACTIONS(109),
    [anon_sym_GT_EQ] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [sym_signal] = ACTIONS(109),
    [sym_identifier] = ACTIONS(107),
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
    [anon_sym_AMP] = ACTIONS(111),
    [sym_function_name] = ACTIONS(111),
    [sym_integer] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(113),
    [anon_sym_LT_EQ] = ACTIONS(113),
    [anon_sym_LPAREN2] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_CARET] = ACTIONS(113),
    [sym_float] = ACTIONS(113),
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(111),
    [anon_sym_SEMI] = ACTIONS(113),
    [anon_sym_EQ_EQ] = ACTIONS(113),
    [anon_sym_GT_EQ] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(111),
    [sym_signal] = ACTIONS(113),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(113),
    [anon_sym_PIPE_PIPE] = ACTIONS(113),
    [anon_sym_BANG_EQ] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_LT_LT] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(113),
  },
  [22] = {
    [sym_reset_statement] = ACTIONS(115),
    [sym_integer] = ACTIONS(115),
    [anon_sym_l] = ACTIONS(115),
    [sym_function_name] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(117),
    [anon_sym_amp] = ACTIONS(115),
    [anon_sym_ramp] = ACTIONS(115),
    [sym_identifier] = ACTIONS(115),
    [anon_sym_LPAREN2] = ACTIONS(117),
    [anon_sym_define] = ACTIONS(115),
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_hz] = ACTIONS(115),
    [anon_sym_r] = ACTIONS(115),
    [sym_float] = ACTIONS(117),
    [anon_sym_TILDE] = ACTIONS(117),
  },
  [23] = {
    [sym_integer] = ACTIONS(119),
    [sym_float] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_integer] = ACTIONS(123),
    [sym_float] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym__macro_arguments] = STATE(48),
    [sym_float] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(129),
    [sym_integer] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [anon_sym_SEMI] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_amp_statement] = STATE(8),
    [sym_ramp_statement] = STATE(8),
    [sym_expression_statement] = STATE(8),
    [sym_comparison_operator] = STATE(14),
    [sym_parenthesized] = STATE(14),
    [aux_sym_program_repeat1] = STATE(27),
    [sym_hz_statement] = STATE(8),
    [sym_binary_operator] = STATE(14),
    [sym_unary_operator] = STATE(14),
    [sym_call_macro_function] = STATE(14),
    [sym_channel_statement] = STATE(8),
    [sym_define_statement] = STATE(8),
    [sym__expressions] = STATE(14),
    [sym_boolean_operator] = STATE(14),
    [sym__call_expressions] = STATE(14),
    [sym_call_function] = STATE(14),
    [sym_reset_statement] = ACTIONS(135),
    [sym_integer] = ACTIONS(138),
    [anon_sym_l] = ACTIONS(141),
    [sym_function_name] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(147),
    [anon_sym_amp] = ACTIONS(150),
    [anon_sym_ramp] = ACTIONS(153),
    [sym_identifier] = ACTIONS(156),
    [anon_sym_LPAREN2] = ACTIONS(159),
    [anon_sym_define] = ACTIONS(162),
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_hz] = ACTIONS(165),
    [anon_sym_r] = ACTIONS(141),
    [sym_float] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(168),
  },
  [28] = {
    [sym_unary_operator] = STATE(49),
    [sym_call_macro_function] = STATE(49),
    [sym_comparison_operator] = STATE(49),
    [sym_parenthesized] = STATE(49),
    [sym__expressions] = STATE(49),
    [sym_boolean_operator] = STATE(49),
    [sym__call_expressions] = STATE(49),
    [sym_call_function] = STATE(49),
    [sym_binary_operator] = STATE(49),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_function_name] = ACTIONS(5),
    [sym_integer] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(173),
    [sym_signal] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [29] = {
    [sym_unary_operator] = STATE(50),
    [sym_call_macro_function] = STATE(50),
    [sym_comparison_operator] = STATE(50),
    [sym_parenthesized] = STATE(50),
    [sym__expressions] = STATE(50),
    [sym_boolean_operator] = STATE(50),
    [sym__call_expressions] = STATE(50),
    [sym_call_function] = STATE(50),
    [sym_binary_operator] = STATE(50),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_function_name] = ACTIONS(5),
    [sym_integer] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(177),
    [sym_signal] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [30] = {
    [sym_unary_operator] = STATE(51),
    [sym_call_macro_function] = STATE(51),
    [sym_comparison_operator] = STATE(51),
    [sym_parenthesized] = STATE(51),
    [sym__expressions] = STATE(51),
    [sym_boolean_operator] = STATE(51),
    [sym__call_expressions] = STATE(51),
    [sym_call_function] = STATE(51),
    [sym_binary_operator] = STATE(51),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_function_name] = ACTIONS(5),
    [sym_integer] = ACTIONS(179),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(181),
    [sym_signal] = ACTIONS(181),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [31] = {
    [sym_unary_operator] = STATE(52),
    [sym_call_macro_function] = STATE(52),
    [sym_comparison_operator] = STATE(52),
    [sym_parenthesized] = STATE(52),
    [sym__expressions] = STATE(52),
    [sym_boolean_operator] = STATE(52),
    [sym__call_expressions] = STATE(52),
    [sym_call_function] = STATE(52),
    [sym_binary_operator] = STATE(52),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_function_name] = ACTIONS(5),
    [sym_integer] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(185),
    [sym_signal] = ACTIONS(185),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [32] = {
    [sym_unary_operator] = STATE(53),
    [sym_call_macro_function] = STATE(53),
    [sym_comparison_operator] = STATE(53),
    [sym_parenthesized] = STATE(53),
    [sym__expressions] = STATE(53),
    [sym_boolean_operator] = STATE(53),
    [sym__call_expressions] = STATE(53),
    [sym_call_function] = STATE(53),
    [sym_binary_operator] = STATE(53),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_function_name] = ACTIONS(5),
    [sym_integer] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(189),
    [sym_signal] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [33] = {
    [sym_unary_operator] = STATE(54),
    [sym_call_macro_function] = STATE(54),
    [sym_comparison_operator] = STATE(54),
    [sym_parenthesized] = STATE(54),
    [sym__expressions] = STATE(54),
    [sym_boolean_operator] = STATE(54),
    [sym__call_expressions] = STATE(54),
    [sym_call_function] = STATE(54),
    [sym_binary_operator] = STATE(54),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_function_name] = ACTIONS(5),
    [sym_integer] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(193),
    [sym_signal] = ACTIONS(193),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [34] = {
    [sym_unary_operator] = STATE(55),
    [sym_call_macro_function] = STATE(55),
    [sym_comparison_operator] = STATE(55),
    [sym_parenthesized] = STATE(55),
    [sym__expressions] = STATE(55),
    [sym_boolean_operator] = STATE(55),
    [sym__call_expressions] = STATE(55),
    [sym_call_function] = STATE(55),
    [sym_binary_operator] = STATE(55),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_function_name] = ACTIONS(5),
    [sym_integer] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(197),
    [sym_signal] = ACTIONS(197),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [35] = {
    [sym_unary_operator] = STATE(56),
    [sym_call_macro_function] = STATE(56),
    [sym_comparison_operator] = STATE(56),
    [sym_parenthesized] = STATE(56),
    [sym__expressions] = STATE(56),
    [sym_boolean_operator] = STATE(56),
    [sym__call_expressions] = STATE(56),
    [sym_call_function] = STATE(56),
    [sym_binary_operator] = STATE(56),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_function_name] = ACTIONS(5),
    [sym_integer] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(201),
    [sym_signal] = ACTIONS(201),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [36] = {
    [sym_unary_operator] = STATE(57),
    [sym_call_macro_function] = STATE(57),
    [sym_comparison_operator] = STATE(57),
    [sym_parenthesized] = STATE(57),
    [sym__expressions] = STATE(57),
    [sym_boolean_operator] = STATE(57),
    [sym__call_expressions] = STATE(57),
    [sym_call_function] = STATE(57),
    [sym_binary_operator] = STATE(57),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_function_name] = ACTIONS(5),
    [sym_integer] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(205),
    [sym_signal] = ACTIONS(205),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [37] = {
    [aux_sym_comparison_operator_repeat1] = STATE(58),
    [anon_sym_AMP] = ACTIONS(207),
    [sym_function_name] = ACTIONS(207),
    [sym_integer] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_LT_EQ] = ACTIONS(209),
    [anon_sym_LPAREN2] = ACTIONS(209),
    [anon_sym_GT_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(209),
    [sym_float] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_EQ_EQ] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
    [sym_signal] = ACTIONS(209),
    [sym_identifier] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_BANG_EQ] = ACTIONS(209),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_LT_LT] = ACTIONS(209),
    [anon_sym_TILDE] = ACTIONS(209),
  },
  [38] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_AMP] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_GT_EQ] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(71),
    [anon_sym_AMP_AMP] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_GT_GT] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(83),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(77),
  },
  [39] = {
    [anon_sym_AMP] = ACTIONS(213),
    [sym_function_name] = ACTIONS(213),
    [sym_integer] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_LT_EQ] = ACTIONS(215),
    [anon_sym_LPAREN2] = ACTIONS(215),
    [anon_sym_GT_GT] = ACTIONS(215),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_CARET] = ACTIONS(215),
    [sym_float] = ACTIONS(215),
    [anon_sym_COMMA] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_SEMI] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(215),
    [anon_sym_GT_EQ] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_PIPE] = ACTIONS(213),
    [sym_signal] = ACTIONS(215),
    [sym_identifier] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_PIPE_PIPE] = ACTIONS(215),
    [anon_sym_BANG_EQ] = ACTIONS(215),
    [anon_sym_LT] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(213),
    [anon_sym_LT_LT] = ACTIONS(215),
    [anon_sym_TILDE] = ACTIONS(215),
  },
  [40] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_AMP] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_GT_EQ] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(71),
    [anon_sym_AMP_AMP] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_GT_GT] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(83),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(77),
  },
  [41] = {
    [anon_sym_AMP] = ACTIONS(219),
    [sym_function_name] = ACTIONS(219),
    [sym_integer] = ACTIONS(219),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(221),
    [anon_sym_LT_EQ] = ACTIONS(221),
    [anon_sym_LPAREN2] = ACTIONS(221),
    [anon_sym_GT_GT] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(221),
    [anon_sym_CARET] = ACTIONS(221),
    [sym_float] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(219),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_GT_EQ] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(219),
    [sym_signal] = ACTIONS(221),
    [sym_identifier] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_PERCENT] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_LT_LT] = ACTIONS(221),
    [anon_sym_TILDE] = ACTIONS(221),
  },
  [42] = {
    [sym_comparison_operator] = STATE(43),
    [sym_parenthesized] = STATE(43),
    [sym_binary_operator] = STATE(43),
    [sym_unary_operator] = STATE(43),
    [sym_call_macro_function] = STATE(43),
    [aux_sym_arguments_repeat1] = STATE(61),
    [aux_sym_arguments_repeat2] = STATE(62),
    [sym__expressions] = STATE(43),
    [sym_boolean_operator] = STATE(43),
    [sym__call_expressions] = STATE(43),
    [sym_call_function] = STATE(43),
    [anon_sym_COMMA] = ACTIONS(223),
    [sym_function_name] = ACTIONS(5),
    [sym_integer] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(105),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(225),
    [sym_float] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [43] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_AMP] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(63),
    [sym_function_name] = ACTIONS(229),
    [sym_integer] = ACTIONS(229),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_GT_EQ] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(71),
    [anon_sym_AMP_AMP] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(75),
    [sym_signal] = ACTIONS(227),
    [sym_identifier] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_LPAREN2] = ACTIONS(227),
    [anon_sym_GT_GT] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(83),
    [sym_float] = ACTIONS(227),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(227),
  },
  [44] = {
    [anon_sym_SEMI] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [anon_sym_SEMI] = ACTIONS(233),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [aux_sym__macro_arguments_repeat1] = STATE(65),
    [sym_identifier] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(237),
  },
  [47] = {
    [anon_sym_SEMI] = ACTIONS(239),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [sym_unary_operator] = STATE(14),
    [sym_call_macro_function] = STATE(14),
    [sym_expression_statement] = STATE(66),
    [sym_comparison_operator] = STATE(14),
    [sym_parenthesized] = STATE(14),
    [sym__expressions] = STATE(14),
    [sym_boolean_operator] = STATE(14),
    [sym__call_expressions] = STATE(14),
    [sym_call_function] = STATE(14),
    [sym_binary_operator] = STATE(14),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_function_name] = ACTIONS(5),
    [sym_integer] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(15),
    [sym_signal] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [49] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_AMP] = ACTIONS(241),
    [sym_function_name] = ACTIONS(241),
    [sym_integer] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_LPAREN2] = ACTIONS(243),
    [anon_sym_GT_GT] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(243),
    [sym_float] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(243),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_GT_EQ] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(241),
    [sym_signal] = ACTIONS(243),
    [sym_identifier] = ACTIONS(241),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(243),
  },
  [50] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_AMP] = ACTIONS(241),
    [sym_function_name] = ACTIONS(241),
    [sym_integer] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(243),
    [anon_sym_LPAREN2] = ACTIONS(243),
    [anon_sym_GT_GT] = ACTIONS(243),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(243),
    [sym_float] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_SEMI] = ACTIONS(243),
    [anon_sym_EQ_EQ] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [sym_signal] = ACTIONS(243),
    [sym_identifier] = ACTIONS(241),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_PERCENT] = ACTIONS(243),
    [anon_sym_PIPE_PIPE] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(243),
    [anon_sym_LT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_LT_LT] = ACTIONS(243),
    [anon_sym_TILDE] = ACTIONS(243),
  },
  [51] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_AMP] = ACTIONS(61),
    [sym_function_name] = ACTIONS(245),
    [sym_integer] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_LPAREN2] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(81),
    [sym_float] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_GT_EQ] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(71),
    [sym_signal] = ACTIONS(247),
    [sym_identifier] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(83),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(247),
  },
  [52] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_AMP] = ACTIONS(241),
    [sym_function_name] = ACTIONS(241),
    [sym_integer] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(243),
    [anon_sym_LPAREN2] = ACTIONS(243),
    [anon_sym_GT_GT] = ACTIONS(243),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(243),
    [sym_float] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(243),
    [anon_sym_EQ_EQ] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [sym_signal] = ACTIONS(243),
    [sym_identifier] = ACTIONS(241),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(243),
    [anon_sym_LT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_LT_LT] = ACTIONS(243),
    [anon_sym_TILDE] = ACTIONS(243),
  },
  [53] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_AMP] = ACTIONS(61),
    [sym_function_name] = ACTIONS(241),
    [sym_integer] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_LPAREN2] = ACTIONS(243),
    [anon_sym_GT_GT] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(81),
    [sym_float] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(243),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_GT_EQ] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(241),
    [sym_signal] = ACTIONS(243),
    [sym_identifier] = ACTIONS(241),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(243),
  },
  [54] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_AMP] = ACTIONS(61),
    [sym_function_name] = ACTIONS(249),
    [sym_integer] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_LPAREN2] = ACTIONS(251),
    [anon_sym_GT_GT] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(81),
    [sym_float] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_GT_EQ] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(71),
    [sym_signal] = ACTIONS(251),
    [sym_identifier] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(251),
  },
  [55] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_AMP] = ACTIONS(241),
    [sym_function_name] = ACTIONS(241),
    [sym_integer] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(243),
    [anon_sym_LPAREN2] = ACTIONS(243),
    [anon_sym_GT_GT] = ACTIONS(243),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(243),
    [sym_float] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(243),
    [anon_sym_EQ_EQ] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(241),
    [sym_signal] = ACTIONS(243),
    [sym_identifier] = ACTIONS(241),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(243),
    [anon_sym_LT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_LT_LT] = ACTIONS(243),
    [anon_sym_TILDE] = ACTIONS(243),
  },
  [56] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_AMP] = ACTIONS(61),
    [sym_function_name] = ACTIONS(241),
    [sym_integer] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_LPAREN2] = ACTIONS(243),
    [anon_sym_GT_GT] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(243),
    [sym_float] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(243),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_GT_EQ] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(241),
    [sym_signal] = ACTIONS(243),
    [sym_identifier] = ACTIONS(241),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(243),
  },
  [57] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_AMP] = ACTIONS(61),
    [sym_function_name] = ACTIONS(249),
    [sym_integer] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_LPAREN2] = ACTIONS(251),
    [anon_sym_GT_GT] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(81),
    [sym_float] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_GT_EQ] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(71),
    [sym_signal] = ACTIONS(251),
    [sym_identifier] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(251),
  },
  [58] = {
    [aux_sym_comparison_operator_repeat1] = STATE(58),
    [anon_sym_AMP] = ACTIONS(245),
    [sym_function_name] = ACTIONS(245),
    [sym_integer] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LPAREN2] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(247),
    [sym_float] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(245),
    [sym_signal] = ACTIONS(247),
    [sym_identifier] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(247),
    [anon_sym_PIPE_PIPE] = ACTIONS(247),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(256),
    [anon_sym_LT_LT] = ACTIONS(247),
    [anon_sym_TILDE] = ACTIONS(247),
  },
  [59] = {
    [sym_unary_operator] = STATE(43),
    [sym_call_macro_function] = STATE(43),
    [aux_sym_arguments_repeat1] = STATE(67),
    [sym_comparison_operator] = STATE(43),
    [sym_parenthesized] = STATE(43),
    [sym__expressions] = STATE(43),
    [sym_boolean_operator] = STATE(43),
    [sym__call_expressions] = STATE(43),
    [sym_call_function] = STATE(43),
    [sym_binary_operator] = STATE(43),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_function_name] = ACTIONS(5),
    [sym_integer] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(105),
    [sym_signal] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [60] = {
    [anon_sym_AMP] = ACTIONS(259),
    [sym_function_name] = ACTIONS(259),
    [sym_integer] = ACTIONS(259),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(261),
    [anon_sym_STAR] = ACTIONS(261),
    [anon_sym_LT_EQ] = ACTIONS(261),
    [anon_sym_LPAREN2] = ACTIONS(261),
    [anon_sym_GT_GT] = ACTIONS(261),
    [anon_sym_PLUS] = ACTIONS(261),
    [anon_sym_CARET] = ACTIONS(261),
    [sym_float] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_SLASH] = ACTIONS(259),
    [anon_sym_SEMI] = ACTIONS(261),
    [anon_sym_EQ_EQ] = ACTIONS(261),
    [anon_sym_GT_EQ] = ACTIONS(261),
    [anon_sym_DASH] = ACTIONS(259),
    [anon_sym_PIPE] = ACTIONS(259),
    [sym_signal] = ACTIONS(261),
    [sym_identifier] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_PERCENT] = ACTIONS(261),
    [anon_sym_PIPE_PIPE] = ACTIONS(261),
    [anon_sym_BANG_EQ] = ACTIONS(261),
    [anon_sym_LT] = ACTIONS(259),
    [anon_sym_GT] = ACTIONS(259),
    [anon_sym_LT_LT] = ACTIONS(261),
    [anon_sym_TILDE] = ACTIONS(261),
  },
  [61] = {
    [sym_unary_operator] = STATE(43),
    [sym_call_macro_function] = STATE(43),
    [aux_sym_arguments_repeat1] = STATE(61),
    [sym_comparison_operator] = STATE(43),
    [sym_parenthesized] = STATE(43),
    [sym__expressions] = STATE(43),
    [sym_boolean_operator] = STATE(43),
    [sym__call_expressions] = STATE(43),
    [sym_call_function] = STATE(43),
    [sym_binary_operator] = STATE(43),
    [sym_identifier] = ACTIONS(263),
    [anon_sym_COMMA] = ACTIONS(266),
    [anon_sym_LPAREN2] = ACTIONS(268),
    [sym_function_name] = ACTIONS(271),
    [sym_integer] = ACTIONS(274),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(266),
    [sym_float] = ACTIONS(277),
    [sym_signal] = ACTIONS(277),
    [anon_sym_TILDE] = ACTIONS(280),
  },
  [62] = {
    [aux_sym_arguments_repeat2] = STATE(69),
    [anon_sym_COMMA] = ACTIONS(223),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(283),
  },
  [63] = {
    [sym_identifier] = ACTIONS(285),
    [anon_sym_COMMA] = ACTIONS(285),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(285),
  },
  [64] = {
    [sym_identifier] = ACTIONS(287),
    [anon_sym_LPAREN2] = ACTIONS(289),
    [sym_function_name] = ACTIONS(287),
    [sym_integer] = ACTIONS(287),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(289),
    [sym_signal] = ACTIONS(289),
    [anon_sym_TILDE] = ACTIONS(289),
  },
  [65] = {
    [aux_sym__macro_arguments_repeat1] = STATE(72),
    [aux_sym__macro_arguments_repeat2] = STATE(73),
    [sym_identifier] = ACTIONS(235),
    [anon_sym_COMMA] = ACTIONS(291),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(293),
  },
  [66] = {
    [anon_sym_SEMI] = ACTIONS(295),
    [sym_comment] = ACTIONS(3),
  },
  [67] = {
    [sym_unary_operator] = STATE(43),
    [sym_call_macro_function] = STATE(43),
    [aux_sym_arguments_repeat1] = STATE(61),
    [sym_comparison_operator] = STATE(43),
    [sym_parenthesized] = STATE(43),
    [sym__expressions] = STATE(43),
    [sym_boolean_operator] = STATE(43),
    [sym__call_expressions] = STATE(43),
    [sym_call_function] = STATE(43),
    [sym_binary_operator] = STATE(43),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(297),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_function_name] = ACTIONS(5),
    [sym_integer] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(297),
    [sym_float] = ACTIONS(105),
    [sym_signal] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(29),
  },
  [68] = {
    [anon_sym_AMP] = ACTIONS(299),
    [sym_function_name] = ACTIONS(299),
    [sym_integer] = ACTIONS(299),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_STAR] = ACTIONS(301),
    [anon_sym_LT_EQ] = ACTIONS(301),
    [anon_sym_LPAREN2] = ACTIONS(301),
    [anon_sym_GT_GT] = ACTIONS(301),
    [anon_sym_PLUS] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [sym_float] = ACTIONS(301),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_SLASH] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(301),
    [anon_sym_EQ_EQ] = ACTIONS(301),
    [anon_sym_GT_EQ] = ACTIONS(301),
    [anon_sym_DASH] = ACTIONS(299),
    [anon_sym_PIPE] = ACTIONS(299),
    [sym_signal] = ACTIONS(301),
    [sym_identifier] = ACTIONS(299),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_PERCENT] = ACTIONS(301),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_BANG_EQ] = ACTIONS(301),
    [anon_sym_LT] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(299),
    [anon_sym_LT_LT] = ACTIONS(301),
    [anon_sym_TILDE] = ACTIONS(301),
  },
  [69] = {
    [aux_sym_arguments_repeat2] = STATE(69),
    [anon_sym_COMMA] = ACTIONS(303),
    [anon_sym_RPAREN] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [aux_sym__macro_arguments_repeat1] = STATE(74),
    [sym_identifier] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
  },
  [71] = {
    [sym_identifier] = ACTIONS(306),
    [anon_sym_LPAREN2] = ACTIONS(308),
    [sym_function_name] = ACTIONS(306),
    [sym_integer] = ACTIONS(306),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(308),
    [sym_signal] = ACTIONS(308),
    [anon_sym_TILDE] = ACTIONS(308),
  },
  [72] = {
    [aux_sym__macro_arguments_repeat1] = STATE(72),
    [sym_identifier] = ACTIONS(310),
    [anon_sym_COMMA] = ACTIONS(313),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(313),
  },
  [73] = {
    [aux_sym__macro_arguments_repeat2] = STATE(76),
    [anon_sym_COMMA] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(315),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [aux_sym__macro_arguments_repeat1] = STATE(72),
    [sym_identifier] = ACTIONS(235),
    [anon_sym_COMMA] = ACTIONS(317),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(317),
  },
  [75] = {
    [sym_identifier] = ACTIONS(319),
    [anon_sym_LPAREN2] = ACTIONS(321),
    [sym_function_name] = ACTIONS(319),
    [sym_integer] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(321),
    [sym_signal] = ACTIONS(321),
    [anon_sym_TILDE] = ACTIONS(321),
  },
  [76] = {
    [aux_sym__macro_arguments_repeat2] = STATE(76),
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(317),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT(7),
  [7] = {.count = 1, .reusable = false}, SHIFT(14),
  [9] = {.count = 1, .reusable = false}, SHIFT(5),
  [11] = {.count = 1, .reusable = false}, SHIFT(8),
  [13] = {.count = 1, .reusable = false}, SHIFT(10),
  [15] = {.count = 1, .reusable = true}, SHIFT(14),
  [17] = {.count = 1, .reusable = false}, SHIFT(2),
  [19] = {.count = 1, .reusable = false}, SHIFT(6),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [23] = {.count = 1, .reusable = true}, SHIFT(4),
  [25] = {.count = 1, .reusable = false}, SHIFT(11),
  [27] = {.count = 1, .reusable = false}, SHIFT(9),
  [29] = {.count = 1, .reusable = true}, SHIFT(3),
  [31] = {.count = 1, .reusable = true}, SHIFT(15),
  [33] = {.count = 1, .reusable = false}, SHIFT(16),
  [35] = {.count = 1, .reusable = true}, SHIFT(16),
  [37] = {.count = 1, .reusable = false}, SHIFT(17),
  [39] = {.count = 1, .reusable = true}, SHIFT(17),
  [41] = {.count = 1, .reusable = true}, SHIFT(18),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym__call_expressions, 1, .production_id = 1),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym__call_expressions, 1, .production_id = 1),
  [47] = {.count = 1, .reusable = true}, SHIFT(19),
  [49] = {.count = 1, .reusable = true}, SHIFT(22),
  [51] = {.count = 1, .reusable = true}, SHIFT(23),
  [53] = {.count = 1, .reusable = true}, SHIFT(24),
  [55] = {.count = 1, .reusable = true}, SHIFT(25),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [59] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [61] = {.count = 1, .reusable = false}, SHIFT(28),
  [63] = {.count = 1, .reusable = false}, SHIFT(29),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [67] = {.count = 1, .reusable = true}, SHIFT(30),
  [69] = {.count = 1, .reusable = false}, SHIFT(31),
  [71] = {.count = 1, .reusable = false}, SHIFT(32),
  [73] = {.count = 1, .reusable = true}, SHIFT(33),
  [75] = {.count = 1, .reusable = true}, SHIFT(29),
  [77] = {.count = 1, .reusable = true}, SHIFT(34),
  [79] = {.count = 1, .reusable = true}, SHIFT(31),
  [81] = {.count = 1, .reusable = true}, SHIFT(35),
  [83] = {.count = 1, .reusable = true}, SHIFT(36),
  [85] = {.count = 1, .reusable = false}, SHIFT(30),
  [87] = {.count = 1, .reusable = false}, SHIFT(38),
  [89] = {.count = 1, .reusable = true}, SHIFT(38),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_unary_operator, 2),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_unary_operator, 2),
  [95] = {.count = 1, .reusable = true}, SHIFT(39),
  [97] = {.count = 1, .reusable = false}, SHIFT(40),
  [99] = {.count = 1, .reusable = true}, SHIFT(40),
  [101] = {.count = 1, .reusable = false}, SHIFT(43),
  [103] = {.count = 1, .reusable = true}, SHIFT(41),
  [105] = {.count = 1, .reusable = true}, SHIFT(43),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_call_macro_function, 2, .production_id = 2),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_call_macro_function, 2, .production_id = 2),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_call_function, 2),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_call_function, 2),
  [115] = {.count = 1, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2),
  [117] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [119] = {.count = 1, .reusable = false}, SHIFT(44),
  [121] = {.count = 1, .reusable = true}, SHIFT(44),
  [123] = {.count = 1, .reusable = false}, SHIFT(45),
  [125] = {.count = 1, .reusable = true}, SHIFT(45),
  [127] = {.count = 1, .reusable = true}, SHIFT(47),
  [129] = {.count = 1, .reusable = true}, SHIFT(46),
  [131] = {.count = 1, .reusable = false}, SHIFT(47),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_define_statement, 2),
  [135] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [138] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [141] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [144] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [150] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [153] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [156] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [162] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [165] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [171] = {.count = 1, .reusable = false}, SHIFT(49),
  [173] = {.count = 1, .reusable = true}, SHIFT(49),
  [175] = {.count = 1, .reusable = false}, SHIFT(50),
  [177] = {.count = 1, .reusable = true}, SHIFT(50),
  [179] = {.count = 1, .reusable = false}, SHIFT(51),
  [181] = {.count = 1, .reusable = true}, SHIFT(51),
  [183] = {.count = 1, .reusable = false}, SHIFT(52),
  [185] = {.count = 1, .reusable = true}, SHIFT(52),
  [187] = {.count = 1, .reusable = false}, SHIFT(53),
  [189] = {.count = 1, .reusable = true}, SHIFT(53),
  [191] = {.count = 1, .reusable = false}, SHIFT(54),
  [193] = {.count = 1, .reusable = true}, SHIFT(54),
  [195] = {.count = 1, .reusable = false}, SHIFT(55),
  [197] = {.count = 1, .reusable = true}, SHIFT(55),
  [199] = {.count = 1, .reusable = false}, SHIFT(56),
  [201] = {.count = 1, .reusable = true}, SHIFT(56),
  [203] = {.count = 1, .reusable = false}, SHIFT(57),
  [205] = {.count = 1, .reusable = true}, SHIFT(57),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_comparison_operator, 2),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_comparison_operator, 2),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_ramp_statement, 3),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized, 3),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized, 3),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_channel_statement, 3),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [223] = {.count = 1, .reusable = true}, SHIFT(59),
  [225] = {.count = 1, .reusable = true}, SHIFT(60),
  [227] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 1),
  [229] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 1),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_hz_statement, 3),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_amp_statement, 3),
  [235] = {.count = 1, .reusable = true}, SHIFT(63),
  [237] = {.count = 1, .reusable = true}, SHIFT(64),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_macro_variable, 2, .production_id = 3),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym_binary_operator, 3),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_binary_operator, 3),
  [245] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [247] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [249] = {.count = 1, .reusable = false}, REDUCE(sym_boolean_operator, 3),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_operator, 3),
  [253] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(30),
  [256] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(30),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [263] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(6),
  [266] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [268] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(4),
  [271] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(7),
  [274] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(43),
  [277] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(43),
  [280] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(3),
  [283] = {.count = 1, .reusable = true}, SHIFT(68),
  [285] = {.count = 1, .reusable = true}, REDUCE(aux_sym__macro_arguments_repeat1, 1, .production_id = 3),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arguments, 2),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arguments, 2),
  [291] = {.count = 1, .reusable = true}, SHIFT(70),
  [293] = {.count = 1, .reusable = true}, SHIFT(71),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_macro_function, 3, .production_id = 2),
  [297] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [303] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(59),
  [306] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arguments, 3),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arguments, 3),
  [310] = {.count = 2, .reusable = true}, REDUCE(aux_sym__macro_arguments_repeat1, 2), SHIFT_REPEAT(63),
  [313] = {.count = 1, .reusable = true}, REDUCE(aux_sym__macro_arguments_repeat1, 2),
  [315] = {.count = 1, .reusable = true}, SHIFT(75),
  [317] = {.count = 1, .reusable = true}, REDUCE(aux_sym__macro_arguments_repeat2, 2),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arguments, 4),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arguments, 4),
  [323] = {.count = 2, .reusable = true}, REDUCE(aux_sym__macro_arguments_repeat2, 2), SHIFT_REPEAT(70),
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
