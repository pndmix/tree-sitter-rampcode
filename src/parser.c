#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 103
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_identifier = 1,
  anon_sym_cps = 2,
  anon_sym_COLON = 3,
  anon_sym_ramp1 = 4,
  anon_sym_ramp2 = 5,
  anon_sym_COLON_EQ = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_AMP_AMP = 9,
  anon_sym_PIPE_PIPE = 10,
  anon_sym_STAR = 11,
  anon_sym_SLASH = 12,
  anon_sym_PERCENT = 13,
  anon_sym_PLUS = 14,
  anon_sym_DASH = 15,
  anon_sym_LT_LT = 16,
  anon_sym_GT_GT = 17,
  anon_sym_AMP = 18,
  anon_sym_CARET = 19,
  anon_sym_PIPE = 20,
  anon_sym_TILDE = 21,
  anon_sym_BANG = 22,
  anon_sym_LT = 23,
  anon_sym_LT_EQ = 24,
  anon_sym_EQ_EQ = 25,
  anon_sym_BANG_EQ = 26,
  anon_sym_GT_EQ = 27,
  anon_sym_GT = 28,
  anon_sym_LPAREN2 = 29,
  anon_sym_COMMA = 30,
  anon_sym_BSLASH_COMMA = 31,
  sym_integer = 32,
  sym_float = 33,
  sym_signal = 34,
  sym_function_name = 35,
  sym_comment = 36,
  sym_program = 37,
  sym_cps_statement = 38,
  sym_ramp_statement = 39,
  sym_macro_statement = 40,
  sym_macro_function_statement = 41,
  sym_macro_arguments = 42,
  sym_expression_statement = 43,
  sym__expressions = 44,
  sym_boolean_operator = 45,
  sym_binary_operator = 46,
  sym_unary_operator = 47,
  sym_comparison_operator = 48,
  sym_parenthesized = 49,
  sym_call_function = 50,
  sym_call_macro = 51,
  sym_call_macro_function = 52,
  sym_arguments = 53,
  sym__delimiter = 54,
  aux_sym_program_repeat1 = 55,
  aux_sym_macro_arguments_repeat1 = 56,
  aux_sym_macro_arguments_repeat2 = 57,
  aux_sym_comparison_operator_repeat1 = 58,
  aux_sym_arguments_repeat1 = 59,
  aux_sym_arguments_repeat2 = 60,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "name",
  [anon_sym_cps] = "cps",
  [anon_sym_COLON] = ":",
  [anon_sym_ramp1] = "ramp1",
  [anon_sym_ramp2] = "ramp2",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_LPAREN] = "(",
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
  [anon_sym_BANG] = "!",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_BSLASH_COMMA] = "\\,",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_signal] = "signal",
  [sym_function_name] = "name",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym_cps_statement] = "cps_statement",
  [sym_ramp_statement] = "ramp_statement",
  [sym_macro_statement] = "macro_statement",
  [sym_macro_function_statement] = "macro_function_statement",
  [sym_macro_arguments] = "macro_arguments",
  [sym_expression_statement] = "expression_statement",
  [sym__expressions] = "_expressions",
  [sym_boolean_operator] = "boolean_operator",
  [sym_binary_operator] = "binary_operator",
  [sym_unary_operator] = "unary_operator",
  [sym_comparison_operator] = "comparison_operator",
  [sym_parenthesized] = "parenthesized",
  [sym_call_function] = "call_function",
  [sym_call_macro] = "call_macro",
  [sym_call_macro_function] = "call_macro_function",
  [sym_arguments] = "arguments",
  [sym__delimiter] = "_delimiter",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_macro_arguments_repeat1] = "macro_arguments_repeat1",
  [aux_sym_macro_arguments_repeat2] = "macro_arguments_repeat2",
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
  [anon_sym_cps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ramp1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ramp2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_EQ] = {
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
  [anon_sym_BANG] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_COMMA] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_cps_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_ramp_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_function_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_arguments] = {
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
  [sym_call_function] = {
    .visible = true,
    .named = true,
  },
  [sym_call_macro] = {
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
  [sym__delimiter] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_macro_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_macro_arguments_repeat2] = {
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
      if (lookahead == 0) ADVANCE(15);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '&') ADVANCE(30);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '^') ADVANCE(31);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '~') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(15);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '&') ADVANCE(30);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '^') ADVANCE(31);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '~') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '&') ADVANCE(30);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '^') ADVANCE(31);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '~') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ',') ADVANCE(43);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(51);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(50);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'v') ADVANCE(10);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(5);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(51);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(21);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(22);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(29);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_BSLASH_COMMA);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_signal);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
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
      if (lookahead == 'e') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'm') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'q') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_function_name);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 'x') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'w') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_cps);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == '1') ADVANCE(58);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == '2' ||
          lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 55:
      if (lookahead == '1') ADVANCE(24);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 58:
      if (lookahead == '0' ||
          lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 59:
      if (lookahead == '1') ADVANCE(60);
      if (lookahead == '2') ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_ramp1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_ramp2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 2},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_BANG] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_ramp1] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_function_name] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_ramp2] = ACTIONS(1),
    [anon_sym_cps] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_BSLASH_COMMA] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_program_repeat1] = STATE(5),
    [sym_ramp_statement] = STATE(5),
    [sym_macro_statement] = STATE(5),
    [sym_cps_statement] = STATE(5),
    [sym_program] = STATE(6),
    [sym_macro_function_statement] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ramp2] = ACTIONS(7),
    [anon_sym_cps] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_ramp1] = ACTIONS(7),
    [sym_identifier] = ACTIONS(11),
  },
  [2] = {
    [anon_sym_COLON] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [anon_sym_COLON] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_macro_arguments] = STATE(11),
    [anon_sym_COLON_EQ] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_ramp_statement] = STATE(12),
    [sym_macro_statement] = STATE(12),
    [aux_sym_program_repeat1] = STATE(12),
    [sym_cps_statement] = STATE(12),
    [sym_macro_function_statement] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_ramp2] = ACTIONS(7),
    [anon_sym_cps] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_ramp1] = ACTIONS(7),
    [sym_identifier] = ACTIONS(11),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_call_function] = STATE(18),
    [sym_boolean_operator] = STATE(18),
    [sym_binary_operator] = STATE(18),
    [sym_call_macro] = STATE(18),
    [sym_call_macro_function] = STATE(18),
    [sym_unary_operator] = STATE(18),
    [sym_comparison_operator] = STATE(18),
    [sym_expression_statement] = STATE(17),
    [sym__expressions] = STATE(18),
    [sym_parenthesized] = STATE(18),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(29),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [8] = {
    [sym_comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(37),
    [sym_float] = ACTIONS(39),
  },
  [9] = {
    [sym_call_function] = STATE(18),
    [sym_boolean_operator] = STATE(18),
    [sym_binary_operator] = STATE(18),
    [sym_call_macro] = STATE(18),
    [sym_call_macro_function] = STATE(18),
    [sym_unary_operator] = STATE(18),
    [sym_comparison_operator] = STATE(18),
    [sym_expression_statement] = STATE(20),
    [sym__expressions] = STATE(18),
    [sym_parenthesized] = STATE(18),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(29),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [10] = {
    [aux_sym_macro_arguments_repeat1] = STATE(22),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(43),
  },
  [11] = {
    [anon_sym_COLON_EQ] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_ramp_statement] = STATE(12),
    [sym_macro_statement] = STATE(12),
    [aux_sym_program_repeat1] = STATE(12),
    [sym_cps_statement] = STATE(12),
    [sym_macro_function_statement] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_ramp2] = ACTIONS(49),
    [anon_sym_cps] = ACTIONS(52),
    [sym_comment] = ACTIONS(3),
    [anon_sym_ramp1] = ACTIONS(49),
    [sym_identifier] = ACTIONS(55),
  },
  [13] = {
    [sym_call_function] = STATE(24),
    [sym_boolean_operator] = STATE(24),
    [sym_binary_operator] = STATE(24),
    [sym_call_macro] = STATE(24),
    [sym_call_macro_function] = STATE(24),
    [sym_unary_operator] = STATE(24),
    [sym_comparison_operator] = STATE(24),
    [sym__expressions] = STATE(24),
    [sym_parenthesized] = STATE(24),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_integer] = ACTIONS(58),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(60),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(60),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [14] = {
    [sym_arguments] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(62),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_call_function] = STATE(27),
    [sym_boolean_operator] = STATE(27),
    [sym_binary_operator] = STATE(27),
    [sym_call_macro] = STATE(27),
    [sym_call_macro_function] = STATE(27),
    [sym_unary_operator] = STATE(27),
    [sym_comparison_operator] = STATE(27),
    [sym__expressions] = STATE(27),
    [sym_parenthesized] = STATE(27),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_integer] = ACTIONS(64),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(66),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [16] = {
    [sym_arguments] = STATE(28),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(68),
    [anon_sym_PIPE_PIPE] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_ramp1] = ACTIONS(70),
    [anon_sym_AMP_AMP] = ACTIONS(68),
    [anon_sym_GT_EQ] = ACTIONS(68),
    [anon_sym_AMP] = ACTIONS(70),
    [anon_sym_LT] = ACTIONS(70),
    [anon_sym_STAR] = ACTIONS(68),
    [anon_sym_LT_LT] = ACTIONS(68),
    [anon_sym_ramp2] = ACTIONS(70),
    [anon_sym_cps] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_GT] = ACTIONS(70),
    [anon_sym_CARET] = ACTIONS(68),
    [anon_sym_LT_EQ] = ACTIONS(68),
    [sym_identifier] = ACTIONS(70),
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_GT_GT] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_RPAREN] = ACTIONS(68),
    [anon_sym_BANG_EQ] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(70),
    [anon_sym_EQ_EQ] = ACTIONS(68),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_ramp2] = ACTIONS(74),
    [anon_sym_cps] = ACTIONS(74),
    [sym_comment] = ACTIONS(3),
    [anon_sym_ramp1] = ACTIONS(74),
    [sym_identifier] = ACTIONS(74),
  },
  [18] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_LT_LT] = ACTIONS(78),
    [anon_sym_ramp2] = ACTIONS(80),
    [anon_sym_cps] = ACTIONS(80),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(82),
    [anon_sym_CARET] = ACTIONS(84),
    [anon_sym_LT_EQ] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_PIPE_PIPE] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_ramp1] = ACTIONS(80),
    [anon_sym_AMP_AMP] = ACTIONS(92),
    [sym_identifier] = ACTIONS(80),
    [anon_sym_GT_EQ] = ACTIONS(86),
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_AMP] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_BANG_EQ] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_EQ_EQ] = ACTIONS(86),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [anon_sym_ramp2] = ACTIONS(106),
    [anon_sym_cps] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_ramp1] = ACTIONS(106),
    [sym_identifier] = ACTIONS(106),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_ramp2] = ACTIONS(110),
    [anon_sym_cps] = ACTIONS(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_ramp1] = ACTIONS(110),
    [sym_identifier] = ACTIONS(110),
  },
  [21] = {
    [anon_sym_COLON_EQ] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym__delimiter] = STATE(40),
    [aux_sym_macro_arguments_repeat1] = STATE(41),
    [aux_sym_macro_arguments_repeat2] = STATE(42),
    [anon_sym_COMMA] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(116),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BSLASH_COMMA] = ACTIONS(114),
    [sym_identifier] = ACTIONS(118),
  },
  [23] = {
    [sym_call_function] = STATE(18),
    [sym_boolean_operator] = STATE(18),
    [sym_binary_operator] = STATE(18),
    [sym_call_macro] = STATE(18),
    [sym_call_macro_function] = STATE(18),
    [sym_unary_operator] = STATE(18),
    [sym_comparison_operator] = STATE(18),
    [sym_expression_statement] = STATE(43),
    [sym__expressions] = STATE(18),
    [sym_parenthesized] = STATE(18),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(29),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [24] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_PIPE_PIPE] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_ramp1] = ACTIONS(122),
    [anon_sym_AMP_AMP] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_AMP] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_LT_LT] = ACTIONS(120),
    [anon_sym_ramp2] = ACTIONS(122),
    [anon_sym_cps] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [sym_identifier] = ACTIONS(122),
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_GT_GT] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_EQ_EQ] = ACTIONS(120),
  },
  [25] = {
    [sym_boolean_operator] = STATE(46),
    [sym_binary_operator] = STATE(46),
    [sym_call_macro] = STATE(46),
    [sym_call_macro_function] = STATE(46),
    [sym__expressions] = STATE(46),
    [sym_parenthesized] = STATE(46),
    [sym_call_function] = STATE(46),
    [sym_unary_operator] = STATE(46),
    [sym_comparison_operator] = STATE(46),
    [aux_sym_arguments_repeat1] = STATE(45),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(126),
    [sym_float] = ACTIONS(126),
    [sym_identifier] = ACTIONS(128),
    [sym_integer] = ACTIONS(130),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym_function_name] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_LPAREN2] = ACTIONS(136),
  },
  [26] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(138),
    [anon_sym_PIPE_PIPE] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_ramp1] = ACTIONS(140),
    [anon_sym_AMP_AMP] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_AMP] = ACTIONS(140),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_LT_LT] = ACTIONS(138),
    [anon_sym_ramp2] = ACTIONS(140),
    [anon_sym_cps] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_CARET] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [sym_identifier] = ACTIONS(140),
    [ts_builtin_sym_end] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(140),
    [anon_sym_GT_GT] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_RPAREN] = ACTIONS(138),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_EQ_EQ] = ACTIONS(138),
  },
  [27] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_PIPE_PIPE] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_AMP_AMP] = ACTIONS(92),
    [anon_sym_GT_EQ] = ACTIONS(86),
    [anon_sym_AMP] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_LT_LT] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(82),
    [anon_sym_CARET] = ACTIONS(84),
    [anon_sym_LT_EQ] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(142),
    [anon_sym_BANG_EQ] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_EQ_EQ] = ACTIONS(86),
  },
  [28] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(144),
    [anon_sym_PIPE_PIPE] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_ramp1] = ACTIONS(146),
    [anon_sym_AMP_AMP] = ACTIONS(144),
    [anon_sym_GT_EQ] = ACTIONS(144),
    [anon_sym_AMP] = ACTIONS(146),
    [anon_sym_LT] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(144),
    [anon_sym_LT_LT] = ACTIONS(144),
    [anon_sym_ramp2] = ACTIONS(146),
    [anon_sym_cps] = ACTIONS(146),
    [anon_sym_GT] = ACTIONS(146),
    [anon_sym_CARET] = ACTIONS(144),
    [anon_sym_LT_EQ] = ACTIONS(144),
    [sym_identifier] = ACTIONS(146),
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_SLASH] = ACTIONS(146),
    [anon_sym_GT_GT] = ACTIONS(144),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_BANG_EQ] = ACTIONS(144),
    [anon_sym_PIPE] = ACTIONS(146),
    [anon_sym_EQ_EQ] = ACTIONS(144),
  },
  [29] = {
    [sym_call_function] = STATE(48),
    [sym_boolean_operator] = STATE(48),
    [sym_binary_operator] = STATE(48),
    [sym_call_macro] = STATE(48),
    [sym_call_macro_function] = STATE(48),
    [sym_unary_operator] = STATE(48),
    [sym_comparison_operator] = STATE(48),
    [sym__expressions] = STATE(48),
    [sym_parenthesized] = STATE(48),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_integer] = ACTIONS(148),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(150),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [30] = {
    [sym_call_function] = STATE(49),
    [sym_boolean_operator] = STATE(49),
    [sym_binary_operator] = STATE(49),
    [sym_call_macro] = STATE(49),
    [sym_call_macro_function] = STATE(49),
    [sym_unary_operator] = STATE(49),
    [sym_comparison_operator] = STATE(49),
    [sym__expressions] = STATE(49),
    [sym_parenthesized] = STATE(49),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_integer] = ACTIONS(152),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(154),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [31] = {
    [sym_call_function] = STATE(50),
    [sym_boolean_operator] = STATE(50),
    [sym_binary_operator] = STATE(50),
    [sym_call_macro] = STATE(50),
    [sym_call_macro_function] = STATE(50),
    [sym_unary_operator] = STATE(50),
    [sym_comparison_operator] = STATE(50),
    [sym__expressions] = STATE(50),
    [sym_parenthesized] = STATE(50),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_integer] = ACTIONS(156),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(158),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [32] = {
    [sym_call_function] = STATE(51),
    [sym_boolean_operator] = STATE(51),
    [sym_binary_operator] = STATE(51),
    [sym_call_macro] = STATE(51),
    [sym_call_macro_function] = STATE(51),
    [sym_unary_operator] = STATE(51),
    [sym_comparison_operator] = STATE(51),
    [sym__expressions] = STATE(51),
    [sym_parenthesized] = STATE(51),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_integer] = ACTIONS(160),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(162),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [33] = {
    [sym_call_function] = STATE(52),
    [sym_boolean_operator] = STATE(52),
    [sym_binary_operator] = STATE(52),
    [sym_call_macro] = STATE(52),
    [sym_call_macro_function] = STATE(52),
    [sym_unary_operator] = STATE(52),
    [sym_comparison_operator] = STATE(52),
    [sym__expressions] = STATE(52),
    [sym_parenthesized] = STATE(52),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_integer] = ACTIONS(164),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(166),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(166),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [34] = {
    [sym_call_function] = STATE(53),
    [sym_boolean_operator] = STATE(53),
    [sym_binary_operator] = STATE(53),
    [sym_call_macro] = STATE(53),
    [sym_call_macro_function] = STATE(53),
    [sym_unary_operator] = STATE(53),
    [sym_comparison_operator] = STATE(53),
    [sym__expressions] = STATE(53),
    [sym_parenthesized] = STATE(53),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_integer] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(170),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [35] = {
    [sym_call_function] = STATE(54),
    [sym_boolean_operator] = STATE(54),
    [sym_binary_operator] = STATE(54),
    [sym_call_macro] = STATE(54),
    [sym_call_macro_function] = STATE(54),
    [sym_unary_operator] = STATE(54),
    [sym_comparison_operator] = STATE(54),
    [sym__expressions] = STATE(54),
    [sym_parenthesized] = STATE(54),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_integer] = ACTIONS(172),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(174),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [36] = {
    [sym_call_function] = STATE(55),
    [sym_boolean_operator] = STATE(55),
    [sym_binary_operator] = STATE(55),
    [sym_call_macro] = STATE(55),
    [sym_call_macro_function] = STATE(55),
    [sym_unary_operator] = STATE(55),
    [sym_comparison_operator] = STATE(55),
    [sym__expressions] = STATE(55),
    [sym_parenthesized] = STATE(55),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_integer] = ACTIONS(176),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(178),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [37] = {
    [sym_call_function] = STATE(56),
    [sym_boolean_operator] = STATE(56),
    [sym_binary_operator] = STATE(56),
    [sym_call_macro] = STATE(56),
    [sym_call_macro_function] = STATE(56),
    [sym_unary_operator] = STATE(56),
    [sym_comparison_operator] = STATE(56),
    [sym__expressions] = STATE(56),
    [sym_parenthesized] = STATE(56),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_integer] = ACTIONS(180),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(182),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [38] = {
    [aux_sym_comparison_operator_repeat1] = STATE(57),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(184),
    [anon_sym_PIPE_PIPE] = ACTIONS(184),
    [anon_sym_DASH] = ACTIONS(186),
    [anon_sym_ramp1] = ACTIONS(186),
    [anon_sym_AMP_AMP] = ACTIONS(184),
    [anon_sym_GT_EQ] = ACTIONS(184),
    [anon_sym_AMP] = ACTIONS(186),
    [anon_sym_LT] = ACTIONS(186),
    [anon_sym_STAR] = ACTIONS(184),
    [anon_sym_LT_LT] = ACTIONS(184),
    [anon_sym_ramp2] = ACTIONS(186),
    [anon_sym_cps] = ACTIONS(186),
    [anon_sym_GT] = ACTIONS(186),
    [anon_sym_CARET] = ACTIONS(184),
    [anon_sym_LT_EQ] = ACTIONS(184),
    [sym_identifier] = ACTIONS(186),
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_SLASH] = ACTIONS(186),
    [anon_sym_GT_GT] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_BANG_EQ] = ACTIONS(184),
    [anon_sym_PIPE] = ACTIONS(186),
    [anon_sym_EQ_EQ] = ACTIONS(184),
  },
  [39] = {
    [anon_sym_COLON_EQ] = ACTIONS(188),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [aux_sym_macro_arguments_repeat1] = STATE(58),
    [sym_identifier] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [aux_sym_macro_arguments_repeat1] = STATE(41),
    [anon_sym_COMMA] = ACTIONS(192),
    [anon_sym_RPAREN] = ACTIONS(192),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BSLASH_COMMA] = ACTIONS(192),
    [sym_identifier] = ACTIONS(194),
  },
  [42] = {
    [sym__delimiter] = STATE(40),
    [aux_sym_macro_arguments_repeat2] = STATE(60),
    [anon_sym_COMMA] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BSLASH_COMMA] = ACTIONS(114),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_ramp2] = ACTIONS(201),
    [anon_sym_cps] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [anon_sym_ramp1] = ACTIONS(201),
    [sym_identifier] = ACTIONS(201),
  },
  [44] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(203),
    [anon_sym_PIPE_PIPE] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_ramp1] = ACTIONS(205),
    [anon_sym_AMP_AMP] = ACTIONS(203),
    [anon_sym_GT_EQ] = ACTIONS(203),
    [anon_sym_AMP] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_LT_LT] = ACTIONS(203),
    [anon_sym_ramp2] = ACTIONS(205),
    [anon_sym_cps] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_CARET] = ACTIONS(203),
    [anon_sym_LT_EQ] = ACTIONS(203),
    [sym_identifier] = ACTIONS(205),
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_GT_GT] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_BANG_EQ] = ACTIONS(203),
    [anon_sym_PIPE] = ACTIONS(205),
    [anon_sym_EQ_EQ] = ACTIONS(203),
  },
  [45] = {
    [sym_boolean_operator] = STATE(46),
    [sym_binary_operator] = STATE(46),
    [sym_call_macro] = STATE(46),
    [sym_call_macro_function] = STATE(46),
    [sym__expressions] = STATE(46),
    [sym_parenthesized] = STATE(46),
    [sym_call_function] = STATE(46),
    [sym_unary_operator] = STATE(46),
    [sym_comparison_operator] = STATE(46),
    [sym__delimiter] = STATE(63),
    [aux_sym_arguments_repeat1] = STATE(64),
    [aux_sym_arguments_repeat2] = STATE(62),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(126),
    [sym_float] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(207),
    [sym_identifier] = ACTIONS(128),
    [sym_integer] = ACTIONS(130),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym_function_name] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [anon_sym_BSLASH_COMMA] = ACTIONS(207),
  },
  [46] = {
    [aux_sym_comparison_operator_repeat1] = STATE(81),
    [anon_sym_BANG] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(213),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_GT_EQ] = ACTIONS(223),
    [sym_integer] = ACTIONS(211),
    [anon_sym_TILDE] = ACTIONS(213),
    [anon_sym_AMP] = ACTIONS(225),
    [anon_sym_LT] = ACTIONS(227),
    [sym_function_name] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_LT_LT] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(227),
    [sym_float] = ACTIONS(213),
    [anon_sym_COMMA] = ACTIONS(213),
    [anon_sym_CARET] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(223),
    [sym_identifier] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_GT_GT] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_LPAREN2] = ACTIONS(213),
    [anon_sym_BANG_EQ] = ACTIONS(223),
    [anon_sym_BSLASH_COMMA] = ACTIONS(213),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(223),
  },
  [47] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(239),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(241),
    [anon_sym_ramp1] = ACTIONS(241),
    [anon_sym_AMP_AMP] = ACTIONS(239),
    [anon_sym_GT_EQ] = ACTIONS(239),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_LT] = ACTIONS(241),
    [anon_sym_STAR] = ACTIONS(239),
    [anon_sym_LT_LT] = ACTIONS(239),
    [anon_sym_ramp2] = ACTIONS(241),
    [anon_sym_cps] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(239),
    [anon_sym_LT_EQ] = ACTIONS(239),
    [sym_identifier] = ACTIONS(241),
    [ts_builtin_sym_end] = ACTIONS(239),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_GT_GT] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_BANG_EQ] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_EQ_EQ] = ACTIONS(239),
  },
  [48] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(243),
    [anon_sym_PIPE_PIPE] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_ramp1] = ACTIONS(245),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(243),
    [anon_sym_LT_LT] = ACTIONS(243),
    [anon_sym_ramp2] = ACTIONS(245),
    [anon_sym_cps] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(245),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(243),
    [sym_identifier] = ACTIONS(245),
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_GT_GT] = ACTIONS(243),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(243),
  },
  [49] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_PIPE_PIPE] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_ramp1] = ACTIONS(245),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_LT_LT] = ACTIONS(243),
    [anon_sym_ramp2] = ACTIONS(245),
    [anon_sym_cps] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(245),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(243),
    [sym_identifier] = ACTIONS(245),
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(243),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(243),
  },
  [50] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_PIPE_PIPE] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_ramp1] = ACTIONS(247),
    [anon_sym_AMP_AMP] = ACTIONS(92),
    [anon_sym_GT_EQ] = ACTIONS(86),
    [anon_sym_AMP] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_LT_LT] = ACTIONS(78),
    [anon_sym_ramp2] = ACTIONS(247),
    [anon_sym_cps] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(82),
    [anon_sym_CARET] = ACTIONS(84),
    [anon_sym_LT_EQ] = ACTIONS(86),
    [sym_identifier] = ACTIONS(247),
    [ts_builtin_sym_end] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_EQ_EQ] = ACTIONS(86),
  },
  [51] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_PIPE_PIPE] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_ramp1] = ACTIONS(245),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(86),
    [anon_sym_AMP] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_LT_LT] = ACTIONS(78),
    [anon_sym_ramp2] = ACTIONS(245),
    [anon_sym_cps] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(82),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(86),
    [sym_identifier] = ACTIONS(245),
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(86),
  },
  [52] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_PIPE_PIPE] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_ramp1] = ACTIONS(253),
    [anon_sym_AMP_AMP] = ACTIONS(92),
    [anon_sym_GT_EQ] = ACTIONS(86),
    [anon_sym_AMP] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_LT_LT] = ACTIONS(78),
    [anon_sym_ramp2] = ACTIONS(253),
    [anon_sym_cps] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(82),
    [anon_sym_CARET] = ACTIONS(84),
    [anon_sym_LT_EQ] = ACTIONS(86),
    [sym_identifier] = ACTIONS(253),
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_EQ_EQ] = ACTIONS(86),
  },
  [53] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_PIPE_PIPE] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_ramp1] = ACTIONS(245),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_LT_LT] = ACTIONS(243),
    [anon_sym_ramp2] = ACTIONS(245),
    [anon_sym_cps] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(245),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(243),
    [sym_identifier] = ACTIONS(245),
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(243),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(243),
  },
  [54] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_PIPE_PIPE] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_ramp1] = ACTIONS(253),
    [anon_sym_AMP_AMP] = ACTIONS(251),
    [anon_sym_GT_EQ] = ACTIONS(86),
    [anon_sym_AMP] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_LT_LT] = ACTIONS(78),
    [anon_sym_ramp2] = ACTIONS(253),
    [anon_sym_cps] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(82),
    [anon_sym_CARET] = ACTIONS(84),
    [anon_sym_LT_EQ] = ACTIONS(86),
    [sym_identifier] = ACTIONS(253),
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_EQ_EQ] = ACTIONS(86),
  },
  [55] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_PIPE_PIPE] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_ramp1] = ACTIONS(245),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(86),
    [anon_sym_AMP] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_LT_LT] = ACTIONS(78),
    [anon_sym_ramp2] = ACTIONS(245),
    [anon_sym_cps] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(82),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(86),
    [sym_identifier] = ACTIONS(245),
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(86),
  },
  [56] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_PIPE_PIPE] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_ramp1] = ACTIONS(245),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(86),
    [anon_sym_AMP] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_LT_LT] = ACTIONS(78),
    [anon_sym_ramp2] = ACTIONS(245),
    [anon_sym_cps] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(82),
    [anon_sym_CARET] = ACTIONS(84),
    [anon_sym_LT_EQ] = ACTIONS(86),
    [sym_identifier] = ACTIONS(245),
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(86),
  },
  [57] = {
    [aux_sym_comparison_operator_repeat1] = STATE(57),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_PIPE_PIPE] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_ramp1] = ACTIONS(247),
    [anon_sym_AMP_AMP] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(247),
    [anon_sym_LT] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_ramp2] = ACTIONS(247),
    [anon_sym_cps] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(258),
    [anon_sym_CARET] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [sym_identifier] = ACTIONS(247),
    [ts_builtin_sym_end] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(255),
  },
  [58] = {
    [aux_sym_macro_arguments_repeat1] = STATE(41),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(261),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BSLASH_COMMA] = ACTIONS(261),
    [sym_identifier] = ACTIONS(118),
  },
  [59] = {
    [anon_sym_COLON_EQ] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [sym__delimiter] = STATE(40),
    [aux_sym_macro_arguments_repeat2] = STATE(60),
    [anon_sym_COMMA] = ACTIONS(265),
    [anon_sym_RPAREN] = ACTIONS(261),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BSLASH_COMMA] = ACTIONS(265),
  },
  [61] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(268),
    [anon_sym_PIPE_PIPE] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(270),
    [anon_sym_ramp1] = ACTIONS(270),
    [anon_sym_AMP_AMP] = ACTIONS(268),
    [anon_sym_GT_EQ] = ACTIONS(268),
    [anon_sym_AMP] = ACTIONS(270),
    [anon_sym_LT] = ACTIONS(270),
    [anon_sym_STAR] = ACTIONS(268),
    [anon_sym_LT_LT] = ACTIONS(268),
    [anon_sym_ramp2] = ACTIONS(270),
    [anon_sym_cps] = ACTIONS(270),
    [anon_sym_GT] = ACTIONS(270),
    [anon_sym_CARET] = ACTIONS(268),
    [anon_sym_LT_EQ] = ACTIONS(268),
    [sym_identifier] = ACTIONS(270),
    [ts_builtin_sym_end] = ACTIONS(268),
    [anon_sym_SLASH] = ACTIONS(270),
    [anon_sym_GT_GT] = ACTIONS(268),
    [anon_sym_PLUS] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(268),
    [anon_sym_BANG_EQ] = ACTIONS(268),
    [anon_sym_PIPE] = ACTIONS(270),
    [anon_sym_EQ_EQ] = ACTIONS(268),
  },
  [62] = {
    [sym__delimiter] = STATE(63),
    [aux_sym_arguments_repeat2] = STATE(66),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(272),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BSLASH_COMMA] = ACTIONS(207),
  },
  [63] = {
    [sym_call_function] = STATE(46),
    [sym_boolean_operator] = STATE(46),
    [sym_binary_operator] = STATE(46),
    [sym_call_macro] = STATE(46),
    [sym_call_macro_function] = STATE(46),
    [sym_unary_operator] = STATE(46),
    [sym_comparison_operator] = STATE(46),
    [aux_sym_arguments_repeat1] = STATE(67),
    [sym__expressions] = STATE(46),
    [sym_parenthesized] = STATE(46),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_integer] = ACTIONS(130),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym_signal] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(126),
    [sym_function_name] = ACTIONS(132),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_identifier] = ACTIONS(128),
  },
  [64] = {
    [sym_call_function] = STATE(46),
    [sym_boolean_operator] = STATE(46),
    [sym_binary_operator] = STATE(46),
    [sym_call_macro] = STATE(46),
    [sym_call_macro_function] = STATE(46),
    [sym_unary_operator] = STATE(46),
    [sym_comparison_operator] = STATE(46),
    [aux_sym_arguments_repeat1] = STATE(64),
    [sym__expressions] = STATE(46),
    [sym_parenthesized] = STATE(46),
    [anon_sym_BANG] = ACTIONS(274),
    [sym_integer] = ACTIONS(277),
    [anon_sym_TILDE] = ACTIONS(274),
    [sym_signal] = ACTIONS(280),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(280),
    [anon_sym_COMMA] = ACTIONS(283),
    [sym_function_name] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(283),
    [anon_sym_LPAREN2] = ACTIONS(288),
    [anon_sym_BSLASH_COMMA] = ACTIONS(283),
    [sym_identifier] = ACTIONS(291),
  },
  [65] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(294),
    [anon_sym_PIPE_PIPE] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_ramp1] = ACTIONS(296),
    [anon_sym_AMP_AMP] = ACTIONS(294),
    [anon_sym_GT_EQ] = ACTIONS(294),
    [anon_sym_AMP] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_STAR] = ACTIONS(294),
    [anon_sym_LT_LT] = ACTIONS(294),
    [anon_sym_ramp2] = ACTIONS(296),
    [anon_sym_cps] = ACTIONS(296),
    [anon_sym_GT] = ACTIONS(296),
    [anon_sym_CARET] = ACTIONS(294),
    [anon_sym_LT_EQ] = ACTIONS(294),
    [sym_identifier] = ACTIONS(296),
    [ts_builtin_sym_end] = ACTIONS(294),
    [anon_sym_SLASH] = ACTIONS(296),
    [anon_sym_GT_GT] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_RPAREN] = ACTIONS(294),
    [anon_sym_BANG_EQ] = ACTIONS(294),
    [anon_sym_PIPE] = ACTIONS(296),
    [anon_sym_EQ_EQ] = ACTIONS(294),
  },
  [66] = {
    [sym__delimiter] = STATE(63),
    [aux_sym_arguments_repeat2] = STATE(66),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BSLASH_COMMA] = ACTIONS(298),
  },
  [67] = {
    [sym_call_function] = STATE(46),
    [sym_boolean_operator] = STATE(46),
    [sym_binary_operator] = STATE(46),
    [sym_call_macro] = STATE(46),
    [sym_call_macro_function] = STATE(46),
    [sym_unary_operator] = STATE(46),
    [sym_comparison_operator] = STATE(46),
    [aux_sym_arguments_repeat1] = STATE(64),
    [sym__expressions] = STATE(46),
    [sym_parenthesized] = STATE(46),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_integer] = ACTIONS(130),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym_signal] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(301),
    [sym_function_name] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [anon_sym_BSLASH_COMMA] = ACTIONS(301),
    [sym_identifier] = ACTIONS(128),
  },
  [68] = {
    [sym_arguments] = STATE(71),
    [anon_sym_BANG] = ACTIONS(70),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(68),
    [anon_sym_PERCENT] = ACTIONS(68),
    [anon_sym_PIPE_PIPE] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_AMP_AMP] = ACTIONS(68),
    [anon_sym_GT_EQ] = ACTIONS(68),
    [sym_integer] = ACTIONS(70),
    [anon_sym_TILDE] = ACTIONS(68),
    [anon_sym_AMP] = ACTIONS(70),
    [anon_sym_LT] = ACTIONS(70),
    [sym_function_name] = ACTIONS(70),
    [anon_sym_STAR] = ACTIONS(68),
    [anon_sym_LT_LT] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(303),
    [anon_sym_GT] = ACTIONS(70),
    [sym_float] = ACTIONS(68),
    [anon_sym_COMMA] = ACTIONS(68),
    [anon_sym_CARET] = ACTIONS(68),
    [anon_sym_LT_EQ] = ACTIONS(68),
    [sym_identifier] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_GT_GT] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_RPAREN] = ACTIONS(68),
    [anon_sym_LPAREN2] = ACTIONS(70),
    [anon_sym_BANG_EQ] = ACTIONS(68),
    [anon_sym_BSLASH_COMMA] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(70),
    [anon_sym_EQ_EQ] = ACTIONS(68),
  },
  [69] = {
    [aux_sym_comparison_operator_repeat1] = STATE(81),
    [anon_sym_BANG] = ACTIONS(122),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_PIPE_PIPE] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_AMP_AMP] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [sym_integer] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_AMP] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [sym_function_name] = ACTIONS(122),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_LT_LT] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [sym_float] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_CARET] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [sym_identifier] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_GT_GT] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_LPAREN2] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_BSLASH_COMMA] = ACTIONS(120),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_EQ_EQ] = ACTIONS(120),
  },
  [70] = {
    [anon_sym_BANG] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(138),
    [anon_sym_PERCENT] = ACTIONS(138),
    [anon_sym_PIPE_PIPE] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_AMP_AMP] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [sym_integer] = ACTIONS(140),
    [anon_sym_TILDE] = ACTIONS(138),
    [anon_sym_AMP] = ACTIONS(140),
    [anon_sym_LT] = ACTIONS(140),
    [sym_function_name] = ACTIONS(140),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_LT_LT] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [sym_float] = ACTIONS(138),
    [anon_sym_COMMA] = ACTIONS(138),
    [anon_sym_CARET] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [sym_identifier] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(140),
    [anon_sym_GT_GT] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_RPAREN] = ACTIONS(138),
    [anon_sym_LPAREN2] = ACTIONS(138),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_BSLASH_COMMA] = ACTIONS(138),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_EQ_EQ] = ACTIONS(138),
  },
  [71] = {
    [anon_sym_BANG] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(144),
    [anon_sym_PERCENT] = ACTIONS(144),
    [anon_sym_PIPE_PIPE] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_AMP_AMP] = ACTIONS(144),
    [anon_sym_GT_EQ] = ACTIONS(144),
    [sym_integer] = ACTIONS(146),
    [anon_sym_TILDE] = ACTIONS(144),
    [anon_sym_AMP] = ACTIONS(146),
    [anon_sym_LT] = ACTIONS(146),
    [sym_function_name] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(144),
    [anon_sym_LT_LT] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(146),
    [sym_float] = ACTIONS(144),
    [anon_sym_COMMA] = ACTIONS(144),
    [anon_sym_CARET] = ACTIONS(144),
    [anon_sym_LT_EQ] = ACTIONS(144),
    [sym_identifier] = ACTIONS(146),
    [anon_sym_SLASH] = ACTIONS(146),
    [anon_sym_GT_GT] = ACTIONS(144),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_LPAREN2] = ACTIONS(144),
    [anon_sym_BANG_EQ] = ACTIONS(144),
    [anon_sym_BSLASH_COMMA] = ACTIONS(144),
    [anon_sym_PIPE] = ACTIONS(146),
    [anon_sym_EQ_EQ] = ACTIONS(144),
  },
  [72] = {
    [sym_call_function] = STATE(84),
    [sym_boolean_operator] = STATE(84),
    [sym_binary_operator] = STATE(84),
    [sym_call_macro] = STATE(84),
    [sym_call_macro_function] = STATE(84),
    [sym_unary_operator] = STATE(84),
    [sym_comparison_operator] = STATE(84),
    [sym__expressions] = STATE(84),
    [sym_parenthesized] = STATE(84),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_integer] = ACTIONS(305),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym_signal] = ACTIONS(307),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(307),
    [sym_function_name] = ACTIONS(132),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_identifier] = ACTIONS(128),
  },
  [73] = {
    [sym_call_function] = STATE(85),
    [sym_boolean_operator] = STATE(85),
    [sym_binary_operator] = STATE(85),
    [sym_call_macro] = STATE(85),
    [sym_call_macro_function] = STATE(85),
    [sym_unary_operator] = STATE(85),
    [sym_comparison_operator] = STATE(85),
    [sym__expressions] = STATE(85),
    [sym_parenthesized] = STATE(85),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_integer] = ACTIONS(309),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym_signal] = ACTIONS(311),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(311),
    [sym_function_name] = ACTIONS(132),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_identifier] = ACTIONS(128),
  },
  [74] = {
    [sym_call_function] = STATE(86),
    [sym_boolean_operator] = STATE(86),
    [sym_binary_operator] = STATE(86),
    [sym_call_macro] = STATE(86),
    [sym_call_macro_function] = STATE(86),
    [sym_unary_operator] = STATE(86),
    [sym_comparison_operator] = STATE(86),
    [sym__expressions] = STATE(86),
    [sym_parenthesized] = STATE(86),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_integer] = ACTIONS(313),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym_signal] = ACTIONS(315),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(315),
    [sym_function_name] = ACTIONS(132),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_identifier] = ACTIONS(128),
  },
  [75] = {
    [sym_call_function] = STATE(87),
    [sym_boolean_operator] = STATE(87),
    [sym_binary_operator] = STATE(87),
    [sym_call_macro] = STATE(87),
    [sym_call_macro_function] = STATE(87),
    [sym_unary_operator] = STATE(87),
    [sym_comparison_operator] = STATE(87),
    [sym__expressions] = STATE(87),
    [sym_parenthesized] = STATE(87),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_integer] = ACTIONS(317),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym_signal] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(319),
    [sym_function_name] = ACTIONS(132),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_identifier] = ACTIONS(128),
  },
  [76] = {
    [sym_call_function] = STATE(88),
    [sym_boolean_operator] = STATE(88),
    [sym_binary_operator] = STATE(88),
    [sym_call_macro] = STATE(88),
    [sym_call_macro_function] = STATE(88),
    [sym_unary_operator] = STATE(88),
    [sym_comparison_operator] = STATE(88),
    [sym__expressions] = STATE(88),
    [sym_parenthesized] = STATE(88),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_integer] = ACTIONS(321),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym_signal] = ACTIONS(323),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(323),
    [sym_function_name] = ACTIONS(132),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_identifier] = ACTIONS(128),
  },
  [77] = {
    [sym_call_function] = STATE(89),
    [sym_boolean_operator] = STATE(89),
    [sym_binary_operator] = STATE(89),
    [sym_call_macro] = STATE(89),
    [sym_call_macro_function] = STATE(89),
    [sym_unary_operator] = STATE(89),
    [sym_comparison_operator] = STATE(89),
    [sym__expressions] = STATE(89),
    [sym_parenthesized] = STATE(89),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_integer] = ACTIONS(325),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym_signal] = ACTIONS(327),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(327),
    [sym_function_name] = ACTIONS(132),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_identifier] = ACTIONS(128),
  },
  [78] = {
    [sym_call_function] = STATE(90),
    [sym_boolean_operator] = STATE(90),
    [sym_binary_operator] = STATE(90),
    [sym_call_macro] = STATE(90),
    [sym_call_macro_function] = STATE(90),
    [sym_unary_operator] = STATE(90),
    [sym_comparison_operator] = STATE(90),
    [sym__expressions] = STATE(90),
    [sym_parenthesized] = STATE(90),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_integer] = ACTIONS(329),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym_signal] = ACTIONS(331),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(331),
    [sym_function_name] = ACTIONS(132),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_identifier] = ACTIONS(128),
  },
  [79] = {
    [sym_call_function] = STATE(91),
    [sym_boolean_operator] = STATE(91),
    [sym_binary_operator] = STATE(91),
    [sym_call_macro] = STATE(91),
    [sym_call_macro_function] = STATE(91),
    [sym_unary_operator] = STATE(91),
    [sym_comparison_operator] = STATE(91),
    [sym__expressions] = STATE(91),
    [sym_parenthesized] = STATE(91),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_integer] = ACTIONS(333),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym_signal] = ACTIONS(335),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(335),
    [sym_function_name] = ACTIONS(132),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_identifier] = ACTIONS(128),
  },
  [80] = {
    [sym_call_function] = STATE(92),
    [sym_boolean_operator] = STATE(92),
    [sym_binary_operator] = STATE(92),
    [sym_call_macro] = STATE(92),
    [sym_call_macro_function] = STATE(92),
    [sym_unary_operator] = STATE(92),
    [sym_comparison_operator] = STATE(92),
    [sym__expressions] = STATE(92),
    [sym_parenthesized] = STATE(92),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_integer] = ACTIONS(337),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym_signal] = ACTIONS(339),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(339),
    [sym_function_name] = ACTIONS(132),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_identifier] = ACTIONS(128),
  },
  [81] = {
    [aux_sym_comparison_operator_repeat1] = STATE(93),
    [anon_sym_BANG] = ACTIONS(186),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(184),
    [anon_sym_PERCENT] = ACTIONS(184),
    [anon_sym_PIPE_PIPE] = ACTIONS(184),
    [anon_sym_DASH] = ACTIONS(186),
    [anon_sym_AMP_AMP] = ACTIONS(184),
    [anon_sym_GT_EQ] = ACTIONS(184),
    [sym_integer] = ACTIONS(186),
    [anon_sym_TILDE] = ACTIONS(184),
    [anon_sym_AMP] = ACTIONS(186),
    [anon_sym_LT] = ACTIONS(186),
    [sym_function_name] = ACTIONS(186),
    [anon_sym_STAR] = ACTIONS(184),
    [anon_sym_LT_LT] = ACTIONS(184),
    [anon_sym_GT] = ACTIONS(186),
    [sym_float] = ACTIONS(184),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_CARET] = ACTIONS(184),
    [anon_sym_LT_EQ] = ACTIONS(184),
    [sym_identifier] = ACTIONS(186),
    [anon_sym_SLASH] = ACTIONS(186),
    [anon_sym_GT_GT] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_LPAREN2] = ACTIONS(184),
    [anon_sym_BANG_EQ] = ACTIONS(184),
    [anon_sym_BSLASH_COMMA] = ACTIONS(184),
    [anon_sym_PIPE] = ACTIONS(186),
    [anon_sym_EQ_EQ] = ACTIONS(184),
  },
  [82] = {
    [anon_sym_BANG] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(203),
    [anon_sym_PERCENT] = ACTIONS(203),
    [anon_sym_PIPE_PIPE] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_AMP_AMP] = ACTIONS(203),
    [anon_sym_GT_EQ] = ACTIONS(203),
    [sym_integer] = ACTIONS(205),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_AMP] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(205),
    [sym_function_name] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_LT_LT] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(205),
    [sym_float] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(203),
    [anon_sym_CARET] = ACTIONS(203),
    [anon_sym_LT_EQ] = ACTIONS(203),
    [sym_identifier] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_GT_GT] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_LPAREN2] = ACTIONS(203),
    [anon_sym_BANG_EQ] = ACTIONS(203),
    [anon_sym_BSLASH_COMMA] = ACTIONS(203),
    [anon_sym_PIPE] = ACTIONS(205),
    [anon_sym_EQ_EQ] = ACTIONS(203),
  },
  [83] = {
    [anon_sym_BANG] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(239),
    [anon_sym_PERCENT] = ACTIONS(239),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(241),
    [anon_sym_AMP_AMP] = ACTIONS(239),
    [anon_sym_GT_EQ] = ACTIONS(239),
    [sym_integer] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(239),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_LT] = ACTIONS(241),
    [sym_function_name] = ACTIONS(241),
    [anon_sym_STAR] = ACTIONS(239),
    [anon_sym_LT_LT] = ACTIONS(239),
    [anon_sym_GT] = ACTIONS(241),
    [sym_float] = ACTIONS(239),
    [anon_sym_COMMA] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(239),
    [anon_sym_LT_EQ] = ACTIONS(239),
    [sym_identifier] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_GT_GT] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_LPAREN2] = ACTIONS(239),
    [anon_sym_BANG_EQ] = ACTIONS(239),
    [anon_sym_BSLASH_COMMA] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_EQ_EQ] = ACTIONS(239),
  },
  [84] = {
    [aux_sym_comparison_operator_repeat1] = STATE(81),
    [anon_sym_BANG] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(243),
    [anon_sym_PERCENT] = ACTIONS(243),
    [anon_sym_PIPE_PIPE] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(243),
    [sym_integer] = ACTIONS(245),
    [anon_sym_TILDE] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(245),
    [sym_function_name] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(243),
    [anon_sym_LT_LT] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(245),
    [sym_float] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(243),
    [sym_identifier] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_GT_GT] = ACTIONS(243),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_LPAREN2] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(243),
    [anon_sym_BSLASH_COMMA] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(243),
  },
  [85] = {
    [aux_sym_comparison_operator_repeat1] = STATE(81),
    [anon_sym_BANG] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(243),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_PIPE_PIPE] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(243),
    [sym_integer] = ACTIONS(245),
    [anon_sym_TILDE] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(245),
    [sym_function_name] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_LT_LT] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(245),
    [sym_float] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(243),
    [sym_identifier] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_GT_GT] = ACTIONS(243),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_LPAREN2] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(243),
    [anon_sym_BSLASH_COMMA] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(243),
  },
  [86] = {
    [aux_sym_comparison_operator_repeat1] = STATE(81),
    [anon_sym_BANG] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_GT_EQ] = ACTIONS(223),
    [sym_integer] = ACTIONS(247),
    [anon_sym_TILDE] = ACTIONS(249),
    [anon_sym_AMP] = ACTIONS(225),
    [anon_sym_LT] = ACTIONS(227),
    [sym_function_name] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_LT_LT] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(227),
    [sym_float] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_CARET] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(223),
    [sym_identifier] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_GT_GT] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_LPAREN2] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(223),
    [anon_sym_BSLASH_COMMA] = ACTIONS(249),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(223),
  },
  [87] = {
    [aux_sym_comparison_operator_repeat1] = STATE(81),
    [anon_sym_BANG] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(243),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_PIPE_PIPE] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(223),
    [sym_integer] = ACTIONS(245),
    [anon_sym_TILDE] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(225),
    [anon_sym_LT] = ACTIONS(227),
    [sym_function_name] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_LT_LT] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(227),
    [sym_float] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(223),
    [sym_identifier] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_GT_GT] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_LPAREN2] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(223),
    [anon_sym_BSLASH_COMMA] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(223),
  },
  [88] = {
    [aux_sym_comparison_operator_repeat1] = STATE(81),
    [anon_sym_BANG] = ACTIONS(253),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(251),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_PIPE_PIPE] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_GT_EQ] = ACTIONS(223),
    [sym_integer] = ACTIONS(253),
    [anon_sym_TILDE] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(225),
    [anon_sym_LT] = ACTIONS(227),
    [sym_function_name] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_LT_LT] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(227),
    [sym_float] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_CARET] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(223),
    [sym_identifier] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_GT_GT] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_LPAREN2] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(223),
    [anon_sym_BSLASH_COMMA] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(223),
  },
  [89] = {
    [aux_sym_comparison_operator_repeat1] = STATE(81),
    [anon_sym_BANG] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(243),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_PIPE_PIPE] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(243),
    [sym_integer] = ACTIONS(245),
    [anon_sym_TILDE] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(245),
    [sym_function_name] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_LT_LT] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(245),
    [sym_float] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(243),
    [sym_identifier] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_GT_GT] = ACTIONS(243),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_LPAREN2] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(243),
    [anon_sym_BSLASH_COMMA] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(243),
  },
  [90] = {
    [aux_sym_comparison_operator_repeat1] = STATE(81),
    [anon_sym_BANG] = ACTIONS(253),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(251),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_PIPE_PIPE] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(251),
    [anon_sym_GT_EQ] = ACTIONS(223),
    [sym_integer] = ACTIONS(253),
    [anon_sym_TILDE] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(225),
    [anon_sym_LT] = ACTIONS(227),
    [sym_function_name] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_LT_LT] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(227),
    [sym_float] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_CARET] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(223),
    [sym_identifier] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_GT_GT] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_LPAREN2] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(223),
    [anon_sym_BSLASH_COMMA] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(223),
  },
  [91] = {
    [aux_sym_comparison_operator_repeat1] = STATE(81),
    [anon_sym_BANG] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(243),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_PIPE_PIPE] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(223),
    [sym_integer] = ACTIONS(245),
    [anon_sym_TILDE] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(227),
    [sym_function_name] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_LT_LT] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(227),
    [sym_float] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(223),
    [sym_identifier] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_GT_GT] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_LPAREN2] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(223),
    [anon_sym_BSLASH_COMMA] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(223),
  },
  [92] = {
    [aux_sym_comparison_operator_repeat1] = STATE(81),
    [anon_sym_BANG] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(243),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_PIPE_PIPE] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(223),
    [sym_integer] = ACTIONS(245),
    [anon_sym_TILDE] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(225),
    [anon_sym_LT] = ACTIONS(227),
    [sym_function_name] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_LT_LT] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(227),
    [sym_float] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(223),
    [sym_identifier] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_GT_GT] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_LPAREN2] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(223),
    [anon_sym_BSLASH_COMMA] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(223),
  },
  [93] = {
    [aux_sym_comparison_operator_repeat1] = STATE(93),
    [anon_sym_BANG] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_PIPE_PIPE] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_AMP_AMP] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(341),
    [sym_integer] = ACTIONS(247),
    [anon_sym_TILDE] = ACTIONS(249),
    [anon_sym_AMP] = ACTIONS(247),
    [anon_sym_LT] = ACTIONS(344),
    [sym_function_name] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(344),
    [sym_float] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_CARET] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(341),
    [sym_identifier] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_LPAREN2] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(341),
    [anon_sym_BSLASH_COMMA] = ACTIONS(249),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(341),
  },
  [94] = {
    [anon_sym_BANG] = ACTIONS(270),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(268),
    [anon_sym_PERCENT] = ACTIONS(268),
    [anon_sym_PIPE_PIPE] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(270),
    [anon_sym_AMP_AMP] = ACTIONS(268),
    [anon_sym_GT_EQ] = ACTIONS(268),
    [sym_integer] = ACTIONS(270),
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_AMP] = ACTIONS(270),
    [anon_sym_LT] = ACTIONS(270),
    [sym_function_name] = ACTIONS(270),
    [anon_sym_STAR] = ACTIONS(268),
    [anon_sym_LT_LT] = ACTIONS(268),
    [anon_sym_GT] = ACTIONS(270),
    [sym_float] = ACTIONS(268),
    [anon_sym_COMMA] = ACTIONS(268),
    [anon_sym_CARET] = ACTIONS(268),
    [anon_sym_LT_EQ] = ACTIONS(268),
    [sym_identifier] = ACTIONS(270),
    [anon_sym_SLASH] = ACTIONS(270),
    [anon_sym_GT_GT] = ACTIONS(268),
    [anon_sym_PLUS] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(268),
    [anon_sym_LPAREN2] = ACTIONS(268),
    [anon_sym_BANG_EQ] = ACTIONS(268),
    [anon_sym_BSLASH_COMMA] = ACTIONS(268),
    [anon_sym_PIPE] = ACTIONS(270),
    [anon_sym_EQ_EQ] = ACTIONS(268),
  },
  [95] = {
    [anon_sym_BANG] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(294),
    [anon_sym_PERCENT] = ACTIONS(294),
    [anon_sym_PIPE_PIPE] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_AMP_AMP] = ACTIONS(294),
    [anon_sym_GT_EQ] = ACTIONS(294),
    [sym_integer] = ACTIONS(296),
    [anon_sym_TILDE] = ACTIONS(294),
    [anon_sym_AMP] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(296),
    [sym_function_name] = ACTIONS(296),
    [anon_sym_STAR] = ACTIONS(294),
    [anon_sym_LT_LT] = ACTIONS(294),
    [anon_sym_GT] = ACTIONS(296),
    [sym_float] = ACTIONS(294),
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_CARET] = ACTIONS(294),
    [anon_sym_LT_EQ] = ACTIONS(294),
    [sym_identifier] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(296),
    [anon_sym_GT_GT] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_RPAREN] = ACTIONS(294),
    [anon_sym_LPAREN2] = ACTIONS(294),
    [anon_sym_BANG_EQ] = ACTIONS(294),
    [anon_sym_BSLASH_COMMA] = ACTIONS(294),
    [anon_sym_PIPE] = ACTIONS(296),
    [anon_sym_EQ_EQ] = ACTIONS(294),
  },
  [96] = {
    [sym_call_function] = STATE(69),
    [sym_boolean_operator] = STATE(69),
    [sym_binary_operator] = STATE(69),
    [sym_call_macro] = STATE(69),
    [sym_call_macro_function] = STATE(69),
    [sym_unary_operator] = STATE(69),
    [sym_comparison_operator] = STATE(69),
    [sym__expressions] = STATE(69),
    [sym_parenthesized] = STATE(69),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_integer] = ACTIONS(347),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym_signal] = ACTIONS(349),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(349),
    [sym_function_name] = ACTIONS(132),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_identifier] = ACTIONS(128),
  },
  [97] = {
    [sym_arguments] = STATE(70),
    [anon_sym_LPAREN] = ACTIONS(303),
    [sym_comment] = ACTIONS(3),
  },
  [98] = {
    [sym_call_function] = STATE(46),
    [sym_boolean_operator] = STATE(46),
    [sym_binary_operator] = STATE(46),
    [sym_call_macro] = STATE(46),
    [sym_call_macro_function] = STATE(46),
    [sym_unary_operator] = STATE(46),
    [sym_comparison_operator] = STATE(46),
    [aux_sym_arguments_repeat1] = STATE(100),
    [sym__expressions] = STATE(46),
    [sym_parenthesized] = STATE(46),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_integer] = ACTIONS(130),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym_signal] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(126),
    [sym_function_name] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(351),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_identifier] = ACTIONS(128),
  },
  [99] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_LT_LT] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(82),
    [anon_sym_CARET] = ACTIONS(84),
    [anon_sym_LT_EQ] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_PIPE_PIPE] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_AMP_AMP] = ACTIONS(92),
    [anon_sym_GT_EQ] = ACTIONS(86),
    [anon_sym_AMP] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_BANG_EQ] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_EQ_EQ] = ACTIONS(86),
  },
  [100] = {
    [sym_call_function] = STATE(46),
    [sym_parenthesized] = STATE(46),
    [sym_boolean_operator] = STATE(46),
    [sym_binary_operator] = STATE(46),
    [sym_call_macro] = STATE(46),
    [sym_call_macro_function] = STATE(46),
    [sym_unary_operator] = STATE(46),
    [sym_comparison_operator] = STATE(46),
    [sym__delimiter] = STATE(63),
    [aux_sym_arguments_repeat1] = STATE(64),
    [aux_sym_arguments_repeat2] = STATE(101),
    [sym__expressions] = STATE(46),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_integer] = ACTIONS(130),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym_signal] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(207),
    [sym_function_name] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(355),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [anon_sym_BSLASH_COMMA] = ACTIONS(207),
    [sym_identifier] = ACTIONS(128),
  },
  [101] = {
    [sym__delimiter] = STATE(63),
    [aux_sym_arguments_repeat2] = STATE(66),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(357),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BSLASH_COMMA] = ACTIONS(207),
  },
  [102] = {
    [sym_call_function] = STATE(99),
    [sym_boolean_operator] = STATE(99),
    [sym_binary_operator] = STATE(99),
    [sym_call_macro] = STATE(99),
    [sym_call_macro_function] = STATE(99),
    [sym_unary_operator] = STATE(99),
    [sym_comparison_operator] = STATE(99),
    [sym__expressions] = STATE(99),
    [sym_parenthesized] = STATE(99),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_integer] = ACTIONS(359),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(361),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(361),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = true}, SHIFT(9),
  [19] = {.count = 1, .reusable = true}, SHIFT(10),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [23] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [25] = {.count = 1, .reusable = true}, SHIFT(13),
  [27] = {.count = 1, .reusable = false}, SHIFT(18),
  [29] = {.count = 1, .reusable = true}, SHIFT(18),
  [31] = {.count = 1, .reusable = false}, SHIFT(14),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 1, .reusable = false}, SHIFT(16),
  [37] = {.count = 1, .reusable = false}, SHIFT(19),
  [39] = {.count = 1, .reusable = true}, SHIFT(19),
  [41] = {.count = 1, .reusable = true}, SHIFT(22),
  [43] = {.count = 1, .reusable = true}, SHIFT(21),
  [45] = {.count = 1, .reusable = true}, SHIFT(23),
  [47] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [49] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [52] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [55] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [58] = {.count = 1, .reusable = false}, SHIFT(24),
  [60] = {.count = 1, .reusable = true}, SHIFT(24),
  [62] = {.count = 1, .reusable = true}, SHIFT(25),
  [64] = {.count = 1, .reusable = false}, SHIFT(27),
  [66] = {.count = 1, .reusable = true}, SHIFT(27),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_call_macro, 1),
  [70] = {.count = 1, .reusable = false}, REDUCE(sym_call_macro, 1),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym_ramp_statement, 3),
  [74] = {.count = 1, .reusable = false}, REDUCE(sym_ramp_statement, 3),
  [76] = {.count = 1, .reusable = true}, SHIFT(29),
  [78] = {.count = 1, .reusable = true}, SHIFT(30),
  [80] = {.count = 1, .reusable = false}, REDUCE(sym_expression_statement, 1),
  [82] = {.count = 1, .reusable = false}, SHIFT(31),
  [84] = {.count = 1, .reusable = true}, SHIFT(32),
  [86] = {.count = 1, .reusable = true}, SHIFT(31),
  [88] = {.count = 1, .reusable = true}, SHIFT(33),
  [90] = {.count = 1, .reusable = false}, SHIFT(34),
  [92] = {.count = 1, .reusable = true}, SHIFT(35),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [96] = {.count = 1, .reusable = false}, SHIFT(36),
  [98] = {.count = 1, .reusable = false}, SHIFT(29),
  [100] = {.count = 1, .reusable = true}, SHIFT(34),
  [102] = {.count = 1, .reusable = false}, SHIFT(37),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_cps_statement, 3),
  [106] = {.count = 1, .reusable = false}, REDUCE(sym_cps_statement, 3),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_macro_statement, 3),
  [110] = {.count = 1, .reusable = false}, REDUCE(sym_macro_statement, 3),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_macro_arguments, 2),
  [114] = {.count = 1, .reusable = true}, SHIFT(40),
  [116] = {.count = 1, .reusable = true}, SHIFT(39),
  [118] = {.count = 1, .reusable = true}, SHIFT(41),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_unary_operator, 2),
  [122] = {.count = 1, .reusable = false}, REDUCE(sym_unary_operator, 2),
  [124] = {.count = 1, .reusable = true}, SHIFT(96),
  [126] = {.count = 1, .reusable = true}, SHIFT(46),
  [128] = {.count = 1, .reusable = false}, SHIFT(68),
  [130] = {.count = 1, .reusable = false}, SHIFT(46),
  [132] = {.count = 1, .reusable = false}, SHIFT(97),
  [134] = {.count = 1, .reusable = true}, SHIFT(44),
  [136] = {.count = 1, .reusable = true}, SHIFT(102),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_call_function, 2),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym_call_function, 2),
  [142] = {.count = 1, .reusable = true}, SHIFT(47),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_call_macro_function, 2),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym_call_macro_function, 2),
  [148] = {.count = 1, .reusable = false}, SHIFT(48),
  [150] = {.count = 1, .reusable = true}, SHIFT(48),
  [152] = {.count = 1, .reusable = false}, SHIFT(49),
  [154] = {.count = 1, .reusable = true}, SHIFT(49),
  [156] = {.count = 1, .reusable = false}, SHIFT(50),
  [158] = {.count = 1, .reusable = true}, SHIFT(50),
  [160] = {.count = 1, .reusable = false}, SHIFT(51),
  [162] = {.count = 1, .reusable = true}, SHIFT(51),
  [164] = {.count = 1, .reusable = false}, SHIFT(52),
  [166] = {.count = 1, .reusable = true}, SHIFT(52),
  [168] = {.count = 1, .reusable = false}, SHIFT(53),
  [170] = {.count = 1, .reusable = true}, SHIFT(53),
  [172] = {.count = 1, .reusable = false}, SHIFT(54),
  [174] = {.count = 1, .reusable = true}, SHIFT(54),
  [176] = {.count = 1, .reusable = false}, SHIFT(55),
  [178] = {.count = 1, .reusable = true}, SHIFT(55),
  [180] = {.count = 1, .reusable = false}, SHIFT(56),
  [182] = {.count = 1, .reusable = true}, SHIFT(56),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_comparison_operator, 2),
  [186] = {.count = 1, .reusable = false}, REDUCE(sym_comparison_operator, 2),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_macro_arguments, 3),
  [190] = {.count = 1, .reusable = true}, SHIFT(58),
  [192] = {.count = 1, .reusable = true}, REDUCE(aux_sym_macro_arguments_repeat1, 2),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_arguments_repeat1, 2), SHIFT_REPEAT(41),
  [197] = {.count = 1, .reusable = true}, SHIFT(59),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_macro_function_statement, 4),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_macro_function_statement, 4),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [207] = {.count = 1, .reusable = true}, SHIFT(63),
  [209] = {.count = 1, .reusable = true}, SHIFT(61),
  [211] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 1),
  [213] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 1),
  [215] = {.count = 1, .reusable = true}, SHIFT(72),
  [217] = {.count = 1, .reusable = true}, SHIFT(76),
  [219] = {.count = 1, .reusable = false}, SHIFT(77),
  [221] = {.count = 1, .reusable = true}, SHIFT(78),
  [223] = {.count = 1, .reusable = true}, SHIFT(74),
  [225] = {.count = 1, .reusable = false}, SHIFT(79),
  [227] = {.count = 1, .reusable = false}, SHIFT(74),
  [229] = {.count = 1, .reusable = true}, SHIFT(73),
  [231] = {.count = 1, .reusable = true}, SHIFT(75),
  [233] = {.count = 1, .reusable = false}, SHIFT(72),
  [235] = {.count = 1, .reusable = true}, SHIFT(77),
  [237] = {.count = 1, .reusable = false}, SHIFT(80),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized, 3),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized, 3),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_binary_operator, 3),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_binary_operator, 3),
  [247] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [249] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_operator, 3),
  [253] = {.count = 1, .reusable = false}, REDUCE(sym_boolean_operator, 3),
  [255] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(31),
  [258] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(31),
  [261] = {.count = 1, .reusable = true}, REDUCE(aux_sym_macro_arguments_repeat2, 2),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_macro_arguments, 4),
  [265] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_arguments_repeat2, 2), SHIFT_REPEAT(40),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [270] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [272] = {.count = 1, .reusable = true}, SHIFT(65),
  [274] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(96),
  [277] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(46),
  [280] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(46),
  [283] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [285] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(97),
  [288] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(102),
  [291] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(68),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [296] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [298] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(63),
  [301] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2),
  [303] = {.count = 1, .reusable = true}, SHIFT(98),
  [305] = {.count = 1, .reusable = false}, SHIFT(84),
  [307] = {.count = 1, .reusable = true}, SHIFT(84),
  [309] = {.count = 1, .reusable = false}, SHIFT(85),
  [311] = {.count = 1, .reusable = true}, SHIFT(85),
  [313] = {.count = 1, .reusable = false}, SHIFT(86),
  [315] = {.count = 1, .reusable = true}, SHIFT(86),
  [317] = {.count = 1, .reusable = false}, SHIFT(87),
  [319] = {.count = 1, .reusable = true}, SHIFT(87),
  [321] = {.count = 1, .reusable = false}, SHIFT(88),
  [323] = {.count = 1, .reusable = true}, SHIFT(88),
  [325] = {.count = 1, .reusable = false}, SHIFT(89),
  [327] = {.count = 1, .reusable = true}, SHIFT(89),
  [329] = {.count = 1, .reusable = false}, SHIFT(90),
  [331] = {.count = 1, .reusable = true}, SHIFT(90),
  [333] = {.count = 1, .reusable = false}, SHIFT(91),
  [335] = {.count = 1, .reusable = true}, SHIFT(91),
  [337] = {.count = 1, .reusable = false}, SHIFT(92),
  [339] = {.count = 1, .reusable = true}, SHIFT(92),
  [341] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(74),
  [344] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(74),
  [347] = {.count = 1, .reusable = false}, SHIFT(69),
  [349] = {.count = 1, .reusable = true}, SHIFT(69),
  [351] = {.count = 1, .reusable = true}, SHIFT(82),
  [353] = {.count = 1, .reusable = true}, SHIFT(83),
  [355] = {.count = 1, .reusable = true}, SHIFT(94),
  [357] = {.count = 1, .reusable = true}, SHIFT(95),
  [359] = {.count = 1, .reusable = false}, SHIFT(99),
  [361] = {.count = 1, .reusable = true}, SHIFT(99),
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
