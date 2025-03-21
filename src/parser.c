#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym__dot = 1,
  sym__number = 2,
  sym_asterisk = 3,
  sym_string_content = 4,
  sym_identifier = 5,
  sym_null = 6,
  sym_true = 7,
  sym_false = 8,
  anon_sym_DASH = 9,
  anon_sym_0x = 10,
  aux_sym_hex_token1 = 11,
  anon_sym_e = 12,
  anon_sym_SQUOTE = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  sym_not = 18,
  sym_lt = 19,
  sym_le = 20,
  sym_gt = 21,
  sym_ge = 22,
  sym_eq = 23,
  sym_ne = 24,
  sym_and = 25,
  sym_or = 26,
  sym__whitespace = 27,
  anon_sym_DOLLAR = 28,
  anon_sym_LBRACE_LBRACE = 29,
  anon_sym_RBRACE_RBRACE = 30,
  anon_sym_COMMA = 31,
  sym_source_file = 32,
  sym__definition = 33,
  sym_type = 34,
  sym_boolean = 35,
  sym_int = 36,
  sym__float = 37,
  sym_float = 38,
  sym_hex = 39,
  sym_exp = 40,
  sym_string = 41,
  sym_operator = 42,
  sym_logical_group = 43,
  sym_index = 44,
  sym_property_deref = 45,
  sym_context = 46,
  sym_property = 47,
  sym_expression = 48,
  sym_arg = 49,
  sym_call = 50,
  sym__call_args = 51,
  sym_variable = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym_expression_repeat1 = 54,
  aux_sym_arg_repeat1 = 55,
  aux_sym__call_args_repeat1 = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__dot] = "_dot",
  [sym__number] = "_number",
  [sym_asterisk] = "asterisk",
  [sym_string_content] = "string_content",
  [sym_identifier] = "identifier",
  [sym_null] = "null",
  [sym_true] = "true",
  [sym_false] = "false",
  [anon_sym_DASH] = "-",
  [anon_sym_0x] = "0x",
  [aux_sym_hex_token1] = "hex_token1",
  [anon_sym_e] = "e",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_not] = "not",
  [sym_lt] = "lt",
  [sym_le] = "le",
  [sym_gt] = "gt",
  [sym_ge] = "ge",
  [sym_eq] = "eq",
  [sym_ne] = "ne",
  [sym_and] = "and",
  [sym_or] = "or",
  [sym__whitespace] = "_whitespace",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_COMMA] = ",",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_type] = "type",
  [sym_boolean] = "boolean",
  [sym_int] = "int",
  [sym__float] = "_float",
  [sym_float] = "float",
  [sym_hex] = "hex",
  [sym_exp] = "exp",
  [sym_string] = "string",
  [sym_operator] = "operator",
  [sym_logical_group] = "logical_group",
  [sym_index] = "index",
  [sym_property_deref] = "property_deref",
  [sym_context] = "context",
  [sym_property] = "property",
  [sym_expression] = "expression",
  [sym_arg] = "arg",
  [sym_call] = "call",
  [sym__call_args] = "_call_args",
  [sym_variable] = "variable",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_arg_repeat1] = "arg_repeat1",
  [aux_sym__call_args_repeat1] = "_call_args_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__dot] = sym__dot,
  [sym__number] = sym__number,
  [sym_asterisk] = sym_asterisk,
  [sym_string_content] = sym_string_content,
  [sym_identifier] = sym_identifier,
  [sym_null] = sym_null,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_0x] = anon_sym_0x,
  [aux_sym_hex_token1] = aux_sym_hex_token1,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_not] = sym_not,
  [sym_lt] = sym_lt,
  [sym_le] = sym_le,
  [sym_gt] = sym_gt,
  [sym_ge] = sym_ge,
  [sym_eq] = sym_eq,
  [sym_ne] = sym_ne,
  [sym_and] = sym_and,
  [sym_or] = sym_or,
  [sym__whitespace] = sym__whitespace,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_type] = sym_type,
  [sym_boolean] = sym_boolean,
  [sym_int] = sym_int,
  [sym__float] = sym__float,
  [sym_float] = sym_float,
  [sym_hex] = sym_hex,
  [sym_exp] = sym_exp,
  [sym_string] = sym_string,
  [sym_operator] = sym_operator,
  [sym_logical_group] = sym_logical_group,
  [sym_index] = sym_index,
  [sym_property_deref] = sym_property_deref,
  [sym_context] = sym_context,
  [sym_property] = sym_property,
  [sym_expression] = sym_expression,
  [sym_arg] = sym_arg,
  [sym_call] = sym_call,
  [sym__call_args] = sym__call_args,
  [sym_variable] = sym_variable,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_arg_repeat1] = aux_sym_arg_repeat1,
  [aux_sym__call_args_repeat1] = aux_sym__call_args_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__dot] = {
    .visible = false,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_asterisk] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_hex_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_not] = {
    .visible = true,
    .named = true,
  },
  [sym_lt] = {
    .visible = true,
    .named = true,
  },
  [sym_le] = {
    .visible = true,
    .named = true,
  },
  [sym_gt] = {
    .visible = true,
    .named = true,
  },
  [sym_ge] = {
    .visible = true,
    .named = true,
  },
  [sym_eq] = {
    .visible = true,
    .named = true,
  },
  [sym_ne] = {
    .visible = true,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym__float] = {
    .visible = false,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_logical_group] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_property_deref] = {
    .visible = true,
    .named = true,
  },
  [sym_context] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym__call_args] = {
    .visible = false,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__call_args_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_arguments = 1,
  field_function = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_function] = "function",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function, 0},
  [1] =
    {field_arguments, 2},
    {field_function, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '!') ADVANCE(60);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '0') ADVANCE(30);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(59);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '0') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == '}') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == '{') ADVANCE(71);
      END_STATE();
    case 23:
      if (lookahead == '|') ADVANCE(68);
      END_STATE();
    case 24:
      if (lookahead == '}') ADVANCE(72);
      END_STATE();
    case 25:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(35);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == 'x') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(27);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_not);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_not);
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_le);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_ge);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_ne);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 25},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__dot] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [sym_asterisk] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_not] = ACTIONS(1),
    [sym_lt] = ACTIONS(1),
    [sym_le] = ACTIONS(1),
    [sym_gt] = ACTIONS(1),
    [sym_ge] = ACTIONS(1),
    [sym_eq] = ACTIONS(1),
    [sym_ne] = ACTIONS(1),
    [sym_and] = ACTIONS(1),
    [sym_or] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(61),
    [sym__definition] = STATE(39),
    [sym_variable] = STATE(39),
    [aux_sym_source_file_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(7), 1,
      sym__number,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_null,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_0x,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_not,
    ACTIONS(25), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(11), 1,
      sym_context,
    STATE(18), 1,
      sym__float,
    STATE(21), 1,
      sym_arg,
    STATE(63), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(35), 3,
      sym_type,
      sym_logical_group,
      sym_call,
    STATE(31), 6,
      sym_boolean,
      sym_int,
      sym_float,
      sym_hex,
      sym_exp,
      sym_string,
  [57] = 16,
    ACTIONS(7), 1,
      sym__number,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_null,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_0x,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_not,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_context,
    STATE(18), 1,
      sym__float,
    STATE(21), 1,
      sym_arg,
    STATE(60), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(35), 3,
      sym_type,
      sym_logical_group,
      sym_call,
    STATE(31), 6,
      sym_boolean,
      sym_int,
      sym_float,
      sym_hex,
      sym_exp,
      sym_string,
  [114] = 15,
    ACTIONS(7), 1,
      sym__number,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_null,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_0x,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_context,
    STATE(18), 1,
      sym__float,
    STATE(42), 1,
      sym_arg,
    STATE(62), 1,
      sym__call_args,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(35), 3,
      sym_type,
      sym_logical_group,
      sym_call,
    STATE(31), 6,
      sym_boolean,
      sym_int,
      sym_float,
      sym_hex,
      sym_exp,
      sym_string,
  [168] = 14,
    ACTIONS(7), 1,
      sym__number,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_null,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_0x,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_not,
    STATE(11), 1,
      sym_context,
    STATE(18), 1,
      sym__float,
    STATE(36), 1,
      sym_arg,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(35), 3,
      sym_type,
      sym_logical_group,
      sym_call,
    STATE(31), 6,
      sym_boolean,
      sym_int,
      sym_float,
      sym_hex,
      sym_exp,
      sym_string,
  [219] = 13,
    ACTIONS(7), 1,
      sym__number,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_null,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_0x,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_context,
    STATE(18), 1,
      sym__float,
    STATE(24), 1,
      sym_arg,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(35), 3,
      sym_type,
      sym_logical_group,
      sym_call,
    STATE(31), 6,
      sym_boolean,
      sym_int,
      sym_float,
      sym_hex,
      sym_exp,
      sym_string,
  [267] = 13,
    ACTIONS(7), 1,
      sym__number,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_null,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_0x,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_context,
    STATE(18), 1,
      sym__float,
    STATE(45), 1,
      sym_arg,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(35), 3,
      sym_type,
      sym_logical_group,
      sym_call,
    STATE(31), 6,
      sym_boolean,
      sym_int,
      sym_float,
      sym_hex,
      sym_exp,
      sym_string,
  [315] = 13,
    ACTIONS(7), 1,
      sym__number,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_null,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_0x,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_context,
    STATE(18), 1,
      sym__float,
    STATE(38), 1,
      sym_arg,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(35), 3,
      sym_type,
      sym_logical_group,
      sym_call,
    STATE(31), 6,
      sym_boolean,
      sym_int,
      sym_float,
      sym_hex,
      sym_exp,
      sym_string,
  [363] = 6,
    ACTIONS(33), 1,
      sym__dot,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym_property_deref,
    ACTIONS(39), 2,
      sym_lt,
      sym_gt,
    STATE(10), 3,
      sym_index,
      sym_property,
      aux_sym_arg_repeat1,
    ACTIONS(35), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [393] = 6,
    ACTIONS(41), 1,
      sym__dot,
    ACTIONS(46), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym_property_deref,
    ACTIONS(49), 2,
      sym_lt,
      sym_gt,
    STATE(10), 3,
      sym_index,
      sym_property,
      aux_sym_arg_repeat1,
    ACTIONS(44), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [423] = 6,
    ACTIONS(33), 1,
      sym__dot,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym_property_deref,
    ACTIONS(53), 2,
      sym_lt,
      sym_gt,
    STATE(9), 3,
      sym_index,
      sym_property,
      aux_sym_arg_repeat1,
    ACTIONS(51), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [453] = 3,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 2,
      sym_lt,
      sym_gt,
    ACTIONS(55), 11,
      sym__dot,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [474] = 2,
    ACTIONS(63), 2,
      sym_lt,
      sym_gt,
    ACTIONS(61), 11,
      sym__dot,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [492] = 2,
    ACTIONS(67), 2,
      sym_lt,
      sym_gt,
    ACTIONS(65), 11,
      sym__dot,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [510] = 5,
    STATE(5), 1,
      sym_operator,
    STATE(15), 1,
      aux_sym_expression_repeat1,
    ACTIONS(69), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(71), 2,
      sym_lt,
      sym_gt,
    ACTIONS(74), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [533] = 2,
    ACTIONS(79), 2,
      sym_lt,
      sym_gt,
    ACTIONS(77), 10,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [550] = 2,
    ACTIONS(83), 2,
      sym_lt,
      sym_gt,
    ACTIONS(81), 10,
      anon_sym_e,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [567] = 3,
    ACTIONS(85), 1,
      anon_sym_e,
    ACTIONS(89), 2,
      sym_lt,
      sym_gt,
    ACTIONS(87), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [586] = 2,
    ACTIONS(93), 2,
      sym_lt,
      sym_gt,
    ACTIONS(91), 10,
      anon_sym_e,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [603] = 5,
    STATE(5), 1,
      sym_operator,
    STATE(15), 1,
      aux_sym_expression_repeat1,
    ACTIONS(95), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(97), 2,
      sym_lt,
      sym_gt,
    ACTIONS(99), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [626] = 5,
    STATE(5), 1,
      sym_operator,
    STATE(20), 1,
      aux_sym_expression_repeat1,
    ACTIONS(97), 2,
      sym_lt,
      sym_gt,
    ACTIONS(101), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(99), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [649] = 5,
    STATE(5), 1,
      sym_operator,
    STATE(15), 1,
      aux_sym_expression_repeat1,
    ACTIONS(97), 2,
      sym_lt,
      sym_gt,
    ACTIONS(103), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(99), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [672] = 3,
    ACTIONS(105), 1,
      sym__dot,
    ACTIONS(109), 2,
      sym_lt,
      sym_gt,
    ACTIONS(107), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [691] = 5,
    STATE(5), 1,
      sym_operator,
    STATE(22), 1,
      aux_sym_expression_repeat1,
    ACTIONS(95), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(97), 2,
      sym_lt,
      sym_gt,
    ACTIONS(99), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [714] = 2,
    ACTIONS(113), 2,
      sym_lt,
      sym_gt,
    ACTIONS(111), 10,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [731] = 2,
    ACTIONS(117), 2,
      sym_lt,
      sym_gt,
    ACTIONS(115), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [747] = 2,
    ACTIONS(121), 2,
      sym_lt,
      sym_gt,
    ACTIONS(119), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [763] = 2,
    ACTIONS(125), 2,
      sym_lt,
      sym_gt,
    ACTIONS(123), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [779] = 2,
    ACTIONS(129), 2,
      sym_lt,
      sym_gt,
    ACTIONS(127), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [795] = 2,
    ACTIONS(133), 2,
      sym_lt,
      sym_gt,
    ACTIONS(131), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [811] = 2,
    ACTIONS(137), 2,
      sym_lt,
      sym_gt,
    ACTIONS(135), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [827] = 2,
    ACTIONS(141), 2,
      sym_lt,
      sym_gt,
    ACTIONS(139), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [843] = 2,
    ACTIONS(145), 2,
      sym_lt,
      sym_gt,
    ACTIONS(143), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [859] = 2,
    ACTIONS(149), 2,
      sym_lt,
      sym_gt,
    ACTIONS(147), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [875] = 2,
    ACTIONS(53), 2,
      sym_lt,
      sym_gt,
    ACTIONS(51), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [891] = 2,
    ACTIONS(151), 2,
      sym_lt,
      sym_gt,
    ACTIONS(69), 8,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [906] = 2,
    ACTIONS(153), 5,
      sym__number,
      sym_identifier,
      sym_null,
      sym_true,
      sym_false,
    ACTIONS(155), 5,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      sym_not,
  [921] = 2,
    ACTIONS(159), 2,
      sym_lt,
      sym_gt,
    ACTIONS(157), 8,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [936] = 3,
    ACTIONS(5), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    STATE(40), 3,
      sym__definition,
      sym_variable,
      aux_sym_source_file_repeat1,
  [948] = 3,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 1,
      anon_sym_DOLLAR,
    STATE(40), 3,
      sym__definition,
      sym_variable,
      aux_sym_source_file_repeat1,
  [960] = 3,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym__call_args_repeat1,
  [970] = 3,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym__call_args_repeat1,
  [980] = 3,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      aux_sym__call_args_repeat1,
  [990] = 1,
    ACTIONS(179), 2,
      sym_asterisk,
      sym_identifier,
  [995] = 1,
    ACTIONS(168), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1000] = 1,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
  [1005] = 2,
    ACTIONS(183), 1,
      sym__number,
    ACTIONS(185), 1,
      anon_sym_DASH,
  [1012] = 1,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
  [1017] = 2,
    ACTIONS(189), 1,
      sym_string_content,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
  [1024] = 1,
    ACTIONS(193), 2,
      sym_asterisk,
      sym_identifier,
  [1029] = 2,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    STATE(56), 1,
      sym_string,
  [1036] = 1,
    ACTIONS(195), 1,
      sym__number,
  [1040] = 1,
    ACTIONS(197), 1,
      sym__number,
  [1044] = 1,
    ACTIONS(199), 1,
      sym__dot,
  [1048] = 1,
    ACTIONS(201), 1,
      aux_sym_hex_token1,
  [1052] = 1,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
  [1056] = 1,
    ACTIONS(205), 1,
      sym__number,
  [1060] = 1,
    ACTIONS(207), 1,
      anon_sym_LBRACE_LBRACE,
  [1064] = 1,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
  [1068] = 1,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
  [1072] = 1,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
  [1076] = 1,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
  [1080] = 1,
    ACTIONS(217), 1,
      anon_sym_RBRACE_RBRACE,
  [1084] = 1,
    ACTIONS(219), 1,
      sym__number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 114,
  [SMALL_STATE(5)] = 168,
  [SMALL_STATE(6)] = 219,
  [SMALL_STATE(7)] = 267,
  [SMALL_STATE(8)] = 315,
  [SMALL_STATE(9)] = 363,
  [SMALL_STATE(10)] = 393,
  [SMALL_STATE(11)] = 423,
  [SMALL_STATE(12)] = 453,
  [SMALL_STATE(13)] = 474,
  [SMALL_STATE(14)] = 492,
  [SMALL_STATE(15)] = 510,
  [SMALL_STATE(16)] = 533,
  [SMALL_STATE(17)] = 550,
  [SMALL_STATE(18)] = 567,
  [SMALL_STATE(19)] = 586,
  [SMALL_STATE(20)] = 603,
  [SMALL_STATE(21)] = 626,
  [SMALL_STATE(22)] = 649,
  [SMALL_STATE(23)] = 672,
  [SMALL_STATE(24)] = 691,
  [SMALL_STATE(25)] = 714,
  [SMALL_STATE(26)] = 731,
  [SMALL_STATE(27)] = 747,
  [SMALL_STATE(28)] = 763,
  [SMALL_STATE(29)] = 779,
  [SMALL_STATE(30)] = 795,
  [SMALL_STATE(31)] = 811,
  [SMALL_STATE(32)] = 827,
  [SMALL_STATE(33)] = 843,
  [SMALL_STATE(34)] = 859,
  [SMALL_STATE(35)] = 875,
  [SMALL_STATE(36)] = 891,
  [SMALL_STATE(37)] = 906,
  [SMALL_STATE(38)] = 921,
  [SMALL_STATE(39)] = 936,
  [SMALL_STATE(40)] = 948,
  [SMALL_STATE(41)] = 960,
  [SMALL_STATE(42)] = 970,
  [SMALL_STATE(43)] = 980,
  [SMALL_STATE(44)] = 990,
  [SMALL_STATE(45)] = 995,
  [SMALL_STATE(46)] = 1000,
  [SMALL_STATE(47)] = 1005,
  [SMALL_STATE(48)] = 1012,
  [SMALL_STATE(49)] = 1017,
  [SMALL_STATE(50)] = 1024,
  [SMALL_STATE(51)] = 1029,
  [SMALL_STATE(52)] = 1036,
  [SMALL_STATE(53)] = 1040,
  [SMALL_STATE(54)] = 1044,
  [SMALL_STATE(55)] = 1048,
  [SMALL_STATE(56)] = 1052,
  [SMALL_STATE(57)] = 1056,
  [SMALL_STATE(58)] = 1060,
  [SMALL_STATE(59)] = 1064,
  [SMALL_STATE(60)] = 1068,
  [SMALL_STATE(61)] = 1072,
  [SMALL_STATE(62)] = 1076,
  [SMALL_STATE(63)] = 1080,
  [SMALL_STATE(64)] = 1084,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_repeat1, 2), SHIFT_REPEAT(50),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_repeat1, 2), SHIFT_REPEAT(51),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arg_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(37),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(37),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_group, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical_group, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_group, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical_group, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__call_args_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__call_args_repeat1, 2), SHIFT_REPEAT(7),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_args, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_args, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_deref, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [213] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_githubactions(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
