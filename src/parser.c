#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 64
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  sym_index = 16,
  sym_not = 17,
  sym_lt = 18,
  sym_le = 19,
  sym_gt = 20,
  sym_ge = 21,
  sym_eq = 22,
  sym_ne = 23,
  sym_and = 24,
  sym_or = 25,
  sym_whitespace = 26,
  anon_sym_COMMA = 27,
  anon_sym_DOLLAR = 28,
  anon_sym_LBRACE = 29,
  anon_sym_RBRACE = 30,
  sym_source_file = 31,
  sym__definition = 32,
  sym_type = 33,
  sym_boolean = 34,
  sym_int = 35,
  sym__float = 36,
  sym_float = 37,
  sym_hex = 38,
  sym_exp = 39,
  sym_string = 40,
  sym_operator = 41,
  sym_logical_group = 42,
  sym_property_deref = 43,
  sym_context = 44,
  sym_property = 45,
  sym_expression = 46,
  sym_arg = 47,
  sym_call = 48,
  sym__call_args = 49,
  sym_variable = 50,
  aux_sym_source_file_repeat1 = 51,
  aux_sym_expression_repeat1 = 52,
  aux_sym_arg_repeat1 = 53,
  aux_sym__call_args_repeat1 = 54,
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
  [sym_index] = "index",
  [sym_not] = "not",
  [sym_lt] = "lt",
  [sym_le] = "le",
  [sym_gt] = "gt",
  [sym_ge] = "ge",
  [sym_eq] = "eq",
  [sym_ne] = "ne",
  [sym_and] = "and",
  [sym_or] = "or",
  [sym_whitespace] = "whitespace",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [sym_index] = sym_index,
  [sym_not] = sym_not,
  [sym_lt] = sym_lt,
  [sym_le] = sym_le,
  [sym_gt] = sym_gt,
  [sym_ge] = sym_ge,
  [sym_eq] = sym_eq,
  [sym_ne] = sym_ne,
  [sym_and] = sym_and,
  [sym_or] = sym_or,
  [sym_whitespace] = sym_whitespace,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [sym_index] = {
    .visible = true,
    .named = true,
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
  [sym_whitespace] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '!') ADVANCE(59);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '0') ADVANCE(30);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == '{') ADVANCE(71);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '0') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '}') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(66);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 8:
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(57);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == '|') ADVANCE(67);
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
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(34);
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
      ACCEPT_TOKEN(sym_index);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_not);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_not);
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_le);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_ge);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_ne);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
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
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 25},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
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
    [sym_index] = ACTIONS(1),
    [sym_not] = ACTIONS(1),
    [sym_lt] = ACTIONS(1),
    [sym_le] = ACTIONS(1),
    [sym_gt] = ACTIONS(1),
    [sym_ge] = ACTIONS(1),
    [sym_eq] = ACTIONS(1),
    [sym_ne] = ACTIONS(1),
    [sym_and] = ACTIONS(1),
    [sym_or] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(59),
    [sym__definition] = STATE(37),
    [sym_variable] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(37),
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
      anon_sym_RPAREN,
    ACTIONS(25), 1,
      sym_not,
    STATE(11), 1,
      sym_context,
    STATE(21), 1,
      sym__float,
    STATE(22), 1,
      sym_arg,
    STATE(60), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(30), 3,
      sym_type,
      sym_logical_group,
      sym_call,
    STATE(28), 6,
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
    ACTIONS(25), 1,
      sym_not,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_context,
    STATE(21), 1,
      sym__float,
    STATE(22), 1,
      sym_arg,
    STATE(54), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(30), 3,
      sym_type,
      sym_logical_group,
      sym_call,
    STATE(28), 6,
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
    STATE(21), 1,
      sym__float,
    STATE(39), 1,
      sym_arg,
    STATE(49), 1,
      sym__call_args,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(30), 3,
      sym_type,
      sym_logical_group,
      sym_call,
    STATE(28), 6,
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
    STATE(21), 1,
      sym__float,
    STATE(35), 1,
      sym_arg,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(30), 3,
      sym_type,
      sym_logical_group,
      sym_call,
    STATE(28), 6,
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
    STATE(21), 1,
      sym__float,
    STATE(34), 1,
      sym_arg,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(30), 3,
      sym_type,
      sym_logical_group,
      sym_call,
    STATE(28), 6,
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
    STATE(13), 1,
      sym_arg,
    STATE(21), 1,
      sym__float,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(30), 3,
      sym_type,
      sym_logical_group,
      sym_call,
    STATE(28), 6,
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
    STATE(21), 1,
      sym__float,
    STATE(44), 1,
      sym_arg,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(30), 3,
      sym_type,
      sym_logical_group,
      sym_call,
    STATE(28), 6,
      sym_boolean,
      sym_int,
      sym_float,
      sym_hex,
      sym_exp,
      sym_string,
  [363] = 5,
    ACTIONS(33), 1,
      sym__dot,
    STATE(42), 1,
      sym_property_deref,
    ACTIONS(38), 2,
      sym_lt,
      sym_gt,
    STATE(9), 2,
      sym_property,
      aux_sym_arg_repeat1,
    ACTIONS(36), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [389] = 5,
    ACTIONS(40), 1,
      sym__dot,
    STATE(42), 1,
      sym_property_deref,
    ACTIONS(44), 2,
      sym_lt,
      sym_gt,
    STATE(9), 2,
      sym_property,
      aux_sym_arg_repeat1,
    ACTIONS(42), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [415] = 5,
    ACTIONS(40), 1,
      sym__dot,
    STATE(42), 1,
      sym_property_deref,
    ACTIONS(48), 2,
      sym_lt,
      sym_gt,
    STATE(10), 2,
      sym_property,
      aux_sym_arg_repeat1,
    ACTIONS(46), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [441] = 3,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 2,
      sym_lt,
      sym_gt,
    ACTIONS(50), 10,
      sym__dot,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [461] = 5,
    STATE(5), 1,
      sym_operator,
    STATE(16), 1,
      aux_sym_expression_repeat1,
    ACTIONS(56), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(58), 2,
      sym_lt,
      sym_gt,
    ACTIONS(60), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [484] = 3,
    ACTIONS(62), 1,
      sym__dot,
    ACTIONS(66), 2,
      sym_lt,
      sym_gt,
    ACTIONS(64), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [503] = 2,
    ACTIONS(70), 2,
      sym_lt,
      sym_gt,
    ACTIONS(68), 10,
      sym__dot,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [520] = 5,
    STATE(5), 1,
      sym_operator,
    STATE(20), 1,
      aux_sym_expression_repeat1,
    ACTIONS(58), 2,
      sym_lt,
      sym_gt,
    ACTIONS(72), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(60), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [543] = 2,
    ACTIONS(76), 2,
      sym_lt,
      sym_gt,
    ACTIONS(74), 10,
      anon_sym_e,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [560] = 5,
    STATE(5), 1,
      sym_operator,
    STATE(20), 1,
      aux_sym_expression_repeat1,
    ACTIONS(56), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(58), 2,
      sym_lt,
      sym_gt,
    ACTIONS(60), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [583] = 2,
    ACTIONS(80), 2,
      sym_lt,
      sym_gt,
    ACTIONS(78), 10,
      anon_sym_e,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [600] = 5,
    STATE(5), 1,
      sym_operator,
    STATE(20), 1,
      aux_sym_expression_repeat1,
    ACTIONS(82), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(84), 2,
      sym_lt,
      sym_gt,
    ACTIONS(87), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [623] = 3,
    ACTIONS(90), 1,
      anon_sym_e,
    ACTIONS(94), 2,
      sym_lt,
      sym_gt,
    ACTIONS(92), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [642] = 5,
    STATE(5), 1,
      sym_operator,
    STATE(18), 1,
      aux_sym_expression_repeat1,
    ACTIONS(58), 2,
      sym_lt,
      sym_gt,
    ACTIONS(96), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(60), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [665] = 2,
    ACTIONS(100), 2,
      sym_lt,
      sym_gt,
    ACTIONS(98), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [681] = 2,
    ACTIONS(104), 2,
      sym_lt,
      sym_gt,
    ACTIONS(102), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [697] = 2,
    ACTIONS(108), 2,
      sym_lt,
      sym_gt,
    ACTIONS(106), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [713] = 2,
    ACTIONS(112), 2,
      sym_lt,
      sym_gt,
    ACTIONS(110), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [729] = 2,
    ACTIONS(116), 2,
      sym_lt,
      sym_gt,
    ACTIONS(114), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [745] = 2,
    ACTIONS(120), 2,
      sym_lt,
      sym_gt,
    ACTIONS(118), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [761] = 2,
    ACTIONS(124), 2,
      sym_lt,
      sym_gt,
    ACTIONS(122), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [777] = 2,
    ACTIONS(48), 2,
      sym_lt,
      sym_gt,
    ACTIONS(46), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [793] = 2,
    ACTIONS(128), 2,
      sym_lt,
      sym_gt,
    ACTIONS(126), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [809] = 2,
    ACTIONS(132), 2,
      sym_lt,
      sym_gt,
    ACTIONS(130), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [825] = 2,
    ACTIONS(136), 2,
      sym_lt,
      sym_gt,
    ACTIONS(134), 9,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [841] = 2,
    ACTIONS(140), 2,
      sym_lt,
      sym_gt,
    ACTIONS(138), 8,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE,
  [856] = 2,
    ACTIONS(142), 2,
      sym_lt,
      sym_gt,
    ACTIONS(82), 8,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE,
  [871] = 2,
    ACTIONS(144), 5,
      sym__number,
      sym_identifier,
      sym_null,
      sym_true,
      sym_false,
    ACTIONS(146), 5,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      sym_not,
  [886] = 3,
    ACTIONS(5), 1,
      anon_sym_DOLLAR,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    STATE(38), 3,
      sym__definition,
      sym_variable,
      aux_sym_source_file_repeat1,
  [898] = 3,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      anon_sym_DOLLAR,
    STATE(38), 3,
      sym__definition,
      sym_variable,
      aux_sym_source_file_repeat1,
  [910] = 3,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym__call_args_repeat1,
  [920] = 3,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym__call_args_repeat1,
  [930] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      aux_sym__call_args_repeat1,
  [940] = 1,
    ACTIONS(166), 2,
      sym_asterisk,
      sym_identifier,
  [945] = 1,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
  [950] = 1,
    ACTIONS(159), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [955] = 1,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
  [960] = 2,
    ACTIONS(172), 1,
      sym__number,
    ACTIONS(174), 1,
      anon_sym_DASH,
  [967] = 1,
    ACTIONS(176), 2,
      sym_asterisk,
      sym_identifier,
  [972] = 1,
    ACTIONS(178), 1,
      sym__number,
  [976] = 1,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
  [980] = 1,
    ACTIONS(182), 1,
      sym__number,
  [984] = 1,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
  [988] = 1,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
  [992] = 1,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
  [996] = 1,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
  [1000] = 1,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
  [1004] = 1,
    ACTIONS(194), 1,
      sym__number,
  [1008] = 1,
    ACTIONS(196), 1,
      aux_sym_hex_token1,
  [1012] = 1,
    ACTIONS(198), 1,
      sym_string_content,
  [1016] = 1,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
  [1020] = 1,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
  [1024] = 1,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
  [1028] = 1,
    ACTIONS(206), 1,
      sym__number,
  [1032] = 1,
    ACTIONS(208), 1,
      sym__dot,
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
  [SMALL_STATE(10)] = 389,
  [SMALL_STATE(11)] = 415,
  [SMALL_STATE(12)] = 441,
  [SMALL_STATE(13)] = 461,
  [SMALL_STATE(14)] = 484,
  [SMALL_STATE(15)] = 503,
  [SMALL_STATE(16)] = 520,
  [SMALL_STATE(17)] = 543,
  [SMALL_STATE(18)] = 560,
  [SMALL_STATE(19)] = 583,
  [SMALL_STATE(20)] = 600,
  [SMALL_STATE(21)] = 623,
  [SMALL_STATE(22)] = 642,
  [SMALL_STATE(23)] = 665,
  [SMALL_STATE(24)] = 681,
  [SMALL_STATE(25)] = 697,
  [SMALL_STATE(26)] = 713,
  [SMALL_STATE(27)] = 729,
  [SMALL_STATE(28)] = 745,
  [SMALL_STATE(29)] = 761,
  [SMALL_STATE(30)] = 777,
  [SMALL_STATE(31)] = 793,
  [SMALL_STATE(32)] = 809,
  [SMALL_STATE(33)] = 825,
  [SMALL_STATE(34)] = 841,
  [SMALL_STATE(35)] = 856,
  [SMALL_STATE(36)] = 871,
  [SMALL_STATE(37)] = 886,
  [SMALL_STATE(38)] = 898,
  [SMALL_STATE(39)] = 910,
  [SMALL_STATE(40)] = 920,
  [SMALL_STATE(41)] = 930,
  [SMALL_STATE(42)] = 940,
  [SMALL_STATE(43)] = 945,
  [SMALL_STATE(44)] = 950,
  [SMALL_STATE(45)] = 955,
  [SMALL_STATE(46)] = 960,
  [SMALL_STATE(47)] = 967,
  [SMALL_STATE(48)] = 972,
  [SMALL_STATE(49)] = 976,
  [SMALL_STATE(50)] = 980,
  [SMALL_STATE(51)] = 984,
  [SMALL_STATE(52)] = 988,
  [SMALL_STATE(53)] = 992,
  [SMALL_STATE(54)] = 996,
  [SMALL_STATE(55)] = 1000,
  [SMALL_STATE(56)] = 1004,
  [SMALL_STATE(57)] = 1008,
  [SMALL_STATE(58)] = 1012,
  [SMALL_STATE(59)] = 1016,
  [SMALL_STATE(60)] = 1020,
  [SMALL_STATE(61)] = 1024,
  [SMALL_STATE(62)] = 1028,
  [SMALL_STATE(63)] = 1032,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_repeat1, 2), SHIFT_REPEAT(47),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_repeat1, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arg_repeat1, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 4),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(36),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(36),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 4),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_group, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical_group, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_group, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical_group, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_args, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__call_args_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__call_args_repeat1, 2), SHIFT_REPEAT(8),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_args, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_deref, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [200] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_githubactionsvariables(void) {
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
