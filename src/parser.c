#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 106
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 3
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_identifier = 1,
  anon_sym_cps = 2,
  anon_sym_COLON = 3,
  anon_sym_DASH = 4,
  anon_sym_ramp1 = 5,
  anon_sym_ramp2 = 6,
  anon_sym_EQ = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_AMP_AMP = 10,
  anon_sym_PIPE_PIPE = 11,
  anon_sym_STAR = 12,
  anon_sym_SLASH = 13,
  anon_sym_PERCENT = 14,
  anon_sym_PLUS = 15,
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
  aux_sym_program_repeat1 = 55,
  aux_sym_macro_arguments_repeat1 = 56,
  aux_sym_macro_arguments_repeat2 = 57,
  aux_sym_comparison_operator_repeat1 = 58,
  aux_sym_arguments_repeat1 = 59,
  aux_sym_arguments_repeat2 = 60,
  alias_sym_ramp2 = 61,
  alias_sym_cps = 62,
  alias_sym_ramp1 = 63,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "name",
  [anon_sym_cps] = "cps",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH] = "-",
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
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_macro_arguments_repeat1] = "macro_arguments_repeat1",
  [aux_sym_macro_arguments_repeat2] = "macro_arguments_repeat2",
  [aux_sym_comparison_operator_repeat1] = "comparison_operator_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_repeat2] = "arguments_repeat2",
  [alias_sym_ramp2] = "ramp2",
  [alias_sym_cps] = "cps",
  [alias_sym_ramp1] = "ramp1",
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
  [anon_sym_DASH] = {
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
  [alias_sym_ramp2] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_cps] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_ramp1] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_cps,
    [1] = alias_sym_ramp1,
    [2] = alias_sym_ramp2,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '&') ADVANCE(31);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(20);
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
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '&') ADVANCE(31);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(26);
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
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '&') ADVANCE(31);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(20);
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
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '&') ADVANCE(31);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(26);
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
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(19);
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
      if (lookahead == '=') ADVANCE(19);
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
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(52);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(23);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(24);
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
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
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
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 3},
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
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
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
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_BANG] = ACTIONS(1),
    [sym_function_name] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_ramp2] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_ramp1] = ACTIONS(1),
    [anon_sym_cps] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_signal] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_BSLASH_COMMA] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_macro_function_statement] = STATE(6),
    [sym_cps_statement] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [sym_ramp_statement] = STATE(6),
    [sym_default_statement] = STATE(6),
    [sym_program] = STATE(7),
    [sym_macro_statement] = STATE(6),
    [anon_sym_ramp2] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [anon_sym_ramp1] = ACTIONS(5),
    [anon_sym_cps] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [2] = {
    [anon_sym_COLON] = ACTIONS(17),
    [sym_comment] = ACTIONS(15),
  },
  [3] = {
    [sym_macro_arguments] = STATE(11),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_comment] = ACTIONS(15),
  },
  [4] = {
    [sym_parenthesized] = STATE(16),
    [sym__expressions] = STATE(16),
    [sym_boolean_operator] = STATE(16),
    [sym_call_function] = STATE(16),
    [sym_call_macro] = STATE(16),
    [sym_binary_operator] = STATE(16),
    [sym_unary_operator] = STATE(16),
    [sym_call_macro_function] = STATE(16),
    [sym_expression_statement] = STATE(17),
    [sym_comparison_operator] = STATE(16),
    [anon_sym_BANG] = ACTIONS(23),
    [sym_number] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(23),
    [sym_function_name] = ACTIONS(27),
    [sym_signal] = ACTIONS(25),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_LPAREN2] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [anon_sym_COLON] = ACTIONS(33),
    [sym_comment] = ACTIONS(15),
  },
  [6] = {
    [sym_macro_function_statement] = STATE(19),
    [sym_cps_statement] = STATE(19),
    [sym_ramp_statement] = STATE(19),
    [aux_sym_program_repeat1] = STATE(19),
    [sym_default_statement] = STATE(19),
    [sym_macro_statement] = STATE(19),
    [anon_sym_ramp2] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_number] = ACTIONS(11),
    [anon_sym_ramp1] = ACTIONS(5),
    [anon_sym_cps] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_comment] = ACTIONS(15),
  },
  [8] = {
    [sym_parenthesized] = STATE(72),
    [sym__expressions] = STATE(72),
    [sym_boolean_operator] = STATE(72),
    [sym_call_function] = STATE(72),
    [sym_call_macro] = STATE(72),
    [sym_binary_operator] = STATE(72),
    [sym_unary_operator] = STATE(72),
    [sym_call_macro_function] = STATE(72),
    [sym_expression_statement] = STATE(20),
    [sym_comparison_operator] = STATE(72),
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
  [9] = {
    [sym_parenthesized] = STATE(72),
    [sym__expressions] = STATE(72),
    [sym_boolean_operator] = STATE(72),
    [sym_call_function] = STATE(72),
    [sym_call_macro] = STATE(72),
    [sym_binary_operator] = STATE(72),
    [sym_unary_operator] = STATE(72),
    [sym_call_macro_function] = STATE(72),
    [sym_expression_statement] = STATE(21),
    [sym_comparison_operator] = STATE(72),
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
  [10] = {
    [aux_sym_macro_arguments_repeat1] = STATE(22),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
  },
  [11] = {
    [anon_sym_EQ] = ACTIONS(51),
    [sym_comment] = ACTIONS(15),
  },
  [12] = {
    [sym_parenthesized] = STATE(24),
    [sym__expressions] = STATE(24),
    [sym_boolean_operator] = STATE(24),
    [sym_call_function] = STATE(24),
    [sym_call_macro] = STATE(24),
    [sym_binary_operator] = STATE(24),
    [sym_unary_operator] = STATE(24),
    [sym_call_macro_function] = STATE(24),
    [sym_comparison_operator] = STATE(24),
    [anon_sym_BANG] = ACTIONS(23),
    [sym_number] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(23),
    [sym_function_name] = ACTIONS(27),
    [sym_signal] = ACTIONS(53),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_LPAREN2] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_arguments] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym_comment] = ACTIONS(15),
  },
  [14] = {
    [sym_arguments] = STATE(27),
    [anon_sym_BANG] = ACTIONS(57),
    [sym_function_name] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_AMP_AMP] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_GT_EQ] = ACTIONS(57),
    [sym_number] = ACTIONS(57),
    [anon_sym_TILDE] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(57),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_PIPE_PIPE] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [sym_signal] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_LT_EQ] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_GT_GT] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_LPAREN2] = ACTIONS(57),
    [anon_sym_BANG_EQ] = ACTIONS(57),
    [anon_sym_BSLASH_COMMA] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_EQ_EQ] = ACTIONS(57),
  },
  [15] = {
    [sym_parenthesized] = STATE(28),
    [sym__expressions] = STATE(28),
    [sym_boolean_operator] = STATE(28),
    [sym_call_function] = STATE(28),
    [sym_call_macro] = STATE(28),
    [sym_binary_operator] = STATE(28),
    [sym_unary_operator] = STATE(28),
    [sym_call_macro_function] = STATE(28),
    [sym_comparison_operator] = STATE(28),
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(61),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(67),
    [sym_function_name] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(69),
    [sym_signal] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_LT_EQ] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym_AMP_AMP] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [sym_number] = ACTIONS(63),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(73),
    [sym_identifier] = ACTIONS(63),
    [anon_sym_LPAREN2] = ACTIONS(63),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(81),
    [anon_sym_EQ_EQ] = ACTIONS(69),
  },
  [17] = {
    [sym_parenthesized] = STATE(72),
    [sym__expressions] = STATE(72),
    [sym_boolean_operator] = STATE(72),
    [sym_call_function] = STATE(72),
    [sym_call_macro] = STATE(72),
    [sym_binary_operator] = STATE(72),
    [sym_unary_operator] = STATE(72),
    [sym_call_macro_function] = STATE(72),
    [sym_expression_statement] = STATE(39),
    [sym_comparison_operator] = STATE(72),
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
  [18] = {
    [sym_comment] = ACTIONS(15),
    [sym_number] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
  },
  [19] = {
    [sym_macro_function_statement] = STATE(19),
    [sym_cps_statement] = STATE(19),
    [sym_ramp_statement] = STATE(19),
    [aux_sym_program_repeat1] = STATE(19),
    [sym_default_statement] = STATE(19),
    [sym_macro_statement] = STATE(19),
    [anon_sym_ramp2] = ACTIONS(87),
    [sym_identifier] = ACTIONS(90),
    [sym_number] = ACTIONS(93),
    [anon_sym_ramp1] = ACTIONS(87),
    [anon_sym_cps] = ACTIONS(96),
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_comment] = ACTIONS(15),
  },
  [20] = {
    [anon_sym_ramp2] = ACTIONS(101),
    [sym_identifier] = ACTIONS(101),
    [sym_number] = ACTIONS(103),
    [anon_sym_ramp1] = ACTIONS(101),
    [anon_sym_cps] = ACTIONS(101),
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_comment] = ACTIONS(15),
  },
  [21] = {
    [anon_sym_ramp2] = ACTIONS(105),
    [sym_identifier] = ACTIONS(105),
    [sym_number] = ACTIONS(107),
    [anon_sym_ramp1] = ACTIONS(105),
    [anon_sym_cps] = ACTIONS(105),
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_comment] = ACTIONS(15),
  },
  [22] = {
    [aux_sym_macro_arguments_repeat2] = STATE(43),
    [sym__delimiter] = STATE(44),
    [aux_sym_macro_arguments_repeat1] = STATE(45),
    [anon_sym_COMMA] = ACTIONS(109),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_BSLASH_COMMA] = ACTIONS(109),
    [sym_comment] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(113),
  },
  [23] = {
    [sym_parenthesized] = STATE(72),
    [sym__expressions] = STATE(72),
    [sym_boolean_operator] = STATE(72),
    [sym_call_function] = STATE(72),
    [sym_call_macro] = STATE(72),
    [sym_binary_operator] = STATE(72),
    [sym_unary_operator] = STATE(72),
    [sym_call_macro_function] = STATE(72),
    [sym_expression_statement] = STATE(46),
    [sym_comparison_operator] = STATE(72),
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
  [24] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_BANG] = ACTIONS(115),
    [sym_function_name] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym_AMP_AMP] = ACTIONS(115),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(115),
    [sym_number] = ACTIONS(115),
    [anon_sym_TILDE] = ACTIONS(115),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(115),
    [sym_identifier] = ACTIONS(115),
    [anon_sym_PIPE_PIPE] = ACTIONS(115),
    [anon_sym_LT_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [sym_signal] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_CARET] = ACTIONS(115),
    [anon_sym_LT_EQ] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_PERCENT] = ACTIONS(115),
    [anon_sym_LPAREN2] = ACTIONS(115),
    [anon_sym_BANG_EQ] = ACTIONS(115),
    [anon_sym_BSLASH_COMMA] = ACTIONS(115),
    [anon_sym_PIPE] = ACTIONS(115),
    [anon_sym_EQ_EQ] = ACTIONS(115),
  },
  [25] = {
    [sym__expressions] = STATE(47),
    [sym_boolean_operator] = STATE(47),
    [sym_call_function] = STATE(47),
    [sym_call_macro] = STATE(47),
    [sym_comparison_operator] = STATE(47),
    [sym_parenthesized] = STATE(47),
    [sym_binary_operator] = STATE(47),
    [sym_unary_operator] = STATE(47),
    [sym_call_macro_function] = STATE(47),
    [aux_sym_arguments_repeat1] = STATE(48),
    [anon_sym_BANG] = ACTIONS(23),
    [sym_number] = ACTIONS(117),
    [anon_sym_TILDE] = ACTIONS(23),
    [sym_function_name] = ACTIONS(27),
    [sym_signal] = ACTIONS(117),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_LPAREN2] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [anon_sym_BANG] = ACTIONS(119),
    [sym_function_name] = ACTIONS(119),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [sym_number] = ACTIONS(119),
    [anon_sym_TILDE] = ACTIONS(119),
    [anon_sym_AMP] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(119),
    [sym_identifier] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_LT_LT] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(119),
    [sym_signal] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_CARET] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(119),
    [anon_sym_GT_GT] = ACTIONS(119),
    [anon_sym_PERCENT] = ACTIONS(119),
    [anon_sym_LPAREN2] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_BSLASH_COMMA] = ACTIONS(119),
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(119),
  },
  [27] = {
    [anon_sym_BANG] = ACTIONS(121),
    [sym_function_name] = ACTIONS(121),
    [anon_sym_SLASH] = ACTIONS(121),
    [anon_sym_AMP_AMP] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_GT_EQ] = ACTIONS(121),
    [sym_number] = ACTIONS(121),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_AMP] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(121),
    [sym_identifier] = ACTIONS(121),
    [anon_sym_PIPE_PIPE] = ACTIONS(121),
    [anon_sym_LT_LT] = ACTIONS(121),
    [anon_sym_GT] = ACTIONS(121),
    [sym_signal] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_CARET] = ACTIONS(121),
    [anon_sym_LT_EQ] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(121),
    [anon_sym_GT_GT] = ACTIONS(121),
    [anon_sym_PERCENT] = ACTIONS(121),
    [anon_sym_LPAREN2] = ACTIONS(121),
    [anon_sym_BANG_EQ] = ACTIONS(121),
    [anon_sym_BSLASH_COMMA] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_EQ_EQ] = ACTIONS(121),
  },
  [28] = {
    [aux_sym_comparison_operator_repeat1] = STATE(85),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_AMP_AMP] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_GT_EQ] = ACTIONS(131),
    [anon_sym_AMP] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_LT_LT] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [sym_comment] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_EQ_EQ] = ACTIONS(131),
  },
  [29] = {
    [sym_parenthesized] = STATE(50),
    [sym__expressions] = STATE(50),
    [sym_boolean_operator] = STATE(50),
    [sym_call_function] = STATE(50),
    [sym_call_macro] = STATE(50),
    [sym_binary_operator] = STATE(50),
    [sym_unary_operator] = STATE(50),
    [sym_call_macro_function] = STATE(50),
    [sym_comparison_operator] = STATE(50),
    [anon_sym_BANG] = ACTIONS(23),
    [sym_number] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(23),
    [sym_function_name] = ACTIONS(27),
    [sym_signal] = ACTIONS(147),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_LPAREN2] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym_parenthesized] = STATE(51),
    [sym__expressions] = STATE(51),
    [sym_boolean_operator] = STATE(51),
    [sym_call_function] = STATE(51),
    [sym_call_macro] = STATE(51),
    [sym_binary_operator] = STATE(51),
    [sym_unary_operator] = STATE(51),
    [sym_call_macro_function] = STATE(51),
    [sym_comparison_operator] = STATE(51),
    [anon_sym_BANG] = ACTIONS(23),
    [sym_number] = ACTIONS(149),
    [anon_sym_TILDE] = ACTIONS(23),
    [sym_function_name] = ACTIONS(27),
    [sym_signal] = ACTIONS(149),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_LPAREN2] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym_parenthesized] = STATE(52),
    [sym__expressions] = STATE(52),
    [sym_boolean_operator] = STATE(52),
    [sym_call_function] = STATE(52),
    [sym_call_macro] = STATE(52),
    [sym_binary_operator] = STATE(52),
    [sym_unary_operator] = STATE(52),
    [sym_call_macro_function] = STATE(52),
    [sym_comparison_operator] = STATE(52),
    [anon_sym_BANG] = ACTIONS(23),
    [sym_number] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(23),
    [sym_function_name] = ACTIONS(27),
    [sym_signal] = ACTIONS(151),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_LPAREN2] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym_parenthesized] = STATE(53),
    [sym__expressions] = STATE(53),
    [sym_boolean_operator] = STATE(53),
    [sym_call_function] = STATE(53),
    [sym_call_macro] = STATE(53),
    [sym_binary_operator] = STATE(53),
    [sym_unary_operator] = STATE(53),
    [sym_call_macro_function] = STATE(53),
    [sym_comparison_operator] = STATE(53),
    [anon_sym_BANG] = ACTIONS(23),
    [sym_number] = ACTIONS(153),
    [anon_sym_TILDE] = ACTIONS(23),
    [sym_function_name] = ACTIONS(27),
    [sym_signal] = ACTIONS(153),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_LPAREN2] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym_parenthesized] = STATE(54),
    [sym__expressions] = STATE(54),
    [sym_boolean_operator] = STATE(54),
    [sym_call_function] = STATE(54),
    [sym_call_macro] = STATE(54),
    [sym_binary_operator] = STATE(54),
    [sym_unary_operator] = STATE(54),
    [sym_call_macro_function] = STATE(54),
    [sym_comparison_operator] = STATE(54),
    [anon_sym_BANG] = ACTIONS(23),
    [sym_number] = ACTIONS(155),
    [anon_sym_TILDE] = ACTIONS(23),
    [sym_function_name] = ACTIONS(27),
    [sym_signal] = ACTIONS(155),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_LPAREN2] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym_parenthesized] = STATE(55),
    [sym__expressions] = STATE(55),
    [sym_boolean_operator] = STATE(55),
    [sym_call_function] = STATE(55),
    [sym_call_macro] = STATE(55),
    [sym_binary_operator] = STATE(55),
    [sym_unary_operator] = STATE(55),
    [sym_call_macro_function] = STATE(55),
    [sym_comparison_operator] = STATE(55),
    [anon_sym_BANG] = ACTIONS(23),
    [sym_number] = ACTIONS(157),
    [anon_sym_TILDE] = ACTIONS(23),
    [sym_function_name] = ACTIONS(27),
    [sym_signal] = ACTIONS(157),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_LPAREN2] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym_parenthesized] = STATE(56),
    [sym__expressions] = STATE(56),
    [sym_boolean_operator] = STATE(56),
    [sym_call_function] = STATE(56),
    [sym_call_macro] = STATE(56),
    [sym_binary_operator] = STATE(56),
    [sym_unary_operator] = STATE(56),
    [sym_call_macro_function] = STATE(56),
    [sym_comparison_operator] = STATE(56),
    [anon_sym_BANG] = ACTIONS(23),
    [sym_number] = ACTIONS(159),
    [anon_sym_TILDE] = ACTIONS(23),
    [sym_function_name] = ACTIONS(27),
    [sym_signal] = ACTIONS(159),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_LPAREN2] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [sym_parenthesized] = STATE(57),
    [sym__expressions] = STATE(57),
    [sym_boolean_operator] = STATE(57),
    [sym_call_function] = STATE(57),
    [sym_call_macro] = STATE(57),
    [sym_binary_operator] = STATE(57),
    [sym_unary_operator] = STATE(57),
    [sym_call_macro_function] = STATE(57),
    [sym_comparison_operator] = STATE(57),
    [anon_sym_BANG] = ACTIONS(23),
    [sym_number] = ACTIONS(161),
    [anon_sym_TILDE] = ACTIONS(23),
    [sym_function_name] = ACTIONS(27),
    [sym_signal] = ACTIONS(161),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_LPAREN2] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [sym_parenthesized] = STATE(58),
    [sym__expressions] = STATE(58),
    [sym_boolean_operator] = STATE(58),
    [sym_call_function] = STATE(58),
    [sym_call_macro] = STATE(58),
    [sym_binary_operator] = STATE(58),
    [sym_unary_operator] = STATE(58),
    [sym_call_macro_function] = STATE(58),
    [sym_comparison_operator] = STATE(58),
    [anon_sym_BANG] = ACTIONS(23),
    [sym_number] = ACTIONS(163),
    [anon_sym_TILDE] = ACTIONS(23),
    [sym_function_name] = ACTIONS(27),
    [sym_signal] = ACTIONS(163),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_LPAREN2] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [aux_sym_comparison_operator_repeat1] = STATE(59),
    [anon_sym_BANG] = ACTIONS(165),
    [sym_function_name] = ACTIONS(165),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_AMP_AMP] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(165),
    [anon_sym_DASH] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_GT_EQ] = ACTIONS(165),
    [sym_number] = ACTIONS(165),
    [anon_sym_TILDE] = ACTIONS(165),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_LT] = ACTIONS(165),
    [sym_identifier] = ACTIONS(165),
    [anon_sym_PIPE_PIPE] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [sym_signal] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_CARET] = ACTIONS(165),
    [anon_sym_LT_EQ] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_PERCENT] = ACTIONS(165),
    [anon_sym_LPAREN2] = ACTIONS(165),
    [anon_sym_BANG_EQ] = ACTIONS(165),
    [anon_sym_BSLASH_COMMA] = ACTIONS(165),
    [anon_sym_PIPE] = ACTIONS(165),
    [anon_sym_EQ_EQ] = ACTIONS(165),
  },
  [39] = {
    [anon_sym_ramp2] = ACTIONS(167),
    [sym_identifier] = ACTIONS(167),
    [sym_number] = ACTIONS(169),
    [anon_sym_ramp1] = ACTIONS(167),
    [anon_sym_cps] = ACTIONS(167),
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym_comment] = ACTIONS(15),
  },
  [40] = {
    [anon_sym_ramp2] = ACTIONS(171),
    [sym_identifier] = ACTIONS(171),
    [sym_number] = ACTIONS(173),
    [anon_sym_ramp1] = ACTIONS(171),
    [anon_sym_cps] = ACTIONS(171),
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_comment] = ACTIONS(15),
  },
  [41] = {
    [sym_number] = ACTIONS(175),
    [sym_comment] = ACTIONS(15),
  },
  [42] = {
    [anon_sym_EQ] = ACTIONS(177),
    [sym_comment] = ACTIONS(15),
  },
  [43] = {
    [aux_sym_macro_arguments_repeat2] = STATE(62),
    [sym__delimiter] = STATE(44),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_BSLASH_COMMA] = ACTIONS(109),
    [sym_comment] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(179),
  },
  [44] = {
    [aux_sym_macro_arguments_repeat1] = STATE(63),
    [sym_identifier] = ACTIONS(181),
    [sym_comment] = ACTIONS(15),
  },
  [45] = {
    [aux_sym_macro_arguments_repeat1] = STATE(45),
    [anon_sym_COMMA] = ACTIONS(183),
    [sym_identifier] = ACTIONS(185),
    [anon_sym_BSLASH_COMMA] = ACTIONS(183),
    [sym_comment] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(183),
  },
  [46] = {
    [anon_sym_ramp2] = ACTIONS(188),
    [sym_identifier] = ACTIONS(188),
    [sym_number] = ACTIONS(190),
    [anon_sym_ramp1] = ACTIONS(188),
    [anon_sym_cps] = ACTIONS(188),
    [ts_builtin_sym_end] = ACTIONS(190),
    [sym_comment] = ACTIONS(15),
  },
  [47] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_BANG] = ACTIONS(192),
    [sym_function_name] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym_AMP_AMP] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(192),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [sym_number] = ACTIONS(192),
    [anon_sym_TILDE] = ACTIONS(192),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(69),
    [sym_identifier] = ACTIONS(192),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(69),
    [sym_signal] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_LT_EQ] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_LPAREN2] = ACTIONS(192),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_BSLASH_COMMA] = ACTIONS(192),
    [anon_sym_PIPE] = ACTIONS(81),
    [anon_sym_EQ_EQ] = ACTIONS(69),
  },
  [48] = {
    [sym__expressions] = STATE(47),
    [sym_boolean_operator] = STATE(47),
    [sym_call_function] = STATE(47),
    [sym_call_macro] = STATE(47),
    [sym_comparison_operator] = STATE(47),
    [sym_parenthesized] = STATE(47),
    [sym__delimiter] = STATE(65),
    [aux_sym_arguments_repeat2] = STATE(66),
    [sym_binary_operator] = STATE(47),
    [sym_unary_operator] = STATE(47),
    [sym_call_macro_function] = STATE(47),
    [aux_sym_arguments_repeat1] = STATE(67),
    [anon_sym_BANG] = ACTIONS(23),
    [sym_function_name] = ACTIONS(27),
    [sym_signal] = ACTIONS(117),
    [anon_sym_COMMA] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(196),
    [sym_number] = ACTIONS(117),
    [anon_sym_TILDE] = ACTIONS(23),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_LPAREN2] = ACTIONS(31),
    [anon_sym_BSLASH_COMMA] = ACTIONS(194),
  },
  [49] = {
    [anon_sym_BANG] = ACTIONS(198),
    [sym_function_name] = ACTIONS(198),
    [anon_sym_SLASH] = ACTIONS(198),
    [anon_sym_AMP_AMP] = ACTIONS(198),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [anon_sym_RPAREN] = ACTIONS(198),
    [anon_sym_GT_EQ] = ACTIONS(198),
    [sym_number] = ACTIONS(198),
    [anon_sym_TILDE] = ACTIONS(198),
    [anon_sym_AMP] = ACTIONS(198),
    [anon_sym_LT] = ACTIONS(198),
    [sym_identifier] = ACTIONS(198),
    [anon_sym_PIPE_PIPE] = ACTIONS(198),
    [anon_sym_LT_LT] = ACTIONS(198),
    [anon_sym_GT] = ACTIONS(198),
    [sym_signal] = ACTIONS(198),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_CARET] = ACTIONS(198),
    [anon_sym_LT_EQ] = ACTIONS(198),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(198),
    [anon_sym_GT_GT] = ACTIONS(198),
    [anon_sym_PERCENT] = ACTIONS(198),
    [anon_sym_LPAREN2] = ACTIONS(198),
    [anon_sym_BANG_EQ] = ACTIONS(198),
    [anon_sym_BSLASH_COMMA] = ACTIONS(198),
    [anon_sym_PIPE] = ACTIONS(198),
    [anon_sym_EQ_EQ] = ACTIONS(198),
  },
  [50] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_BANG] = ACTIONS(200),
    [sym_function_name] = ACTIONS(200),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym_AMP_AMP] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(200),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [sym_number] = ACTIONS(200),
    [anon_sym_TILDE] = ACTIONS(200),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(69),
    [sym_identifier] = ACTIONS(200),
    [anon_sym_PIPE_PIPE] = ACTIONS(200),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(69),
    [sym_signal] = ACTIONS(200),
    [anon_sym_COMMA] = ACTIONS(200),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_LT_EQ] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_LPAREN2] = ACTIONS(200),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_BSLASH_COMMA] = ACTIONS(200),
    [anon_sym_PIPE] = ACTIONS(81),
    [anon_sym_EQ_EQ] = ACTIONS(69),
  },
  [51] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_BANG] = ACTIONS(202),
    [sym_function_name] = ACTIONS(202),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym_AMP_AMP] = ACTIONS(202),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_GT_EQ] = ACTIONS(202),
    [sym_number] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(202),
    [anon_sym_AMP] = ACTIONS(202),
    [anon_sym_LT] = ACTIONS(202),
    [sym_identifier] = ACTIONS(202),
    [anon_sym_PIPE_PIPE] = ACTIONS(202),
    [anon_sym_LT_LT] = ACTIONS(202),
    [anon_sym_GT] = ACTIONS(202),
    [sym_signal] = ACTIONS(202),
    [anon_sym_COMMA] = ACTIONS(202),
    [anon_sym_CARET] = ACTIONS(202),
    [anon_sym_LT_EQ] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_GT_GT] = ACTIONS(202),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_LPAREN2] = ACTIONS(202),
    [anon_sym_BANG_EQ] = ACTIONS(202),
    [anon_sym_BSLASH_COMMA] = ACTIONS(202),
    [anon_sym_PIPE] = ACTIONS(202),
    [anon_sym_EQ_EQ] = ACTIONS(202),
  },
  [52] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_BANG] = ACTIONS(204),
    [sym_function_name] = ACTIONS(204),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym_AMP_AMP] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(204),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [sym_number] = ACTIONS(204),
    [anon_sym_TILDE] = ACTIONS(204),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(69),
    [sym_identifier] = ACTIONS(204),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(69),
    [sym_signal] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(204),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_LT_EQ] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_LPAREN2] = ACTIONS(204),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_BSLASH_COMMA] = ACTIONS(204),
    [anon_sym_PIPE] = ACTIONS(81),
    [anon_sym_EQ_EQ] = ACTIONS(69),
  },
  [53] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_BANG] = ACTIONS(202),
    [sym_function_name] = ACTIONS(202),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym_AMP_AMP] = ACTIONS(202),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [sym_number] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(202),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(69),
    [sym_identifier] = ACTIONS(202),
    [anon_sym_PIPE_PIPE] = ACTIONS(202),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(69),
    [sym_signal] = ACTIONS(202),
    [anon_sym_COMMA] = ACTIONS(202),
    [anon_sym_CARET] = ACTIONS(202),
    [anon_sym_LT_EQ] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_LPAREN2] = ACTIONS(202),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_BSLASH_COMMA] = ACTIONS(202),
    [anon_sym_PIPE] = ACTIONS(202),
    [anon_sym_EQ_EQ] = ACTIONS(69),
  },
  [54] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_BANG] = ACTIONS(202),
    [sym_function_name] = ACTIONS(202),
    [anon_sym_SLASH] = ACTIONS(202),
    [anon_sym_AMP_AMP] = ACTIONS(202),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(202),
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_GT_EQ] = ACTIONS(202),
    [sym_number] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(202),
    [anon_sym_AMP] = ACTIONS(202),
    [anon_sym_LT] = ACTIONS(202),
    [sym_identifier] = ACTIONS(202),
    [anon_sym_PIPE_PIPE] = ACTIONS(202),
    [anon_sym_LT_LT] = ACTIONS(202),
    [anon_sym_GT] = ACTIONS(202),
    [sym_signal] = ACTIONS(202),
    [anon_sym_COMMA] = ACTIONS(202),
    [anon_sym_CARET] = ACTIONS(202),
    [anon_sym_LT_EQ] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(202),
    [anon_sym_GT_GT] = ACTIONS(202),
    [anon_sym_PERCENT] = ACTIONS(202),
    [anon_sym_LPAREN2] = ACTIONS(202),
    [anon_sym_BANG_EQ] = ACTIONS(202),
    [anon_sym_BSLASH_COMMA] = ACTIONS(202),
    [anon_sym_PIPE] = ACTIONS(202),
    [anon_sym_EQ_EQ] = ACTIONS(202),
  },
  [55] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_BANG] = ACTIONS(200),
    [sym_function_name] = ACTIONS(200),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym_AMP_AMP] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(200),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [sym_number] = ACTIONS(200),
    [anon_sym_TILDE] = ACTIONS(200),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(69),
    [sym_identifier] = ACTIONS(200),
    [anon_sym_PIPE_PIPE] = ACTIONS(200),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(69),
    [sym_signal] = ACTIONS(200),
    [anon_sym_COMMA] = ACTIONS(200),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_LT_EQ] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_LPAREN2] = ACTIONS(200),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_BSLASH_COMMA] = ACTIONS(200),
    [anon_sym_PIPE] = ACTIONS(81),
    [anon_sym_EQ_EQ] = ACTIONS(69),
  },
  [56] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_BANG] = ACTIONS(202),
    [sym_function_name] = ACTIONS(202),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym_AMP_AMP] = ACTIONS(202),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(202),
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_GT_EQ] = ACTIONS(202),
    [sym_number] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(202),
    [anon_sym_AMP] = ACTIONS(202),
    [anon_sym_LT] = ACTIONS(202),
    [sym_identifier] = ACTIONS(202),
    [anon_sym_PIPE_PIPE] = ACTIONS(202),
    [anon_sym_LT_LT] = ACTIONS(202),
    [anon_sym_GT] = ACTIONS(202),
    [sym_signal] = ACTIONS(202),
    [anon_sym_COMMA] = ACTIONS(202),
    [anon_sym_CARET] = ACTIONS(202),
    [anon_sym_LT_EQ] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_GT_GT] = ACTIONS(202),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_LPAREN2] = ACTIONS(202),
    [anon_sym_BANG_EQ] = ACTIONS(202),
    [anon_sym_BSLASH_COMMA] = ACTIONS(202),
    [anon_sym_PIPE] = ACTIONS(202),
    [anon_sym_EQ_EQ] = ACTIONS(202),
  },
  [57] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_BANG] = ACTIONS(202),
    [sym_function_name] = ACTIONS(202),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym_AMP_AMP] = ACTIONS(202),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [sym_number] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(202),
    [anon_sym_AMP] = ACTIONS(202),
    [anon_sym_LT] = ACTIONS(69),
    [sym_identifier] = ACTIONS(202),
    [anon_sym_PIPE_PIPE] = ACTIONS(202),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(69),
    [sym_signal] = ACTIONS(202),
    [anon_sym_COMMA] = ACTIONS(202),
    [anon_sym_CARET] = ACTIONS(202),
    [anon_sym_LT_EQ] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_LPAREN2] = ACTIONS(202),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_BSLASH_COMMA] = ACTIONS(202),
    [anon_sym_PIPE] = ACTIONS(202),
    [anon_sym_EQ_EQ] = ACTIONS(69),
  },
  [58] = {
    [aux_sym_comparison_operator_repeat1] = STATE(38),
    [anon_sym_BANG] = ACTIONS(202),
    [sym_function_name] = ACTIONS(202),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym_AMP_AMP] = ACTIONS(202),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [sym_number] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(202),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(69),
    [sym_identifier] = ACTIONS(202),
    [anon_sym_PIPE_PIPE] = ACTIONS(202),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(69),
    [sym_signal] = ACTIONS(202),
    [anon_sym_COMMA] = ACTIONS(202),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_LT_EQ] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_LPAREN2] = ACTIONS(202),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_BSLASH_COMMA] = ACTIONS(202),
    [anon_sym_PIPE] = ACTIONS(202),
    [anon_sym_EQ_EQ] = ACTIONS(69),
  },
  [59] = {
    [aux_sym_comparison_operator_repeat1] = STATE(59),
    [anon_sym_BANG] = ACTIONS(204),
    [sym_function_name] = ACTIONS(204),
    [anon_sym_SLASH] = ACTIONS(204),
    [anon_sym_AMP_AMP] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(204),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_RPAREN] = ACTIONS(204),
    [anon_sym_GT_EQ] = ACTIONS(206),
    [sym_number] = ACTIONS(204),
    [anon_sym_TILDE] = ACTIONS(204),
    [anon_sym_AMP] = ACTIONS(204),
    [anon_sym_LT] = ACTIONS(206),
    [sym_identifier] = ACTIONS(204),
    [anon_sym_PIPE_PIPE] = ACTIONS(204),
    [anon_sym_LT_LT] = ACTIONS(204),
    [anon_sym_GT] = ACTIONS(206),
    [sym_signal] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(204),
    [anon_sym_CARET] = ACTIONS(204),
    [anon_sym_LT_EQ] = ACTIONS(206),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(204),
    [anon_sym_GT_GT] = ACTIONS(204),
    [anon_sym_PERCENT] = ACTIONS(204),
    [anon_sym_LPAREN2] = ACTIONS(204),
    [anon_sym_BANG_EQ] = ACTIONS(206),
    [anon_sym_BSLASH_COMMA] = ACTIONS(204),
    [anon_sym_PIPE] = ACTIONS(204),
    [anon_sym_EQ_EQ] = ACTIONS(206),
  },
  [60] = {
    [anon_sym_ramp2] = ACTIONS(209),
    [sym_identifier] = ACTIONS(209),
    [sym_number] = ACTIONS(211),
    [anon_sym_ramp1] = ACTIONS(209),
    [anon_sym_cps] = ACTIONS(209),
    [ts_builtin_sym_end] = ACTIONS(211),
    [sym_comment] = ACTIONS(15),
  },
  [61] = {
    [anon_sym_EQ] = ACTIONS(213),
    [sym_comment] = ACTIONS(15),
  },
  [62] = {
    [aux_sym_macro_arguments_repeat2] = STATE(62),
    [sym__delimiter] = STATE(44),
    [anon_sym_COMMA] = ACTIONS(215),
    [anon_sym_BSLASH_COMMA] = ACTIONS(215),
    [sym_comment] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(218),
  },
  [63] = {
    [aux_sym_macro_arguments_repeat1] = STATE(45),
    [anon_sym_COMMA] = ACTIONS(218),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_BSLASH_COMMA] = ACTIONS(218),
    [sym_comment] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(218),
  },
  [64] = {
    [anon_sym_BANG] = ACTIONS(220),
    [sym_function_name] = ACTIONS(220),
    [anon_sym_SLASH] = ACTIONS(220),
    [anon_sym_AMP_AMP] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_GT_EQ] = ACTIONS(220),
    [sym_number] = ACTIONS(220),
    [anon_sym_TILDE] = ACTIONS(220),
    [anon_sym_AMP] = ACTIONS(220),
    [anon_sym_LT] = ACTIONS(220),
    [sym_identifier] = ACTIONS(220),
    [anon_sym_PIPE_PIPE] = ACTIONS(220),
    [anon_sym_LT_LT] = ACTIONS(220),
    [anon_sym_GT] = ACTIONS(220),
    [sym_signal] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(220),
    [anon_sym_CARET] = ACTIONS(220),
    [anon_sym_LT_EQ] = ACTIONS(220),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(220),
    [anon_sym_GT_GT] = ACTIONS(220),
    [anon_sym_PERCENT] = ACTIONS(220),
    [anon_sym_LPAREN2] = ACTIONS(220),
    [anon_sym_BANG_EQ] = ACTIONS(220),
    [anon_sym_BSLASH_COMMA] = ACTIONS(220),
    [anon_sym_PIPE] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(220),
  },
  [65] = {
    [sym_parenthesized] = STATE(47),
    [sym__expressions] = STATE(47),
    [sym_boolean_operator] = STATE(47),
    [sym_call_function] = STATE(47),
    [sym_call_macro] = STATE(47),
    [sym_binary_operator] = STATE(47),
    [sym_unary_operator] = STATE(47),
    [sym_call_macro_function] = STATE(47),
    [aux_sym_arguments_repeat1] = STATE(68),
    [sym_comparison_operator] = STATE(47),
    [anon_sym_BANG] = ACTIONS(23),
    [sym_number] = ACTIONS(117),
    [anon_sym_TILDE] = ACTIONS(23),
    [sym_function_name] = ACTIONS(27),
    [sym_signal] = ACTIONS(117),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_LPAREN2] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [sym__delimiter] = STATE(65),
    [aux_sym_arguments_repeat2] = STATE(70),
    [anon_sym_COMMA] = ACTIONS(222),
    [anon_sym_BSLASH_COMMA] = ACTIONS(222),
    [sym_comment] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(224),
  },
  [67] = {
    [sym_parenthesized] = STATE(47),
    [sym__expressions] = STATE(47),
    [sym_boolean_operator] = STATE(47),
    [sym_call_function] = STATE(47),
    [sym_call_macro] = STATE(47),
    [sym_binary_operator] = STATE(47),
    [sym_unary_operator] = STATE(47),
    [sym_call_macro_function] = STATE(47),
    [aux_sym_arguments_repeat1] = STATE(67),
    [sym_comparison_operator] = STATE(47),
    [anon_sym_BANG] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(229),
    [anon_sym_TILDE] = ACTIONS(226),
    [sym_function_name] = ACTIONS(232),
    [sym_signal] = ACTIONS(229),
    [anon_sym_COMMA] = ACTIONS(235),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_LPAREN2] = ACTIONS(240),
    [anon_sym_BSLASH_COMMA] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_RPAREN] = ACTIONS(235),
  },
  [68] = {
    [sym_parenthesized] = STATE(47),
    [sym__expressions] = STATE(47),
    [sym_boolean_operator] = STATE(47),
    [sym_call_function] = STATE(47),
    [sym_call_macro] = STATE(47),
    [sym_binary_operator] = STATE(47),
    [sym_unary_operator] = STATE(47),
    [sym_call_macro_function] = STATE(47),
    [aux_sym_arguments_repeat1] = STATE(67),
    [sym_comparison_operator] = STATE(47),
    [anon_sym_BANG] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(117),
    [anon_sym_TILDE] = ACTIONS(23),
    [sym_function_name] = ACTIONS(27),
    [sym_signal] = ACTIONS(117),
    [anon_sym_COMMA] = ACTIONS(243),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_LPAREN2] = ACTIONS(31),
    [anon_sym_BSLASH_COMMA] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(243),
  },
  [69] = {
    [anon_sym_BANG] = ACTIONS(245),
    [sym_function_name] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_AMP_AMP] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [sym_number] = ACTIONS(245),
    [anon_sym_TILDE] = ACTIONS(245),
    [anon_sym_AMP] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(245),
    [sym_identifier] = ACTIONS(245),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_LT_LT] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(245),
    [sym_signal] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_CARET] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_GT_GT] = ACTIONS(245),
    [anon_sym_PERCENT] = ACTIONS(245),
    [anon_sym_LPAREN2] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [anon_sym_BSLASH_COMMA] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(245),
  },
  [70] = {
    [sym__delimiter] = STATE(65),
    [aux_sym_arguments_repeat2] = STATE(70),
    [anon_sym_COMMA] = ACTIONS(247),
    [anon_sym_BSLASH_COMMA] = ACTIONS(247),
    [sym_comment] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(250),
  },
  [71] = {
    [sym_arguments] = STATE(75),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_AMP_AMP] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_ramp2] = ACTIONS(57),
    [anon_sym_GT_EQ] = ACTIONS(252),
    [sym_number] = ACTIONS(252),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(57),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_PIPE_PIPE] = ACTIONS(252),
    [anon_sym_LT_LT] = ACTIONS(252),
    [anon_sym_ramp1] = ACTIONS(57),
    [anon_sym_cps] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_CARET] = ACTIONS(252),
    [anon_sym_LT_EQ] = ACTIONS(252),
    [sym_comment] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(252),
    [anon_sym_GT_GT] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(252),
    [anon_sym_LPAREN] = ACTIONS(254),
    [anon_sym_BANG_EQ] = ACTIONS(252),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_EQ_EQ] = ACTIONS(252),
  },
  [72] = {
    [aux_sym_comparison_operator_repeat1] = STATE(85),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_LT_LT] = ACTIONS(139),
    [anon_sym_ramp1] = ACTIONS(63),
    [anon_sym_cps] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_AMP_AMP] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [sym_comment] = ACTIONS(15),
    [anon_sym_ramp2] = ACTIONS(63),
    [anon_sym_GT_EQ] = ACTIONS(131),
    [sym_number] = ACTIONS(256),
    [ts_builtin_sym_end] = ACTIONS(256),
    [anon_sym_AMP] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(135),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(143),
    [sym_identifier] = ACTIONS(63),
    [anon_sym_BANG_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_EQ_EQ] = ACTIONS(131),
  },
  [73] = {
    [aux_sym_comparison_operator_repeat1] = STATE(85),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym_AMP_AMP] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_ramp2] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(258),
    [sym_number] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(115),
    [sym_identifier] = ACTIONS(115),
    [anon_sym_PIPE_PIPE] = ACTIONS(258),
    [anon_sym_LT_LT] = ACTIONS(258),
    [anon_sym_ramp1] = ACTIONS(115),
    [anon_sym_cps] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_CARET] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(258),
    [sym_comment] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(258),
    [anon_sym_GT_GT] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(258),
    [anon_sym_BANG_EQ] = ACTIONS(258),
    [anon_sym_PIPE] = ACTIONS(115),
    [anon_sym_EQ_EQ] = ACTIONS(258),
  },
  [74] = {
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(260),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_RPAREN] = ACTIONS(260),
    [anon_sym_ramp2] = ACTIONS(119),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [sym_number] = ACTIONS(260),
    [anon_sym_AMP] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(119),
    [sym_identifier] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(260),
    [anon_sym_ramp1] = ACTIONS(119),
    [anon_sym_cps] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(119),
    [anon_sym_CARET] = ACTIONS(260),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [sym_comment] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(260),
    [anon_sym_STAR] = ACTIONS(260),
    [anon_sym_GT_GT] = ACTIONS(260),
    [anon_sym_PERCENT] = ACTIONS(260),
    [anon_sym_BANG_EQ] = ACTIONS(260),
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(260),
  },
  [75] = {
    [anon_sym_SLASH] = ACTIONS(121),
    [anon_sym_AMP_AMP] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_RPAREN] = ACTIONS(262),
    [anon_sym_ramp2] = ACTIONS(121),
    [anon_sym_GT_EQ] = ACTIONS(262),
    [sym_number] = ACTIONS(262),
    [anon_sym_AMP] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(121),
    [sym_identifier] = ACTIONS(121),
    [anon_sym_PIPE_PIPE] = ACTIONS(262),
    [anon_sym_LT_LT] = ACTIONS(262),
    [anon_sym_ramp1] = ACTIONS(121),
    [anon_sym_cps] = ACTIONS(121),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_CARET] = ACTIONS(262),
    [anon_sym_LT_EQ] = ACTIONS(262),
    [sym_comment] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(262),
    [anon_sym_STAR] = ACTIONS(262),
    [anon_sym_GT_GT] = ACTIONS(262),
    [anon_sym_PERCENT] = ACTIONS(262),
    [anon_sym_BANG_EQ] = ACTIONS(262),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_EQ_EQ] = ACTIONS(262),
  },
  [76] = {
    [sym_parenthesized] = STATE(87),
    [sym__expressions] = STATE(87),
    [sym_boolean_operator] = STATE(87),
    [sym_call_function] = STATE(87),
    [sym_call_macro] = STATE(87),
    [sym_binary_operator] = STATE(87),
    [sym_unary_operator] = STATE(87),
    [sym_call_macro_function] = STATE(87),
    [sym_comparison_operator] = STATE(87),
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(264),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(264),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(266),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(266),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
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
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(268),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(268),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
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
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(270),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(270),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
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
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(272),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(272),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
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
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(274),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(274),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
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
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(276),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(276),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
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
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(278),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(278),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
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
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(280),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(280),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [85] = {
    [aux_sym_comparison_operator_repeat1] = STATE(96),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_AMP_AMP] = ACTIONS(282),
    [anon_sym_PLUS] = ACTIONS(282),
    [anon_sym_DASH] = ACTIONS(282),
    [anon_sym_RPAREN] = ACTIONS(282),
    [anon_sym_ramp2] = ACTIONS(165),
    [anon_sym_GT_EQ] = ACTIONS(282),
    [sym_number] = ACTIONS(282),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_LT] = ACTIONS(165),
    [sym_identifier] = ACTIONS(165),
    [anon_sym_PIPE_PIPE] = ACTIONS(282),
    [anon_sym_LT_LT] = ACTIONS(282),
    [anon_sym_ramp1] = ACTIONS(165),
    [anon_sym_cps] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_CARET] = ACTIONS(282),
    [anon_sym_LT_EQ] = ACTIONS(282),
    [sym_comment] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(282),
    [anon_sym_STAR] = ACTIONS(282),
    [anon_sym_GT_GT] = ACTIONS(282),
    [anon_sym_PERCENT] = ACTIONS(282),
    [anon_sym_BANG_EQ] = ACTIONS(282),
    [anon_sym_PIPE] = ACTIONS(165),
    [anon_sym_EQ_EQ] = ACTIONS(282),
  },
  [86] = {
    [anon_sym_SLASH] = ACTIONS(198),
    [anon_sym_AMP_AMP] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(284),
    [anon_sym_DASH] = ACTIONS(284),
    [anon_sym_RPAREN] = ACTIONS(284),
    [anon_sym_ramp2] = ACTIONS(198),
    [anon_sym_GT_EQ] = ACTIONS(284),
    [sym_number] = ACTIONS(284),
    [anon_sym_AMP] = ACTIONS(198),
    [anon_sym_LT] = ACTIONS(198),
    [sym_identifier] = ACTIONS(198),
    [anon_sym_PIPE_PIPE] = ACTIONS(284),
    [anon_sym_LT_LT] = ACTIONS(284),
    [anon_sym_ramp1] = ACTIONS(198),
    [anon_sym_cps] = ACTIONS(198),
    [anon_sym_GT] = ACTIONS(198),
    [anon_sym_CARET] = ACTIONS(284),
    [anon_sym_LT_EQ] = ACTIONS(284),
    [sym_comment] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(284),
    [anon_sym_STAR] = ACTIONS(284),
    [anon_sym_GT_GT] = ACTIONS(284),
    [anon_sym_PERCENT] = ACTIONS(284),
    [anon_sym_BANG_EQ] = ACTIONS(284),
    [anon_sym_PIPE] = ACTIONS(198),
    [anon_sym_EQ_EQ] = ACTIONS(284),
  },
  [87] = {
    [aux_sym_comparison_operator_repeat1] = STATE(85),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_AMP_AMP] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(286),
    [anon_sym_ramp2] = ACTIONS(200),
    [anon_sym_GT_EQ] = ACTIONS(131),
    [sym_number] = ACTIONS(286),
    [anon_sym_AMP] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(135),
    [sym_identifier] = ACTIONS(200),
    [anon_sym_PIPE_PIPE] = ACTIONS(286),
    [anon_sym_LT_LT] = ACTIONS(139),
    [anon_sym_ramp1] = ACTIONS(200),
    [anon_sym_cps] = ACTIONS(200),
    [anon_sym_GT] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [sym_comment] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(286),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_EQ_EQ] = ACTIONS(131),
  },
  [88] = {
    [aux_sym_comparison_operator_repeat1] = STATE(85),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_ramp2] = ACTIONS(202),
    [anon_sym_GT_EQ] = ACTIONS(288),
    [sym_number] = ACTIONS(288),
    [anon_sym_AMP] = ACTIONS(202),
    [anon_sym_LT] = ACTIONS(202),
    [sym_identifier] = ACTIONS(202),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_LT_LT] = ACTIONS(288),
    [anon_sym_ramp1] = ACTIONS(202),
    [anon_sym_cps] = ACTIONS(202),
    [anon_sym_GT] = ACTIONS(202),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_LT_EQ] = ACTIONS(288),
    [sym_comment] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(288),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(288),
    [anon_sym_PIPE] = ACTIONS(202),
    [anon_sym_EQ_EQ] = ACTIONS(288),
  },
  [89] = {
    [aux_sym_comparison_operator_repeat1] = STATE(85),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_AMP_AMP] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(290),
    [anon_sym_ramp2] = ACTIONS(204),
    [anon_sym_GT_EQ] = ACTIONS(131),
    [sym_number] = ACTIONS(290),
    [anon_sym_AMP] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(135),
    [sym_identifier] = ACTIONS(204),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_LT_LT] = ACTIONS(139),
    [anon_sym_ramp1] = ACTIONS(204),
    [anon_sym_cps] = ACTIONS(204),
    [anon_sym_GT] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [sym_comment] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(290),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_EQ_EQ] = ACTIONS(131),
  },
  [90] = {
    [aux_sym_comparison_operator_repeat1] = STATE(85),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_ramp2] = ACTIONS(202),
    [anon_sym_GT_EQ] = ACTIONS(131),
    [sym_number] = ACTIONS(288),
    [anon_sym_AMP] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(135),
    [sym_identifier] = ACTIONS(202),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_LT_LT] = ACTIONS(139),
    [anon_sym_ramp1] = ACTIONS(202),
    [anon_sym_cps] = ACTIONS(202),
    [anon_sym_GT] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [sym_comment] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(202),
    [anon_sym_EQ_EQ] = ACTIONS(131),
  },
  [91] = {
    [aux_sym_comparison_operator_repeat1] = STATE(85),
    [anon_sym_SLASH] = ACTIONS(202),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_ramp2] = ACTIONS(202),
    [anon_sym_GT_EQ] = ACTIONS(288),
    [sym_number] = ACTIONS(288),
    [anon_sym_AMP] = ACTIONS(202),
    [anon_sym_LT] = ACTIONS(202),
    [sym_identifier] = ACTIONS(202),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_LT_LT] = ACTIONS(288),
    [anon_sym_ramp1] = ACTIONS(202),
    [anon_sym_cps] = ACTIONS(202),
    [anon_sym_GT] = ACTIONS(202),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_LT_EQ] = ACTIONS(288),
    [sym_comment] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(288),
    [anon_sym_GT_GT] = ACTIONS(288),
    [anon_sym_PERCENT] = ACTIONS(288),
    [anon_sym_BANG_EQ] = ACTIONS(288),
    [anon_sym_PIPE] = ACTIONS(202),
    [anon_sym_EQ_EQ] = ACTIONS(288),
  },
  [92] = {
    [aux_sym_comparison_operator_repeat1] = STATE(85),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_AMP_AMP] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(286),
    [anon_sym_ramp2] = ACTIONS(200),
    [anon_sym_GT_EQ] = ACTIONS(131),
    [sym_number] = ACTIONS(286),
    [anon_sym_AMP] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(135),
    [sym_identifier] = ACTIONS(200),
    [anon_sym_PIPE_PIPE] = ACTIONS(286),
    [anon_sym_LT_LT] = ACTIONS(139),
    [anon_sym_ramp1] = ACTIONS(200),
    [anon_sym_cps] = ACTIONS(200),
    [anon_sym_GT] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [sym_comment] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(286),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_EQ_EQ] = ACTIONS(131),
  },
  [93] = {
    [aux_sym_comparison_operator_repeat1] = STATE(85),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_ramp2] = ACTIONS(202),
    [anon_sym_GT_EQ] = ACTIONS(288),
    [sym_number] = ACTIONS(288),
    [anon_sym_AMP] = ACTIONS(202),
    [anon_sym_LT] = ACTIONS(202),
    [sym_identifier] = ACTIONS(202),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_LT_LT] = ACTIONS(288),
    [anon_sym_ramp1] = ACTIONS(202),
    [anon_sym_cps] = ACTIONS(202),
    [anon_sym_GT] = ACTIONS(202),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_LT_EQ] = ACTIONS(288),
    [sym_comment] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(288),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(288),
    [anon_sym_PIPE] = ACTIONS(202),
    [anon_sym_EQ_EQ] = ACTIONS(288),
  },
  [94] = {
    [aux_sym_comparison_operator_repeat1] = STATE(85),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_ramp2] = ACTIONS(202),
    [anon_sym_GT_EQ] = ACTIONS(131),
    [sym_number] = ACTIONS(288),
    [anon_sym_AMP] = ACTIONS(202),
    [anon_sym_LT] = ACTIONS(135),
    [sym_identifier] = ACTIONS(202),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_LT_LT] = ACTIONS(139),
    [anon_sym_ramp1] = ACTIONS(202),
    [anon_sym_cps] = ACTIONS(202),
    [anon_sym_GT] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [sym_comment] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(202),
    [anon_sym_EQ_EQ] = ACTIONS(131),
  },
  [95] = {
    [aux_sym_comparison_operator_repeat1] = STATE(85),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_ramp2] = ACTIONS(202),
    [anon_sym_GT_EQ] = ACTIONS(131),
    [sym_number] = ACTIONS(288),
    [anon_sym_AMP] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(135),
    [sym_identifier] = ACTIONS(202),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_LT_LT] = ACTIONS(139),
    [anon_sym_ramp1] = ACTIONS(202),
    [anon_sym_cps] = ACTIONS(202),
    [anon_sym_GT] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [sym_comment] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(202),
    [anon_sym_EQ_EQ] = ACTIONS(131),
  },
  [96] = {
    [aux_sym_comparison_operator_repeat1] = STATE(96),
    [anon_sym_SLASH] = ACTIONS(204),
    [anon_sym_AMP_AMP] = ACTIONS(290),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_DASH] = ACTIONS(290),
    [anon_sym_RPAREN] = ACTIONS(290),
    [anon_sym_ramp2] = ACTIONS(204),
    [anon_sym_GT_EQ] = ACTIONS(292),
    [sym_number] = ACTIONS(290),
    [anon_sym_AMP] = ACTIONS(204),
    [anon_sym_LT] = ACTIONS(295),
    [sym_identifier] = ACTIONS(204),
    [anon_sym_PIPE_PIPE] = ACTIONS(290),
    [anon_sym_LT_LT] = ACTIONS(290),
    [anon_sym_ramp1] = ACTIONS(204),
    [anon_sym_cps] = ACTIONS(204),
    [anon_sym_GT] = ACTIONS(295),
    [anon_sym_CARET] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(292),
    [sym_comment] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(290),
    [anon_sym_STAR] = ACTIONS(290),
    [anon_sym_GT_GT] = ACTIONS(290),
    [anon_sym_PERCENT] = ACTIONS(290),
    [anon_sym_BANG_EQ] = ACTIONS(292),
    [anon_sym_PIPE] = ACTIONS(204),
    [anon_sym_EQ_EQ] = ACTIONS(292),
  },
  [97] = {
    [anon_sym_SLASH] = ACTIONS(220),
    [anon_sym_AMP_AMP] = ACTIONS(298),
    [anon_sym_PLUS] = ACTIONS(298),
    [anon_sym_DASH] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(298),
    [anon_sym_ramp2] = ACTIONS(220),
    [anon_sym_GT_EQ] = ACTIONS(298),
    [sym_number] = ACTIONS(298),
    [anon_sym_AMP] = ACTIONS(220),
    [anon_sym_LT] = ACTIONS(220),
    [sym_identifier] = ACTIONS(220),
    [anon_sym_PIPE_PIPE] = ACTIONS(298),
    [anon_sym_LT_LT] = ACTIONS(298),
    [anon_sym_ramp1] = ACTIONS(220),
    [anon_sym_cps] = ACTIONS(220),
    [anon_sym_GT] = ACTIONS(220),
    [anon_sym_CARET] = ACTIONS(298),
    [anon_sym_LT_EQ] = ACTIONS(298),
    [sym_comment] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(298),
    [anon_sym_GT_GT] = ACTIONS(298),
    [anon_sym_PERCENT] = ACTIONS(298),
    [anon_sym_BANG_EQ] = ACTIONS(298),
    [anon_sym_PIPE] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(298),
  },
  [98] = {
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_AMP_AMP] = ACTIONS(300),
    [anon_sym_PLUS] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_RPAREN] = ACTIONS(300),
    [anon_sym_ramp2] = ACTIONS(245),
    [anon_sym_GT_EQ] = ACTIONS(300),
    [sym_number] = ACTIONS(300),
    [anon_sym_AMP] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(245),
    [sym_identifier] = ACTIONS(245),
    [anon_sym_PIPE_PIPE] = ACTIONS(300),
    [anon_sym_LT_LT] = ACTIONS(300),
    [anon_sym_ramp1] = ACTIONS(245),
    [anon_sym_cps] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(245),
    [anon_sym_CARET] = ACTIONS(300),
    [anon_sym_LT_EQ] = ACTIONS(300),
    [sym_comment] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(300),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_GT_GT] = ACTIONS(300),
    [anon_sym_PERCENT] = ACTIONS(300),
    [anon_sym_BANG_EQ] = ACTIONS(300),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(300),
  },
  [99] = {
    [sym_parenthesized] = STATE(73),
    [sym__expressions] = STATE(73),
    [sym_boolean_operator] = STATE(73),
    [sym_call_function] = STATE(73),
    [sym_call_macro] = STATE(73),
    [sym_binary_operator] = STATE(73),
    [sym_unary_operator] = STATE(73),
    [sym_call_macro_function] = STATE(73),
    [sym_comparison_operator] = STATE(73),
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(302),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(302),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [100] = {
    [sym_arguments] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(254),
    [sym_comment] = ACTIONS(15),
  },
  [101] = {
    [aux_sym_comparison_operator_repeat1] = STATE(85),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_AMP_AMP] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_GT_EQ] = ACTIONS(131),
    [anon_sym_AMP] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_LT_LT] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [sym_comment] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_EQ_EQ] = ACTIONS(131),
  },
  [102] = {
    [sym__expressions] = STATE(47),
    [sym_boolean_operator] = STATE(47),
    [sym_call_function] = STATE(47),
    [sym_call_macro] = STATE(47),
    [sym_comparison_operator] = STATE(47),
    [sym_parenthesized] = STATE(47),
    [sym__delimiter] = STATE(65),
    [aux_sym_arguments_repeat2] = STATE(103),
    [sym_binary_operator] = STATE(47),
    [sym_unary_operator] = STATE(47),
    [sym_call_macro_function] = STATE(47),
    [aux_sym_arguments_repeat1] = STATE(67),
    [anon_sym_BANG] = ACTIONS(23),
    [sym_function_name] = ACTIONS(27),
    [sym_signal] = ACTIONS(117),
    [anon_sym_COMMA] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(306),
    [sym_number] = ACTIONS(117),
    [anon_sym_TILDE] = ACTIONS(23),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_LPAREN2] = ACTIONS(31),
    [anon_sym_BSLASH_COMMA] = ACTIONS(194),
  },
  [103] = {
    [sym__delimiter] = STATE(65),
    [aux_sym_arguments_repeat2] = STATE(70),
    [anon_sym_COMMA] = ACTIONS(222),
    [anon_sym_BSLASH_COMMA] = ACTIONS(222),
    [sym_comment] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(308),
  },
  [104] = {
    [sym_parenthesized] = STATE(101),
    [sym__expressions] = STATE(101),
    [sym_boolean_operator] = STATE(101),
    [sym_call_function] = STATE(101),
    [sym_call_macro] = STATE(101),
    [sym_binary_operator] = STATE(101),
    [sym_unary_operator] = STATE(101),
    [sym_call_macro_function] = STATE(101),
    [sym_comparison_operator] = STATE(101),
    [anon_sym_BANG] = ACTIONS(39),
    [sym_number] = ACTIONS(310),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_function_name] = ACTIONS(43),
    [sym_signal] = ACTIONS(310),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN2] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [105] = {
    [sym__expressions] = STATE(47),
    [sym_boolean_operator] = STATE(47),
    [sym_call_function] = STATE(47),
    [sym_call_macro] = STATE(47),
    [sym_comparison_operator] = STATE(47),
    [sym_parenthesized] = STATE(47),
    [sym_binary_operator] = STATE(47),
    [sym_unary_operator] = STATE(47),
    [sym_call_macro_function] = STATE(47),
    [aux_sym_arguments_repeat1] = STATE(102),
    [anon_sym_BANG] = ACTIONS(23),
    [sym_number] = ACTIONS(117),
    [anon_sym_TILDE] = ACTIONS(23),
    [sym_function_name] = ACTIONS(27),
    [sym_signal] = ACTIONS(117),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_LPAREN2] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT(2),
  [7] = {.count = 1, .reusable = false}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = false}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [17] = {.count = 1, .reusable = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = false}, SHIFT(12),
  [25] = {.count = 1, .reusable = false}, SHIFT(16),
  [27] = {.count = 1, .reusable = false}, SHIFT(13),
  [29] = {.count = 1, .reusable = false}, SHIFT(14),
  [31] = {.count = 1, .reusable = false}, SHIFT(15),
  [33] = {.count = 1, .reusable = true}, SHIFT(18),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [37] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [39] = {.count = 1, .reusable = false}, SHIFT(99),
  [41] = {.count = 1, .reusable = false}, SHIFT(72),
  [43] = {.count = 1, .reusable = false}, SHIFT(100),
  [45] = {.count = 1, .reusable = false}, SHIFT(71),
  [47] = {.count = 1, .reusable = false}, SHIFT(104),
  [49] = {.count = 1, .reusable = true}, SHIFT(22),
  [51] = {.count = 1, .reusable = true}, SHIFT(23),
  [53] = {.count = 1, .reusable = false}, SHIFT(24),
  [55] = {.count = 1, .reusable = true}, SHIFT(25),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_call_macro, 1),
  [59] = {.count = 1, .reusable = false}, SHIFT(25),
  [61] = {.count = 1, .reusable = false}, SHIFT(28),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_expression_statement, 1),
  [65] = {.count = 1, .reusable = false}, SHIFT(29),
  [67] = {.count = 1, .reusable = false}, SHIFT(30),
  [69] = {.count = 1, .reusable = false}, SHIFT(31),
  [71] = {.count = 1, .reusable = false}, SHIFT(32),
  [73] = {.count = 1, .reusable = false}, SHIFT(33),
  [75] = {.count = 1, .reusable = false}, SHIFT(34),
  [77] = {.count = 1, .reusable = false}, SHIFT(35),
  [79] = {.count = 1, .reusable = false}, SHIFT(36),
  [81] = {.count = 1, .reusable = false}, SHIFT(37),
  [83] = {.count = 1, .reusable = true}, SHIFT(40),
  [85] = {.count = 1, .reusable = true}, SHIFT(41),
  [87] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [90] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [96] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [99] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_ramp_statement, 3),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_ramp_statement, 3),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_macro_statement, 3),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_macro_statement, 3),
  [109] = {.count = 1, .reusable = true}, SHIFT(44),
  [111] = {.count = 1, .reusable = true}, SHIFT(45),
  [113] = {.count = 1, .reusable = true}, SHIFT(42),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_unary_operator, 2),
  [117] = {.count = 1, .reusable = false}, SHIFT(47),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_call_function, 2),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_call_macro_function, 2),
  [123] = {.count = 1, .reusable = false}, SHIFT(80),
  [125] = {.count = 1, .reusable = true}, SHIFT(81),
  [127] = {.count = 1, .reusable = true}, SHIFT(82),
  [129] = {.count = 1, .reusable = true}, SHIFT(49),
  [131] = {.count = 1, .reusable = true}, SHIFT(78),
  [133] = {.count = 1, .reusable = false}, SHIFT(83),
  [135] = {.count = 1, .reusable = false}, SHIFT(78),
  [137] = {.count = 1, .reusable = true}, SHIFT(76),
  [139] = {.count = 1, .reusable = true}, SHIFT(77),
  [141] = {.count = 1, .reusable = true}, SHIFT(79),
  [143] = {.count = 1, .reusable = true}, SHIFT(80),
  [145] = {.count = 1, .reusable = false}, SHIFT(84),
  [147] = {.count = 1, .reusable = false}, SHIFT(50),
  [149] = {.count = 1, .reusable = false}, SHIFT(51),
  [151] = {.count = 1, .reusable = false}, SHIFT(52),
  [153] = {.count = 1, .reusable = false}, SHIFT(53),
  [155] = {.count = 1, .reusable = false}, SHIFT(54),
  [157] = {.count = 1, .reusable = false}, SHIFT(55),
  [159] = {.count = 1, .reusable = false}, SHIFT(56),
  [161] = {.count = 1, .reusable = false}, SHIFT(57),
  [163] = {.count = 1, .reusable = false}, SHIFT(58),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_comparison_operator, 2),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_default_statement, 3, .production_id = 1),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement, 3, .production_id = 1),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_cps_statement, 3),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_cps_statement, 3),
  [175] = {.count = 1, .reusable = true}, SHIFT(60),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_macro_arguments, 3),
  [179] = {.count = 1, .reusable = true}, SHIFT(61),
  [181] = {.count = 1, .reusable = true}, SHIFT(63),
  [183] = {.count = 1, .reusable = true}, REDUCE(aux_sym_macro_arguments_repeat1, 2),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_arguments_repeat1, 2), SHIFT_REPEAT(45),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_macro_function_statement, 4),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_macro_function_statement, 4),
  [192] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 1),
  [194] = {.count = 1, .reusable = false}, SHIFT(65),
  [196] = {.count = 1, .reusable = false}, SHIFT(64),
  [198] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized, 3),
  [200] = {.count = 1, .reusable = false}, REDUCE(sym_boolean_operator, 3),
  [202] = {.count = 1, .reusable = false}, REDUCE(sym_binary_operator, 3),
  [204] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [206] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(31),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_cps_statement, 4),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_cps_statement, 4),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_macro_arguments, 4),
  [215] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_arguments_repeat2, 2), SHIFT_REPEAT(44),
  [218] = {.count = 1, .reusable = true}, REDUCE(aux_sym_macro_arguments_repeat2, 2),
  [220] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [222] = {.count = 1, .reusable = true}, SHIFT(65),
  [224] = {.count = 1, .reusable = true}, SHIFT(69),
  [226] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(12),
  [229] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(47),
  [232] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(13),
  [235] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2),
  [237] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(14),
  [240] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(15),
  [243] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arguments_repeat2, 2),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [247] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(65),
  [250] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym_call_macro, 1),
  [254] = {.count = 1, .reusable = true}, SHIFT(105),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym_unary_operator, 2),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym_call_function, 2),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_call_macro_function, 2),
  [264] = {.count = 1, .reusable = false}, SHIFT(87),
  [266] = {.count = 1, .reusable = false}, SHIFT(88),
  [268] = {.count = 1, .reusable = false}, SHIFT(89),
  [270] = {.count = 1, .reusable = false}, SHIFT(90),
  [272] = {.count = 1, .reusable = false}, SHIFT(91),
  [274] = {.count = 1, .reusable = false}, SHIFT(92),
  [276] = {.count = 1, .reusable = false}, SHIFT(93),
  [278] = {.count = 1, .reusable = false}, SHIFT(94),
  [280] = {.count = 1, .reusable = false}, SHIFT(95),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_comparison_operator, 2),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized, 3),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_operator, 3),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_binary_operator, 3),
  [290] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [292] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(78),
  [295] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(78),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [302] = {.count = 1, .reusable = false}, SHIFT(73),
  [304] = {.count = 1, .reusable = true}, SHIFT(86),
  [306] = {.count = 1, .reusable = false}, SHIFT(97),
  [308] = {.count = 1, .reusable = true}, SHIFT(98),
  [310] = {.count = 1, .reusable = false}, SHIFT(101),
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
