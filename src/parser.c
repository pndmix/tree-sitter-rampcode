#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 113
#define SYMBOL_COUNT 63
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
  sym_ramp1_statement = 39,
  sym_ramp2_statement = 40,
  sym_macro_statement = 41,
  sym_macro_function_statement = 42,
  sym_macro_arguments = 43,
  sym_expression_statement = 44,
  sym__expressions = 45,
  sym_boolean_operator = 46,
  sym_binary_operator = 47,
  sym_unary_operator = 48,
  sym_comparison_operator = 49,
  sym_parenthesized = 50,
  sym_call_function = 51,
  sym_call_macro = 52,
  sym_call_macro_function = 53,
  sym_arguments = 54,
  sym__delimiter = 55,
  sym_signed_number = 56,
  aux_sym_program_repeat1 = 57,
  aux_sym_macro_arguments_repeat1 = 58,
  aux_sym_macro_arguments_repeat2 = 59,
  aux_sym_comparison_operator_repeat1 = 60,
  aux_sym_arguments_repeat1 = 61,
  aux_sym_arguments_repeat2 = 62,
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
  [sym_ramp1_statement] = "ramp1_statement",
  [sym_ramp2_statement] = "ramp2_statement",
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
  [sym_signed_number] = "signed_number",
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
    .named = false,
  },
  [anon_sym_ramp2] = {
    .visible = true,
    .named = false,
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
  [sym_ramp1_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_ramp2_statement] = {
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
  [sym_signed_number] = {
    .visible = true,
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
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1},
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
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
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
    [sym_cps_statement] = STATE(9),
    [sym_ramp1_statement] = STATE(9),
    [sym_program] = STATE(8),
    [sym_signed_number] = STATE(10),
    [aux_sym_program_repeat1] = STATE(9),
    [sym_macro_statement] = STATE(9),
    [sym_ramp2_statement] = STATE(9),
    [sym_default_statement] = STATE(9),
    [sym_macro_function_statement] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_number] = ACTIONS(7),
    [anon_sym_ramp2] = ACTIONS(9),
    [anon_sym_cps] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_ramp1] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
  },
  [2] = {
    [sym_macro_arguments] = STATE(13),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_comment] = ACTIONS(19),
  },
  [3] = {
    [anon_sym_BANG] = ACTIONS(25),
    [sym_number] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [sym_function_name] = ACTIONS(25),
    [sym_signal] = ACTIONS(25),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_LPAREN2] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [anon_sym_COLON] = ACTIONS(27),
    [sym_comment] = ACTIONS(19),
  },
  [5] = {
    [anon_sym_COLON] = ACTIONS(29),
    [sym_comment] = ACTIONS(19),
  },
  [6] = {
    [sym_number] = ACTIONS(31),
    [sym_comment] = ACTIONS(19),
  },
  [7] = {
    [anon_sym_COLON] = ACTIONS(33),
    [sym_comment] = ACTIONS(19),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_comment] = ACTIONS(19),
  },
  [9] = {
    [sym_cps_statement] = STATE(18),
    [sym_ramp1_statement] = STATE(18),
    [sym_signed_number] = STATE(10),
    [sym_macro_statement] = STATE(18),
    [aux_sym_program_repeat1] = STATE(18),
    [sym_ramp2_statement] = STATE(18),
    [sym_default_statement] = STATE(18),
    [sym_macro_function_statement] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_number] = ACTIONS(7),
    [anon_sym_ramp2] = ACTIONS(9),
    [anon_sym_cps] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_ramp1] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
  },
  [10] = {
    [sym_comparison_operator] = STATE(24),
    [sym_expression_statement] = STATE(23),
    [sym__expressions] = STATE(24),
    [sym_parenthesized] = STATE(24),
    [sym_call_function] = STATE(24),
    [sym_boolean_operator] = STATE(24),
    [sym_binary_operator] = STATE(24),
    [sym_call_macro] = STATE(24),
    [sym_call_macro_function] = STATE(24),
    [sym_unary_operator] = STATE(24),
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(41),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_comparison_operator] = STATE(78),
    [sym_expression_statement] = STATE(25),
    [sym__expressions] = STATE(78),
    [sym_parenthesized] = STATE(78),
    [sym_call_function] = STATE(78),
    [sym_boolean_operator] = STATE(78),
    [sym_binary_operator] = STATE(78),
    [sym_call_macro] = STATE(78),
    [sym_call_macro_function] = STATE(78),
    [sym_unary_operator] = STATE(78),
    [anon_sym_BANG] = ACTIONS(49),
    [sym_number] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(49),
    [sym_function_name] = ACTIONS(53),
    [sym_signal] = ACTIONS(51),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_LPAREN2] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [aux_sym_macro_arguments_repeat1] = STATE(26),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(19),
  },
  [13] = {
    [anon_sym_EQ] = ACTIONS(61),
    [sym_comment] = ACTIONS(19),
  },
  [14] = {
    [sym_comparison_operator] = STATE(78),
    [sym_expression_statement] = STATE(28),
    [sym__expressions] = STATE(78),
    [sym_parenthesized] = STATE(78),
    [sym_call_function] = STATE(78),
    [sym_boolean_operator] = STATE(78),
    [sym_binary_operator] = STATE(78),
    [sym_call_macro] = STATE(78),
    [sym_call_macro_function] = STATE(78),
    [sym_unary_operator] = STATE(78),
    [anon_sym_BANG] = ACTIONS(49),
    [sym_number] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(49),
    [sym_function_name] = ACTIONS(53),
    [sym_signal] = ACTIONS(51),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_LPAREN2] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_signed_number] = STATE(29),
    [anon_sym_DASH] = ACTIONS(63),
    [sym_number] = ACTIONS(65),
    [sym_comment] = ACTIONS(19),
  },
  [16] = {
    [anon_sym_BANG] = ACTIONS(67),
    [sym_number] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(67),
    [sym_function_name] = ACTIONS(67),
    [sym_signal] = ACTIONS(67),
    [sym_identifier] = ACTIONS(67),
    [anon_sym_LPAREN2] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_comparison_operator] = STATE(78),
    [sym_expression_statement] = STATE(30),
    [sym__expressions] = STATE(78),
    [sym_parenthesized] = STATE(78),
    [sym_call_function] = STATE(78),
    [sym_boolean_operator] = STATE(78),
    [sym_binary_operator] = STATE(78),
    [sym_call_macro] = STATE(78),
    [sym_call_macro_function] = STATE(78),
    [sym_unary_operator] = STATE(78),
    [anon_sym_BANG] = ACTIONS(49),
    [sym_number] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(49),
    [sym_function_name] = ACTIONS(53),
    [sym_signal] = ACTIONS(51),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_LPAREN2] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_cps_statement] = STATE(18),
    [sym_ramp1_statement] = STATE(18),
    [sym_signed_number] = STATE(10),
    [sym_macro_statement] = STATE(18),
    [aux_sym_program_repeat1] = STATE(18),
    [sym_ramp2_statement] = STATE(18),
    [sym_default_statement] = STATE(18),
    [sym_macro_function_statement] = STATE(18),
    [sym_number] = ACTIONS(69),
    [anon_sym_ramp2] = ACTIONS(72),
    [anon_sym_cps] = ACTIONS(75),
    [ts_builtin_sym_end] = ACTIONS(78),
    [sym_identifier] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_ramp1] = ACTIONS(86),
    [sym_comment] = ACTIONS(19),
  },
  [19] = {
    [sym_call_macro] = STATE(31),
    [sym_call_macro_function] = STATE(31),
    [sym_parenthesized] = STATE(31),
    [sym_call_function] = STATE(31),
    [sym_number] = ACTIONS(89),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(89),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_arguments] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(91),
    [sym_comment] = ACTIONS(19),
  },
  [21] = {
    [sym_arguments] = STATE(34),
    [anon_sym_BANG] = ACTIONS(93),
    [sym_function_name] = ACTIONS(93),
    [anon_sym_PERCENT] = ACTIONS(93),
    [anon_sym_PIPE_PIPE] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_AMP_AMP] = ACTIONS(93),
    [anon_sym_GT_EQ] = ACTIONS(93),
    [sym_number] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [sym_identifier] = ACTIONS(93),
    [anon_sym_STAR] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(93),
    [sym_signal] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(93),
    [anon_sym_LT_EQ] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_LPAREN2] = ACTIONS(93),
    [anon_sym_BANG_EQ] = ACTIONS(93),
    [anon_sym_BSLASH_COMMA] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_EQ_EQ] = ACTIONS(93),
  },
  [22] = {
    [sym_comparison_operator] = STATE(35),
    [sym__expressions] = STATE(35),
    [sym_parenthesized] = STATE(35),
    [sym_call_function] = STATE(35),
    [sym_boolean_operator] = STATE(35),
    [sym_binary_operator] = STATE(35),
    [sym_call_macro] = STATE(35),
    [sym_call_macro_function] = STATE(35),
    [sym_unary_operator] = STATE(35),
    [anon_sym_BANG] = ACTIONS(49),
    [sym_number] = ACTIONS(97),
    [anon_sym_TILDE] = ACTIONS(49),
    [sym_function_name] = ACTIONS(53),
    [sym_signal] = ACTIONS(97),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_LPAREN2] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym_comparison_operator] = STATE(78),
    [sym_expression_statement] = STATE(36),
    [sym__expressions] = STATE(78),
    [sym_parenthesized] = STATE(78),
    [sym_call_function] = STATE(78),
    [sym_boolean_operator] = STATE(78),
    [sym_binary_operator] = STATE(78),
    [sym_call_macro] = STATE(78),
    [sym_call_macro_function] = STATE(78),
    [sym_unary_operator] = STATE(78),
    [anon_sym_BANG] = ACTIONS(49),
    [sym_number] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(49),
    [sym_function_name] = ACTIONS(53),
    [sym_signal] = ACTIONS(51),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_LPAREN2] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [aux_sym_comparison_operator_repeat1] = STATE(46),
    [anon_sym_BANG] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_LT_LT] = ACTIONS(103),
    [sym_function_name] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(105),
    [sym_signal] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [anon_sym_PERCENT] = ACTIONS(101),
    [anon_sym_PIPE_PIPE] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(113),
    [anon_sym_GT_EQ] = ACTIONS(105),
    [sym_number] = ACTIONS(99),
    [anon_sym_TILDE] = ACTIONS(99),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(111),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_LPAREN2] = ACTIONS(99),
    [anon_sym_BANG_EQ] = ACTIONS(105),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(105),
  },
  [25] = {
    [sym_number] = ACTIONS(119),
    [anon_sym_ramp2] = ACTIONS(121),
    [anon_sym_cps] = ACTIONS(121),
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_identifier] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(119),
    [anon_sym_ramp1] = ACTIONS(121),
    [sym_comment] = ACTIONS(19),
  },
  [26] = {
    [aux_sym_macro_arguments_repeat1] = STATE(48),
    [sym__delimiter] = STATE(49),
    [aux_sym_macro_arguments_repeat2] = STATE(50),
    [anon_sym_COMMA] = ACTIONS(123),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_BSLASH_COMMA] = ACTIONS(123),
    [sym_comment] = ACTIONS(19),
  },
  [27] = {
    [sym_comparison_operator] = STATE(78),
    [sym_expression_statement] = STATE(51),
    [sym__expressions] = STATE(78),
    [sym_parenthesized] = STATE(78),
    [sym_call_function] = STATE(78),
    [sym_boolean_operator] = STATE(78),
    [sym_binary_operator] = STATE(78),
    [sym_call_macro] = STATE(78),
    [sym_call_macro_function] = STATE(78),
    [sym_unary_operator] = STATE(78),
    [anon_sym_BANG] = ACTIONS(49),
    [sym_number] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(49),
    [sym_function_name] = ACTIONS(53),
    [sym_signal] = ACTIONS(51),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_LPAREN2] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_number] = ACTIONS(129),
    [anon_sym_ramp2] = ACTIONS(131),
    [anon_sym_cps] = ACTIONS(131),
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_identifier] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_ramp1] = ACTIONS(131),
    [sym_comment] = ACTIONS(19),
  },
  [29] = {
    [sym_number] = ACTIONS(133),
    [anon_sym_ramp2] = ACTIONS(135),
    [anon_sym_cps] = ACTIONS(135),
    [ts_builtin_sym_end] = ACTIONS(133),
    [sym_identifier] = ACTIONS(135),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_ramp1] = ACTIONS(135),
    [sym_comment] = ACTIONS(19),
  },
  [30] = {
    [sym_number] = ACTIONS(137),
    [anon_sym_ramp2] = ACTIONS(139),
    [anon_sym_cps] = ACTIONS(139),
    [ts_builtin_sym_end] = ACTIONS(137),
    [sym_identifier] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_ramp1] = ACTIONS(139),
    [sym_comment] = ACTIONS(19),
  },
  [31] = {
    [anon_sym_BANG] = ACTIONS(141),
    [sym_function_name] = ACTIONS(141),
    [anon_sym_PERCENT] = ACTIONS(141),
    [anon_sym_PIPE_PIPE] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(141),
    [anon_sym_GT_EQ] = ACTIONS(141),
    [sym_number] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(141),
    [anon_sym_AMP] = ACTIONS(141),
    [anon_sym_LT] = ACTIONS(141),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_STAR] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [sym_signal] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_CARET] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_PLUS] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(141),
    [anon_sym_LPAREN2] = ACTIONS(141),
    [anon_sym_BANG_EQ] = ACTIONS(141),
    [anon_sym_BSLASH_COMMA] = ACTIONS(141),
    [anon_sym_PIPE] = ACTIONS(141),
    [anon_sym_EQ_EQ] = ACTIONS(141),
  },
  [32] = {
    [sym__expressions] = STATE(52),
    [sym_parenthesized] = STATE(52),
    [sym_call_function] = STATE(52),
    [sym_unary_operator] = STATE(52),
    [sym_comparison_operator] = STATE(52),
    [aux_sym_arguments_repeat1] = STATE(53),
    [sym_boolean_operator] = STATE(52),
    [sym_binary_operator] = STATE(52),
    [sym_call_macro] = STATE(52),
    [sym_call_macro_function] = STATE(52),
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(143),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [anon_sym_BANG] = ACTIONS(145),
    [sym_function_name] = ACTIONS(145),
    [anon_sym_PERCENT] = ACTIONS(145),
    [anon_sym_PIPE_PIPE] = ACTIONS(145),
    [anon_sym_DASH] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(145),
    [sym_number] = ACTIONS(145),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_AMP] = ACTIONS(145),
    [anon_sym_LT] = ACTIONS(145),
    [sym_identifier] = ACTIONS(145),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_GT] = ACTIONS(145),
    [sym_signal] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_CARET] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(145),
    [anon_sym_GT_GT] = ACTIONS(145),
    [anon_sym_PLUS] = ACTIONS(145),
    [anon_sym_RPAREN] = ACTIONS(145),
    [anon_sym_LPAREN2] = ACTIONS(145),
    [anon_sym_BANG_EQ] = ACTIONS(145),
    [anon_sym_BSLASH_COMMA] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_EQ_EQ] = ACTIONS(145),
  },
  [34] = {
    [anon_sym_BANG] = ACTIONS(147),
    [sym_function_name] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_GT_EQ] = ACTIONS(147),
    [sym_number] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_AMP] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(147),
    [sym_identifier] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_LT_LT] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(147),
    [sym_signal] = ACTIONS(147),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_CARET] = ACTIONS(147),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_GT_GT] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_LPAREN2] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_BSLASH_COMMA] = ACTIONS(147),
    [anon_sym_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
  },
  [35] = {
    [aux_sym_comparison_operator_repeat1] = STATE(91),
    [anon_sym_PERCENT] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_AMP_AMP] = ACTIONS(155),
    [anon_sym_GT_EQ] = ACTIONS(157),
    [anon_sym_AMP] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_LT_LT] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_CARET] = ACTIONS(165),
    [anon_sym_LT_EQ] = ACTIONS(157),
    [sym_comment] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_GT_GT] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_EQ_EQ] = ACTIONS(157),
  },
  [36] = {
    [sym_number] = ACTIONS(173),
    [anon_sym_ramp2] = ACTIONS(175),
    [anon_sym_cps] = ACTIONS(175),
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_identifier] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_ramp1] = ACTIONS(175),
    [sym_comment] = ACTIONS(19),
  },
  [37] = {
    [sym_comparison_operator] = STATE(55),
    [sym__expressions] = STATE(55),
    [sym_parenthesized] = STATE(55),
    [sym_call_function] = STATE(55),
    [sym_boolean_operator] = STATE(55),
    [sym_binary_operator] = STATE(55),
    [sym_call_macro] = STATE(55),
    [sym_call_macro_function] = STATE(55),
    [sym_unary_operator] = STATE(55),
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(177),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [sym_comparison_operator] = STATE(56),
    [sym__expressions] = STATE(56),
    [sym_parenthesized] = STATE(56),
    [sym_call_function] = STATE(56),
    [sym_boolean_operator] = STATE(56),
    [sym_binary_operator] = STATE(56),
    [sym_call_macro] = STATE(56),
    [sym_call_macro_function] = STATE(56),
    [sym_unary_operator] = STATE(56),
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(179),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(179),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [sym_comparison_operator] = STATE(57),
    [sym__expressions] = STATE(57),
    [sym_parenthesized] = STATE(57),
    [sym_call_function] = STATE(57),
    [sym_boolean_operator] = STATE(57),
    [sym_binary_operator] = STATE(57),
    [sym_call_macro] = STATE(57),
    [sym_call_macro_function] = STATE(57),
    [sym_unary_operator] = STATE(57),
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(181),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(181),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [sym_comparison_operator] = STATE(58),
    [sym__expressions] = STATE(58),
    [sym_parenthesized] = STATE(58),
    [sym_call_function] = STATE(58),
    [sym_boolean_operator] = STATE(58),
    [sym_binary_operator] = STATE(58),
    [sym_call_macro] = STATE(58),
    [sym_call_macro_function] = STATE(58),
    [sym_unary_operator] = STATE(58),
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(183),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(183),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [sym_comparison_operator] = STATE(59),
    [sym__expressions] = STATE(59),
    [sym_parenthesized] = STATE(59),
    [sym_call_function] = STATE(59),
    [sym_boolean_operator] = STATE(59),
    [sym_binary_operator] = STATE(59),
    [sym_call_macro] = STATE(59),
    [sym_call_macro_function] = STATE(59),
    [sym_unary_operator] = STATE(59),
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(185),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(185),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [sym_comparison_operator] = STATE(60),
    [sym__expressions] = STATE(60),
    [sym_parenthesized] = STATE(60),
    [sym_call_function] = STATE(60),
    [sym_boolean_operator] = STATE(60),
    [sym_binary_operator] = STATE(60),
    [sym_call_macro] = STATE(60),
    [sym_call_macro_function] = STATE(60),
    [sym_unary_operator] = STATE(60),
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(187),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(187),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [sym_comparison_operator] = STATE(61),
    [sym__expressions] = STATE(61),
    [sym_parenthesized] = STATE(61),
    [sym_call_function] = STATE(61),
    [sym_boolean_operator] = STATE(61),
    [sym_binary_operator] = STATE(61),
    [sym_call_macro] = STATE(61),
    [sym_call_macro_function] = STATE(61),
    [sym_unary_operator] = STATE(61),
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(189),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [sym_comparison_operator] = STATE(62),
    [sym__expressions] = STATE(62),
    [sym_parenthesized] = STATE(62),
    [sym_call_function] = STATE(62),
    [sym_boolean_operator] = STATE(62),
    [sym_binary_operator] = STATE(62),
    [sym_call_macro] = STATE(62),
    [sym_call_macro_function] = STATE(62),
    [sym_unary_operator] = STATE(62),
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(191),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(191),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [sym_comparison_operator] = STATE(63),
    [sym__expressions] = STATE(63),
    [sym_parenthesized] = STATE(63),
    [sym_call_function] = STATE(63),
    [sym_boolean_operator] = STATE(63),
    [sym_binary_operator] = STATE(63),
    [sym_call_macro] = STATE(63),
    [sym_call_macro_function] = STATE(63),
    [sym_unary_operator] = STATE(63),
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(193),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(193),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [aux_sym_comparison_operator_repeat1] = STATE(64),
    [anon_sym_BANG] = ACTIONS(195),
    [sym_function_name] = ACTIONS(195),
    [anon_sym_PERCENT] = ACTIONS(195),
    [anon_sym_PIPE_PIPE] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_AMP_AMP] = ACTIONS(195),
    [anon_sym_GT_EQ] = ACTIONS(195),
    [sym_number] = ACTIONS(195),
    [anon_sym_TILDE] = ACTIONS(195),
    [anon_sym_AMP] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(195),
    [sym_identifier] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(195),
    [anon_sym_LT_LT] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(195),
    [sym_signal] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_CARET] = ACTIONS(195),
    [anon_sym_LT_EQ] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(195),
    [anon_sym_GT_GT] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_LPAREN2] = ACTIONS(195),
    [anon_sym_BANG_EQ] = ACTIONS(195),
    [anon_sym_BSLASH_COMMA] = ACTIONS(195),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_EQ_EQ] = ACTIONS(195),
  },
  [47] = {
    [anon_sym_EQ] = ACTIONS(197),
    [sym_comment] = ACTIONS(19),
  },
  [48] = {
    [aux_sym_macro_arguments_repeat1] = STATE(48),
    [anon_sym_COMMA] = ACTIONS(199),
    [sym_identifier] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_BSLASH_COMMA] = ACTIONS(199),
    [sym_comment] = ACTIONS(19),
  },
  [49] = {
    [aux_sym_macro_arguments_repeat1] = STATE(65),
    [sym_identifier] = ACTIONS(204),
    [sym_comment] = ACTIONS(19),
  },
  [50] = {
    [sym__delimiter] = STATE(49),
    [aux_sym_macro_arguments_repeat2] = STATE(67),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_BSLASH_COMMA] = ACTIONS(123),
    [sym_comment] = ACTIONS(19),
  },
  [51] = {
    [sym_number] = ACTIONS(208),
    [anon_sym_ramp2] = ACTIONS(210),
    [anon_sym_cps] = ACTIONS(210),
    [ts_builtin_sym_end] = ACTIONS(208),
    [sym_identifier] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(208),
    [anon_sym_ramp1] = ACTIONS(210),
    [sym_comment] = ACTIONS(19),
  },
  [52] = {
    [aux_sym_comparison_operator_repeat1] = STATE(46),
    [anon_sym_BANG] = ACTIONS(212),
    [sym_function_name] = ACTIONS(212),
    [anon_sym_PERCENT] = ACTIONS(101),
    [anon_sym_PIPE_PIPE] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_AMP_AMP] = ACTIONS(113),
    [anon_sym_GT_EQ] = ACTIONS(105),
    [sym_number] = ACTIONS(212),
    [anon_sym_TILDE] = ACTIONS(212),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(105),
    [sym_identifier] = ACTIONS(212),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_LT_LT] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(105),
    [sym_signal] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(212),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(212),
    [anon_sym_LPAREN2] = ACTIONS(212),
    [anon_sym_BANG_EQ] = ACTIONS(105),
    [anon_sym_BSLASH_COMMA] = ACTIONS(212),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(105),
  },
  [53] = {
    [sym__expressions] = STATE(52),
    [sym_parenthesized] = STATE(52),
    [sym_call_function] = STATE(52),
    [aux_sym_arguments_repeat2] = STATE(71),
    [sym_unary_operator] = STATE(52),
    [sym_comparison_operator] = STATE(52),
    [sym__delimiter] = STATE(69),
    [aux_sym_arguments_repeat1] = STATE(70),
    [sym_boolean_operator] = STATE(52),
    [sym_binary_operator] = STATE(52),
    [sym_call_macro] = STATE(52),
    [sym_call_macro_function] = STATE(52),
    [anon_sym_BANG] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_BSLASH_COMMA] = ACTIONS(214),
  },
  [54] = {
    [anon_sym_BANG] = ACTIONS(218),
    [sym_function_name] = ACTIONS(218),
    [anon_sym_PERCENT] = ACTIONS(218),
    [anon_sym_PIPE_PIPE] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_AMP_AMP] = ACTIONS(218),
    [anon_sym_GT_EQ] = ACTIONS(218),
    [sym_number] = ACTIONS(218),
    [anon_sym_TILDE] = ACTIONS(218),
    [anon_sym_AMP] = ACTIONS(218),
    [anon_sym_LT] = ACTIONS(218),
    [sym_identifier] = ACTIONS(218),
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_LT_LT] = ACTIONS(218),
    [anon_sym_GT] = ACTIONS(218),
    [sym_signal] = ACTIONS(218),
    [anon_sym_COMMA] = ACTIONS(218),
    [anon_sym_CARET] = ACTIONS(218),
    [anon_sym_LT_EQ] = ACTIONS(218),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(218),
    [anon_sym_GT_GT] = ACTIONS(218),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_RPAREN] = ACTIONS(218),
    [anon_sym_LPAREN2] = ACTIONS(218),
    [anon_sym_BANG_EQ] = ACTIONS(218),
    [anon_sym_BSLASH_COMMA] = ACTIONS(218),
    [anon_sym_PIPE] = ACTIONS(218),
    [anon_sym_EQ_EQ] = ACTIONS(218),
  },
  [55] = {
    [aux_sym_comparison_operator_repeat1] = STATE(46),
    [anon_sym_BANG] = ACTIONS(220),
    [sym_function_name] = ACTIONS(220),
    [anon_sym_PERCENT] = ACTIONS(220),
    [anon_sym_PIPE_PIPE] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_AMP_AMP] = ACTIONS(220),
    [anon_sym_GT_EQ] = ACTIONS(220),
    [sym_number] = ACTIONS(220),
    [anon_sym_TILDE] = ACTIONS(220),
    [anon_sym_AMP] = ACTIONS(220),
    [anon_sym_LT] = ACTIONS(220),
    [sym_identifier] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(220),
    [anon_sym_LT_LT] = ACTIONS(220),
    [anon_sym_GT] = ACTIONS(220),
    [sym_signal] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(220),
    [anon_sym_CARET] = ACTIONS(220),
    [anon_sym_LT_EQ] = ACTIONS(220),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(220),
    [anon_sym_GT_GT] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(220),
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_LPAREN2] = ACTIONS(220),
    [anon_sym_BANG_EQ] = ACTIONS(220),
    [anon_sym_BSLASH_COMMA] = ACTIONS(220),
    [anon_sym_PIPE] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(220),
  },
  [56] = {
    [aux_sym_comparison_operator_repeat1] = STATE(46),
    [anon_sym_BANG] = ACTIONS(220),
    [sym_function_name] = ACTIONS(220),
    [anon_sym_PERCENT] = ACTIONS(101),
    [anon_sym_PIPE_PIPE] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_AMP_AMP] = ACTIONS(220),
    [anon_sym_GT_EQ] = ACTIONS(220),
    [sym_number] = ACTIONS(220),
    [anon_sym_TILDE] = ACTIONS(220),
    [anon_sym_AMP] = ACTIONS(220),
    [anon_sym_LT] = ACTIONS(220),
    [sym_identifier] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_LT_LT] = ACTIONS(220),
    [anon_sym_GT] = ACTIONS(220),
    [sym_signal] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(220),
    [anon_sym_CARET] = ACTIONS(220),
    [anon_sym_LT_EQ] = ACTIONS(220),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_LPAREN2] = ACTIONS(220),
    [anon_sym_BANG_EQ] = ACTIONS(220),
    [anon_sym_BSLASH_COMMA] = ACTIONS(220),
    [anon_sym_PIPE] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(220),
  },
  [57] = {
    [aux_sym_comparison_operator_repeat1] = STATE(46),
    [anon_sym_BANG] = ACTIONS(222),
    [sym_function_name] = ACTIONS(222),
    [anon_sym_PERCENT] = ACTIONS(101),
    [anon_sym_PIPE_PIPE] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_AMP_AMP] = ACTIONS(113),
    [anon_sym_GT_EQ] = ACTIONS(105),
    [sym_number] = ACTIONS(222),
    [anon_sym_TILDE] = ACTIONS(222),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(105),
    [sym_identifier] = ACTIONS(222),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_LT_LT] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(105),
    [sym_signal] = ACTIONS(222),
    [anon_sym_COMMA] = ACTIONS(222),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_LPAREN2] = ACTIONS(222),
    [anon_sym_BANG_EQ] = ACTIONS(105),
    [anon_sym_BSLASH_COMMA] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(105),
  },
  [58] = {
    [aux_sym_comparison_operator_repeat1] = STATE(46),
    [anon_sym_BANG] = ACTIONS(220),
    [sym_function_name] = ACTIONS(220),
    [anon_sym_PERCENT] = ACTIONS(101),
    [anon_sym_PIPE_PIPE] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_AMP_AMP] = ACTIONS(220),
    [anon_sym_GT_EQ] = ACTIONS(105),
    [sym_number] = ACTIONS(220),
    [anon_sym_TILDE] = ACTIONS(220),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(105),
    [sym_identifier] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_LT_LT] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(105),
    [sym_signal] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(220),
    [anon_sym_CARET] = ACTIONS(220),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_LPAREN2] = ACTIONS(220),
    [anon_sym_BANG_EQ] = ACTIONS(105),
    [anon_sym_BSLASH_COMMA] = ACTIONS(220),
    [anon_sym_PIPE] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(105),
  },
  [59] = {
    [aux_sym_comparison_operator_repeat1] = STATE(46),
    [anon_sym_BANG] = ACTIONS(224),
    [sym_function_name] = ACTIONS(224),
    [anon_sym_PERCENT] = ACTIONS(101),
    [anon_sym_PIPE_PIPE] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_AMP_AMP] = ACTIONS(113),
    [anon_sym_GT_EQ] = ACTIONS(105),
    [sym_number] = ACTIONS(224),
    [anon_sym_TILDE] = ACTIONS(224),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(105),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_LT_LT] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(105),
    [sym_signal] = ACTIONS(224),
    [anon_sym_COMMA] = ACTIONS(224),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(224),
    [anon_sym_LPAREN2] = ACTIONS(224),
    [anon_sym_BANG_EQ] = ACTIONS(105),
    [anon_sym_BSLASH_COMMA] = ACTIONS(224),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(105),
  },
  [60] = {
    [aux_sym_comparison_operator_repeat1] = STATE(46),
    [anon_sym_BANG] = ACTIONS(220),
    [sym_function_name] = ACTIONS(220),
    [anon_sym_PERCENT] = ACTIONS(101),
    [anon_sym_PIPE_PIPE] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_AMP_AMP] = ACTIONS(220),
    [anon_sym_GT_EQ] = ACTIONS(220),
    [sym_number] = ACTIONS(220),
    [anon_sym_TILDE] = ACTIONS(220),
    [anon_sym_AMP] = ACTIONS(220),
    [anon_sym_LT] = ACTIONS(220),
    [sym_identifier] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_LT_LT] = ACTIONS(220),
    [anon_sym_GT] = ACTIONS(220),
    [sym_signal] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(220),
    [anon_sym_CARET] = ACTIONS(220),
    [anon_sym_LT_EQ] = ACTIONS(220),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(220),
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_LPAREN2] = ACTIONS(220),
    [anon_sym_BANG_EQ] = ACTIONS(220),
    [anon_sym_BSLASH_COMMA] = ACTIONS(220),
    [anon_sym_PIPE] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(220),
  },
  [61] = {
    [aux_sym_comparison_operator_repeat1] = STATE(46),
    [anon_sym_BANG] = ACTIONS(224),
    [sym_function_name] = ACTIONS(224),
    [anon_sym_PERCENT] = ACTIONS(101),
    [anon_sym_PIPE_PIPE] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_AMP_AMP] = ACTIONS(224),
    [anon_sym_GT_EQ] = ACTIONS(105),
    [sym_number] = ACTIONS(224),
    [anon_sym_TILDE] = ACTIONS(224),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(105),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_LT_LT] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(105),
    [sym_signal] = ACTIONS(224),
    [anon_sym_COMMA] = ACTIONS(224),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(224),
    [anon_sym_LPAREN2] = ACTIONS(224),
    [anon_sym_BANG_EQ] = ACTIONS(105),
    [anon_sym_BSLASH_COMMA] = ACTIONS(224),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(105),
  },
  [62] = {
    [aux_sym_comparison_operator_repeat1] = STATE(46),
    [anon_sym_BANG] = ACTIONS(220),
    [sym_function_name] = ACTIONS(220),
    [anon_sym_PERCENT] = ACTIONS(101),
    [anon_sym_PIPE_PIPE] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_AMP_AMP] = ACTIONS(220),
    [anon_sym_GT_EQ] = ACTIONS(105),
    [sym_number] = ACTIONS(220),
    [anon_sym_TILDE] = ACTIONS(220),
    [anon_sym_AMP] = ACTIONS(220),
    [anon_sym_LT] = ACTIONS(105),
    [sym_identifier] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_LT_LT] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(105),
    [sym_signal] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(220),
    [anon_sym_CARET] = ACTIONS(220),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_LPAREN2] = ACTIONS(220),
    [anon_sym_BANG_EQ] = ACTIONS(105),
    [anon_sym_BSLASH_COMMA] = ACTIONS(220),
    [anon_sym_PIPE] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(105),
  },
  [63] = {
    [aux_sym_comparison_operator_repeat1] = STATE(46),
    [anon_sym_BANG] = ACTIONS(220),
    [sym_function_name] = ACTIONS(220),
    [anon_sym_PERCENT] = ACTIONS(101),
    [anon_sym_PIPE_PIPE] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_AMP_AMP] = ACTIONS(220),
    [anon_sym_GT_EQ] = ACTIONS(105),
    [sym_number] = ACTIONS(220),
    [anon_sym_TILDE] = ACTIONS(220),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(105),
    [sym_identifier] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_LT_LT] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(105),
    [sym_signal] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(220),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_LPAREN2] = ACTIONS(220),
    [anon_sym_BANG_EQ] = ACTIONS(105),
    [anon_sym_BSLASH_COMMA] = ACTIONS(220),
    [anon_sym_PIPE] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(105),
  },
  [64] = {
    [aux_sym_comparison_operator_repeat1] = STATE(64),
    [anon_sym_BANG] = ACTIONS(222),
    [sym_function_name] = ACTIONS(222),
    [anon_sym_PERCENT] = ACTIONS(222),
    [anon_sym_PIPE_PIPE] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_AMP_AMP] = ACTIONS(222),
    [anon_sym_GT_EQ] = ACTIONS(226),
    [sym_number] = ACTIONS(222),
    [anon_sym_TILDE] = ACTIONS(222),
    [anon_sym_AMP] = ACTIONS(222),
    [anon_sym_LT] = ACTIONS(226),
    [sym_identifier] = ACTIONS(222),
    [anon_sym_STAR] = ACTIONS(222),
    [anon_sym_LT_LT] = ACTIONS(222),
    [anon_sym_GT] = ACTIONS(226),
    [sym_signal] = ACTIONS(222),
    [anon_sym_COMMA] = ACTIONS(222),
    [anon_sym_CARET] = ACTIONS(222),
    [anon_sym_LT_EQ] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_GT_GT] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_LPAREN2] = ACTIONS(222),
    [anon_sym_BANG_EQ] = ACTIONS(226),
    [anon_sym_BSLASH_COMMA] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(222),
    [anon_sym_EQ_EQ] = ACTIONS(226),
  },
  [65] = {
    [aux_sym_macro_arguments_repeat1] = STATE(48),
    [anon_sym_COMMA] = ACTIONS(229),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_BSLASH_COMMA] = ACTIONS(229),
    [sym_comment] = ACTIONS(19),
  },
  [66] = {
    [anon_sym_EQ] = ACTIONS(231),
    [sym_comment] = ACTIONS(19),
  },
  [67] = {
    [sym__delimiter] = STATE(49),
    [aux_sym_macro_arguments_repeat2] = STATE(67),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_BSLASH_COMMA] = ACTIONS(233),
    [sym_comment] = ACTIONS(19),
  },
  [68] = {
    [anon_sym_BANG] = ACTIONS(236),
    [sym_function_name] = ACTIONS(236),
    [anon_sym_PERCENT] = ACTIONS(236),
    [anon_sym_PIPE_PIPE] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(236),
    [anon_sym_AMP_AMP] = ACTIONS(236),
    [anon_sym_GT_EQ] = ACTIONS(236),
    [sym_number] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(236),
    [anon_sym_AMP] = ACTIONS(236),
    [anon_sym_LT] = ACTIONS(236),
    [sym_identifier] = ACTIONS(236),
    [anon_sym_STAR] = ACTIONS(236),
    [anon_sym_LT_LT] = ACTIONS(236),
    [anon_sym_GT] = ACTIONS(236),
    [sym_signal] = ACTIONS(236),
    [anon_sym_COMMA] = ACTIONS(236),
    [anon_sym_CARET] = ACTIONS(236),
    [anon_sym_LT_EQ] = ACTIONS(236),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(236),
    [anon_sym_GT_GT] = ACTIONS(236),
    [anon_sym_PLUS] = ACTIONS(236),
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_LPAREN2] = ACTIONS(236),
    [anon_sym_BANG_EQ] = ACTIONS(236),
    [anon_sym_BSLASH_COMMA] = ACTIONS(236),
    [anon_sym_PIPE] = ACTIONS(236),
    [anon_sym_EQ_EQ] = ACTIONS(236),
  },
  [69] = {
    [sym_comparison_operator] = STATE(52),
    [sym__expressions] = STATE(52),
    [sym_parenthesized] = STATE(52),
    [sym_call_function] = STATE(52),
    [aux_sym_arguments_repeat1] = STATE(72),
    [sym_boolean_operator] = STATE(52),
    [sym_binary_operator] = STATE(52),
    [sym_call_macro] = STATE(52),
    [sym_call_macro_function] = STATE(52),
    [sym_unary_operator] = STATE(52),
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(143),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [sym_comparison_operator] = STATE(52),
    [sym__expressions] = STATE(52),
    [sym_parenthesized] = STATE(52),
    [sym_call_function] = STATE(52),
    [aux_sym_arguments_repeat1] = STATE(70),
    [sym_boolean_operator] = STATE(52),
    [sym_binary_operator] = STATE(52),
    [sym_call_macro] = STATE(52),
    [sym_call_macro_function] = STATE(52),
    [sym_unary_operator] = STATE(52),
    [anon_sym_BANG] = ACTIONS(238),
    [sym_number] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(238),
    [sym_function_name] = ACTIONS(244),
    [sym_signal] = ACTIONS(241),
    [anon_sym_COMMA] = ACTIONS(247),
    [sym_identifier] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_LPAREN2] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(238),
    [anon_sym_BSLASH_COMMA] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
  },
  [71] = {
    [aux_sym_arguments_repeat2] = STATE(74),
    [sym__delimiter] = STATE(69),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_BSLASH_COMMA] = ACTIONS(255),
    [sym_comment] = ACTIONS(19),
  },
  [72] = {
    [sym_comparison_operator] = STATE(52),
    [sym__expressions] = STATE(52),
    [sym_parenthesized] = STATE(52),
    [sym_call_function] = STATE(52),
    [aux_sym_arguments_repeat1] = STATE(70),
    [sym_boolean_operator] = STATE(52),
    [sym_binary_operator] = STATE(52),
    [sym_call_macro] = STATE(52),
    [sym_call_macro_function] = STATE(52),
    [sym_unary_operator] = STATE(52),
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(259),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_BSLASH_COMMA] = ACTIONS(259),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [anon_sym_BANG] = ACTIONS(261),
    [sym_function_name] = ACTIONS(261),
    [anon_sym_PERCENT] = ACTIONS(261),
    [anon_sym_PIPE_PIPE] = ACTIONS(261),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_AMP_AMP] = ACTIONS(261),
    [anon_sym_GT_EQ] = ACTIONS(261),
    [sym_number] = ACTIONS(261),
    [anon_sym_TILDE] = ACTIONS(261),
    [anon_sym_AMP] = ACTIONS(261),
    [anon_sym_LT] = ACTIONS(261),
    [sym_identifier] = ACTIONS(261),
    [anon_sym_STAR] = ACTIONS(261),
    [anon_sym_LT_LT] = ACTIONS(261),
    [anon_sym_GT] = ACTIONS(261),
    [sym_signal] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_CARET] = ACTIONS(261),
    [anon_sym_LT_EQ] = ACTIONS(261),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(261),
    [anon_sym_GT_GT] = ACTIONS(261),
    [anon_sym_PLUS] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_LPAREN2] = ACTIONS(261),
    [anon_sym_BANG_EQ] = ACTIONS(261),
    [anon_sym_BSLASH_COMMA] = ACTIONS(261),
    [anon_sym_PIPE] = ACTIONS(261),
    [anon_sym_EQ_EQ] = ACTIONS(261),
  },
  [74] = {
    [aux_sym_arguments_repeat2] = STATE(74),
    [sym__delimiter] = STATE(69),
    [anon_sym_COMMA] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(266),
    [anon_sym_BSLASH_COMMA] = ACTIONS(263),
    [sym_comment] = ACTIONS(19),
  },
  [75] = {
    [sym_number] = ACTIONS(268),
    [anon_sym_ramp2] = ACTIONS(25),
    [anon_sym_cps] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(268),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(268),
    [anon_sym_ramp1] = ACTIONS(25),
    [sym_comment] = ACTIONS(19),
  },
  [76] = {
    [sym_number] = ACTIONS(270),
    [anon_sym_ramp2] = ACTIONS(67),
    [anon_sym_cps] = ACTIONS(67),
    [ts_builtin_sym_end] = ACTIONS(270),
    [sym_identifier] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(270),
    [anon_sym_ramp1] = ACTIONS(67),
    [sym_comment] = ACTIONS(19),
  },
  [77] = {
    [sym_arguments] = STATE(81),
    [anon_sym_PERCENT] = ACTIONS(272),
    [anon_sym_PIPE_PIPE] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [anon_sym_ramp1] = ACTIONS(93),
    [anon_sym_AMP_AMP] = ACTIONS(272),
    [anon_sym_GT_EQ] = ACTIONS(272),
    [sym_number] = ACTIONS(272),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [sym_identifier] = ACTIONS(93),
    [anon_sym_STAR] = ACTIONS(272),
    [anon_sym_LT_LT] = ACTIONS(272),
    [anon_sym_ramp2] = ACTIONS(93),
    [anon_sym_cps] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(274),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(272),
    [anon_sym_LT_EQ] = ACTIONS(272),
    [sym_comment] = ACTIONS(19),
    [ts_builtin_sym_end] = ACTIONS(272),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(272),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_RPAREN] = ACTIONS(272),
    [anon_sym_BANG_EQ] = ACTIONS(272),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_EQ_EQ] = ACTIONS(272),
  },
  [78] = {
    [aux_sym_comparison_operator_repeat1] = STATE(91),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_LT_LT] = ACTIONS(163),
    [anon_sym_ramp2] = ACTIONS(99),
    [anon_sym_cps] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_CARET] = ACTIONS(165),
    [anon_sym_LT_EQ] = ACTIONS(157),
    [anon_sym_PERCENT] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_ramp1] = ACTIONS(99),
    [anon_sym_AMP_AMP] = ACTIONS(155),
    [sym_comment] = ACTIONS(19),
    [anon_sym_GT_EQ] = ACTIONS(157),
    [sym_number] = ACTIONS(276),
    [ts_builtin_sym_end] = ACTIONS(276),
    [anon_sym_AMP] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_GT_GT] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(153),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_EQ_EQ] = ACTIONS(157),
  },
  [79] = {
    [anon_sym_PERCENT] = ACTIONS(278),
    [anon_sym_PIPE_PIPE] = ACTIONS(278),
    [anon_sym_DASH] = ACTIONS(278),
    [anon_sym_ramp1] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(278),
    [anon_sym_GT_EQ] = ACTIONS(278),
    [sym_number] = ACTIONS(278),
    [anon_sym_AMP] = ACTIONS(141),
    [anon_sym_LT] = ACTIONS(141),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_STAR] = ACTIONS(278),
    [anon_sym_LT_LT] = ACTIONS(278),
    [anon_sym_ramp2] = ACTIONS(141),
    [anon_sym_cps] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_CARET] = ACTIONS(278),
    [anon_sym_LT_EQ] = ACTIONS(278),
    [sym_comment] = ACTIONS(19),
    [ts_builtin_sym_end] = ACTIONS(278),
    [anon_sym_SLASH] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(278),
    [anon_sym_PLUS] = ACTIONS(278),
    [anon_sym_RPAREN] = ACTIONS(278),
    [anon_sym_BANG_EQ] = ACTIONS(278),
    [anon_sym_PIPE] = ACTIONS(141),
    [anon_sym_EQ_EQ] = ACTIONS(278),
  },
  [80] = {
    [anon_sym_PERCENT] = ACTIONS(280),
    [anon_sym_PIPE_PIPE] = ACTIONS(280),
    [anon_sym_DASH] = ACTIONS(280),
    [anon_sym_ramp1] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(280),
    [anon_sym_GT_EQ] = ACTIONS(280),
    [sym_number] = ACTIONS(280),
    [anon_sym_AMP] = ACTIONS(145),
    [anon_sym_LT] = ACTIONS(145),
    [sym_identifier] = ACTIONS(145),
    [anon_sym_STAR] = ACTIONS(280),
    [anon_sym_LT_LT] = ACTIONS(280),
    [anon_sym_ramp2] = ACTIONS(145),
    [anon_sym_cps] = ACTIONS(145),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_CARET] = ACTIONS(280),
    [anon_sym_LT_EQ] = ACTIONS(280),
    [sym_comment] = ACTIONS(19),
    [ts_builtin_sym_end] = ACTIONS(280),
    [anon_sym_SLASH] = ACTIONS(145),
    [anon_sym_GT_GT] = ACTIONS(280),
    [anon_sym_PLUS] = ACTIONS(280),
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym_BANG_EQ] = ACTIONS(280),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_EQ_EQ] = ACTIONS(280),
  },
  [81] = {
    [anon_sym_PERCENT] = ACTIONS(282),
    [anon_sym_PIPE_PIPE] = ACTIONS(282),
    [anon_sym_DASH] = ACTIONS(282),
    [anon_sym_ramp1] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(282),
    [anon_sym_GT_EQ] = ACTIONS(282),
    [sym_number] = ACTIONS(282),
    [anon_sym_AMP] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(147),
    [sym_identifier] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(282),
    [anon_sym_LT_LT] = ACTIONS(282),
    [anon_sym_ramp2] = ACTIONS(147),
    [anon_sym_cps] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_CARET] = ACTIONS(282),
    [anon_sym_LT_EQ] = ACTIONS(282),
    [sym_comment] = ACTIONS(19),
    [ts_builtin_sym_end] = ACTIONS(282),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_GT_GT] = ACTIONS(282),
    [anon_sym_PLUS] = ACTIONS(282),
    [anon_sym_RPAREN] = ACTIONS(282),
    [anon_sym_BANG_EQ] = ACTIONS(282),
    [anon_sym_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(282),
  },
  [82] = {
    [sym_comparison_operator] = STATE(93),
    [sym__expressions] = STATE(93),
    [sym_parenthesized] = STATE(93),
    [sym_call_function] = STATE(93),
    [sym_boolean_operator] = STATE(93),
    [sym_binary_operator] = STATE(93),
    [sym_call_macro] = STATE(93),
    [sym_call_macro_function] = STATE(93),
    [sym_unary_operator] = STATE(93),
    [anon_sym_BANG] = ACTIONS(49),
    [sym_number] = ACTIONS(284),
    [anon_sym_TILDE] = ACTIONS(49),
    [sym_function_name] = ACTIONS(53),
    [sym_signal] = ACTIONS(284),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_LPAREN2] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [83] = {
    [sym_comparison_operator] = STATE(94),
    [sym__expressions] = STATE(94),
    [sym_parenthesized] = STATE(94),
    [sym_call_function] = STATE(94),
    [sym_boolean_operator] = STATE(94),
    [sym_binary_operator] = STATE(94),
    [sym_call_macro] = STATE(94),
    [sym_call_macro_function] = STATE(94),
    [sym_unary_operator] = STATE(94),
    [anon_sym_BANG] = ACTIONS(49),
    [sym_number] = ACTIONS(286),
    [anon_sym_TILDE] = ACTIONS(49),
    [sym_function_name] = ACTIONS(53),
    [sym_signal] = ACTIONS(286),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_LPAREN2] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [84] = {
    [sym_comparison_operator] = STATE(95),
    [sym__expressions] = STATE(95),
    [sym_parenthesized] = STATE(95),
    [sym_call_function] = STATE(95),
    [sym_boolean_operator] = STATE(95),
    [sym_binary_operator] = STATE(95),
    [sym_call_macro] = STATE(95),
    [sym_call_macro_function] = STATE(95),
    [sym_unary_operator] = STATE(95),
    [anon_sym_BANG] = ACTIONS(49),
    [sym_number] = ACTIONS(288),
    [anon_sym_TILDE] = ACTIONS(49),
    [sym_function_name] = ACTIONS(53),
    [sym_signal] = ACTIONS(288),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_LPAREN2] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [85] = {
    [sym_comparison_operator] = STATE(96),
    [sym__expressions] = STATE(96),
    [sym_parenthesized] = STATE(96),
    [sym_call_function] = STATE(96),
    [sym_boolean_operator] = STATE(96),
    [sym_binary_operator] = STATE(96),
    [sym_call_macro] = STATE(96),
    [sym_call_macro_function] = STATE(96),
    [sym_unary_operator] = STATE(96),
    [anon_sym_BANG] = ACTIONS(49),
    [sym_number] = ACTIONS(290),
    [anon_sym_TILDE] = ACTIONS(49),
    [sym_function_name] = ACTIONS(53),
    [sym_signal] = ACTIONS(290),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_LPAREN2] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [86] = {
    [sym_comparison_operator] = STATE(97),
    [sym__expressions] = STATE(97),
    [sym_parenthesized] = STATE(97),
    [sym_call_function] = STATE(97),
    [sym_boolean_operator] = STATE(97),
    [sym_binary_operator] = STATE(97),
    [sym_call_macro] = STATE(97),
    [sym_call_macro_function] = STATE(97),
    [sym_unary_operator] = STATE(97),
    [anon_sym_BANG] = ACTIONS(49),
    [sym_number] = ACTIONS(292),
    [anon_sym_TILDE] = ACTIONS(49),
    [sym_function_name] = ACTIONS(53),
    [sym_signal] = ACTIONS(292),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_LPAREN2] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [87] = {
    [sym_comparison_operator] = STATE(98),
    [sym__expressions] = STATE(98),
    [sym_parenthesized] = STATE(98),
    [sym_call_function] = STATE(98),
    [sym_boolean_operator] = STATE(98),
    [sym_binary_operator] = STATE(98),
    [sym_call_macro] = STATE(98),
    [sym_call_macro_function] = STATE(98),
    [sym_unary_operator] = STATE(98),
    [anon_sym_BANG] = ACTIONS(49),
    [sym_number] = ACTIONS(294),
    [anon_sym_TILDE] = ACTIONS(49),
    [sym_function_name] = ACTIONS(53),
    [sym_signal] = ACTIONS(294),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_LPAREN2] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [88] = {
    [sym_comparison_operator] = STATE(99),
    [sym__expressions] = STATE(99),
    [sym_parenthesized] = STATE(99),
    [sym_call_function] = STATE(99),
    [sym_boolean_operator] = STATE(99),
    [sym_binary_operator] = STATE(99),
    [sym_call_macro] = STATE(99),
    [sym_call_macro_function] = STATE(99),
    [sym_unary_operator] = STATE(99),
    [anon_sym_BANG] = ACTIONS(49),
    [sym_number] = ACTIONS(296),
    [anon_sym_TILDE] = ACTIONS(49),
    [sym_function_name] = ACTIONS(53),
    [sym_signal] = ACTIONS(296),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_LPAREN2] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [89] = {
    [sym_comparison_operator] = STATE(100),
    [sym__expressions] = STATE(100),
    [sym_parenthesized] = STATE(100),
    [sym_call_function] = STATE(100),
    [sym_boolean_operator] = STATE(100),
    [sym_binary_operator] = STATE(100),
    [sym_call_macro] = STATE(100),
    [sym_call_macro_function] = STATE(100),
    [sym_unary_operator] = STATE(100),
    [anon_sym_BANG] = ACTIONS(49),
    [sym_number] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(49),
    [sym_function_name] = ACTIONS(53),
    [sym_signal] = ACTIONS(298),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_LPAREN2] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [90] = {
    [sym_comparison_operator] = STATE(101),
    [sym__expressions] = STATE(101),
    [sym_parenthesized] = STATE(101),
    [sym_call_function] = STATE(101),
    [sym_boolean_operator] = STATE(101),
    [sym_binary_operator] = STATE(101),
    [sym_call_macro] = STATE(101),
    [sym_call_macro_function] = STATE(101),
    [sym_unary_operator] = STATE(101),
    [anon_sym_BANG] = ACTIONS(49),
    [sym_number] = ACTIONS(300),
    [anon_sym_TILDE] = ACTIONS(49),
    [sym_function_name] = ACTIONS(53),
    [sym_signal] = ACTIONS(300),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_LPAREN2] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [91] = {
    [aux_sym_comparison_operator_repeat1] = STATE(102),
    [anon_sym_PERCENT] = ACTIONS(302),
    [anon_sym_PIPE_PIPE] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_ramp1] = ACTIONS(195),
    [anon_sym_AMP_AMP] = ACTIONS(302),
    [anon_sym_GT_EQ] = ACTIONS(302),
    [sym_number] = ACTIONS(302),
    [anon_sym_AMP] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(195),
    [sym_identifier] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(302),
    [anon_sym_LT_LT] = ACTIONS(302),
    [anon_sym_ramp2] = ACTIONS(195),
    [anon_sym_cps] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_CARET] = ACTIONS(302),
    [anon_sym_LT_EQ] = ACTIONS(302),
    [sym_comment] = ACTIONS(19),
    [ts_builtin_sym_end] = ACTIONS(302),
    [anon_sym_SLASH] = ACTIONS(195),
    [anon_sym_GT_GT] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(302),
    [anon_sym_BANG_EQ] = ACTIONS(302),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_EQ_EQ] = ACTIONS(302),
  },
  [92] = {
    [anon_sym_PERCENT] = ACTIONS(304),
    [anon_sym_PIPE_PIPE] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [anon_sym_ramp1] = ACTIONS(218),
    [anon_sym_AMP_AMP] = ACTIONS(304),
    [anon_sym_GT_EQ] = ACTIONS(304),
    [sym_number] = ACTIONS(304),
    [anon_sym_AMP] = ACTIONS(218),
    [anon_sym_LT] = ACTIONS(218),
    [sym_identifier] = ACTIONS(218),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_LT_LT] = ACTIONS(304),
    [anon_sym_ramp2] = ACTIONS(218),
    [anon_sym_cps] = ACTIONS(218),
    [anon_sym_GT] = ACTIONS(218),
    [anon_sym_CARET] = ACTIONS(304),
    [anon_sym_LT_EQ] = ACTIONS(304),
    [sym_comment] = ACTIONS(19),
    [ts_builtin_sym_end] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(218),
    [anon_sym_GT_GT] = ACTIONS(304),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_BANG_EQ] = ACTIONS(304),
    [anon_sym_PIPE] = ACTIONS(218),
    [anon_sym_EQ_EQ] = ACTIONS(304),
  },
  [93] = {
    [aux_sym_comparison_operator_repeat1] = STATE(91),
    [anon_sym_PERCENT] = ACTIONS(306),
    [anon_sym_PIPE_PIPE] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_ramp1] = ACTIONS(220),
    [anon_sym_AMP_AMP] = ACTIONS(306),
    [anon_sym_GT_EQ] = ACTIONS(306),
    [sym_number] = ACTIONS(306),
    [anon_sym_AMP] = ACTIONS(220),
    [anon_sym_LT] = ACTIONS(220),
    [sym_identifier] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(306),
    [anon_sym_LT_LT] = ACTIONS(306),
    [anon_sym_ramp2] = ACTIONS(220),
    [anon_sym_cps] = ACTIONS(220),
    [anon_sym_GT] = ACTIONS(220),
    [anon_sym_CARET] = ACTIONS(306),
    [anon_sym_LT_EQ] = ACTIONS(306),
    [sym_comment] = ACTIONS(19),
    [ts_builtin_sym_end] = ACTIONS(306),
    [anon_sym_SLASH] = ACTIONS(220),
    [anon_sym_GT_GT] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(306),
    [anon_sym_BANG_EQ] = ACTIONS(306),
    [anon_sym_PIPE] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(306),
  },
  [94] = {
    [aux_sym_comparison_operator_repeat1] = STATE(91),
    [anon_sym_PERCENT] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_ramp1] = ACTIONS(220),
    [anon_sym_AMP_AMP] = ACTIONS(306),
    [anon_sym_GT_EQ] = ACTIONS(306),
    [sym_number] = ACTIONS(306),
    [anon_sym_AMP] = ACTIONS(220),
    [anon_sym_LT] = ACTIONS(220),
    [sym_identifier] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_LT_LT] = ACTIONS(306),
    [anon_sym_ramp2] = ACTIONS(220),
    [anon_sym_cps] = ACTIONS(220),
    [anon_sym_GT] = ACTIONS(220),
    [anon_sym_CARET] = ACTIONS(306),
    [anon_sym_LT_EQ] = ACTIONS(306),
    [sym_comment] = ACTIONS(19),
    [ts_builtin_sym_end] = ACTIONS(306),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_GT_GT] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(306),
    [anon_sym_BANG_EQ] = ACTIONS(306),
    [anon_sym_PIPE] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(306),
  },
  [95] = {
    [aux_sym_comparison_operator_repeat1] = STATE(91),
    [anon_sym_PERCENT] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_ramp1] = ACTIONS(222),
    [anon_sym_AMP_AMP] = ACTIONS(155),
    [anon_sym_GT_EQ] = ACTIONS(157),
    [sym_number] = ACTIONS(308),
    [anon_sym_AMP] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(161),
    [sym_identifier] = ACTIONS(222),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_LT_LT] = ACTIONS(163),
    [anon_sym_ramp2] = ACTIONS(222),
    [anon_sym_cps] = ACTIONS(222),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_CARET] = ACTIONS(165),
    [anon_sym_LT_EQ] = ACTIONS(157),
    [sym_comment] = ACTIONS(19),
    [ts_builtin_sym_end] = ACTIONS(308),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_GT_GT] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(308),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_EQ_EQ] = ACTIONS(157),
  },
  [96] = {
    [aux_sym_comparison_operator_repeat1] = STATE(91),
    [anon_sym_PERCENT] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_ramp1] = ACTIONS(220),
    [anon_sym_AMP_AMP] = ACTIONS(306),
    [anon_sym_GT_EQ] = ACTIONS(157),
    [sym_number] = ACTIONS(306),
    [anon_sym_AMP] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(161),
    [sym_identifier] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_LT_LT] = ACTIONS(163),
    [anon_sym_ramp2] = ACTIONS(220),
    [anon_sym_cps] = ACTIONS(220),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_CARET] = ACTIONS(306),
    [anon_sym_LT_EQ] = ACTIONS(157),
    [sym_comment] = ACTIONS(19),
    [ts_builtin_sym_end] = ACTIONS(306),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_GT_GT] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(306),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(157),
  },
  [97] = {
    [aux_sym_comparison_operator_repeat1] = STATE(91),
    [anon_sym_PERCENT] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(310),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_ramp1] = ACTIONS(224),
    [anon_sym_AMP_AMP] = ACTIONS(155),
    [anon_sym_GT_EQ] = ACTIONS(157),
    [sym_number] = ACTIONS(310),
    [anon_sym_AMP] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(161),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_LT_LT] = ACTIONS(163),
    [anon_sym_ramp2] = ACTIONS(224),
    [anon_sym_cps] = ACTIONS(224),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_CARET] = ACTIONS(165),
    [anon_sym_LT_EQ] = ACTIONS(157),
    [sym_comment] = ACTIONS(19),
    [ts_builtin_sym_end] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_GT_GT] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(310),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_EQ_EQ] = ACTIONS(157),
  },
  [98] = {
    [aux_sym_comparison_operator_repeat1] = STATE(91),
    [anon_sym_PERCENT] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_ramp1] = ACTIONS(220),
    [anon_sym_AMP_AMP] = ACTIONS(306),
    [anon_sym_GT_EQ] = ACTIONS(306),
    [sym_number] = ACTIONS(306),
    [anon_sym_AMP] = ACTIONS(220),
    [anon_sym_LT] = ACTIONS(220),
    [sym_identifier] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_LT_LT] = ACTIONS(306),
    [anon_sym_ramp2] = ACTIONS(220),
    [anon_sym_cps] = ACTIONS(220),
    [anon_sym_GT] = ACTIONS(220),
    [anon_sym_CARET] = ACTIONS(306),
    [anon_sym_LT_EQ] = ACTIONS(306),
    [sym_comment] = ACTIONS(19),
    [ts_builtin_sym_end] = ACTIONS(306),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_GT_GT] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(306),
    [anon_sym_BANG_EQ] = ACTIONS(306),
    [anon_sym_PIPE] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(306),
  },
  [99] = {
    [aux_sym_comparison_operator_repeat1] = STATE(91),
    [anon_sym_PERCENT] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(310),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_ramp1] = ACTIONS(224),
    [anon_sym_AMP_AMP] = ACTIONS(310),
    [anon_sym_GT_EQ] = ACTIONS(157),
    [sym_number] = ACTIONS(310),
    [anon_sym_AMP] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(161),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_LT_LT] = ACTIONS(163),
    [anon_sym_ramp2] = ACTIONS(224),
    [anon_sym_cps] = ACTIONS(224),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_CARET] = ACTIONS(165),
    [anon_sym_LT_EQ] = ACTIONS(157),
    [sym_comment] = ACTIONS(19),
    [ts_builtin_sym_end] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_GT_GT] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(310),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_EQ_EQ] = ACTIONS(157),
  },
  [100] = {
    [aux_sym_comparison_operator_repeat1] = STATE(91),
    [anon_sym_PERCENT] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_ramp1] = ACTIONS(220),
    [anon_sym_AMP_AMP] = ACTIONS(306),
    [anon_sym_GT_EQ] = ACTIONS(157),
    [sym_number] = ACTIONS(306),
    [anon_sym_AMP] = ACTIONS(220),
    [anon_sym_LT] = ACTIONS(161),
    [sym_identifier] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_LT_LT] = ACTIONS(163),
    [anon_sym_ramp2] = ACTIONS(220),
    [anon_sym_cps] = ACTIONS(220),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_CARET] = ACTIONS(306),
    [anon_sym_LT_EQ] = ACTIONS(157),
    [sym_comment] = ACTIONS(19),
    [ts_builtin_sym_end] = ACTIONS(306),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_GT_GT] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(306),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(157),
  },
  [101] = {
    [aux_sym_comparison_operator_repeat1] = STATE(91),
    [anon_sym_PERCENT] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_ramp1] = ACTIONS(220),
    [anon_sym_AMP_AMP] = ACTIONS(306),
    [anon_sym_GT_EQ] = ACTIONS(157),
    [sym_number] = ACTIONS(306),
    [anon_sym_AMP] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(161),
    [sym_identifier] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_LT_LT] = ACTIONS(163),
    [anon_sym_ramp2] = ACTIONS(220),
    [anon_sym_cps] = ACTIONS(220),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_CARET] = ACTIONS(165),
    [anon_sym_LT_EQ] = ACTIONS(157),
    [sym_comment] = ACTIONS(19),
    [ts_builtin_sym_end] = ACTIONS(306),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_GT_GT] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(306),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(157),
  },
  [102] = {
    [aux_sym_comparison_operator_repeat1] = STATE(102),
    [anon_sym_PERCENT] = ACTIONS(308),
    [anon_sym_PIPE_PIPE] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_ramp1] = ACTIONS(222),
    [anon_sym_AMP_AMP] = ACTIONS(308),
    [anon_sym_GT_EQ] = ACTIONS(312),
    [sym_number] = ACTIONS(308),
    [anon_sym_AMP] = ACTIONS(222),
    [anon_sym_LT] = ACTIONS(315),
    [sym_identifier] = ACTIONS(222),
    [anon_sym_STAR] = ACTIONS(308),
    [anon_sym_LT_LT] = ACTIONS(308),
    [anon_sym_ramp2] = ACTIONS(222),
    [anon_sym_cps] = ACTIONS(222),
    [anon_sym_GT] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(308),
    [anon_sym_LT_EQ] = ACTIONS(312),
    [sym_comment] = ACTIONS(19),
    [ts_builtin_sym_end] = ACTIONS(308),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_GT_GT] = ACTIONS(308),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_RPAREN] = ACTIONS(308),
    [anon_sym_BANG_EQ] = ACTIONS(312),
    [anon_sym_PIPE] = ACTIONS(222),
    [anon_sym_EQ_EQ] = ACTIONS(312),
  },
  [103] = {
    [anon_sym_PERCENT] = ACTIONS(318),
    [anon_sym_PIPE_PIPE] = ACTIONS(318),
    [anon_sym_DASH] = ACTIONS(318),
    [anon_sym_ramp1] = ACTIONS(236),
    [anon_sym_AMP_AMP] = ACTIONS(318),
    [anon_sym_GT_EQ] = ACTIONS(318),
    [sym_number] = ACTIONS(318),
    [anon_sym_AMP] = ACTIONS(236),
    [anon_sym_LT] = ACTIONS(236),
    [sym_identifier] = ACTIONS(236),
    [anon_sym_STAR] = ACTIONS(318),
    [anon_sym_LT_LT] = ACTIONS(318),
    [anon_sym_ramp2] = ACTIONS(236),
    [anon_sym_cps] = ACTIONS(236),
    [anon_sym_GT] = ACTIONS(236),
    [anon_sym_CARET] = ACTIONS(318),
    [anon_sym_LT_EQ] = ACTIONS(318),
    [sym_comment] = ACTIONS(19),
    [ts_builtin_sym_end] = ACTIONS(318),
    [anon_sym_SLASH] = ACTIONS(236),
    [anon_sym_GT_GT] = ACTIONS(318),
    [anon_sym_PLUS] = ACTIONS(318),
    [anon_sym_RPAREN] = ACTIONS(318),
    [anon_sym_BANG_EQ] = ACTIONS(318),
    [anon_sym_PIPE] = ACTIONS(236),
    [anon_sym_EQ_EQ] = ACTIONS(318),
  },
  [104] = {
    [anon_sym_PERCENT] = ACTIONS(320),
    [anon_sym_PIPE_PIPE] = ACTIONS(320),
    [anon_sym_DASH] = ACTIONS(320),
    [anon_sym_ramp1] = ACTIONS(261),
    [anon_sym_AMP_AMP] = ACTIONS(320),
    [anon_sym_GT_EQ] = ACTIONS(320),
    [sym_number] = ACTIONS(320),
    [anon_sym_AMP] = ACTIONS(261),
    [anon_sym_LT] = ACTIONS(261),
    [sym_identifier] = ACTIONS(261),
    [anon_sym_STAR] = ACTIONS(320),
    [anon_sym_LT_LT] = ACTIONS(320),
    [anon_sym_ramp2] = ACTIONS(261),
    [anon_sym_cps] = ACTIONS(261),
    [anon_sym_GT] = ACTIONS(261),
    [anon_sym_CARET] = ACTIONS(320),
    [anon_sym_LT_EQ] = ACTIONS(320),
    [sym_comment] = ACTIONS(19),
    [ts_builtin_sym_end] = ACTIONS(320),
    [anon_sym_SLASH] = ACTIONS(261),
    [anon_sym_GT_GT] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(320),
    [anon_sym_RPAREN] = ACTIONS(320),
    [anon_sym_BANG_EQ] = ACTIONS(320),
    [anon_sym_PIPE] = ACTIONS(261),
    [anon_sym_EQ_EQ] = ACTIONS(320),
  },
  [105] = {
    [sym_number] = ACTIONS(322),
    [sym_comment] = ACTIONS(19),
  },
  [106] = {
    [sym_call_macro] = STATE(79),
    [sym_call_macro_function] = STATE(79),
    [sym_parenthesized] = STATE(79),
    [sym_call_function] = STATE(79),
    [sym_number] = ACTIONS(324),
    [sym_function_name] = ACTIONS(53),
    [sym_signal] = ACTIONS(324),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_LPAREN2] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
  },
  [107] = {
    [sym_arguments] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(274),
    [sym_comment] = ACTIONS(19),
  },
  [108] = {
    [aux_sym_comparison_operator_repeat1] = STATE(91),
    [anon_sym_PERCENT] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_AMP_AMP] = ACTIONS(155),
    [anon_sym_GT_EQ] = ACTIONS(157),
    [anon_sym_AMP] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_LT_LT] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_CARET] = ACTIONS(165),
    [anon_sym_LT_EQ] = ACTIONS(157),
    [sym_comment] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_GT_GT] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(326),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_EQ_EQ] = ACTIONS(157),
  },
  [109] = {
    [sym__expressions] = STATE(52),
    [sym_parenthesized] = STATE(52),
    [sym_call_function] = STATE(52),
    [aux_sym_arguments_repeat2] = STATE(110),
    [sym_unary_operator] = STATE(52),
    [sym_comparison_operator] = STATE(52),
    [sym__delimiter] = STATE(69),
    [aux_sym_arguments_repeat1] = STATE(70),
    [sym_boolean_operator] = STATE(52),
    [sym_binary_operator] = STATE(52),
    [sym_call_macro] = STATE(52),
    [sym_call_macro_function] = STATE(52),
    [anon_sym_BANG] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(328),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_BSLASH_COMMA] = ACTIONS(214),
  },
  [110] = {
    [aux_sym_arguments_repeat2] = STATE(74),
    [sym__delimiter] = STATE(69),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_BSLASH_COMMA] = ACTIONS(255),
    [sym_comment] = ACTIONS(19),
  },
  [111] = {
    [sym_comparison_operator] = STATE(108),
    [sym__expressions] = STATE(108),
    [sym_parenthesized] = STATE(108),
    [sym_call_function] = STATE(108),
    [sym_boolean_operator] = STATE(108),
    [sym_binary_operator] = STATE(108),
    [sym_call_macro] = STATE(108),
    [sym_call_macro_function] = STATE(108),
    [sym_unary_operator] = STATE(108),
    [anon_sym_BANG] = ACTIONS(49),
    [sym_number] = ACTIONS(332),
    [anon_sym_TILDE] = ACTIONS(49),
    [sym_function_name] = ACTIONS(53),
    [sym_signal] = ACTIONS(332),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_LPAREN2] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [112] = {
    [sym__expressions] = STATE(52),
    [sym_parenthesized] = STATE(52),
    [sym_call_function] = STATE(52),
    [sym_unary_operator] = STATE(52),
    [sym_comparison_operator] = STATE(52),
    [aux_sym_arguments_repeat1] = STATE(109),
    [sym_boolean_operator] = STATE(52),
    [sym_binary_operator] = STATE(52),
    [sym_call_macro] = STATE(52),
    [sym_call_macro_function] = STATE(52),
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(143),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(4),
  [11] = {.count = 1, .reusable = false}, SHIFT(5),
  [13] = {.count = 1, .reusable = false}, SHIFT(2),
  [15] = {.count = 1, .reusable = true}, SHIFT(6),
  [17] = {.count = 1, .reusable = false}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, SHIFT(12),
  [25] = {.count = 1, .reusable = false}, REDUCE(sym_signed_number, 1),
  [27] = {.count = 1, .reusable = true}, SHIFT(14),
  [29] = {.count = 1, .reusable = true}, SHIFT(15),
  [31] = {.count = 1, .reusable = true}, SHIFT(16),
  [33] = {.count = 1, .reusable = true}, SHIFT(17),
  [35] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [39] = {.count = 1, .reusable = false}, SHIFT(19),
  [41] = {.count = 1, .reusable = false}, SHIFT(24),
  [43] = {.count = 1, .reusable = false}, SHIFT(20),
  [45] = {.count = 1, .reusable = false}, SHIFT(21),
  [47] = {.count = 1, .reusable = false}, SHIFT(22),
  [49] = {.count = 1, .reusable = false}, SHIFT(106),
  [51] = {.count = 1, .reusable = false}, SHIFT(78),
  [53] = {.count = 1, .reusable = false}, SHIFT(107),
  [55] = {.count = 1, .reusable = false}, SHIFT(77),
  [57] = {.count = 1, .reusable = false}, SHIFT(111),
  [59] = {.count = 1, .reusable = true}, SHIFT(26),
  [61] = {.count = 1, .reusable = true}, SHIFT(27),
  [63] = {.count = 1, .reusable = true}, SHIFT(105),
  [65] = {.count = 1, .reusable = true}, SHIFT(75),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_signed_number, 2),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [72] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [75] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [78] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [80] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [86] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [89] = {.count = 1, .reusable = false}, SHIFT(31),
  [91] = {.count = 1, .reusable = true}, SHIFT(32),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_call_macro, 1),
  [95] = {.count = 1, .reusable = false}, SHIFT(32),
  [97] = {.count = 1, .reusable = false}, SHIFT(35),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_expression_statement, 1),
  [101] = {.count = 1, .reusable = false}, SHIFT(37),
  [103] = {.count = 1, .reusable = false}, SHIFT(38),
  [105] = {.count = 1, .reusable = false}, SHIFT(39),
  [107] = {.count = 1, .reusable = false}, SHIFT(40),
  [109] = {.count = 1, .reusable = false}, SHIFT(41),
  [111] = {.count = 1, .reusable = false}, SHIFT(42),
  [113] = {.count = 1, .reusable = false}, SHIFT(43),
  [115] = {.count = 1, .reusable = false}, SHIFT(44),
  [117] = {.count = 1, .reusable = false}, SHIFT(45),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_macro_statement, 3),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_macro_statement, 3),
  [123] = {.count = 1, .reusable = true}, SHIFT(49),
  [125] = {.count = 1, .reusable = true}, SHIFT(48),
  [127] = {.count = 1, .reusable = true}, SHIFT(47),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_ramp2_statement, 3),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_ramp2_statement, 3),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_cps_statement, 3),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_cps_statement, 3),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_ramp1_statement, 3),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_ramp1_statement, 3),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_unary_operator, 2),
  [143] = {.count = 1, .reusable = false}, SHIFT(52),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_call_function, 2),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_call_macro_function, 2),
  [149] = {.count = 1, .reusable = true}, SHIFT(82),
  [151] = {.count = 1, .reusable = true}, SHIFT(86),
  [153] = {.count = 1, .reusable = true}, SHIFT(87),
  [155] = {.count = 1, .reusable = true}, SHIFT(88),
  [157] = {.count = 1, .reusable = true}, SHIFT(84),
  [159] = {.count = 1, .reusable = false}, SHIFT(89),
  [161] = {.count = 1, .reusable = false}, SHIFT(84),
  [163] = {.count = 1, .reusable = true}, SHIFT(83),
  [165] = {.count = 1, .reusable = true}, SHIFT(85),
  [167] = {.count = 1, .reusable = false}, SHIFT(82),
  [169] = {.count = 1, .reusable = true}, SHIFT(54),
  [171] = {.count = 1, .reusable = false}, SHIFT(90),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement, 3),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_default_statement, 3),
  [177] = {.count = 1, .reusable = false}, SHIFT(55),
  [179] = {.count = 1, .reusable = false}, SHIFT(56),
  [181] = {.count = 1, .reusable = false}, SHIFT(57),
  [183] = {.count = 1, .reusable = false}, SHIFT(58),
  [185] = {.count = 1, .reusable = false}, SHIFT(59),
  [187] = {.count = 1, .reusable = false}, SHIFT(60),
  [189] = {.count = 1, .reusable = false}, SHIFT(61),
  [191] = {.count = 1, .reusable = false}, SHIFT(62),
  [193] = {.count = 1, .reusable = false}, SHIFT(63),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_comparison_operator, 2),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_macro_arguments, 3),
  [199] = {.count = 1, .reusable = true}, REDUCE(aux_sym_macro_arguments_repeat1, 2),
  [201] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_arguments_repeat1, 2), SHIFT_REPEAT(48),
  [204] = {.count = 1, .reusable = true}, SHIFT(65),
  [206] = {.count = 1, .reusable = true}, SHIFT(66),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_macro_function_statement, 4),
  [210] = {.count = 1, .reusable = false}, REDUCE(sym_macro_function_statement, 4),
  [212] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 1),
  [214] = {.count = 1, .reusable = false}, SHIFT(69),
  [216] = {.count = 1, .reusable = false}, SHIFT(68),
  [218] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized, 3),
  [220] = {.count = 1, .reusable = false}, REDUCE(sym_binary_operator, 3),
  [222] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [224] = {.count = 1, .reusable = false}, REDUCE(sym_boolean_operator, 3),
  [226] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(39),
  [229] = {.count = 1, .reusable = true}, REDUCE(aux_sym_macro_arguments_repeat2, 2),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_macro_arguments, 4),
  [233] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_arguments_repeat2, 2), SHIFT_REPEAT(49),
  [236] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [238] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(19),
  [241] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(52),
  [244] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(20),
  [247] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2),
  [249] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(21),
  [252] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(22),
  [255] = {.count = 1, .reusable = true}, SHIFT(69),
  [257] = {.count = 1, .reusable = true}, SHIFT(73),
  [259] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arguments_repeat2, 2),
  [261] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(69),
  [266] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_signed_number, 1),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_signed_number, 2),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym_call_macro, 1),
  [274] = {.count = 1, .reusable = true}, SHIFT(112),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_unary_operator, 2),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_call_function, 2),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_call_macro_function, 2),
  [284] = {.count = 1, .reusable = false}, SHIFT(93),
  [286] = {.count = 1, .reusable = false}, SHIFT(94),
  [288] = {.count = 1, .reusable = false}, SHIFT(95),
  [290] = {.count = 1, .reusable = false}, SHIFT(96),
  [292] = {.count = 1, .reusable = false}, SHIFT(97),
  [294] = {.count = 1, .reusable = false}, SHIFT(98),
  [296] = {.count = 1, .reusable = false}, SHIFT(99),
  [298] = {.count = 1, .reusable = false}, SHIFT(100),
  [300] = {.count = 1, .reusable = false}, SHIFT(101),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_comparison_operator, 2),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized, 3),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_binary_operator, 3),
  [308] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_operator, 3),
  [312] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(84),
  [315] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(84),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [322] = {.count = 1, .reusable = true}, SHIFT(76),
  [324] = {.count = 1, .reusable = false}, SHIFT(79),
  [326] = {.count = 1, .reusable = true}, SHIFT(92),
  [328] = {.count = 1, .reusable = false}, SHIFT(103),
  [330] = {.count = 1, .reusable = true}, SHIFT(104),
  [332] = {.count = 1, .reusable = false}, SHIFT(108),
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
