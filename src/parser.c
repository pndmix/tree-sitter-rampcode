#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 108
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
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
  sym_number = 32,
  sym_signal = 33,
  sym_function_name = 34,
  sym_comment = 35,
  sym_program = 36,
  sym_default_statement = 37,
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
  sym__signed_number = 55,
  aux_sym_program_repeat1 = 56,
  aux_sym_macro_arguments_repeat1 = 57,
  aux_sym_macro_arguments_repeat2 = 58,
  aux_sym_comparison_operator_repeat1 = 59,
  aux_sym_arguments_repeat1 = 60,
  aux_sym_arguments_repeat2 = 61,
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
  [sym_number] = "number",
  [sym_signal] = "signal",
  [sym_function_name] = "name",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym_default_statement] = "default_statement",
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
  [sym__signed_number] = "_signed_number",
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
  [sym_number] = {
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
  [sym_default_statement] = {
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
  [sym__signed_number] = {
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
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '&') ADVANCE(31);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '^') ADVANCE(32);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '~') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '&') ADVANCE(31);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '^') ADVANCE(32);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '~') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '&') ADVANCE(31);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '^') ADVANCE(32);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '~') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '&') ADVANCE(31);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '^') ADVANCE(32);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '~') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(52);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ',') ADVANCE(44);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(51);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'v') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(52);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(22);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(23);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '>') ADVANCE(30);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_BSLASH_COMMA);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_signal);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym_function_name);
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
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'q') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_function_name);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == 'x') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'w') ADVANCE(24);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_cps);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 47:
      if (lookahead == 'x') ADVANCE(60);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == '1') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == '2' ||
          lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 57:
      if (lookahead == '1') ADVANCE(24);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 61:
      if (lookahead == '0' ||
          lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 62:
      if (lookahead == '1') ADVANCE(63);
      if (lookahead == '2') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_ramp1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_ramp2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
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
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
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
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_BANG] = ACTIONS(1),
    [sym_function_name] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_ramp1] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_ramp2] = ACTIONS(1),
    [anon_sym_cps] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_signal] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
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
    [sym_cps_statement] = STATE(8),
    [sym__signed_number] = STATE(6),
    [sym_ramp_statement] = STATE(8),
    [sym_program] = STATE(7),
    [aux_sym_program_repeat1] = STATE(8),
    [sym_macro_function_statement] = STATE(8),
    [sym_macro_statement] = STATE(8),
    [sym_default_statement] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_number] = ACTIONS(7),
    [anon_sym_ramp2] = ACTIONS(9),
    [anon_sym_cps] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_ramp1] = ACTIONS(9),
    [sym_comment] = ACTIONS(17),
  },
  [2] = {
    [sym_macro_arguments] = STATE(11),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_comment] = ACTIONS(17),
  },
  [3] = {
    [anon_sym_COLON] = ACTIONS(23),
    [sym_comment] = ACTIONS(17),
  },
  [4] = {
    [anon_sym_COLON] = ACTIONS(25),
    [sym_comment] = ACTIONS(17),
  },
  [5] = {
    [sym_number] = ACTIONS(27),
    [sym_comment] = ACTIONS(17),
  },
  [6] = {
    [sym_parenthesized] = STATE(19),
    [sym__expressions] = STATE(19),
    [sym_boolean_operator] = STATE(19),
    [sym_call_function] = STATE(19),
    [sym_call_macro] = STATE(19),
    [sym_binary_operator] = STATE(19),
    [sym_unary_operator] = STATE(19),
    [sym_call_macro_function] = STATE(19),
    [sym_expression_statement] = STATE(20),
    [sym_comparison_operator] = STATE(19),
    [anon_sym_BANG] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_function_name] = ACTIONS(33),
    [sym_signal] = ACTIONS(31),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_LPAREN2] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_comment] = ACTIONS(17),
  },
  [8] = {
    [sym_macro_function_statement] = STATE(21),
    [sym_cps_statement] = STATE(21),
    [sym__signed_number] = STATE(6),
    [sym_ramp_statement] = STATE(21),
    [sym_default_statement] = STATE(21),
    [sym_macro_statement] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_number] = ACTIONS(7),
    [anon_sym_ramp2] = ACTIONS(9),
    [anon_sym_cps] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_ramp1] = ACTIONS(9),
    [sym_comment] = ACTIONS(17),
  },
  [9] = {
    [sym_parenthesized] = STATE(73),
    [sym__expressions] = STATE(73),
    [sym_boolean_operator] = STATE(73),
    [sym_call_function] = STATE(73),
    [sym_call_macro] = STATE(73),
    [sym_binary_operator] = STATE(73),
    [sym_unary_operator] = STATE(73),
    [sym_call_macro_function] = STATE(73),
    [sym_expression_statement] = STATE(22),
    [sym_comparison_operator] = STATE(73),
    [anon_sym_BANG] = ACTIONS(43),
    [sym_number] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(43),
    [sym_function_name] = ACTIONS(47),
    [sym_signal] = ACTIONS(45),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [aux_sym_macro_arguments_repeat1] = STATE(23),
    [sym_identifier] = ACTIONS(53),
    [sym_comment] = ACTIONS(17),
  },
  [11] = {
    [anon_sym_EQ] = ACTIONS(55),
    [sym_comment] = ACTIONS(17),
  },
  [12] = {
    [sym_parenthesized] = STATE(73),
    [sym__expressions] = STATE(73),
    [sym_boolean_operator] = STATE(73),
    [sym_call_function] = STATE(73),
    [sym_call_macro] = STATE(73),
    [sym_binary_operator] = STATE(73),
    [sym_unary_operator] = STATE(73),
    [sym_call_macro_function] = STATE(73),
    [sym_expression_statement] = STATE(25),
    [sym_comparison_operator] = STATE(73),
    [anon_sym_BANG] = ACTIONS(43),
    [sym_number] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(43),
    [sym_function_name] = ACTIONS(47),
    [sym_signal] = ACTIONS(45),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__signed_number] = STATE(26),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_number] = ACTIONS(59),
    [sym_comment] = ACTIONS(17),
  },
  [14] = {
    [anon_sym_BANG] = ACTIONS(61),
    [sym_number] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(61),
    [sym_function_name] = ACTIONS(61),
    [sym_signal] = ACTIONS(61),
    [sym_identifier] = ACTIONS(61),
    [anon_sym_LPAREN2] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_parenthesized] = STATE(27),
    [sym__expressions] = STATE(27),
    [sym_boolean_operator] = STATE(27),
    [sym_call_function] = STATE(27),
    [sym_call_macro] = STATE(27),
    [sym_binary_operator] = STATE(27),
    [sym_unary_operator] = STATE(27),
    [sym_call_macro_function] = STATE(27),
    [sym_comparison_operator] = STATE(27),
    [anon_sym_BANG] = ACTIONS(29),
    [sym_number] = ACTIONS(63),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_function_name] = ACTIONS(33),
    [sym_signal] = ACTIONS(63),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_LPAREN2] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_arguments] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(65),
    [sym_comment] = ACTIONS(17),
  },
  [17] = {
    [sym_arguments] = STATE(30),
    [anon_sym_BANG] = ACTIONS(67),
    [sym_function_name] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_GT_EQ] = ACTIONS(67),
    [sym_number] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_AMP] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(67),
    [sym_identifier] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(67),
    [sym_signal] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_LPAREN2] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_BSLASH_COMMA] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
  },
  [18] = {
    [sym_parenthesized] = STATE(31),
    [sym__expressions] = STATE(31),
    [sym_boolean_operator] = STATE(31),
    [sym_call_function] = STATE(31),
    [sym_call_macro] = STATE(31),
    [sym_binary_operator] = STATE(31),
    [sym_unary_operator] = STATE(31),
    [sym_call_macro_function] = STATE(31),
    [sym_comparison_operator] = STATE(31),
    [anon_sym_BANG] = ACTIONS(43),
    [sym_number] = ACTIONS(71),
    [anon_sym_TILDE] = ACTIONS(43),
    [sym_function_name] = ACTIONS(47),
    [sym_signal] = ACTIONS(71),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [aux_sym_comparison_operator_repeat1] = STATE(41),
    [anon_sym_BANG] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_LT_LT] = ACTIONS(77),
    [sym_function_name] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(79),
    [sym_signal] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [sym_number] = ACTIONS(73),
    [anon_sym_TILDE] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_GT_GT] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(85),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_LPAREN2] = ACTIONS(73),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_EQ_EQ] = ACTIONS(79),
  },
  [20] = {
    [sym_parenthesized] = STATE(73),
    [sym__expressions] = STATE(73),
    [sym_boolean_operator] = STATE(73),
    [sym_call_function] = STATE(73),
    [sym_call_macro] = STATE(73),
    [sym_binary_operator] = STATE(73),
    [sym_unary_operator] = STATE(73),
    [sym_call_macro_function] = STATE(73),
    [sym_expression_statement] = STATE(42),
    [sym_comparison_operator] = STATE(73),
    [anon_sym_BANG] = ACTIONS(43),
    [sym_number] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(43),
    [sym_function_name] = ACTIONS(47),
    [sym_signal] = ACTIONS(45),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_macro_function_statement] = STATE(21),
    [sym_cps_statement] = STATE(21),
    [sym__signed_number] = STATE(6),
    [sym_ramp_statement] = STATE(21),
    [sym_default_statement] = STATE(21),
    [sym_macro_statement] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
    [sym_number] = ACTIONS(93),
    [anon_sym_ramp2] = ACTIONS(96),
    [anon_sym_cps] = ACTIONS(99),
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_identifier] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_ramp1] = ACTIONS(96),
    [sym_comment] = ACTIONS(17),
  },
  [22] = {
    [sym_number] = ACTIONS(110),
    [anon_sym_ramp2] = ACTIONS(112),
    [anon_sym_cps] = ACTIONS(112),
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_identifier] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_ramp1] = ACTIONS(112),
    [sym_comment] = ACTIONS(17),
  },
  [23] = {
    [aux_sym_macro_arguments_repeat1] = STATE(44),
    [sym__delimiter] = STATE(45),
    [aux_sym_macro_arguments_repeat2] = STATE(46),
    [anon_sym_COMMA] = ACTIONS(114),
    [sym_identifier] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_BSLASH_COMMA] = ACTIONS(114),
    [sym_comment] = ACTIONS(17),
  },
  [24] = {
    [sym_parenthesized] = STATE(73),
    [sym__expressions] = STATE(73),
    [sym_boolean_operator] = STATE(73),
    [sym_call_function] = STATE(73),
    [sym_call_macro] = STATE(73),
    [sym_binary_operator] = STATE(73),
    [sym_unary_operator] = STATE(73),
    [sym_call_macro_function] = STATE(73),
    [sym_expression_statement] = STATE(47),
    [sym_comparison_operator] = STATE(73),
    [anon_sym_BANG] = ACTIONS(43),
    [sym_number] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(43),
    [sym_function_name] = ACTIONS(47),
    [sym_signal] = ACTIONS(45),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_number] = ACTIONS(120),
    [anon_sym_ramp2] = ACTIONS(122),
    [anon_sym_cps] = ACTIONS(122),
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_identifier] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_ramp1] = ACTIONS(122),
    [sym_comment] = ACTIONS(17),
  },
  [26] = {
    [sym_number] = ACTIONS(124),
    [anon_sym_ramp2] = ACTIONS(126),
    [anon_sym_cps] = ACTIONS(126),
    [ts_builtin_sym_end] = ACTIONS(124),
    [sym_identifier] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_ramp1] = ACTIONS(126),
    [sym_comment] = ACTIONS(17),
  },
  [27] = {
    [aux_sym_comparison_operator_repeat1] = STATE(41),
    [anon_sym_BANG] = ACTIONS(128),
    [sym_function_name] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(128),
    [anon_sym_PIPE_PIPE] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_AMP_AMP] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [sym_number] = ACTIONS(128),
    [anon_sym_TILDE] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [sym_identifier] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_LT_LT] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [sym_signal] = ACTIONS(128),
    [anon_sym_COMMA] = ACTIONS(128),
    [anon_sym_CARET] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_GT_GT] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_LPAREN2] = ACTIONS(128),
    [anon_sym_BANG_EQ] = ACTIONS(128),
    [anon_sym_BSLASH_COMMA] = ACTIONS(128),
    [anon_sym_PIPE] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(128),
  },
  [28] = {
    [sym__expressions] = STATE(48),
    [sym_boolean_operator] = STATE(48),
    [sym_call_function] = STATE(48),
    [sym_call_macro] = STATE(48),
    [sym_comparison_operator] = STATE(48),
    [sym_parenthesized] = STATE(48),
    [aux_sym_arguments_repeat1] = STATE(49),
    [sym_binary_operator] = STATE(48),
    [sym_unary_operator] = STATE(48),
    [sym_call_macro_function] = STATE(48),
    [anon_sym_BANG] = ACTIONS(29),
    [sym_number] = ACTIONS(130),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_function_name] = ACTIONS(33),
    [sym_signal] = ACTIONS(130),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_LPAREN2] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [anon_sym_BANG] = ACTIONS(132),
    [sym_function_name] = ACTIONS(132),
    [anon_sym_PERCENT] = ACTIONS(132),
    [anon_sym_PIPE_PIPE] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(132),
    [anon_sym_AMP_AMP] = ACTIONS(132),
    [anon_sym_GT_EQ] = ACTIONS(132),
    [sym_number] = ACTIONS(132),
    [anon_sym_TILDE] = ACTIONS(132),
    [anon_sym_AMP] = ACTIONS(132),
    [anon_sym_LT] = ACTIONS(132),
    [sym_identifier] = ACTIONS(132),
    [anon_sym_STAR] = ACTIONS(132),
    [anon_sym_LT_LT] = ACTIONS(132),
    [anon_sym_GT] = ACTIONS(132),
    [sym_signal] = ACTIONS(132),
    [anon_sym_COMMA] = ACTIONS(132),
    [anon_sym_CARET] = ACTIONS(132),
    [anon_sym_LT_EQ] = ACTIONS(132),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_GT_GT] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(132),
    [anon_sym_LPAREN2] = ACTIONS(132),
    [anon_sym_BANG_EQ] = ACTIONS(132),
    [anon_sym_BSLASH_COMMA] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_EQ_EQ] = ACTIONS(132),
  },
  [30] = {
    [anon_sym_BANG] = ACTIONS(134),
    [sym_function_name] = ACTIONS(134),
    [anon_sym_PERCENT] = ACTIONS(134),
    [anon_sym_PIPE_PIPE] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_AMP_AMP] = ACTIONS(134),
    [anon_sym_GT_EQ] = ACTIONS(134),
    [sym_number] = ACTIONS(134),
    [anon_sym_TILDE] = ACTIONS(134),
    [anon_sym_AMP] = ACTIONS(134),
    [anon_sym_LT] = ACTIONS(134),
    [sym_identifier] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_LT_LT] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(134),
    [sym_signal] = ACTIONS(134),
    [anon_sym_COMMA] = ACTIONS(134),
    [anon_sym_CARET] = ACTIONS(134),
    [anon_sym_LT_EQ] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_GT_GT] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_LPAREN2] = ACTIONS(134),
    [anon_sym_BANG_EQ] = ACTIONS(134),
    [anon_sym_BSLASH_COMMA] = ACTIONS(134),
    [anon_sym_PIPE] = ACTIONS(134),
    [anon_sym_EQ_EQ] = ACTIONS(134),
  },
  [31] = {
    [aux_sym_comparison_operator_repeat1] = STATE(86),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_PIPE_PIPE] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_AMP_AMP] = ACTIONS(142),
    [anon_sym_GT_EQ] = ACTIONS(144),
    [anon_sym_AMP] = ACTIONS(146),
    [anon_sym_LT] = ACTIONS(148),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(150),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_CARET] = ACTIONS(152),
    [anon_sym_LT_EQ] = ACTIONS(144),
    [sym_comment] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_GT_GT] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_BANG_EQ] = ACTIONS(144),
    [anon_sym_PIPE] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(144),
  },
  [32] = {
    [sym_parenthesized] = STATE(51),
    [sym__expressions] = STATE(51),
    [sym_boolean_operator] = STATE(51),
    [sym_call_function] = STATE(51),
    [sym_call_macro] = STATE(51),
    [sym_binary_operator] = STATE(51),
    [sym_unary_operator] = STATE(51),
    [sym_call_macro_function] = STATE(51),
    [sym_comparison_operator] = STATE(51),
    [anon_sym_BANG] = ACTIONS(29),
    [sym_number] = ACTIONS(160),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_function_name] = ACTIONS(33),
    [sym_signal] = ACTIONS(160),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_LPAREN2] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym_parenthesized] = STATE(52),
    [sym__expressions] = STATE(52),
    [sym_boolean_operator] = STATE(52),
    [sym_call_function] = STATE(52),
    [sym_call_macro] = STATE(52),
    [sym_binary_operator] = STATE(52),
    [sym_unary_operator] = STATE(52),
    [sym_call_macro_function] = STATE(52),
    [sym_comparison_operator] = STATE(52),
    [anon_sym_BANG] = ACTIONS(29),
    [sym_number] = ACTIONS(162),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_function_name] = ACTIONS(33),
    [sym_signal] = ACTIONS(162),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_LPAREN2] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym_parenthesized] = STATE(53),
    [sym__expressions] = STATE(53),
    [sym_boolean_operator] = STATE(53),
    [sym_call_function] = STATE(53),
    [sym_call_macro] = STATE(53),
    [sym_binary_operator] = STATE(53),
    [sym_unary_operator] = STATE(53),
    [sym_call_macro_function] = STATE(53),
    [sym_comparison_operator] = STATE(53),
    [anon_sym_BANG] = ACTIONS(29),
    [sym_number] = ACTIONS(164),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_function_name] = ACTIONS(33),
    [sym_signal] = ACTIONS(164),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_LPAREN2] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym_parenthesized] = STATE(54),
    [sym__expressions] = STATE(54),
    [sym_boolean_operator] = STATE(54),
    [sym_call_function] = STATE(54),
    [sym_call_macro] = STATE(54),
    [sym_binary_operator] = STATE(54),
    [sym_unary_operator] = STATE(54),
    [sym_call_macro_function] = STATE(54),
    [sym_comparison_operator] = STATE(54),
    [anon_sym_BANG] = ACTIONS(29),
    [sym_number] = ACTIONS(166),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_function_name] = ACTIONS(33),
    [sym_signal] = ACTIONS(166),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_LPAREN2] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [sym_parenthesized] = STATE(55),
    [sym__expressions] = STATE(55),
    [sym_boolean_operator] = STATE(55),
    [sym_call_function] = STATE(55),
    [sym_call_macro] = STATE(55),
    [sym_binary_operator] = STATE(55),
    [sym_unary_operator] = STATE(55),
    [sym_call_macro_function] = STATE(55),
    [sym_comparison_operator] = STATE(55),
    [anon_sym_BANG] = ACTIONS(29),
    [sym_number] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_function_name] = ACTIONS(33),
    [sym_signal] = ACTIONS(168),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_LPAREN2] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [sym_parenthesized] = STATE(56),
    [sym__expressions] = STATE(56),
    [sym_boolean_operator] = STATE(56),
    [sym_call_function] = STATE(56),
    [sym_call_macro] = STATE(56),
    [sym_binary_operator] = STATE(56),
    [sym_unary_operator] = STATE(56),
    [sym_call_macro_function] = STATE(56),
    [sym_comparison_operator] = STATE(56),
    [anon_sym_BANG] = ACTIONS(29),
    [sym_number] = ACTIONS(170),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_function_name] = ACTIONS(33),
    [sym_signal] = ACTIONS(170),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_LPAREN2] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [sym_parenthesized] = STATE(57),
    [sym__expressions] = STATE(57),
    [sym_boolean_operator] = STATE(57),
    [sym_call_function] = STATE(57),
    [sym_call_macro] = STATE(57),
    [sym_binary_operator] = STATE(57),
    [sym_unary_operator] = STATE(57),
    [sym_call_macro_function] = STATE(57),
    [sym_comparison_operator] = STATE(57),
    [anon_sym_BANG] = ACTIONS(29),
    [sym_number] = ACTIONS(172),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_function_name] = ACTIONS(33),
    [sym_signal] = ACTIONS(172),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_LPAREN2] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [sym_parenthesized] = STATE(58),
    [sym__expressions] = STATE(58),
    [sym_boolean_operator] = STATE(58),
    [sym_call_function] = STATE(58),
    [sym_call_macro] = STATE(58),
    [sym_binary_operator] = STATE(58),
    [sym_unary_operator] = STATE(58),
    [sym_call_macro_function] = STATE(58),
    [sym_comparison_operator] = STATE(58),
    [anon_sym_BANG] = ACTIONS(29),
    [sym_number] = ACTIONS(174),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_function_name] = ACTIONS(33),
    [sym_signal] = ACTIONS(174),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_LPAREN2] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [sym_parenthesized] = STATE(59),
    [sym__expressions] = STATE(59),
    [sym_boolean_operator] = STATE(59),
    [sym_call_function] = STATE(59),
    [sym_call_macro] = STATE(59),
    [sym_binary_operator] = STATE(59),
    [sym_unary_operator] = STATE(59),
    [sym_call_macro_function] = STATE(59),
    [sym_comparison_operator] = STATE(59),
    [anon_sym_BANG] = ACTIONS(29),
    [sym_number] = ACTIONS(176),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_function_name] = ACTIONS(33),
    [sym_signal] = ACTIONS(176),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_LPAREN2] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [aux_sym_comparison_operator_repeat1] = STATE(60),
    [anon_sym_BANG] = ACTIONS(178),
    [sym_function_name] = ACTIONS(178),
    [anon_sym_PERCENT] = ACTIONS(178),
    [anon_sym_PIPE_PIPE] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_AMP_AMP] = ACTIONS(178),
    [anon_sym_GT_EQ] = ACTIONS(178),
    [sym_number] = ACTIONS(178),
    [anon_sym_TILDE] = ACTIONS(178),
    [anon_sym_AMP] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(178),
    [sym_identifier] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(178),
    [anon_sym_LT_LT] = ACTIONS(178),
    [anon_sym_GT] = ACTIONS(178),
    [sym_signal] = ACTIONS(178),
    [anon_sym_COMMA] = ACTIONS(178),
    [anon_sym_CARET] = ACTIONS(178),
    [anon_sym_LT_EQ] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(178),
    [anon_sym_GT_GT] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(178),
    [anon_sym_LPAREN2] = ACTIONS(178),
    [anon_sym_BANG_EQ] = ACTIONS(178),
    [anon_sym_BSLASH_COMMA] = ACTIONS(178),
    [anon_sym_PIPE] = ACTIONS(178),
    [anon_sym_EQ_EQ] = ACTIONS(178),
  },
  [42] = {
    [sym_number] = ACTIONS(180),
    [anon_sym_ramp2] = ACTIONS(182),
    [anon_sym_cps] = ACTIONS(182),
    [ts_builtin_sym_end] = ACTIONS(180),
    [sym_identifier] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_ramp1] = ACTIONS(182),
    [sym_comment] = ACTIONS(17),
  },
  [43] = {
    [anon_sym_EQ] = ACTIONS(184),
    [sym_comment] = ACTIONS(17),
  },
  [44] = {
    [aux_sym_macro_arguments_repeat1] = STATE(44),
    [anon_sym_COMMA] = ACTIONS(186),
    [sym_identifier] = ACTIONS(188),
    [anon_sym_RPAREN] = ACTIONS(186),
    [anon_sym_BSLASH_COMMA] = ACTIONS(186),
    [sym_comment] = ACTIONS(17),
  },
  [45] = {
    [aux_sym_macro_arguments_repeat1] = STATE(61),
    [sym_identifier] = ACTIONS(191),
    [sym_comment] = ACTIONS(17),
  },
  [46] = {
    [sym__delimiter] = STATE(45),
    [aux_sym_macro_arguments_repeat2] = STATE(63),
    [anon_sym_COMMA] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_BSLASH_COMMA] = ACTIONS(114),
    [sym_comment] = ACTIONS(17),
  },
  [47] = {
    [sym_number] = ACTIONS(195),
    [anon_sym_ramp2] = ACTIONS(197),
    [anon_sym_cps] = ACTIONS(197),
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym_identifier] = ACTIONS(197),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_ramp1] = ACTIONS(197),
    [sym_comment] = ACTIONS(17),
  },
  [48] = {
    [aux_sym_comparison_operator_repeat1] = STATE(41),
    [anon_sym_BANG] = ACTIONS(199),
    [sym_function_name] = ACTIONS(199),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [sym_number] = ACTIONS(199),
    [anon_sym_TILDE] = ACTIONS(199),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_LT] = ACTIONS(79),
    [sym_identifier] = ACTIONS(199),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [sym_signal] = ACTIONS(199),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_GT_GT] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_LPAREN2] = ACTIONS(199),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_BSLASH_COMMA] = ACTIONS(199),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_EQ_EQ] = ACTIONS(79),
  },
  [49] = {
    [sym__expressions] = STATE(48),
    [sym_boolean_operator] = STATE(48),
    [sym_call_function] = STATE(48),
    [sym_call_macro] = STATE(48),
    [sym_comparison_operator] = STATE(48),
    [sym_parenthesized] = STATE(48),
    [sym__delimiter] = STATE(65),
    [aux_sym_arguments_repeat1] = STATE(66),
    [aux_sym_arguments_repeat2] = STATE(67),
    [sym_binary_operator] = STATE(48),
    [sym_unary_operator] = STATE(48),
    [sym_call_macro_function] = STATE(48),
    [anon_sym_BANG] = ACTIONS(29),
    [sym_function_name] = ACTIONS(33),
    [sym_signal] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(130),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_LPAREN2] = ACTIONS(37),
    [anon_sym_BSLASH_COMMA] = ACTIONS(201),
  },
  [50] = {
    [anon_sym_BANG] = ACTIONS(205),
    [sym_function_name] = ACTIONS(205),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_AMP_AMP] = ACTIONS(205),
    [anon_sym_GT_EQ] = ACTIONS(205),
    [sym_number] = ACTIONS(205),
    [anon_sym_TILDE] = ACTIONS(205),
    [anon_sym_AMP] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(205),
    [sym_identifier] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_LT_LT] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(205),
    [sym_signal] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_CARET] = ACTIONS(205),
    [anon_sym_LT_EQ] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_GT_GT] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_LPAREN2] = ACTIONS(205),
    [anon_sym_BANG_EQ] = ACTIONS(205),
    [anon_sym_BSLASH_COMMA] = ACTIONS(205),
    [anon_sym_PIPE] = ACTIONS(205),
    [anon_sym_EQ_EQ] = ACTIONS(205),
  },
  [51] = {
    [aux_sym_comparison_operator_repeat1] = STATE(41),
    [anon_sym_BANG] = ACTIONS(207),
    [sym_function_name] = ACTIONS(207),
    [anon_sym_PERCENT] = ACTIONS(207),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(207),
    [anon_sym_GT_EQ] = ACTIONS(207),
    [sym_number] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(207),
    [sym_identifier] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_LT_LT] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(207),
    [sym_signal] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_CARET] = ACTIONS(207),
    [anon_sym_LT_EQ] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_GT_GT] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_LPAREN2] = ACTIONS(207),
    [anon_sym_BANG_EQ] = ACTIONS(207),
    [anon_sym_BSLASH_COMMA] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(207),
  },
  [52] = {
    [aux_sym_comparison_operator_repeat1] = STATE(41),
    [anon_sym_BANG] = ACTIONS(207),
    [sym_function_name] = ACTIONS(207),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(207),
    [anon_sym_GT_EQ] = ACTIONS(207),
    [sym_number] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(207),
    [sym_identifier] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_LT_LT] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(207),
    [sym_signal] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_CARET] = ACTIONS(207),
    [anon_sym_LT_EQ] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_GT_GT] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_LPAREN2] = ACTIONS(207),
    [anon_sym_BANG_EQ] = ACTIONS(207),
    [anon_sym_BSLASH_COMMA] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(207),
  },
  [53] = {
    [aux_sym_comparison_operator_repeat1] = STATE(41),
    [anon_sym_BANG] = ACTIONS(209),
    [sym_function_name] = ACTIONS(209),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [sym_number] = ACTIONS(209),
    [anon_sym_TILDE] = ACTIONS(209),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_LT] = ACTIONS(79),
    [sym_identifier] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [sym_signal] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_GT_GT] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_LPAREN2] = ACTIONS(209),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_BSLASH_COMMA] = ACTIONS(209),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_EQ_EQ] = ACTIONS(79),
  },
  [54] = {
    [aux_sym_comparison_operator_repeat1] = STATE(41),
    [anon_sym_BANG] = ACTIONS(207),
    [sym_function_name] = ACTIONS(207),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(207),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [sym_number] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_LT] = ACTIONS(79),
    [sym_identifier] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [sym_signal] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_CARET] = ACTIONS(207),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_GT_GT] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_LPAREN2] = ACTIONS(207),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_BSLASH_COMMA] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(79),
  },
  [55] = {
    [aux_sym_comparison_operator_repeat1] = STATE(41),
    [anon_sym_BANG] = ACTIONS(211),
    [sym_function_name] = ACTIONS(211),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [sym_number] = ACTIONS(211),
    [anon_sym_TILDE] = ACTIONS(211),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_LT] = ACTIONS(79),
    [sym_identifier] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [sym_signal] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(211),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_GT_GT] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_LPAREN2] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_BSLASH_COMMA] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_EQ_EQ] = ACTIONS(79),
  },
  [56] = {
    [aux_sym_comparison_operator_repeat1] = STATE(41),
    [anon_sym_BANG] = ACTIONS(207),
    [sym_function_name] = ACTIONS(207),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(207),
    [anon_sym_GT_EQ] = ACTIONS(207),
    [sym_number] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(207),
    [sym_identifier] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_LT_LT] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(207),
    [sym_signal] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_CARET] = ACTIONS(207),
    [anon_sym_LT_EQ] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_GT_GT] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_LPAREN2] = ACTIONS(207),
    [anon_sym_BANG_EQ] = ACTIONS(207),
    [anon_sym_BSLASH_COMMA] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(207),
  },
  [57] = {
    [aux_sym_comparison_operator_repeat1] = STATE(41),
    [anon_sym_BANG] = ACTIONS(211),
    [sym_function_name] = ACTIONS(211),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [sym_number] = ACTIONS(211),
    [anon_sym_TILDE] = ACTIONS(211),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_LT] = ACTIONS(79),
    [sym_identifier] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [sym_signal] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(211),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_GT_GT] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_LPAREN2] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_BSLASH_COMMA] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_EQ_EQ] = ACTIONS(79),
  },
  [58] = {
    [aux_sym_comparison_operator_repeat1] = STATE(41),
    [anon_sym_BANG] = ACTIONS(207),
    [sym_function_name] = ACTIONS(207),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(207),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [sym_number] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(79),
    [sym_identifier] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [sym_signal] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_CARET] = ACTIONS(207),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_GT_GT] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_LPAREN2] = ACTIONS(207),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_BSLASH_COMMA] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(79),
  },
  [59] = {
    [aux_sym_comparison_operator_repeat1] = STATE(41),
    [anon_sym_BANG] = ACTIONS(207),
    [sym_function_name] = ACTIONS(207),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(207),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [sym_number] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_LT] = ACTIONS(79),
    [sym_identifier] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [sym_signal] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_GT_GT] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_LPAREN2] = ACTIONS(207),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_BSLASH_COMMA] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(79),
  },
  [60] = {
    [aux_sym_comparison_operator_repeat1] = STATE(60),
    [anon_sym_BANG] = ACTIONS(209),
    [sym_function_name] = ACTIONS(209),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [sym_number] = ACTIONS(209),
    [anon_sym_TILDE] = ACTIONS(209),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_LT] = ACTIONS(213),
    [sym_identifier] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_LT_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(213),
    [sym_signal] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(209),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_LPAREN2] = ACTIONS(209),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_BSLASH_COMMA] = ACTIONS(209),
    [anon_sym_PIPE] = ACTIONS(209),
    [anon_sym_EQ_EQ] = ACTIONS(213),
  },
  [61] = {
    [aux_sym_macro_arguments_repeat1] = STATE(44),
    [anon_sym_COMMA] = ACTIONS(216),
    [sym_identifier] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_BSLASH_COMMA] = ACTIONS(216),
    [sym_comment] = ACTIONS(17),
  },
  [62] = {
    [anon_sym_EQ] = ACTIONS(218),
    [sym_comment] = ACTIONS(17),
  },
  [63] = {
    [sym__delimiter] = STATE(45),
    [aux_sym_macro_arguments_repeat2] = STATE(63),
    [anon_sym_COMMA] = ACTIONS(220),
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_BSLASH_COMMA] = ACTIONS(220),
    [sym_comment] = ACTIONS(17),
  },
  [64] = {
    [anon_sym_BANG] = ACTIONS(223),
    [sym_function_name] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_PIPE_PIPE] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_AMP_AMP] = ACTIONS(223),
    [anon_sym_GT_EQ] = ACTIONS(223),
    [sym_number] = ACTIONS(223),
    [anon_sym_TILDE] = ACTIONS(223),
    [anon_sym_AMP] = ACTIONS(223),
    [anon_sym_LT] = ACTIONS(223),
    [sym_identifier] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LT_LT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(223),
    [sym_signal] = ACTIONS(223),
    [anon_sym_COMMA] = ACTIONS(223),
    [anon_sym_CARET] = ACTIONS(223),
    [anon_sym_LT_EQ] = ACTIONS(223),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_GT_GT] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_LPAREN2] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(223),
    [anon_sym_BSLASH_COMMA] = ACTIONS(223),
    [anon_sym_PIPE] = ACTIONS(223),
    [anon_sym_EQ_EQ] = ACTIONS(223),
  },
  [65] = {
    [sym_parenthesized] = STATE(48),
    [sym__expressions] = STATE(48),
    [sym_boolean_operator] = STATE(48),
    [sym_call_function] = STATE(48),
    [sym_call_macro] = STATE(48),
    [aux_sym_arguments_repeat1] = STATE(68),
    [sym_binary_operator] = STATE(48),
    [sym_unary_operator] = STATE(48),
    [sym_call_macro_function] = STATE(48),
    [sym_comparison_operator] = STATE(48),
    [anon_sym_BANG] = ACTIONS(29),
    [sym_number] = ACTIONS(130),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_function_name] = ACTIONS(33),
    [sym_signal] = ACTIONS(130),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_LPAREN2] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [sym_parenthesized] = STATE(48),
    [sym__expressions] = STATE(48),
    [sym_boolean_operator] = STATE(48),
    [sym_call_function] = STATE(48),
    [sym_call_macro] = STATE(48),
    [aux_sym_arguments_repeat1] = STATE(66),
    [sym_binary_operator] = STATE(48),
    [sym_unary_operator] = STATE(48),
    [sym_call_macro_function] = STATE(48),
    [sym_comparison_operator] = STATE(48),
    [anon_sym_BANG] = ACTIONS(225),
    [sym_number] = ACTIONS(228),
    [anon_sym_TILDE] = ACTIONS(225),
    [sym_function_name] = ACTIONS(231),
    [sym_signal] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(234),
    [sym_identifier] = ACTIONS(236),
    [anon_sym_RPAREN] = ACTIONS(234),
    [anon_sym_LPAREN2] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_BSLASH_COMMA] = ACTIONS(234),
    [sym_comment] = ACTIONS(3),
  },
  [67] = {
    [aux_sym_arguments_repeat2] = STATE(70),
    [sym__delimiter] = STATE(65),
    [anon_sym_COMMA] = ACTIONS(242),
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_BSLASH_COMMA] = ACTIONS(242),
    [sym_comment] = ACTIONS(17),
  },
  [68] = {
    [sym_parenthesized] = STATE(48),
    [sym__expressions] = STATE(48),
    [sym_boolean_operator] = STATE(48),
    [sym_call_function] = STATE(48),
    [sym_call_macro] = STATE(48),
    [aux_sym_arguments_repeat1] = STATE(66),
    [sym_binary_operator] = STATE(48),
    [sym_unary_operator] = STATE(48),
    [sym_call_macro_function] = STATE(48),
    [sym_comparison_operator] = STATE(48),
    [anon_sym_BANG] = ACTIONS(29),
    [sym_number] = ACTIONS(130),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_function_name] = ACTIONS(33),
    [sym_signal] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(246),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(246),
    [anon_sym_LPAREN2] = ACTIONS(37),
    [anon_sym_BSLASH_COMMA] = ACTIONS(246),
    [anon_sym_DASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [69] = {
    [anon_sym_BANG] = ACTIONS(248),
    [sym_function_name] = ACTIONS(248),
    [anon_sym_PERCENT] = ACTIONS(248),
    [anon_sym_PIPE_PIPE] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(248),
    [anon_sym_AMP_AMP] = ACTIONS(248),
    [anon_sym_GT_EQ] = ACTIONS(248),
    [sym_number] = ACTIONS(248),
    [anon_sym_TILDE] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(248),
    [anon_sym_LT] = ACTIONS(248),
    [sym_identifier] = ACTIONS(248),
    [anon_sym_STAR] = ACTIONS(248),
    [anon_sym_LT_LT] = ACTIONS(248),
    [anon_sym_GT] = ACTIONS(248),
    [sym_signal] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(248),
    [anon_sym_CARET] = ACTIONS(248),
    [anon_sym_LT_EQ] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_GT_GT] = ACTIONS(248),
    [anon_sym_PLUS] = ACTIONS(248),
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_LPAREN2] = ACTIONS(248),
    [anon_sym_BANG_EQ] = ACTIONS(248),
    [anon_sym_BSLASH_COMMA] = ACTIONS(248),
    [anon_sym_PIPE] = ACTIONS(248),
    [anon_sym_EQ_EQ] = ACTIONS(248),
  },
  [70] = {
    [aux_sym_arguments_repeat2] = STATE(70),
    [sym__delimiter] = STATE(65),
    [anon_sym_COMMA] = ACTIONS(250),
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_BSLASH_COMMA] = ACTIONS(250),
    [sym_comment] = ACTIONS(17),
  },
  [71] = {
    [sym_number] = ACTIONS(255),
    [anon_sym_ramp2] = ACTIONS(61),
    [anon_sym_cps] = ACTIONS(61),
    [ts_builtin_sym_end] = ACTIONS(255),
    [sym_identifier] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_ramp1] = ACTIONS(61),
    [sym_comment] = ACTIONS(17),
  },
  [72] = {
    [sym_arguments] = STATE(76),
    [anon_sym_PERCENT] = ACTIONS(257),
    [anon_sym_PIPE_PIPE] = ACTIONS(257),
    [anon_sym_DASH] = ACTIONS(257),
    [anon_sym_ramp1] = ACTIONS(67),
    [anon_sym_AMP_AMP] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(257),
    [sym_number] = ACTIONS(257),
    [anon_sym_AMP] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(67),
    [sym_identifier] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(257),
    [anon_sym_LT_LT] = ACTIONS(257),
    [anon_sym_ramp2] = ACTIONS(67),
    [anon_sym_cps] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_GT] = ACTIONS(67),
    [anon_sym_CARET] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(257),
    [sym_comment] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(257),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_GT_GT] = ACTIONS(257),
    [anon_sym_PLUS] = ACTIONS(257),
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_BANG_EQ] = ACTIONS(257),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(257),
  },
  [73] = {
    [aux_sym_comparison_operator_repeat1] = STATE(86),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(150),
    [anon_sym_ramp2] = ACTIONS(73),
    [anon_sym_cps] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_CARET] = ACTIONS(152),
    [anon_sym_LT_EQ] = ACTIONS(144),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_PIPE_PIPE] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_ramp1] = ACTIONS(73),
    [anon_sym_AMP_AMP] = ACTIONS(142),
    [sym_comment] = ACTIONS(17),
    [anon_sym_GT_EQ] = ACTIONS(144),
    [sym_number] = ACTIONS(261),
    [ts_builtin_sym_end] = ACTIONS(261),
    [anon_sym_AMP] = ACTIONS(146),
    [anon_sym_LT] = ACTIONS(148),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_GT_GT] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(140),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_BANG_EQ] = ACTIONS(144),
    [anon_sym_PIPE] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(144),
  },
  [74] = {
    [aux_sym_comparison_operator_repeat1] = STATE(86),
    [anon_sym_PERCENT] = ACTIONS(263),
    [anon_sym_PIPE_PIPE] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(263),
    [anon_sym_ramp1] = ACTIONS(128),
    [anon_sym_AMP_AMP] = ACTIONS(263),
    [anon_sym_GT_EQ] = ACTIONS(263),
    [sym_number] = ACTIONS(263),
    [anon_sym_AMP] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [sym_identifier] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_LT_LT] = ACTIONS(263),
    [anon_sym_ramp2] = ACTIONS(128),
    [anon_sym_cps] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_CARET] = ACTIONS(263),
    [anon_sym_LT_EQ] = ACTIONS(263),
    [sym_comment] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(263),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_GT_GT] = ACTIONS(263),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(263),
    [anon_sym_BANG_EQ] = ACTIONS(263),
    [anon_sym_PIPE] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(263),
  },
  [75] = {
    [anon_sym_PERCENT] = ACTIONS(265),
    [anon_sym_PIPE_PIPE] = ACTIONS(265),
    [anon_sym_DASH] = ACTIONS(265),
    [anon_sym_ramp1] = ACTIONS(132),
    [anon_sym_AMP_AMP] = ACTIONS(265),
    [anon_sym_GT_EQ] = ACTIONS(265),
    [sym_number] = ACTIONS(265),
    [anon_sym_AMP] = ACTIONS(132),
    [anon_sym_LT] = ACTIONS(132),
    [sym_identifier] = ACTIONS(132),
    [anon_sym_STAR] = ACTIONS(265),
    [anon_sym_LT_LT] = ACTIONS(265),
    [anon_sym_ramp2] = ACTIONS(132),
    [anon_sym_cps] = ACTIONS(132),
    [anon_sym_GT] = ACTIONS(132),
    [anon_sym_CARET] = ACTIONS(265),
    [anon_sym_LT_EQ] = ACTIONS(265),
    [sym_comment] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(265),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_GT_GT] = ACTIONS(265),
    [anon_sym_PLUS] = ACTIONS(265),
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_BANG_EQ] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_EQ_EQ] = ACTIONS(265),
  },
  [76] = {
    [anon_sym_PERCENT] = ACTIONS(267),
    [anon_sym_PIPE_PIPE] = ACTIONS(267),
    [anon_sym_DASH] = ACTIONS(267),
    [anon_sym_ramp1] = ACTIONS(134),
    [anon_sym_AMP_AMP] = ACTIONS(267),
    [anon_sym_GT_EQ] = ACTIONS(267),
    [sym_number] = ACTIONS(267),
    [anon_sym_AMP] = ACTIONS(134),
    [anon_sym_LT] = ACTIONS(134),
    [sym_identifier] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(267),
    [anon_sym_LT_LT] = ACTIONS(267),
    [anon_sym_ramp2] = ACTIONS(134),
    [anon_sym_cps] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(134),
    [anon_sym_CARET] = ACTIONS(267),
    [anon_sym_LT_EQ] = ACTIONS(267),
    [sym_comment] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(267),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_GT_GT] = ACTIONS(267),
    [anon_sym_PLUS] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(267),
    [anon_sym_BANG_EQ] = ACTIONS(267),
    [anon_sym_PIPE] = ACTIONS(134),
    [anon_sym_EQ_EQ] = ACTIONS(267),
  },
  [77] = {
    [sym_parenthesized] = STATE(88),
    [sym__expressions] = STATE(88),
    [sym_boolean_operator] = STATE(88),
    [sym_call_function] = STATE(88),
    [sym_call_macro] = STATE(88),
    [sym_binary_operator] = STATE(88),
    [sym_unary_operator] = STATE(88),
    [sym_call_macro_function] = STATE(88),
    [sym_comparison_operator] = STATE(88),
    [anon_sym_BANG] = ACTIONS(43),
    [sym_number] = ACTIONS(269),
    [anon_sym_TILDE] = ACTIONS(43),
    [sym_function_name] = ACTIONS(47),
    [sym_signal] = ACTIONS(269),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [78] = {
    [sym_parenthesized] = STATE(89),
    [sym__expressions] = STATE(89),
    [sym_boolean_operator] = STATE(89),
    [sym_call_function] = STATE(89),
    [sym_call_macro] = STATE(89),
    [sym_binary_operator] = STATE(89),
    [sym_unary_operator] = STATE(89),
    [sym_call_macro_function] = STATE(89),
    [sym_comparison_operator] = STATE(89),
    [anon_sym_BANG] = ACTIONS(43),
    [sym_number] = ACTIONS(271),
    [anon_sym_TILDE] = ACTIONS(43),
    [sym_function_name] = ACTIONS(47),
    [sym_signal] = ACTIONS(271),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [79] = {
    [sym_parenthesized] = STATE(90),
    [sym__expressions] = STATE(90),
    [sym_boolean_operator] = STATE(90),
    [sym_call_function] = STATE(90),
    [sym_call_macro] = STATE(90),
    [sym_binary_operator] = STATE(90),
    [sym_unary_operator] = STATE(90),
    [sym_call_macro_function] = STATE(90),
    [sym_comparison_operator] = STATE(90),
    [anon_sym_BANG] = ACTIONS(43),
    [sym_number] = ACTIONS(273),
    [anon_sym_TILDE] = ACTIONS(43),
    [sym_function_name] = ACTIONS(47),
    [sym_signal] = ACTIONS(273),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [80] = {
    [sym_parenthesized] = STATE(91),
    [sym__expressions] = STATE(91),
    [sym_boolean_operator] = STATE(91),
    [sym_call_function] = STATE(91),
    [sym_call_macro] = STATE(91),
    [sym_binary_operator] = STATE(91),
    [sym_unary_operator] = STATE(91),
    [sym_call_macro_function] = STATE(91),
    [sym_comparison_operator] = STATE(91),
    [anon_sym_BANG] = ACTIONS(43),
    [sym_number] = ACTIONS(275),
    [anon_sym_TILDE] = ACTIONS(43),
    [sym_function_name] = ACTIONS(47),
    [sym_signal] = ACTIONS(275),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [81] = {
    [sym_parenthesized] = STATE(92),
    [sym__expressions] = STATE(92),
    [sym_boolean_operator] = STATE(92),
    [sym_call_function] = STATE(92),
    [sym_call_macro] = STATE(92),
    [sym_binary_operator] = STATE(92),
    [sym_unary_operator] = STATE(92),
    [sym_call_macro_function] = STATE(92),
    [sym_comparison_operator] = STATE(92),
    [anon_sym_BANG] = ACTIONS(43),
    [sym_number] = ACTIONS(277),
    [anon_sym_TILDE] = ACTIONS(43),
    [sym_function_name] = ACTIONS(47),
    [sym_signal] = ACTIONS(277),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [82] = {
    [sym_parenthesized] = STATE(93),
    [sym__expressions] = STATE(93),
    [sym_boolean_operator] = STATE(93),
    [sym_call_function] = STATE(93),
    [sym_call_macro] = STATE(93),
    [sym_binary_operator] = STATE(93),
    [sym_unary_operator] = STATE(93),
    [sym_call_macro_function] = STATE(93),
    [sym_comparison_operator] = STATE(93),
    [anon_sym_BANG] = ACTIONS(43),
    [sym_number] = ACTIONS(279),
    [anon_sym_TILDE] = ACTIONS(43),
    [sym_function_name] = ACTIONS(47),
    [sym_signal] = ACTIONS(279),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [83] = {
    [sym_parenthesized] = STATE(94),
    [sym__expressions] = STATE(94),
    [sym_boolean_operator] = STATE(94),
    [sym_call_function] = STATE(94),
    [sym_call_macro] = STATE(94),
    [sym_binary_operator] = STATE(94),
    [sym_unary_operator] = STATE(94),
    [sym_call_macro_function] = STATE(94),
    [sym_comparison_operator] = STATE(94),
    [anon_sym_BANG] = ACTIONS(43),
    [sym_number] = ACTIONS(281),
    [anon_sym_TILDE] = ACTIONS(43),
    [sym_function_name] = ACTIONS(47),
    [sym_signal] = ACTIONS(281),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [84] = {
    [sym_parenthesized] = STATE(95),
    [sym__expressions] = STATE(95),
    [sym_boolean_operator] = STATE(95),
    [sym_call_function] = STATE(95),
    [sym_call_macro] = STATE(95),
    [sym_binary_operator] = STATE(95),
    [sym_unary_operator] = STATE(95),
    [sym_call_macro_function] = STATE(95),
    [sym_comparison_operator] = STATE(95),
    [anon_sym_BANG] = ACTIONS(43),
    [sym_number] = ACTIONS(283),
    [anon_sym_TILDE] = ACTIONS(43),
    [sym_function_name] = ACTIONS(47),
    [sym_signal] = ACTIONS(283),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [85] = {
    [sym_parenthesized] = STATE(96),
    [sym__expressions] = STATE(96),
    [sym_boolean_operator] = STATE(96),
    [sym_call_function] = STATE(96),
    [sym_call_macro] = STATE(96),
    [sym_binary_operator] = STATE(96),
    [sym_unary_operator] = STATE(96),
    [sym_call_macro_function] = STATE(96),
    [sym_comparison_operator] = STATE(96),
    [anon_sym_BANG] = ACTIONS(43),
    [sym_number] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(43),
    [sym_function_name] = ACTIONS(47),
    [sym_signal] = ACTIONS(285),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [86] = {
    [aux_sym_comparison_operator_repeat1] = STATE(97),
    [anon_sym_PERCENT] = ACTIONS(287),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [anon_sym_DASH] = ACTIONS(287),
    [anon_sym_ramp1] = ACTIONS(178),
    [anon_sym_AMP_AMP] = ACTIONS(287),
    [anon_sym_GT_EQ] = ACTIONS(287),
    [sym_number] = ACTIONS(287),
    [anon_sym_AMP] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(178),
    [sym_identifier] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(287),
    [anon_sym_LT_LT] = ACTIONS(287),
    [anon_sym_ramp2] = ACTIONS(178),
    [anon_sym_cps] = ACTIONS(178),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_CARET] = ACTIONS(287),
    [anon_sym_LT_EQ] = ACTIONS(287),
    [sym_comment] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(287),
    [anon_sym_SLASH] = ACTIONS(178),
    [anon_sym_GT_GT] = ACTIONS(287),
    [anon_sym_PLUS] = ACTIONS(287),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_BANG_EQ] = ACTIONS(287),
    [anon_sym_PIPE] = ACTIONS(178),
    [anon_sym_EQ_EQ] = ACTIONS(287),
  },
  [87] = {
    [anon_sym_PERCENT] = ACTIONS(289),
    [anon_sym_PIPE_PIPE] = ACTIONS(289),
    [anon_sym_DASH] = ACTIONS(289),
    [anon_sym_ramp1] = ACTIONS(205),
    [anon_sym_AMP_AMP] = ACTIONS(289),
    [anon_sym_GT_EQ] = ACTIONS(289),
    [sym_number] = ACTIONS(289),
    [anon_sym_AMP] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(205),
    [sym_identifier] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(289),
    [anon_sym_LT_LT] = ACTIONS(289),
    [anon_sym_ramp2] = ACTIONS(205),
    [anon_sym_cps] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_CARET] = ACTIONS(289),
    [anon_sym_LT_EQ] = ACTIONS(289),
    [sym_comment] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(289),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_GT_GT] = ACTIONS(289),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_BANG_EQ] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(205),
    [anon_sym_EQ_EQ] = ACTIONS(289),
  },
  [88] = {
    [aux_sym_comparison_operator_repeat1] = STATE(86),
    [anon_sym_PERCENT] = ACTIONS(291),
    [anon_sym_PIPE_PIPE] = ACTIONS(291),
    [anon_sym_DASH] = ACTIONS(291),
    [anon_sym_ramp1] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(291),
    [anon_sym_GT_EQ] = ACTIONS(291),
    [sym_number] = ACTIONS(291),
    [anon_sym_AMP] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(207),
    [sym_identifier] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(291),
    [anon_sym_LT_LT] = ACTIONS(291),
    [anon_sym_ramp2] = ACTIONS(207),
    [anon_sym_cps] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_CARET] = ACTIONS(291),
    [anon_sym_LT_EQ] = ACTIONS(291),
    [sym_comment] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(291),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_GT_GT] = ACTIONS(291),
    [anon_sym_PLUS] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_BANG_EQ] = ACTIONS(291),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(291),
  },
  [89] = {
    [aux_sym_comparison_operator_repeat1] = STATE(86),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_PIPE_PIPE] = ACTIONS(291),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_ramp1] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(291),
    [anon_sym_GT_EQ] = ACTIONS(291),
    [sym_number] = ACTIONS(291),
    [anon_sym_AMP] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(207),
    [sym_identifier] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(291),
    [anon_sym_ramp2] = ACTIONS(207),
    [anon_sym_cps] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_CARET] = ACTIONS(291),
    [anon_sym_LT_EQ] = ACTIONS(291),
    [sym_comment] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(291),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_GT_GT] = ACTIONS(291),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_BANG_EQ] = ACTIONS(291),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(291),
  },
  [90] = {
    [aux_sym_comparison_operator_repeat1] = STATE(86),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_PIPE_PIPE] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_ramp1] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(142),
    [anon_sym_GT_EQ] = ACTIONS(144),
    [sym_number] = ACTIONS(293),
    [anon_sym_AMP] = ACTIONS(146),
    [anon_sym_LT] = ACTIONS(148),
    [sym_identifier] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(150),
    [anon_sym_ramp2] = ACTIONS(209),
    [anon_sym_cps] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_CARET] = ACTIONS(152),
    [anon_sym_LT_EQ] = ACTIONS(144),
    [sym_comment] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(293),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_GT_GT] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_BANG_EQ] = ACTIONS(144),
    [anon_sym_PIPE] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(144),
  },
  [91] = {
    [aux_sym_comparison_operator_repeat1] = STATE(86),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_PIPE_PIPE] = ACTIONS(291),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_ramp1] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(291),
    [anon_sym_GT_EQ] = ACTIONS(144),
    [sym_number] = ACTIONS(291),
    [anon_sym_AMP] = ACTIONS(146),
    [anon_sym_LT] = ACTIONS(148),
    [sym_identifier] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(150),
    [anon_sym_ramp2] = ACTIONS(207),
    [anon_sym_cps] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_CARET] = ACTIONS(291),
    [anon_sym_LT_EQ] = ACTIONS(144),
    [sym_comment] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(291),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_GT_GT] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_BANG_EQ] = ACTIONS(144),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(144),
  },
  [92] = {
    [aux_sym_comparison_operator_repeat1] = STATE(86),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_ramp1] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(142),
    [anon_sym_GT_EQ] = ACTIONS(144),
    [sym_number] = ACTIONS(295),
    [anon_sym_AMP] = ACTIONS(146),
    [anon_sym_LT] = ACTIONS(148),
    [sym_identifier] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(150),
    [anon_sym_ramp2] = ACTIONS(211),
    [anon_sym_cps] = ACTIONS(211),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_CARET] = ACTIONS(152),
    [anon_sym_LT_EQ] = ACTIONS(144),
    [sym_comment] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(295),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_GT_GT] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_BANG_EQ] = ACTIONS(144),
    [anon_sym_PIPE] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(144),
  },
  [93] = {
    [aux_sym_comparison_operator_repeat1] = STATE(86),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_PIPE_PIPE] = ACTIONS(291),
    [anon_sym_DASH] = ACTIONS(291),
    [anon_sym_ramp1] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(291),
    [anon_sym_GT_EQ] = ACTIONS(291),
    [sym_number] = ACTIONS(291),
    [anon_sym_AMP] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(207),
    [sym_identifier] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(291),
    [anon_sym_ramp2] = ACTIONS(207),
    [anon_sym_cps] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_CARET] = ACTIONS(291),
    [anon_sym_LT_EQ] = ACTIONS(291),
    [sym_comment] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(291),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_GT_GT] = ACTIONS(291),
    [anon_sym_PLUS] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_BANG_EQ] = ACTIONS(291),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(291),
  },
  [94] = {
    [aux_sym_comparison_operator_repeat1] = STATE(86),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_ramp1] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(295),
    [anon_sym_GT_EQ] = ACTIONS(144),
    [sym_number] = ACTIONS(295),
    [anon_sym_AMP] = ACTIONS(146),
    [anon_sym_LT] = ACTIONS(148),
    [sym_identifier] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(150),
    [anon_sym_ramp2] = ACTIONS(211),
    [anon_sym_cps] = ACTIONS(211),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_CARET] = ACTIONS(152),
    [anon_sym_LT_EQ] = ACTIONS(144),
    [sym_comment] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(295),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_GT_GT] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_BANG_EQ] = ACTIONS(144),
    [anon_sym_PIPE] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(144),
  },
  [95] = {
    [aux_sym_comparison_operator_repeat1] = STATE(86),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_PIPE_PIPE] = ACTIONS(291),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_ramp1] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(291),
    [anon_sym_GT_EQ] = ACTIONS(144),
    [sym_number] = ACTIONS(291),
    [anon_sym_AMP] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(148),
    [sym_identifier] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(150),
    [anon_sym_ramp2] = ACTIONS(207),
    [anon_sym_cps] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_CARET] = ACTIONS(291),
    [anon_sym_LT_EQ] = ACTIONS(144),
    [sym_comment] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(291),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_GT_GT] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_BANG_EQ] = ACTIONS(144),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(144),
  },
  [96] = {
    [aux_sym_comparison_operator_repeat1] = STATE(86),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_PIPE_PIPE] = ACTIONS(291),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_ramp1] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(291),
    [anon_sym_GT_EQ] = ACTIONS(144),
    [sym_number] = ACTIONS(291),
    [anon_sym_AMP] = ACTIONS(146),
    [anon_sym_LT] = ACTIONS(148),
    [sym_identifier] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(150),
    [anon_sym_ramp2] = ACTIONS(207),
    [anon_sym_cps] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_CARET] = ACTIONS(152),
    [anon_sym_LT_EQ] = ACTIONS(144),
    [sym_comment] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(291),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_GT_GT] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_BANG_EQ] = ACTIONS(144),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(144),
  },
  [97] = {
    [aux_sym_comparison_operator_repeat1] = STATE(97),
    [anon_sym_PERCENT] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(293),
    [anon_sym_DASH] = ACTIONS(293),
    [anon_sym_ramp1] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_GT_EQ] = ACTIONS(297),
    [sym_number] = ACTIONS(293),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_LT] = ACTIONS(300),
    [sym_identifier] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(293),
    [anon_sym_LT_LT] = ACTIONS(293),
    [anon_sym_ramp2] = ACTIONS(209),
    [anon_sym_cps] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(300),
    [anon_sym_CARET] = ACTIONS(293),
    [anon_sym_LT_EQ] = ACTIONS(297),
    [sym_comment] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(293),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_GT] = ACTIONS(293),
    [anon_sym_PLUS] = ACTIONS(293),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_BANG_EQ] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(209),
    [anon_sym_EQ_EQ] = ACTIONS(297),
  },
  [98] = {
    [anon_sym_PERCENT] = ACTIONS(303),
    [anon_sym_PIPE_PIPE] = ACTIONS(303),
    [anon_sym_DASH] = ACTIONS(303),
    [anon_sym_ramp1] = ACTIONS(223),
    [anon_sym_AMP_AMP] = ACTIONS(303),
    [anon_sym_GT_EQ] = ACTIONS(303),
    [sym_number] = ACTIONS(303),
    [anon_sym_AMP] = ACTIONS(223),
    [anon_sym_LT] = ACTIONS(223),
    [sym_identifier] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(303),
    [anon_sym_LT_LT] = ACTIONS(303),
    [anon_sym_ramp2] = ACTIONS(223),
    [anon_sym_cps] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(223),
    [anon_sym_CARET] = ACTIONS(303),
    [anon_sym_LT_EQ] = ACTIONS(303),
    [sym_comment] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(303),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_GT_GT] = ACTIONS(303),
    [anon_sym_PLUS] = ACTIONS(303),
    [anon_sym_RPAREN] = ACTIONS(303),
    [anon_sym_BANG_EQ] = ACTIONS(303),
    [anon_sym_PIPE] = ACTIONS(223),
    [anon_sym_EQ_EQ] = ACTIONS(303),
  },
  [99] = {
    [anon_sym_PERCENT] = ACTIONS(305),
    [anon_sym_PIPE_PIPE] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(305),
    [anon_sym_ramp1] = ACTIONS(248),
    [anon_sym_AMP_AMP] = ACTIONS(305),
    [anon_sym_GT_EQ] = ACTIONS(305),
    [sym_number] = ACTIONS(305),
    [anon_sym_AMP] = ACTIONS(248),
    [anon_sym_LT] = ACTIONS(248),
    [sym_identifier] = ACTIONS(248),
    [anon_sym_STAR] = ACTIONS(305),
    [anon_sym_LT_LT] = ACTIONS(305),
    [anon_sym_ramp2] = ACTIONS(248),
    [anon_sym_cps] = ACTIONS(248),
    [anon_sym_GT] = ACTIONS(248),
    [anon_sym_CARET] = ACTIONS(305),
    [anon_sym_LT_EQ] = ACTIONS(305),
    [sym_comment] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(305),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_GT_GT] = ACTIONS(305),
    [anon_sym_PLUS] = ACTIONS(305),
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_BANG_EQ] = ACTIONS(305),
    [anon_sym_PIPE] = ACTIONS(248),
    [anon_sym_EQ_EQ] = ACTIONS(305),
  },
  [100] = {
    [sym_number] = ACTIONS(307),
    [sym_comment] = ACTIONS(17),
  },
  [101] = {
    [sym_parenthesized] = STATE(74),
    [sym__expressions] = STATE(74),
    [sym_boolean_operator] = STATE(74),
    [sym_call_function] = STATE(74),
    [sym_call_macro] = STATE(74),
    [sym_binary_operator] = STATE(74),
    [sym_unary_operator] = STATE(74),
    [sym_call_macro_function] = STATE(74),
    [sym_comparison_operator] = STATE(74),
    [anon_sym_BANG] = ACTIONS(43),
    [sym_number] = ACTIONS(309),
    [anon_sym_TILDE] = ACTIONS(43),
    [sym_function_name] = ACTIONS(47),
    [sym_signal] = ACTIONS(309),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [102] = {
    [sym_arguments] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(259),
    [sym_comment] = ACTIONS(17),
  },
  [103] = {
    [aux_sym_comparison_operator_repeat1] = STATE(86),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_PIPE_PIPE] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_AMP_AMP] = ACTIONS(142),
    [anon_sym_GT_EQ] = ACTIONS(144),
    [anon_sym_AMP] = ACTIONS(146),
    [anon_sym_LT] = ACTIONS(148),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(150),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_CARET] = ACTIONS(152),
    [anon_sym_LT_EQ] = ACTIONS(144),
    [sym_comment] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_GT_GT] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_BANG_EQ] = ACTIONS(144),
    [anon_sym_PIPE] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(144),
  },
  [104] = {
    [sym__expressions] = STATE(48),
    [sym_boolean_operator] = STATE(48),
    [sym_call_function] = STATE(48),
    [sym_call_macro] = STATE(48),
    [sym_comparison_operator] = STATE(48),
    [sym_parenthesized] = STATE(48),
    [sym__delimiter] = STATE(65),
    [aux_sym_arguments_repeat1] = STATE(66),
    [aux_sym_arguments_repeat2] = STATE(105),
    [sym_binary_operator] = STATE(48),
    [sym_unary_operator] = STATE(48),
    [sym_call_macro_function] = STATE(48),
    [anon_sym_BANG] = ACTIONS(29),
    [sym_function_name] = ACTIONS(33),
    [sym_signal] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(130),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_LPAREN2] = ACTIONS(37),
    [anon_sym_BSLASH_COMMA] = ACTIONS(201),
  },
  [105] = {
    [aux_sym_arguments_repeat2] = STATE(70),
    [sym__delimiter] = STATE(65),
    [anon_sym_COMMA] = ACTIONS(242),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_BSLASH_COMMA] = ACTIONS(242),
    [sym_comment] = ACTIONS(17),
  },
  [106] = {
    [sym_parenthesized] = STATE(103),
    [sym__expressions] = STATE(103),
    [sym_boolean_operator] = STATE(103),
    [sym_call_function] = STATE(103),
    [sym_call_macro] = STATE(103),
    [sym_binary_operator] = STATE(103),
    [sym_unary_operator] = STATE(103),
    [sym_call_macro_function] = STATE(103),
    [sym_comparison_operator] = STATE(103),
    [anon_sym_BANG] = ACTIONS(43),
    [sym_number] = ACTIONS(317),
    [anon_sym_TILDE] = ACTIONS(43),
    [sym_function_name] = ACTIONS(47),
    [sym_signal] = ACTIONS(317),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [107] = {
    [sym__expressions] = STATE(48),
    [sym_boolean_operator] = STATE(48),
    [sym_call_function] = STATE(48),
    [sym_call_macro] = STATE(48),
    [sym_comparison_operator] = STATE(48),
    [sym_parenthesized] = STATE(48),
    [aux_sym_arguments_repeat1] = STATE(104),
    [sym_binary_operator] = STATE(48),
    [sym_unary_operator] = STATE(48),
    [sym_call_macro_function] = STATE(48),
    [anon_sym_BANG] = ACTIONS(29),
    [sym_number] = ACTIONS(130),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_function_name] = ACTIONS(33),
    [sym_signal] = ACTIONS(130),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_LPAREN2] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(6),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = false}, SHIFT(2),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = true}, SHIFT(12),
  [25] = {.count = 1, .reusable = true}, SHIFT(13),
  [27] = {.count = 1, .reusable = true}, SHIFT(14),
  [29] = {.count = 1, .reusable = false}, SHIFT(15),
  [31] = {.count = 1, .reusable = false}, SHIFT(19),
  [33] = {.count = 1, .reusable = false}, SHIFT(16),
  [35] = {.count = 1, .reusable = false}, SHIFT(17),
  [37] = {.count = 1, .reusable = false}, SHIFT(18),
  [39] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [43] = {.count = 1, .reusable = false}, SHIFT(101),
  [45] = {.count = 1, .reusable = false}, SHIFT(73),
  [47] = {.count = 1, .reusable = false}, SHIFT(102),
  [49] = {.count = 1, .reusable = false}, SHIFT(72),
  [51] = {.count = 1, .reusable = false}, SHIFT(106),
  [53] = {.count = 1, .reusable = true}, SHIFT(23),
  [55] = {.count = 1, .reusable = true}, SHIFT(24),
  [57] = {.count = 1, .reusable = true}, SHIFT(100),
  [59] = {.count = 1, .reusable = true}, SHIFT(26),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym__signed_number, 2),
  [63] = {.count = 1, .reusable = false}, SHIFT(27),
  [65] = {.count = 1, .reusable = true}, SHIFT(28),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_call_macro, 1),
  [69] = {.count = 1, .reusable = false}, SHIFT(28),
  [71] = {.count = 1, .reusable = false}, SHIFT(31),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_expression_statement, 1),
  [75] = {.count = 1, .reusable = false}, SHIFT(32),
  [77] = {.count = 1, .reusable = false}, SHIFT(33),
  [79] = {.count = 1, .reusable = false}, SHIFT(34),
  [81] = {.count = 1, .reusable = false}, SHIFT(35),
  [83] = {.count = 1, .reusable = false}, SHIFT(36),
  [85] = {.count = 1, .reusable = false}, SHIFT(37),
  [87] = {.count = 1, .reusable = false}, SHIFT(38),
  [89] = {.count = 1, .reusable = false}, SHIFT(39),
  [91] = {.count = 1, .reusable = false}, SHIFT(40),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [96] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [99] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [102] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [104] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [107] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_macro_statement, 3),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym_macro_statement, 3),
  [114] = {.count = 1, .reusable = true}, SHIFT(45),
  [116] = {.count = 1, .reusable = true}, SHIFT(44),
  [118] = {.count = 1, .reusable = true}, SHIFT(43),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_ramp_statement, 3),
  [122] = {.count = 1, .reusable = false}, REDUCE(sym_ramp_statement, 3),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_cps_statement, 3),
  [126] = {.count = 1, .reusable = false}, REDUCE(sym_cps_statement, 3),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_unary_operator, 2),
  [130] = {.count = 1, .reusable = false}, SHIFT(48),
  [132] = {.count = 1, .reusable = false}, REDUCE(sym_call_function, 2),
  [134] = {.count = 1, .reusable = false}, REDUCE(sym_call_macro_function, 2),
  [136] = {.count = 1, .reusable = true}, SHIFT(77),
  [138] = {.count = 1, .reusable = true}, SHIFT(81),
  [140] = {.count = 1, .reusable = true}, SHIFT(82),
  [142] = {.count = 1, .reusable = true}, SHIFT(83),
  [144] = {.count = 1, .reusable = true}, SHIFT(79),
  [146] = {.count = 1, .reusable = false}, SHIFT(84),
  [148] = {.count = 1, .reusable = false}, SHIFT(79),
  [150] = {.count = 1, .reusable = true}, SHIFT(78),
  [152] = {.count = 1, .reusable = true}, SHIFT(80),
  [154] = {.count = 1, .reusable = false}, SHIFT(77),
  [156] = {.count = 1, .reusable = true}, SHIFT(50),
  [158] = {.count = 1, .reusable = false}, SHIFT(85),
  [160] = {.count = 1, .reusable = false}, SHIFT(51),
  [162] = {.count = 1, .reusable = false}, SHIFT(52),
  [164] = {.count = 1, .reusable = false}, SHIFT(53),
  [166] = {.count = 1, .reusable = false}, SHIFT(54),
  [168] = {.count = 1, .reusable = false}, SHIFT(55),
  [170] = {.count = 1, .reusable = false}, SHIFT(56),
  [172] = {.count = 1, .reusable = false}, SHIFT(57),
  [174] = {.count = 1, .reusable = false}, SHIFT(58),
  [176] = {.count = 1, .reusable = false}, SHIFT(59),
  [178] = {.count = 1, .reusable = false}, REDUCE(sym_comparison_operator, 2),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement, 3),
  [182] = {.count = 1, .reusable = false}, REDUCE(sym_default_statement, 3),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_macro_arguments, 3),
  [186] = {.count = 1, .reusable = true}, REDUCE(aux_sym_macro_arguments_repeat1, 2),
  [188] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_arguments_repeat1, 2), SHIFT_REPEAT(44),
  [191] = {.count = 1, .reusable = true}, SHIFT(61),
  [193] = {.count = 1, .reusable = true}, SHIFT(62),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_macro_function_statement, 4),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_macro_function_statement, 4),
  [199] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 1),
  [201] = {.count = 1, .reusable = false}, SHIFT(65),
  [203] = {.count = 1, .reusable = false}, SHIFT(64),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized, 3),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_binary_operator, 3),
  [209] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_boolean_operator, 3),
  [213] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(34),
  [216] = {.count = 1, .reusable = true}, REDUCE(aux_sym_macro_arguments_repeat2, 2),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_macro_arguments, 4),
  [220] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_arguments_repeat2, 2), SHIFT_REPEAT(45),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [225] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(15),
  [228] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(48),
  [231] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(16),
  [234] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2),
  [236] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(17),
  [239] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(18),
  [242] = {.count = 1, .reusable = true}, SHIFT(65),
  [244] = {.count = 1, .reusable = true}, SHIFT(69),
  [246] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arguments_repeat2, 2),
  [248] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [250] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(65),
  [253] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym__signed_number, 2),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_call_macro, 1),
  [259] = {.count = 1, .reusable = true}, SHIFT(107),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_unary_operator, 2),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_call_function, 2),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_call_macro_function, 2),
  [269] = {.count = 1, .reusable = false}, SHIFT(88),
  [271] = {.count = 1, .reusable = false}, SHIFT(89),
  [273] = {.count = 1, .reusable = false}, SHIFT(90),
  [275] = {.count = 1, .reusable = false}, SHIFT(91),
  [277] = {.count = 1, .reusable = false}, SHIFT(92),
  [279] = {.count = 1, .reusable = false}, SHIFT(93),
  [281] = {.count = 1, .reusable = false}, SHIFT(94),
  [283] = {.count = 1, .reusable = false}, SHIFT(95),
  [285] = {.count = 1, .reusable = false}, SHIFT(96),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_comparison_operator, 2),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized, 3),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_binary_operator, 3),
  [293] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_operator, 3),
  [297] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(79),
  [300] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(79),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [307] = {.count = 1, .reusable = true}, SHIFT(71),
  [309] = {.count = 1, .reusable = false}, SHIFT(74),
  [311] = {.count = 1, .reusable = true}, SHIFT(87),
  [313] = {.count = 1, .reusable = false}, SHIFT(98),
  [315] = {.count = 1, .reusable = true}, SHIFT(99),
  [317] = {.count = 1, .reusable = false}, SHIFT(103),
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
