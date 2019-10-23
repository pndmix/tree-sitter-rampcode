#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 100
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
  anon_sym_EQ = 6,
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
  [anon_sym_EQ] = "=",
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
  [anon_sym_EQ] = {
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
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(7);
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
    case 1:
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
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '^') ADVANCE(31);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '~') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 2:
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
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(7);
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
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '^') ADVANCE(31);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '~') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ',') ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(51);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(50);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'v') ADVANCE(11);
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
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(37);
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
      if (lookahead == '*') ADVANCE(6);
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
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
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
    [anon_sym_EQ] = ACTIONS(1),
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
    [anon_sym_EQ] = ACTIONS(17),
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
    [aux_sym_macro_arguments_repeat1] = STATE(21),
    [sym_identifier] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [anon_sym_EQ] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_ramp_statement] = STATE(12),
    [sym_macro_statement] = STATE(12),
    [aux_sym_program_repeat1] = STATE(12),
    [sym_cps_statement] = STATE(12),
    [sym_macro_function_statement] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_ramp2] = ACTIONS(47),
    [anon_sym_cps] = ACTIONS(50),
    [sym_comment] = ACTIONS(3),
    [anon_sym_ramp1] = ACTIONS(47),
    [sym_identifier] = ACTIONS(53),
  },
  [13] = {
    [sym_call_function] = STATE(23),
    [sym_boolean_operator] = STATE(23),
    [sym_binary_operator] = STATE(23),
    [sym_call_macro] = STATE(23),
    [sym_call_macro_function] = STATE(23),
    [sym_unary_operator] = STATE(23),
    [sym_comparison_operator] = STATE(23),
    [sym__expressions] = STATE(23),
    [sym_parenthesized] = STATE(23),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_integer] = ACTIONS(56),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(58),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(58),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [14] = {
    [sym_arguments] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(60),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_call_function] = STATE(26),
    [sym_boolean_operator] = STATE(26),
    [sym_binary_operator] = STATE(26),
    [sym_call_macro] = STATE(26),
    [sym_call_macro_function] = STATE(26),
    [sym_unary_operator] = STATE(26),
    [sym_comparison_operator] = STATE(26),
    [sym__expressions] = STATE(26),
    [sym_parenthesized] = STATE(26),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_integer] = ACTIONS(62),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(64),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(64),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [16] = {
    [sym_arguments] = STATE(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(66),
    [anon_sym_PIPE_PIPE] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(68),
    [anon_sym_ramp1] = ACTIONS(68),
    [anon_sym_AMP_AMP] = ACTIONS(66),
    [anon_sym_GT_EQ] = ACTIONS(66),
    [anon_sym_AMP] = ACTIONS(68),
    [anon_sym_LT] = ACTIONS(68),
    [anon_sym_STAR] = ACTIONS(66),
    [anon_sym_LT_LT] = ACTIONS(66),
    [anon_sym_ramp2] = ACTIONS(68),
    [anon_sym_cps] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_GT] = ACTIONS(68),
    [anon_sym_CARET] = ACTIONS(66),
    [anon_sym_LT_EQ] = ACTIONS(66),
    [sym_identifier] = ACTIONS(68),
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_SLASH] = ACTIONS(68),
    [anon_sym_GT_GT] = ACTIONS(66),
    [anon_sym_PLUS] = ACTIONS(66),
    [anon_sym_RPAREN] = ACTIONS(66),
    [anon_sym_BANG_EQ] = ACTIONS(66),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_EQ_EQ] = ACTIONS(66),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_ramp2] = ACTIONS(72),
    [anon_sym_cps] = ACTIONS(72),
    [sym_comment] = ACTIONS(3),
    [anon_sym_ramp1] = ACTIONS(72),
    [sym_identifier] = ACTIONS(72),
  },
  [18] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_LT_LT] = ACTIONS(76),
    [anon_sym_ramp2] = ACTIONS(78),
    [anon_sym_cps] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(80),
    [anon_sym_CARET] = ACTIONS(82),
    [anon_sym_LT_EQ] = ACTIONS(84),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_PIPE_PIPE] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_ramp1] = ACTIONS(78),
    [anon_sym_AMP_AMP] = ACTIONS(90),
    [sym_identifier] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(84),
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_AMP] = ACTIONS(94),
    [anon_sym_LT] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_GT_GT] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_BANG_EQ] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(100),
    [anon_sym_EQ_EQ] = ACTIONS(84),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_ramp2] = ACTIONS(104),
    [anon_sym_cps] = ACTIONS(104),
    [sym_comment] = ACTIONS(3),
    [anon_sym_ramp1] = ACTIONS(104),
    [sym_identifier] = ACTIONS(104),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_ramp2] = ACTIONS(108),
    [anon_sym_cps] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [anon_sym_ramp1] = ACTIONS(108),
    [sym_identifier] = ACTIONS(108),
  },
  [21] = {
    [sym__delimiter] = STATE(39),
    [aux_sym_macro_arguments_repeat1] = STATE(40),
    [aux_sym_macro_arguments_repeat2] = STATE(41),
    [anon_sym_COMMA] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BSLASH_COMMA] = ACTIONS(110),
    [sym_identifier] = ACTIONS(114),
  },
  [22] = {
    [sym_call_function] = STATE(18),
    [sym_boolean_operator] = STATE(18),
    [sym_binary_operator] = STATE(18),
    [sym_call_macro] = STATE(18),
    [sym_call_macro_function] = STATE(18),
    [sym_unary_operator] = STATE(18),
    [sym_comparison_operator] = STATE(18),
    [sym_expression_statement] = STATE(42),
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
  [23] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(116),
    [anon_sym_PIPE_PIPE] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(118),
    [anon_sym_ramp1] = ACTIONS(118),
    [anon_sym_AMP_AMP] = ACTIONS(116),
    [anon_sym_GT_EQ] = ACTIONS(116),
    [anon_sym_AMP] = ACTIONS(118),
    [anon_sym_LT] = ACTIONS(118),
    [anon_sym_STAR] = ACTIONS(116),
    [anon_sym_LT_LT] = ACTIONS(116),
    [anon_sym_ramp2] = ACTIONS(118),
    [anon_sym_cps] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(118),
    [anon_sym_CARET] = ACTIONS(116),
    [anon_sym_LT_EQ] = ACTIONS(116),
    [sym_identifier] = ACTIONS(118),
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_SLASH] = ACTIONS(118),
    [anon_sym_GT_GT] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_BANG_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(118),
    [anon_sym_EQ_EQ] = ACTIONS(116),
  },
  [24] = {
    [sym_boolean_operator] = STATE(44),
    [sym_binary_operator] = STATE(44),
    [sym_call_macro] = STATE(44),
    [sym_call_macro_function] = STATE(44),
    [sym__expressions] = STATE(44),
    [sym_parenthesized] = STATE(44),
    [sym_call_function] = STATE(44),
    [sym_unary_operator] = STATE(44),
    [sym_comparison_operator] = STATE(44),
    [aux_sym_arguments_repeat1] = STATE(43),
    [anon_sym_BANG] = ACTIONS(120),
    [sym_integer] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(120),
    [sym_signal] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(124),
    [sym_function_name] = ACTIONS(126),
    [anon_sym_LPAREN2] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
  },
  [25] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(132),
    [anon_sym_PIPE_PIPE] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_ramp1] = ACTIONS(134),
    [anon_sym_AMP_AMP] = ACTIONS(132),
    [anon_sym_GT_EQ] = ACTIONS(132),
    [anon_sym_AMP] = ACTIONS(134),
    [anon_sym_LT] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(132),
    [anon_sym_LT_LT] = ACTIONS(132),
    [anon_sym_ramp2] = ACTIONS(134),
    [anon_sym_cps] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(134),
    [anon_sym_CARET] = ACTIONS(132),
    [anon_sym_LT_EQ] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [ts_builtin_sym_end] = ACTIONS(132),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_GT_GT] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(132),
    [anon_sym_BANG_EQ] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(134),
    [anon_sym_EQ_EQ] = ACTIONS(132),
  },
  [26] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_PIPE_PIPE] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_AMP_AMP] = ACTIONS(90),
    [anon_sym_GT_EQ] = ACTIONS(84),
    [anon_sym_AMP] = ACTIONS(94),
    [anon_sym_LT] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_LT_LT] = ACTIONS(76),
    [anon_sym_GT] = ACTIONS(80),
    [anon_sym_CARET] = ACTIONS(82),
    [anon_sym_LT_EQ] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_GT_GT] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_BANG_EQ] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(100),
    [anon_sym_EQ_EQ] = ACTIONS(84),
  },
  [27] = {
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
  [28] = {
    [sym_call_function] = STATE(46),
    [sym_boolean_operator] = STATE(46),
    [sym_binary_operator] = STATE(46),
    [sym_call_macro] = STATE(46),
    [sym_call_macro_function] = STATE(46),
    [sym_unary_operator] = STATE(46),
    [sym_comparison_operator] = STATE(46),
    [sym__expressions] = STATE(46),
    [sym_parenthesized] = STATE(46),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_integer] = ACTIONS(142),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(144),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [29] = {
    [sym_call_function] = STATE(47),
    [sym_boolean_operator] = STATE(47),
    [sym_binary_operator] = STATE(47),
    [sym_call_macro] = STATE(47),
    [sym_call_macro_function] = STATE(47),
    [sym_unary_operator] = STATE(47),
    [sym_comparison_operator] = STATE(47),
    [sym__expressions] = STATE(47),
    [sym_parenthesized] = STATE(47),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_integer] = ACTIONS(146),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(148),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(148),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [30] = {
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
    [sym_integer] = ACTIONS(150),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(152),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [31] = {
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
    [sym_integer] = ACTIONS(154),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(156),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [32] = {
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
    [sym_integer] = ACTIONS(158),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(160),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [33] = {
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
    [sym_integer] = ACTIONS(162),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(164),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [34] = {
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
    [sym_integer] = ACTIONS(166),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(168),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(168),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [35] = {
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
    [sym_integer] = ACTIONS(170),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(172),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [36] = {
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
    [sym_integer] = ACTIONS(174),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(176),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(176),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [37] = {
    [aux_sym_comparison_operator_repeat1] = STATE(55),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(178),
    [anon_sym_PIPE_PIPE] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_ramp1] = ACTIONS(180),
    [anon_sym_AMP_AMP] = ACTIONS(178),
    [anon_sym_GT_EQ] = ACTIONS(178),
    [anon_sym_AMP] = ACTIONS(180),
    [anon_sym_LT] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(178),
    [anon_sym_LT_LT] = ACTIONS(178),
    [anon_sym_ramp2] = ACTIONS(180),
    [anon_sym_cps] = ACTIONS(180),
    [anon_sym_GT] = ACTIONS(180),
    [anon_sym_CARET] = ACTIONS(178),
    [anon_sym_LT_EQ] = ACTIONS(178),
    [sym_identifier] = ACTIONS(180),
    [ts_builtin_sym_end] = ACTIONS(178),
    [anon_sym_SLASH] = ACTIONS(180),
    [anon_sym_GT_GT] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(178),
    [anon_sym_BANG_EQ] = ACTIONS(178),
    [anon_sym_PIPE] = ACTIONS(180),
    [anon_sym_EQ_EQ] = ACTIONS(178),
  },
  [38] = {
    [anon_sym_EQ] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [aux_sym_macro_arguments_repeat1] = STATE(56),
    [sym_identifier] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [aux_sym_macro_arguments_repeat1] = STATE(40),
    [anon_sym_COMMA] = ACTIONS(186),
    [anon_sym_RPAREN] = ACTIONS(186),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BSLASH_COMMA] = ACTIONS(186),
    [sym_identifier] = ACTIONS(188),
  },
  [41] = {
    [sym__delimiter] = STATE(39),
    [aux_sym_macro_arguments_repeat2] = STATE(58),
    [anon_sym_COMMA] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BSLASH_COMMA] = ACTIONS(110),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_ramp2] = ACTIONS(195),
    [anon_sym_cps] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [anon_sym_ramp1] = ACTIONS(195),
    [sym_identifier] = ACTIONS(195),
  },
  [43] = {
    [sym_boolean_operator] = STATE(44),
    [sym_binary_operator] = STATE(44),
    [sym_call_macro] = STATE(44),
    [sym_call_macro_function] = STATE(44),
    [sym__expressions] = STATE(44),
    [sym_parenthesized] = STATE(44),
    [sym_call_function] = STATE(44),
    [sym_unary_operator] = STATE(44),
    [sym_comparison_operator] = STATE(44),
    [sym__delimiter] = STATE(61),
    [aux_sym_arguments_repeat1] = STATE(62),
    [aux_sym_arguments_repeat2] = STATE(60),
    [anon_sym_BANG] = ACTIONS(120),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(124),
    [sym_float] = ACTIONS(124),
    [anon_sym_COMMA] = ACTIONS(197),
    [sym_identifier] = ACTIONS(130),
    [sym_integer] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(120),
    [sym_function_name] = ACTIONS(126),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_LPAREN2] = ACTIONS(128),
    [anon_sym_BSLASH_COMMA] = ACTIONS(197),
  },
  [44] = {
    [aux_sym_comparison_operator_repeat1] = STATE(79),
    [anon_sym_BANG] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(203),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [sym_integer] = ACTIONS(201),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_AMP] = ACTIONS(215),
    [anon_sym_LT] = ACTIONS(217),
    [sym_function_name] = ACTIONS(201),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_LT_LT] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(217),
    [sym_float] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(203),
    [anon_sym_CARET] = ACTIONS(221),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [sym_identifier] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_GT_GT] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_LPAREN2] = ACTIONS(203),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_BSLASH_COMMA] = ACTIONS(203),
    [anon_sym_PIPE] = ACTIONS(227),
    [anon_sym_EQ_EQ] = ACTIONS(213),
  },
  [45] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(229),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym_ramp1] = ACTIONS(231),
    [anon_sym_AMP_AMP] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(231),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_LT_LT] = ACTIONS(229),
    [anon_sym_ramp2] = ACTIONS(231),
    [anon_sym_cps] = ACTIONS(231),
    [anon_sym_GT] = ACTIONS(231),
    [anon_sym_CARET] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [sym_identifier] = ACTIONS(231),
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(231),
    [anon_sym_GT_GT] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_BANG_EQ] = ACTIONS(229),
    [anon_sym_PIPE] = ACTIONS(231),
    [anon_sym_EQ_EQ] = ACTIONS(229),
  },
  [46] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym_ramp1] = ACTIONS(235),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_GT_EQ] = ACTIONS(233),
    [anon_sym_AMP] = ACTIONS(235),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_STAR] = ACTIONS(233),
    [anon_sym_LT_LT] = ACTIONS(233),
    [anon_sym_ramp2] = ACTIONS(235),
    [anon_sym_cps] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(233),
    [sym_identifier] = ACTIONS(235),
    [ts_builtin_sym_end] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(235),
    [anon_sym_GT_GT] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
  },
  [47] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_ramp1] = ACTIONS(235),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_GT_EQ] = ACTIONS(233),
    [anon_sym_AMP] = ACTIONS(235),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_LT_LT] = ACTIONS(233),
    [anon_sym_ramp2] = ACTIONS(235),
    [anon_sym_cps] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(233),
    [sym_identifier] = ACTIONS(235),
    [ts_builtin_sym_end] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_GT_GT] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
  },
  [48] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_PIPE_PIPE] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_ramp1] = ACTIONS(237),
    [anon_sym_AMP_AMP] = ACTIONS(90),
    [anon_sym_GT_EQ] = ACTIONS(84),
    [anon_sym_AMP] = ACTIONS(94),
    [anon_sym_LT] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_LT_LT] = ACTIONS(76),
    [anon_sym_ramp2] = ACTIONS(237),
    [anon_sym_cps] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(80),
    [anon_sym_CARET] = ACTIONS(82),
    [anon_sym_LT_EQ] = ACTIONS(84),
    [sym_identifier] = ACTIONS(237),
    [ts_builtin_sym_end] = ACTIONS(239),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_GT_GT] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_BANG_EQ] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(100),
    [anon_sym_EQ_EQ] = ACTIONS(84),
  },
  [49] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_ramp1] = ACTIONS(235),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_GT_EQ] = ACTIONS(84),
    [anon_sym_AMP] = ACTIONS(94),
    [anon_sym_LT] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_LT_LT] = ACTIONS(76),
    [anon_sym_ramp2] = ACTIONS(235),
    [anon_sym_cps] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(80),
    [anon_sym_CARET] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(84),
    [sym_identifier] = ACTIONS(235),
    [ts_builtin_sym_end] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_GT_GT] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(84),
  },
  [50] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_PIPE_PIPE] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_ramp1] = ACTIONS(243),
    [anon_sym_AMP_AMP] = ACTIONS(90),
    [anon_sym_GT_EQ] = ACTIONS(84),
    [anon_sym_AMP] = ACTIONS(94),
    [anon_sym_LT] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_LT_LT] = ACTIONS(76),
    [anon_sym_ramp2] = ACTIONS(243),
    [anon_sym_cps] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(80),
    [anon_sym_CARET] = ACTIONS(82),
    [anon_sym_LT_EQ] = ACTIONS(84),
    [sym_identifier] = ACTIONS(243),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_GT_GT] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_BANG_EQ] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(100),
    [anon_sym_EQ_EQ] = ACTIONS(84),
  },
  [51] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym_ramp1] = ACTIONS(235),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_GT_EQ] = ACTIONS(233),
    [anon_sym_AMP] = ACTIONS(235),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_LT_LT] = ACTIONS(233),
    [anon_sym_ramp2] = ACTIONS(235),
    [anon_sym_cps] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(233),
    [sym_identifier] = ACTIONS(235),
    [ts_builtin_sym_end] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_GT_GT] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
  },
  [52] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_PIPE_PIPE] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_ramp1] = ACTIONS(243),
    [anon_sym_AMP_AMP] = ACTIONS(241),
    [anon_sym_GT_EQ] = ACTIONS(84),
    [anon_sym_AMP] = ACTIONS(94),
    [anon_sym_LT] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_LT_LT] = ACTIONS(76),
    [anon_sym_ramp2] = ACTIONS(243),
    [anon_sym_cps] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(80),
    [anon_sym_CARET] = ACTIONS(82),
    [anon_sym_LT_EQ] = ACTIONS(84),
    [sym_identifier] = ACTIONS(243),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_GT_GT] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_BANG_EQ] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(100),
    [anon_sym_EQ_EQ] = ACTIONS(84),
  },
  [53] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_ramp1] = ACTIONS(235),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_GT_EQ] = ACTIONS(84),
    [anon_sym_AMP] = ACTIONS(235),
    [anon_sym_LT] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_LT_LT] = ACTIONS(76),
    [anon_sym_ramp2] = ACTIONS(235),
    [anon_sym_cps] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(80),
    [anon_sym_CARET] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(84),
    [sym_identifier] = ACTIONS(235),
    [ts_builtin_sym_end] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_GT_GT] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(84),
  },
  [54] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_ramp1] = ACTIONS(235),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_GT_EQ] = ACTIONS(84),
    [anon_sym_AMP] = ACTIONS(94),
    [anon_sym_LT] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_LT_LT] = ACTIONS(76),
    [anon_sym_ramp2] = ACTIONS(235),
    [anon_sym_cps] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(80),
    [anon_sym_CARET] = ACTIONS(82),
    [anon_sym_LT_EQ] = ACTIONS(84),
    [sym_identifier] = ACTIONS(235),
    [ts_builtin_sym_end] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_GT_GT] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(84),
  },
  [55] = {
    [aux_sym_comparison_operator_repeat1] = STATE(55),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(239),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(237),
    [anon_sym_ramp1] = ACTIONS(237),
    [anon_sym_AMP_AMP] = ACTIONS(239),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_AMP] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(248),
    [anon_sym_STAR] = ACTIONS(239),
    [anon_sym_LT_LT] = ACTIONS(239),
    [anon_sym_ramp2] = ACTIONS(237),
    [anon_sym_cps] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(248),
    [anon_sym_CARET] = ACTIONS(239),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [sym_identifier] = ACTIONS(237),
    [ts_builtin_sym_end] = ACTIONS(239),
    [anon_sym_SLASH] = ACTIONS(237),
    [anon_sym_GT_GT] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(245),
  },
  [56] = {
    [aux_sym_macro_arguments_repeat1] = STATE(40),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_RPAREN] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BSLASH_COMMA] = ACTIONS(251),
    [sym_identifier] = ACTIONS(114),
  },
  [57] = {
    [anon_sym_EQ] = ACTIONS(253),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [sym__delimiter] = STATE(39),
    [aux_sym_macro_arguments_repeat2] = STATE(58),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BSLASH_COMMA] = ACTIONS(255),
  },
  [59] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(258),
    [anon_sym_PIPE_PIPE] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_ramp1] = ACTIONS(260),
    [anon_sym_AMP_AMP] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(260),
    [anon_sym_STAR] = ACTIONS(258),
    [anon_sym_LT_LT] = ACTIONS(258),
    [anon_sym_ramp2] = ACTIONS(260),
    [anon_sym_cps] = ACTIONS(260),
    [anon_sym_GT] = ACTIONS(260),
    [anon_sym_CARET] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(258),
    [sym_identifier] = ACTIONS(260),
    [ts_builtin_sym_end] = ACTIONS(258),
    [anon_sym_SLASH] = ACTIONS(260),
    [anon_sym_GT_GT] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_BANG_EQ] = ACTIONS(258),
    [anon_sym_PIPE] = ACTIONS(260),
    [anon_sym_EQ_EQ] = ACTIONS(258),
  },
  [60] = {
    [sym__delimiter] = STATE(61),
    [aux_sym_arguments_repeat2] = STATE(64),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(262),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BSLASH_COMMA] = ACTIONS(197),
  },
  [61] = {
    [sym_call_function] = STATE(44),
    [sym_boolean_operator] = STATE(44),
    [sym_binary_operator] = STATE(44),
    [sym_call_macro] = STATE(44),
    [sym_call_macro_function] = STATE(44),
    [sym_unary_operator] = STATE(44),
    [sym_comparison_operator] = STATE(44),
    [aux_sym_arguments_repeat1] = STATE(65),
    [sym__expressions] = STATE(44),
    [sym_parenthesized] = STATE(44),
    [anon_sym_BANG] = ACTIONS(120),
    [sym_integer] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(120),
    [sym_signal] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(124),
    [sym_function_name] = ACTIONS(126),
    [anon_sym_LPAREN2] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
  },
  [62] = {
    [sym_call_function] = STATE(44),
    [sym_boolean_operator] = STATE(44),
    [sym_binary_operator] = STATE(44),
    [sym_call_macro] = STATE(44),
    [sym_call_macro_function] = STATE(44),
    [sym_unary_operator] = STATE(44),
    [sym_comparison_operator] = STATE(44),
    [aux_sym_arguments_repeat1] = STATE(62),
    [sym__expressions] = STATE(44),
    [sym_parenthesized] = STATE(44),
    [anon_sym_BANG] = ACTIONS(264),
    [sym_integer] = ACTIONS(267),
    [anon_sym_TILDE] = ACTIONS(264),
    [sym_signal] = ACTIONS(270),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(270),
    [anon_sym_COMMA] = ACTIONS(273),
    [sym_function_name] = ACTIONS(275),
    [anon_sym_RPAREN] = ACTIONS(273),
    [anon_sym_LPAREN2] = ACTIONS(278),
    [anon_sym_BSLASH_COMMA] = ACTIONS(273),
    [sym_identifier] = ACTIONS(281),
  },
  [63] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(284),
    [anon_sym_PIPE_PIPE] = ACTIONS(284),
    [anon_sym_DASH] = ACTIONS(286),
    [anon_sym_ramp1] = ACTIONS(286),
    [anon_sym_AMP_AMP] = ACTIONS(284),
    [anon_sym_GT_EQ] = ACTIONS(284),
    [anon_sym_AMP] = ACTIONS(286),
    [anon_sym_LT] = ACTIONS(286),
    [anon_sym_STAR] = ACTIONS(284),
    [anon_sym_LT_LT] = ACTIONS(284),
    [anon_sym_ramp2] = ACTIONS(286),
    [anon_sym_cps] = ACTIONS(286),
    [anon_sym_GT] = ACTIONS(286),
    [anon_sym_CARET] = ACTIONS(284),
    [anon_sym_LT_EQ] = ACTIONS(284),
    [sym_identifier] = ACTIONS(286),
    [ts_builtin_sym_end] = ACTIONS(284),
    [anon_sym_SLASH] = ACTIONS(286),
    [anon_sym_GT_GT] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(284),
    [anon_sym_RPAREN] = ACTIONS(284),
    [anon_sym_BANG_EQ] = ACTIONS(284),
    [anon_sym_PIPE] = ACTIONS(286),
    [anon_sym_EQ_EQ] = ACTIONS(284),
  },
  [64] = {
    [sym__delimiter] = STATE(61),
    [aux_sym_arguments_repeat2] = STATE(64),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(291),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BSLASH_COMMA] = ACTIONS(288),
  },
  [65] = {
    [sym_call_function] = STATE(44),
    [sym_boolean_operator] = STATE(44),
    [sym_binary_operator] = STATE(44),
    [sym_call_macro] = STATE(44),
    [sym_call_macro_function] = STATE(44),
    [sym_unary_operator] = STATE(44),
    [sym_comparison_operator] = STATE(44),
    [aux_sym_arguments_repeat1] = STATE(62),
    [sym__expressions] = STATE(44),
    [sym_parenthesized] = STATE(44),
    [anon_sym_BANG] = ACTIONS(120),
    [sym_integer] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(120),
    [sym_signal] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(124),
    [anon_sym_COMMA] = ACTIONS(291),
    [sym_function_name] = ACTIONS(126),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_LPAREN2] = ACTIONS(128),
    [anon_sym_BSLASH_COMMA] = ACTIONS(291),
    [sym_identifier] = ACTIONS(130),
  },
  [66] = {
    [sym_arguments] = STATE(69),
    [anon_sym_BANG] = ACTIONS(68),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(66),
    [anon_sym_PERCENT] = ACTIONS(66),
    [anon_sym_PIPE_PIPE] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(68),
    [anon_sym_AMP_AMP] = ACTIONS(66),
    [anon_sym_GT_EQ] = ACTIONS(66),
    [sym_integer] = ACTIONS(68),
    [anon_sym_TILDE] = ACTIONS(66),
    [anon_sym_AMP] = ACTIONS(68),
    [anon_sym_LT] = ACTIONS(68),
    [sym_function_name] = ACTIONS(68),
    [anon_sym_STAR] = ACTIONS(66),
    [anon_sym_LT_LT] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_GT] = ACTIONS(68),
    [sym_float] = ACTIONS(66),
    [anon_sym_COMMA] = ACTIONS(66),
    [anon_sym_CARET] = ACTIONS(66),
    [anon_sym_LT_EQ] = ACTIONS(66),
    [sym_identifier] = ACTIONS(68),
    [anon_sym_SLASH] = ACTIONS(68),
    [anon_sym_GT_GT] = ACTIONS(66),
    [anon_sym_PLUS] = ACTIONS(66),
    [anon_sym_RPAREN] = ACTIONS(66),
    [anon_sym_LPAREN2] = ACTIONS(68),
    [anon_sym_BANG_EQ] = ACTIONS(66),
    [anon_sym_BSLASH_COMMA] = ACTIONS(66),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_EQ_EQ] = ACTIONS(66),
  },
  [67] = {
    [aux_sym_comparison_operator_repeat1] = STATE(79),
    [anon_sym_BANG] = ACTIONS(118),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(116),
    [anon_sym_PERCENT] = ACTIONS(116),
    [anon_sym_PIPE_PIPE] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(118),
    [anon_sym_AMP_AMP] = ACTIONS(116),
    [anon_sym_GT_EQ] = ACTIONS(116),
    [sym_integer] = ACTIONS(118),
    [anon_sym_TILDE] = ACTIONS(116),
    [anon_sym_AMP] = ACTIONS(118),
    [anon_sym_LT] = ACTIONS(118),
    [sym_function_name] = ACTIONS(118),
    [anon_sym_STAR] = ACTIONS(116),
    [anon_sym_LT_LT] = ACTIONS(116),
    [anon_sym_GT] = ACTIONS(118),
    [sym_float] = ACTIONS(116),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_CARET] = ACTIONS(116),
    [anon_sym_LT_EQ] = ACTIONS(116),
    [sym_identifier] = ACTIONS(118),
    [anon_sym_SLASH] = ACTIONS(118),
    [anon_sym_GT_GT] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_LPAREN2] = ACTIONS(116),
    [anon_sym_BANG_EQ] = ACTIONS(116),
    [anon_sym_BSLASH_COMMA] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(118),
    [anon_sym_EQ_EQ] = ACTIONS(116),
  },
  [68] = {
    [anon_sym_BANG] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(132),
    [anon_sym_PERCENT] = ACTIONS(132),
    [anon_sym_PIPE_PIPE] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_AMP_AMP] = ACTIONS(132),
    [anon_sym_GT_EQ] = ACTIONS(132),
    [sym_integer] = ACTIONS(134),
    [anon_sym_TILDE] = ACTIONS(132),
    [anon_sym_AMP] = ACTIONS(134),
    [anon_sym_LT] = ACTIONS(134),
    [sym_function_name] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(132),
    [anon_sym_LT_LT] = ACTIONS(132),
    [anon_sym_GT] = ACTIONS(134),
    [sym_float] = ACTIONS(132),
    [anon_sym_COMMA] = ACTIONS(132),
    [anon_sym_CARET] = ACTIONS(132),
    [anon_sym_LT_EQ] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_GT_GT] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(132),
    [anon_sym_LPAREN2] = ACTIONS(132),
    [anon_sym_BANG_EQ] = ACTIONS(132),
    [anon_sym_BSLASH_COMMA] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(134),
    [anon_sym_EQ_EQ] = ACTIONS(132),
  },
  [69] = {
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
  [70] = {
    [sym_call_function] = STATE(81),
    [sym_boolean_operator] = STATE(81),
    [sym_binary_operator] = STATE(81),
    [sym_call_macro] = STATE(81),
    [sym_call_macro_function] = STATE(81),
    [sym_unary_operator] = STATE(81),
    [sym_comparison_operator] = STATE(81),
    [sym__expressions] = STATE(81),
    [sym_parenthesized] = STATE(81),
    [anon_sym_BANG] = ACTIONS(120),
    [sym_integer] = ACTIONS(295),
    [anon_sym_TILDE] = ACTIONS(120),
    [sym_signal] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(297),
    [sym_function_name] = ACTIONS(126),
    [anon_sym_LPAREN2] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
  },
  [71] = {
    [sym_call_function] = STATE(82),
    [sym_boolean_operator] = STATE(82),
    [sym_binary_operator] = STATE(82),
    [sym_call_macro] = STATE(82),
    [sym_call_macro_function] = STATE(82),
    [sym_unary_operator] = STATE(82),
    [sym_comparison_operator] = STATE(82),
    [sym__expressions] = STATE(82),
    [sym_parenthesized] = STATE(82),
    [anon_sym_BANG] = ACTIONS(120),
    [sym_integer] = ACTIONS(299),
    [anon_sym_TILDE] = ACTIONS(120),
    [sym_signal] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(301),
    [sym_function_name] = ACTIONS(126),
    [anon_sym_LPAREN2] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
  },
  [72] = {
    [sym_call_function] = STATE(83),
    [sym_boolean_operator] = STATE(83),
    [sym_binary_operator] = STATE(83),
    [sym_call_macro] = STATE(83),
    [sym_call_macro_function] = STATE(83),
    [sym_unary_operator] = STATE(83),
    [sym_comparison_operator] = STATE(83),
    [sym__expressions] = STATE(83),
    [sym_parenthesized] = STATE(83),
    [anon_sym_BANG] = ACTIONS(120),
    [sym_integer] = ACTIONS(303),
    [anon_sym_TILDE] = ACTIONS(120),
    [sym_signal] = ACTIONS(305),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(305),
    [sym_function_name] = ACTIONS(126),
    [anon_sym_LPAREN2] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
  },
  [73] = {
    [sym_call_function] = STATE(84),
    [sym_boolean_operator] = STATE(84),
    [sym_binary_operator] = STATE(84),
    [sym_call_macro] = STATE(84),
    [sym_call_macro_function] = STATE(84),
    [sym_unary_operator] = STATE(84),
    [sym_comparison_operator] = STATE(84),
    [sym__expressions] = STATE(84),
    [sym_parenthesized] = STATE(84),
    [anon_sym_BANG] = ACTIONS(120),
    [sym_integer] = ACTIONS(307),
    [anon_sym_TILDE] = ACTIONS(120),
    [sym_signal] = ACTIONS(309),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(309),
    [sym_function_name] = ACTIONS(126),
    [anon_sym_LPAREN2] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
  },
  [74] = {
    [sym_call_function] = STATE(85),
    [sym_boolean_operator] = STATE(85),
    [sym_binary_operator] = STATE(85),
    [sym_call_macro] = STATE(85),
    [sym_call_macro_function] = STATE(85),
    [sym_unary_operator] = STATE(85),
    [sym_comparison_operator] = STATE(85),
    [sym__expressions] = STATE(85),
    [sym_parenthesized] = STATE(85),
    [anon_sym_BANG] = ACTIONS(120),
    [sym_integer] = ACTIONS(311),
    [anon_sym_TILDE] = ACTIONS(120),
    [sym_signal] = ACTIONS(313),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(313),
    [sym_function_name] = ACTIONS(126),
    [anon_sym_LPAREN2] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
  },
  [75] = {
    [sym_call_function] = STATE(86),
    [sym_boolean_operator] = STATE(86),
    [sym_binary_operator] = STATE(86),
    [sym_call_macro] = STATE(86),
    [sym_call_macro_function] = STATE(86),
    [sym_unary_operator] = STATE(86),
    [sym_comparison_operator] = STATE(86),
    [sym__expressions] = STATE(86),
    [sym_parenthesized] = STATE(86),
    [anon_sym_BANG] = ACTIONS(120),
    [sym_integer] = ACTIONS(315),
    [anon_sym_TILDE] = ACTIONS(120),
    [sym_signal] = ACTIONS(317),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(317),
    [sym_function_name] = ACTIONS(126),
    [anon_sym_LPAREN2] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
  },
  [76] = {
    [sym_call_function] = STATE(87),
    [sym_boolean_operator] = STATE(87),
    [sym_binary_operator] = STATE(87),
    [sym_call_macro] = STATE(87),
    [sym_call_macro_function] = STATE(87),
    [sym_unary_operator] = STATE(87),
    [sym_comparison_operator] = STATE(87),
    [sym__expressions] = STATE(87),
    [sym_parenthesized] = STATE(87),
    [anon_sym_BANG] = ACTIONS(120),
    [sym_integer] = ACTIONS(319),
    [anon_sym_TILDE] = ACTIONS(120),
    [sym_signal] = ACTIONS(321),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(321),
    [sym_function_name] = ACTIONS(126),
    [anon_sym_LPAREN2] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
  },
  [77] = {
    [sym_call_function] = STATE(88),
    [sym_boolean_operator] = STATE(88),
    [sym_binary_operator] = STATE(88),
    [sym_call_macro] = STATE(88),
    [sym_call_macro_function] = STATE(88),
    [sym_unary_operator] = STATE(88),
    [sym_comparison_operator] = STATE(88),
    [sym__expressions] = STATE(88),
    [sym_parenthesized] = STATE(88),
    [anon_sym_BANG] = ACTIONS(120),
    [sym_integer] = ACTIONS(323),
    [anon_sym_TILDE] = ACTIONS(120),
    [sym_signal] = ACTIONS(325),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(325),
    [sym_function_name] = ACTIONS(126),
    [anon_sym_LPAREN2] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
  },
  [78] = {
    [sym_call_function] = STATE(89),
    [sym_boolean_operator] = STATE(89),
    [sym_binary_operator] = STATE(89),
    [sym_call_macro] = STATE(89),
    [sym_call_macro_function] = STATE(89),
    [sym_unary_operator] = STATE(89),
    [sym_comparison_operator] = STATE(89),
    [sym__expressions] = STATE(89),
    [sym_parenthesized] = STATE(89),
    [anon_sym_BANG] = ACTIONS(120),
    [sym_integer] = ACTIONS(327),
    [anon_sym_TILDE] = ACTIONS(120),
    [sym_signal] = ACTIONS(329),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(329),
    [sym_function_name] = ACTIONS(126),
    [anon_sym_LPAREN2] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
  },
  [79] = {
    [aux_sym_comparison_operator_repeat1] = STATE(90),
    [anon_sym_BANG] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(178),
    [anon_sym_PERCENT] = ACTIONS(178),
    [anon_sym_PIPE_PIPE] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_AMP_AMP] = ACTIONS(178),
    [anon_sym_GT_EQ] = ACTIONS(178),
    [sym_integer] = ACTIONS(180),
    [anon_sym_TILDE] = ACTIONS(178),
    [anon_sym_AMP] = ACTIONS(180),
    [anon_sym_LT] = ACTIONS(180),
    [sym_function_name] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(178),
    [anon_sym_LT_LT] = ACTIONS(178),
    [anon_sym_GT] = ACTIONS(180),
    [sym_float] = ACTIONS(178),
    [anon_sym_COMMA] = ACTIONS(178),
    [anon_sym_CARET] = ACTIONS(178),
    [anon_sym_LT_EQ] = ACTIONS(178),
    [sym_identifier] = ACTIONS(180),
    [anon_sym_SLASH] = ACTIONS(180),
    [anon_sym_GT_GT] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(178),
    [anon_sym_LPAREN2] = ACTIONS(178),
    [anon_sym_BANG_EQ] = ACTIONS(178),
    [anon_sym_BSLASH_COMMA] = ACTIONS(178),
    [anon_sym_PIPE] = ACTIONS(180),
    [anon_sym_EQ_EQ] = ACTIONS(178),
  },
  [80] = {
    [anon_sym_BANG] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(229),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym_AMP_AMP] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [sym_integer] = ACTIONS(231),
    [anon_sym_TILDE] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(231),
    [sym_function_name] = ACTIONS(231),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_LT_LT] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(231),
    [sym_float] = ACTIONS(229),
    [anon_sym_COMMA] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [sym_identifier] = ACTIONS(231),
    [anon_sym_SLASH] = ACTIONS(231),
    [anon_sym_GT_GT] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_LPAREN2] = ACTIONS(229),
    [anon_sym_BANG_EQ] = ACTIONS(229),
    [anon_sym_BSLASH_COMMA] = ACTIONS(229),
    [anon_sym_PIPE] = ACTIONS(231),
    [anon_sym_EQ_EQ] = ACTIONS(229),
  },
  [81] = {
    [aux_sym_comparison_operator_repeat1] = STATE(79),
    [anon_sym_BANG] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(233),
    [anon_sym_PERCENT] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_GT_EQ] = ACTIONS(233),
    [sym_integer] = ACTIONS(235),
    [anon_sym_TILDE] = ACTIONS(233),
    [anon_sym_AMP] = ACTIONS(235),
    [anon_sym_LT] = ACTIONS(235),
    [sym_function_name] = ACTIONS(235),
    [anon_sym_STAR] = ACTIONS(233),
    [anon_sym_LT_LT] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(235),
    [sym_float] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(233),
    [sym_identifier] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(235),
    [anon_sym_GT_GT] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_LPAREN2] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_BSLASH_COMMA] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
  },
  [82] = {
    [aux_sym_comparison_operator_repeat1] = STATE(79),
    [anon_sym_BANG] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(233),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_GT_EQ] = ACTIONS(233),
    [sym_integer] = ACTIONS(235),
    [anon_sym_TILDE] = ACTIONS(233),
    [anon_sym_AMP] = ACTIONS(235),
    [anon_sym_LT] = ACTIONS(235),
    [sym_function_name] = ACTIONS(235),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_LT_LT] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(235),
    [sym_float] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(233),
    [sym_identifier] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_GT_GT] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_LPAREN2] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_BSLASH_COMMA] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
  },
  [83] = {
    [aux_sym_comparison_operator_repeat1] = STATE(79),
    [anon_sym_BANG] = ACTIONS(237),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(239),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [sym_integer] = ACTIONS(237),
    [anon_sym_TILDE] = ACTIONS(239),
    [anon_sym_AMP] = ACTIONS(215),
    [anon_sym_LT] = ACTIONS(217),
    [sym_function_name] = ACTIONS(237),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_LT_LT] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(217),
    [sym_float] = ACTIONS(239),
    [anon_sym_COMMA] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(221),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_GT_GT] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_LPAREN2] = ACTIONS(239),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_BSLASH_COMMA] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(227),
    [anon_sym_EQ_EQ] = ACTIONS(213),
  },
  [84] = {
    [aux_sym_comparison_operator_repeat1] = STATE(79),
    [anon_sym_BANG] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(233),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [sym_integer] = ACTIONS(235),
    [anon_sym_TILDE] = ACTIONS(233),
    [anon_sym_AMP] = ACTIONS(215),
    [anon_sym_LT] = ACTIONS(217),
    [sym_function_name] = ACTIONS(235),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_LT_LT] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(217),
    [sym_float] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [sym_identifier] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_GT_GT] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_LPAREN2] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_BSLASH_COMMA] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(213),
  },
  [85] = {
    [aux_sym_comparison_operator_repeat1] = STATE(79),
    [anon_sym_BANG] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [sym_integer] = ACTIONS(243),
    [anon_sym_TILDE] = ACTIONS(241),
    [anon_sym_AMP] = ACTIONS(215),
    [anon_sym_LT] = ACTIONS(217),
    [sym_function_name] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_LT_LT] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(217),
    [sym_float] = ACTIONS(241),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(221),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [sym_identifier] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_GT_GT] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_LPAREN2] = ACTIONS(241),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_BSLASH_COMMA] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(227),
    [anon_sym_EQ_EQ] = ACTIONS(213),
  },
  [86] = {
    [aux_sym_comparison_operator_repeat1] = STATE(79),
    [anon_sym_BANG] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(233),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_GT_EQ] = ACTIONS(233),
    [sym_integer] = ACTIONS(235),
    [anon_sym_TILDE] = ACTIONS(233),
    [anon_sym_AMP] = ACTIONS(235),
    [anon_sym_LT] = ACTIONS(235),
    [sym_function_name] = ACTIONS(235),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_LT_LT] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(235),
    [sym_float] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(233),
    [sym_identifier] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_GT_GT] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_LPAREN2] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_BSLASH_COMMA] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
  },
  [87] = {
    [aux_sym_comparison_operator_repeat1] = STATE(79),
    [anon_sym_BANG] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(241),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [sym_integer] = ACTIONS(243),
    [anon_sym_TILDE] = ACTIONS(241),
    [anon_sym_AMP] = ACTIONS(215),
    [anon_sym_LT] = ACTIONS(217),
    [sym_function_name] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_LT_LT] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(217),
    [sym_float] = ACTIONS(241),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(221),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [sym_identifier] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_GT_GT] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_LPAREN2] = ACTIONS(241),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_BSLASH_COMMA] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(227),
    [anon_sym_EQ_EQ] = ACTIONS(213),
  },
  [88] = {
    [aux_sym_comparison_operator_repeat1] = STATE(79),
    [anon_sym_BANG] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(233),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [sym_integer] = ACTIONS(235),
    [anon_sym_TILDE] = ACTIONS(233),
    [anon_sym_AMP] = ACTIONS(235),
    [anon_sym_LT] = ACTIONS(217),
    [sym_function_name] = ACTIONS(235),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_LT_LT] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(217),
    [sym_float] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [sym_identifier] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_GT_GT] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_LPAREN2] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_BSLASH_COMMA] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(213),
  },
  [89] = {
    [aux_sym_comparison_operator_repeat1] = STATE(79),
    [anon_sym_BANG] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(233),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [sym_integer] = ACTIONS(235),
    [anon_sym_TILDE] = ACTIONS(233),
    [anon_sym_AMP] = ACTIONS(215),
    [anon_sym_LT] = ACTIONS(217),
    [sym_function_name] = ACTIONS(235),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_LT_LT] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(217),
    [sym_float] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(221),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [sym_identifier] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_GT_GT] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_LPAREN2] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_BSLASH_COMMA] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(213),
  },
  [90] = {
    [aux_sym_comparison_operator_repeat1] = STATE(90),
    [anon_sym_BANG] = ACTIONS(237),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(239),
    [anon_sym_PERCENT] = ACTIONS(239),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(237),
    [anon_sym_AMP_AMP] = ACTIONS(239),
    [anon_sym_GT_EQ] = ACTIONS(331),
    [sym_integer] = ACTIONS(237),
    [anon_sym_TILDE] = ACTIONS(239),
    [anon_sym_AMP] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(334),
    [sym_function_name] = ACTIONS(237),
    [anon_sym_STAR] = ACTIONS(239),
    [anon_sym_LT_LT] = ACTIONS(239),
    [anon_sym_GT] = ACTIONS(334),
    [sym_float] = ACTIONS(239),
    [anon_sym_COMMA] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(239),
    [anon_sym_LT_EQ] = ACTIONS(331),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_SLASH] = ACTIONS(237),
    [anon_sym_GT_GT] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_LPAREN2] = ACTIONS(239),
    [anon_sym_BANG_EQ] = ACTIONS(331),
    [anon_sym_BSLASH_COMMA] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(331),
  },
  [91] = {
    [anon_sym_BANG] = ACTIONS(260),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(258),
    [anon_sym_PIPE_PIPE] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_AMP_AMP] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(258),
    [sym_integer] = ACTIONS(260),
    [anon_sym_TILDE] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(260),
    [sym_function_name] = ACTIONS(260),
    [anon_sym_STAR] = ACTIONS(258),
    [anon_sym_LT_LT] = ACTIONS(258),
    [anon_sym_GT] = ACTIONS(260),
    [sym_float] = ACTIONS(258),
    [anon_sym_COMMA] = ACTIONS(258),
    [anon_sym_CARET] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(258),
    [sym_identifier] = ACTIONS(260),
    [anon_sym_SLASH] = ACTIONS(260),
    [anon_sym_GT_GT] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_LPAREN2] = ACTIONS(258),
    [anon_sym_BANG_EQ] = ACTIONS(258),
    [anon_sym_BSLASH_COMMA] = ACTIONS(258),
    [anon_sym_PIPE] = ACTIONS(260),
    [anon_sym_EQ_EQ] = ACTIONS(258),
  },
  [92] = {
    [anon_sym_BANG] = ACTIONS(286),
    [sym_comment] = ACTIONS(3),
    [sym_signal] = ACTIONS(284),
    [anon_sym_PERCENT] = ACTIONS(284),
    [anon_sym_PIPE_PIPE] = ACTIONS(284),
    [anon_sym_DASH] = ACTIONS(286),
    [anon_sym_AMP_AMP] = ACTIONS(284),
    [anon_sym_GT_EQ] = ACTIONS(284),
    [sym_integer] = ACTIONS(286),
    [anon_sym_TILDE] = ACTIONS(284),
    [anon_sym_AMP] = ACTIONS(286),
    [anon_sym_LT] = ACTIONS(286),
    [sym_function_name] = ACTIONS(286),
    [anon_sym_STAR] = ACTIONS(284),
    [anon_sym_LT_LT] = ACTIONS(284),
    [anon_sym_GT] = ACTIONS(286),
    [sym_float] = ACTIONS(284),
    [anon_sym_COMMA] = ACTIONS(284),
    [anon_sym_CARET] = ACTIONS(284),
    [anon_sym_LT_EQ] = ACTIONS(284),
    [sym_identifier] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(286),
    [anon_sym_GT_GT] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(284),
    [anon_sym_RPAREN] = ACTIONS(284),
    [anon_sym_LPAREN2] = ACTIONS(284),
    [anon_sym_BANG_EQ] = ACTIONS(284),
    [anon_sym_BSLASH_COMMA] = ACTIONS(284),
    [anon_sym_PIPE] = ACTIONS(286),
    [anon_sym_EQ_EQ] = ACTIONS(284),
  },
  [93] = {
    [sym_call_function] = STATE(67),
    [sym_boolean_operator] = STATE(67),
    [sym_binary_operator] = STATE(67),
    [sym_call_macro] = STATE(67),
    [sym_call_macro_function] = STATE(67),
    [sym_unary_operator] = STATE(67),
    [sym_comparison_operator] = STATE(67),
    [sym__expressions] = STATE(67),
    [sym_parenthesized] = STATE(67),
    [anon_sym_BANG] = ACTIONS(120),
    [sym_integer] = ACTIONS(337),
    [anon_sym_TILDE] = ACTIONS(120),
    [sym_signal] = ACTIONS(339),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(339),
    [sym_function_name] = ACTIONS(126),
    [anon_sym_LPAREN2] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
  },
  [94] = {
    [sym_arguments] = STATE(68),
    [anon_sym_LPAREN] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
  },
  [95] = {
    [aux_sym_comparison_operator_repeat1] = STATE(37),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_LT_LT] = ACTIONS(76),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(80),
    [anon_sym_CARET] = ACTIONS(82),
    [anon_sym_LT_EQ] = ACTIONS(84),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_PIPE_PIPE] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_AMP_AMP] = ACTIONS(90),
    [anon_sym_GT_EQ] = ACTIONS(84),
    [anon_sym_AMP] = ACTIONS(94),
    [anon_sym_LT] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_GT_GT] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_BANG_EQ] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(100),
    [anon_sym_EQ_EQ] = ACTIONS(84),
  },
  [96] = {
    [sym_call_function] = STATE(44),
    [sym_parenthesized] = STATE(44),
    [sym_boolean_operator] = STATE(44),
    [sym_binary_operator] = STATE(44),
    [sym_call_macro] = STATE(44),
    [sym_call_macro_function] = STATE(44),
    [sym_unary_operator] = STATE(44),
    [sym_comparison_operator] = STATE(44),
    [sym__delimiter] = STATE(61),
    [aux_sym_arguments_repeat1] = STATE(62),
    [aux_sym_arguments_repeat2] = STATE(97),
    [sym__expressions] = STATE(44),
    [anon_sym_BANG] = ACTIONS(120),
    [sym_integer] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(120),
    [sym_signal] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(124),
    [anon_sym_COMMA] = ACTIONS(197),
    [sym_function_name] = ACTIONS(126),
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_LPAREN2] = ACTIONS(128),
    [anon_sym_BSLASH_COMMA] = ACTIONS(197),
    [sym_identifier] = ACTIONS(130),
  },
  [97] = {
    [sym__delimiter] = STATE(61),
    [aux_sym_arguments_repeat2] = STATE(64),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(345),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BSLASH_COMMA] = ACTIONS(197),
  },
  [98] = {
    [sym_call_function] = STATE(95),
    [sym_boolean_operator] = STATE(95),
    [sym_binary_operator] = STATE(95),
    [sym_call_macro] = STATE(95),
    [sym_call_macro_function] = STATE(95),
    [sym_unary_operator] = STATE(95),
    [sym_comparison_operator] = STATE(95),
    [sym__expressions] = STATE(95),
    [sym_parenthesized] = STATE(95),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_integer] = ACTIONS(347),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_signal] = ACTIONS(349),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(349),
    [sym_function_name] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [99] = {
    [sym_call_function] = STATE(44),
    [sym_boolean_operator] = STATE(44),
    [sym_binary_operator] = STATE(44),
    [sym_call_macro] = STATE(44),
    [sym_call_macro_function] = STATE(44),
    [sym_unary_operator] = STATE(44),
    [sym_comparison_operator] = STATE(44),
    [aux_sym_arguments_repeat1] = STATE(96),
    [sym__expressions] = STATE(44),
    [sym_parenthesized] = STATE(44),
    [anon_sym_BANG] = ACTIONS(120),
    [sym_integer] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(120),
    [sym_signal] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(124),
    [sym_function_name] = ACTIONS(126),
    [anon_sym_LPAREN2] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
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
  [41] = {.count = 1, .reusable = true}, SHIFT(21),
  [43] = {.count = 1, .reusable = true}, SHIFT(22),
  [45] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [47] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [50] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [53] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [56] = {.count = 1, .reusable = false}, SHIFT(23),
  [58] = {.count = 1, .reusable = true}, SHIFT(23),
  [60] = {.count = 1, .reusable = true}, SHIFT(24),
  [62] = {.count = 1, .reusable = false}, SHIFT(26),
  [64] = {.count = 1, .reusable = true}, SHIFT(26),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym_call_macro, 1),
  [68] = {.count = 1, .reusable = false}, REDUCE(sym_call_macro, 1),
  [70] = {.count = 1, .reusable = true}, REDUCE(sym_ramp_statement, 3),
  [72] = {.count = 1, .reusable = false}, REDUCE(sym_ramp_statement, 3),
  [74] = {.count = 1, .reusable = true}, SHIFT(28),
  [76] = {.count = 1, .reusable = true}, SHIFT(29),
  [78] = {.count = 1, .reusable = false}, REDUCE(sym_expression_statement, 1),
  [80] = {.count = 1, .reusable = false}, SHIFT(30),
  [82] = {.count = 1, .reusable = true}, SHIFT(31),
  [84] = {.count = 1, .reusable = true}, SHIFT(30),
  [86] = {.count = 1, .reusable = true}, SHIFT(32),
  [88] = {.count = 1, .reusable = false}, SHIFT(33),
  [90] = {.count = 1, .reusable = true}, SHIFT(34),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [94] = {.count = 1, .reusable = false}, SHIFT(35),
  [96] = {.count = 1, .reusable = false}, SHIFT(28),
  [98] = {.count = 1, .reusable = true}, SHIFT(33),
  [100] = {.count = 1, .reusable = false}, SHIFT(36),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_cps_statement, 3),
  [104] = {.count = 1, .reusable = false}, REDUCE(sym_cps_statement, 3),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_macro_statement, 3),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym_macro_statement, 3),
  [110] = {.count = 1, .reusable = true}, SHIFT(39),
  [112] = {.count = 1, .reusable = true}, SHIFT(38),
  [114] = {.count = 1, .reusable = true}, SHIFT(40),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym_unary_operator, 2),
  [118] = {.count = 1, .reusable = false}, REDUCE(sym_unary_operator, 2),
  [120] = {.count = 1, .reusable = true}, SHIFT(93),
  [122] = {.count = 1, .reusable = false}, SHIFT(44),
  [124] = {.count = 1, .reusable = true}, SHIFT(44),
  [126] = {.count = 1, .reusable = false}, SHIFT(94),
  [128] = {.count = 1, .reusable = true}, SHIFT(98),
  [130] = {.count = 1, .reusable = false}, SHIFT(66),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_call_function, 2),
  [134] = {.count = 1, .reusable = false}, REDUCE(sym_call_function, 2),
  [136] = {.count = 1, .reusable = true}, SHIFT(45),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_call_macro_function, 2),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym_call_macro_function, 2),
  [142] = {.count = 1, .reusable = false}, SHIFT(46),
  [144] = {.count = 1, .reusable = true}, SHIFT(46),
  [146] = {.count = 1, .reusable = false}, SHIFT(47),
  [148] = {.count = 1, .reusable = true}, SHIFT(47),
  [150] = {.count = 1, .reusable = false}, SHIFT(48),
  [152] = {.count = 1, .reusable = true}, SHIFT(48),
  [154] = {.count = 1, .reusable = false}, SHIFT(49),
  [156] = {.count = 1, .reusable = true}, SHIFT(49),
  [158] = {.count = 1, .reusable = false}, SHIFT(50),
  [160] = {.count = 1, .reusable = true}, SHIFT(50),
  [162] = {.count = 1, .reusable = false}, SHIFT(51),
  [164] = {.count = 1, .reusable = true}, SHIFT(51),
  [166] = {.count = 1, .reusable = false}, SHIFT(52),
  [168] = {.count = 1, .reusable = true}, SHIFT(52),
  [170] = {.count = 1, .reusable = false}, SHIFT(53),
  [172] = {.count = 1, .reusable = true}, SHIFT(53),
  [174] = {.count = 1, .reusable = false}, SHIFT(54),
  [176] = {.count = 1, .reusable = true}, SHIFT(54),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_comparison_operator, 2),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym_comparison_operator, 2),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_macro_arguments, 3),
  [184] = {.count = 1, .reusable = true}, SHIFT(56),
  [186] = {.count = 1, .reusable = true}, REDUCE(aux_sym_macro_arguments_repeat1, 2),
  [188] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_arguments_repeat1, 2), SHIFT_REPEAT(40),
  [191] = {.count = 1, .reusable = true}, SHIFT(57),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_macro_function_statement, 4),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_macro_function_statement, 4),
  [197] = {.count = 1, .reusable = true}, SHIFT(61),
  [199] = {.count = 1, .reusable = true}, SHIFT(59),
  [201] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 1),
  [203] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 1),
  [205] = {.count = 1, .reusable = true}, SHIFT(70),
  [207] = {.count = 1, .reusable = true}, SHIFT(74),
  [209] = {.count = 1, .reusable = false}, SHIFT(75),
  [211] = {.count = 1, .reusable = true}, SHIFT(76),
  [213] = {.count = 1, .reusable = true}, SHIFT(72),
  [215] = {.count = 1, .reusable = false}, SHIFT(77),
  [217] = {.count = 1, .reusable = false}, SHIFT(72),
  [219] = {.count = 1, .reusable = true}, SHIFT(71),
  [221] = {.count = 1, .reusable = true}, SHIFT(73),
  [223] = {.count = 1, .reusable = false}, SHIFT(70),
  [225] = {.count = 1, .reusable = true}, SHIFT(75),
  [227] = {.count = 1, .reusable = false}, SHIFT(78),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized, 3),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized, 3),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_binary_operator, 3),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym_binary_operator, 3),
  [237] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [239] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_operator, 3),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym_boolean_operator, 3),
  [245] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(30),
  [248] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(30),
  [251] = {.count = 1, .reusable = true}, REDUCE(aux_sym_macro_arguments_repeat2, 2),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_macro_arguments, 4),
  [255] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_arguments_repeat2, 2), SHIFT_REPEAT(39),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [260] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [262] = {.count = 1, .reusable = true}, SHIFT(63),
  [264] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(93),
  [267] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(44),
  [270] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(44),
  [273] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [275] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(94),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(98),
  [281] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(66),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [286] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [288] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(61),
  [291] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2),
  [293] = {.count = 1, .reusable = true}, SHIFT(99),
  [295] = {.count = 1, .reusable = false}, SHIFT(81),
  [297] = {.count = 1, .reusable = true}, SHIFT(81),
  [299] = {.count = 1, .reusable = false}, SHIFT(82),
  [301] = {.count = 1, .reusable = true}, SHIFT(82),
  [303] = {.count = 1, .reusable = false}, SHIFT(83),
  [305] = {.count = 1, .reusable = true}, SHIFT(83),
  [307] = {.count = 1, .reusable = false}, SHIFT(84),
  [309] = {.count = 1, .reusable = true}, SHIFT(84),
  [311] = {.count = 1, .reusable = false}, SHIFT(85),
  [313] = {.count = 1, .reusable = true}, SHIFT(85),
  [315] = {.count = 1, .reusable = false}, SHIFT(86),
  [317] = {.count = 1, .reusable = true}, SHIFT(86),
  [319] = {.count = 1, .reusable = false}, SHIFT(87),
  [321] = {.count = 1, .reusable = true}, SHIFT(87),
  [323] = {.count = 1, .reusable = false}, SHIFT(88),
  [325] = {.count = 1, .reusable = true}, SHIFT(88),
  [327] = {.count = 1, .reusable = false}, SHIFT(89),
  [329] = {.count = 1, .reusable = true}, SHIFT(89),
  [331] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(72),
  [334] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(72),
  [337] = {.count = 1, .reusable = false}, SHIFT(67),
  [339] = {.count = 1, .reusable = true}, SHIFT(67),
  [341] = {.count = 1, .reusable = true}, SHIFT(80),
  [343] = {.count = 1, .reusable = true}, SHIFT(91),
  [345] = {.count = 1, .reusable = true}, SHIFT(92),
  [347] = {.count = 1, .reusable = false}, SHIFT(95),
  [349] = {.count = 1, .reusable = true}, SHIFT(95),
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
