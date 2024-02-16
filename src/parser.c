#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

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
  sym_env_var = 26,
  sym_whitespace = 27,
  anon_sym_COMMA = 28,
  anon_sym_DOLLAR = 29,
  anon_sym_LBRACE = 30,
  anon_sym_RBRACE = 31,
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
  sym_property_deref = 44,
  sym_context = 45,
  sym_property = 46,
  sym_arg = 47,
  sym_call = 48,
  sym__call_args = 49,
  sym_variable_content = 50,
  sym_variable = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_logical_group_repeat1 = 53,
  aux_sym_arg_repeat1 = 54,
  aux_sym__call_args_repeat1 = 55,
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
  [sym_env_var] = "env_var",
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
  [sym_arg] = "arg",
  [sym_call] = "call",
  [sym__call_args] = "_call_args",
  [sym_variable_content] = "variable_content",
  [sym_variable] = "variable",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_logical_group_repeat1] = "logical_group_repeat1",
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
  [sym_env_var] = sym_env_var,
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
  [sym_arg] = sym_arg,
  [sym_call] = sym_call,
  [sym__call_args] = sym__call_args,
  [sym_variable_content] = sym_variable_content,
  [sym_variable] = sym_variable,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_logical_group_repeat1] = aux_sym_logical_group_repeat1,
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
  [sym_env_var] = {
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
  [sym_variable_content] = {
    .visible = true,
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
  [aux_sym_logical_group_repeat1] = {
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
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == ',') ADVANCE(67);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '>') ADVANCE(59);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(63);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 't') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 6:
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == ']') ADVANCE(55);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(66);
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
      if (lookahead == 'u') ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == '|') ADVANCE(64);
      END_STATE();
    case 23:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(33);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == 'x') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(25);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_index);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_not);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_le);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_ge);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_ne);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_env_var);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 23},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
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
    [sym_env_var] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(48),
    [sym__definition] = STATE(35),
    [sym_variable] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
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
    STATE(7), 1,
      sym_context,
    STATE(18), 1,
      sym__float,
    STATE(19), 1,
      sym_arg,
    STATE(49), 1,
      sym_variable_content,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(22), 2,
      sym_type,
      sym_call,
    STATE(25), 6,
      sym_boolean,
      sym_int,
      sym_float,
      sym_hex,
      sym_exp,
      sym_string,
  [47] = 13,
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
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_context,
    STATE(15), 1,
      sym_arg,
    STATE(18), 1,
      sym__float,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(22), 2,
      sym_type,
      sym_call,
    STATE(25), 6,
      sym_boolean,
      sym_int,
      sym_float,
      sym_hex,
      sym_exp,
      sym_string,
  [94] = 13,
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
    STATE(7), 1,
      sym_context,
    STATE(18), 1,
      sym__float,
    STATE(38), 1,
      sym_arg,
    STATE(52), 1,
      sym__call_args,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(22), 2,
      sym_type,
      sym_call,
    STATE(25), 6,
      sym_boolean,
      sym_int,
      sym_float,
      sym_hex,
      sym_exp,
      sym_string,
  [141] = 12,
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
    STATE(7), 1,
      sym_context,
    STATE(18), 1,
      sym__float,
    STATE(43), 1,
      sym_arg,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(22), 2,
      sym_type,
      sym_call,
    STATE(25), 6,
      sym_boolean,
      sym_int,
      sym_float,
      sym_hex,
      sym_exp,
      sym_string,
  [185] = 12,
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
    STATE(7), 1,
      sym_context,
    STATE(18), 1,
      sym__float,
    STATE(29), 1,
      sym_arg,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(22), 2,
      sym_type,
      sym_call,
    STATE(25), 6,
      sym_boolean,
      sym_int,
      sym_float,
      sym_hex,
      sym_exp,
      sym_string,
  [229] = 5,
    ACTIONS(23), 1,
      sym__dot,
    STATE(36), 1,
      sym_property_deref,
    STATE(9), 2,
      sym_property,
      aux_sym_arg_repeat1,
    ACTIONS(27), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(25), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [258] = 5,
    ACTIONS(29), 1,
      sym__dot,
    STATE(36), 1,
      sym_property_deref,
    STATE(8), 2,
      sym_property,
      aux_sym_arg_repeat1,
    ACTIONS(34), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(32), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [287] = 5,
    ACTIONS(23), 1,
      sym__dot,
    STATE(36), 1,
      sym_property_deref,
    STATE(8), 2,
      sym_property,
      aux_sym_arg_repeat1,
    ACTIONS(38), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(36), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [316] = 7,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_operator,
    STATE(10), 1,
      aux_sym_logical_group_repeat1,
    STATE(30), 1,
      sym_logical_group,
    ACTIONS(43), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(48), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(45), 7,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [347] = 2,
    ACTIONS(53), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(51), 12,
      sym__dot,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [367] = 7,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_operator,
    STATE(10), 1,
      aux_sym_logical_group_repeat1,
    STATE(30), 1,
      sym_logical_group,
    ACTIONS(59), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(57), 7,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [397] = 7,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_operator,
    STATE(10), 1,
      aux_sym_logical_group_repeat1,
    STATE(30), 1,
      sym_logical_group,
    ACTIONS(59), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(57), 7,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [427] = 2,
    ACTIONS(67), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(65), 12,
      anon_sym_e,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [447] = 7,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_operator,
    STATE(13), 1,
      aux_sym_logical_group_repeat1,
    STATE(30), 1,
      sym_logical_group,
    ACTIONS(59), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(57), 7,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [477] = 2,
    ACTIONS(73), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(71), 12,
      anon_sym_e,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [497] = 3,
    ACTIONS(75), 1,
      sym__dot,
    ACTIONS(79), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(77), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [519] = 3,
    ACTIONS(81), 1,
      anon_sym_e,
    ACTIONS(85), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(83), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [541] = 7,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_operator,
    STATE(12), 1,
      aux_sym_logical_group_repeat1,
    STATE(30), 1,
      sym_logical_group,
    ACTIONS(59), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(57), 7,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [571] = 3,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(89), 11,
      sym__dot,
      anon_sym_RPAREN,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [593] = 2,
    ACTIONS(97), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(95), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [612] = 2,
    ACTIONS(27), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(25), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [631] = 2,
    ACTIONS(101), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(99), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [650] = 2,
    ACTIONS(105), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(103), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [669] = 2,
    ACTIONS(109), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(107), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [688] = 2,
    ACTIONS(113), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(111), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [707] = 2,
    ACTIONS(117), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(115), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [726] = 2,
    ACTIONS(121), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(119), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [745] = 2,
    ACTIONS(123), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(43), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE,
  [763] = 2,
    ACTIONS(127), 3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_SQUOTE,
    ACTIONS(125), 5,
      sym__number,
      sym_identifier,
      sym_null,
      sym_true,
      sym_false,
  [776] = 2,
    ACTIONS(131), 3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_SQUOTE,
    ACTIONS(129), 5,
      sym__number,
      sym_identifier,
      sym_null,
      sym_true,
      sym_false,
  [789] = 2,
    ACTIONS(135), 3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_SQUOTE,
    ACTIONS(133), 5,
      sym__number,
      sym_identifier,
      sym_null,
      sym_true,
      sym_false,
  [802] = 2,
    ACTIONS(139), 3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_SQUOTE,
    ACTIONS(137), 5,
      sym__number,
      sym_identifier,
      sym_null,
      sym_true,
      sym_false,
  [815] = 3,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
      anon_sym_DOLLAR,
    STATE(34), 3,
      sym__definition,
      sym_variable,
      aux_sym_source_file_repeat1,
  [827] = 3,
    ACTIONS(5), 1,
      anon_sym_DOLLAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(34), 3,
      sym__definition,
      sym_variable,
      aux_sym_source_file_repeat1,
  [839] = 1,
    ACTIONS(148), 3,
      sym_asterisk,
      sym_identifier,
      sym_env_var,
  [845] = 1,
    ACTIONS(150), 3,
      sym_asterisk,
      sym_identifier,
      sym_env_var,
  [851] = 3,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym__call_args_repeat1,
  [861] = 3,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      aux_sym__call_args_repeat1,
  [871] = 3,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym__call_args_repeat1,
  [881] = 1,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
  [886] = 2,
    ACTIONS(165), 1,
      sym__number,
    ACTIONS(167), 1,
      anon_sym_DASH,
  [893] = 1,
    ACTIONS(158), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [898] = 1,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
  [902] = 1,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
  [906] = 1,
    ACTIONS(173), 1,
      sym__number,
  [910] = 1,
    ACTIONS(175), 1,
      sym_string_content,
  [914] = 1,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
  [918] = 1,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
  [922] = 1,
    ACTIONS(181), 1,
      sym__number,
  [926] = 1,
    ACTIONS(183), 1,
      aux_sym_hex_token1,
  [930] = 1,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
  [934] = 1,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
  [938] = 1,
    ACTIONS(189), 1,
      sym__number,
  [942] = 1,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
  [946] = 1,
    ACTIONS(193), 1,
      sym__dot,
  [950] = 1,
    ACTIONS(195), 1,
      sym__number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 141,
  [SMALL_STATE(6)] = 185,
  [SMALL_STATE(7)] = 229,
  [SMALL_STATE(8)] = 258,
  [SMALL_STATE(9)] = 287,
  [SMALL_STATE(10)] = 316,
  [SMALL_STATE(11)] = 347,
  [SMALL_STATE(12)] = 367,
  [SMALL_STATE(13)] = 397,
  [SMALL_STATE(14)] = 427,
  [SMALL_STATE(15)] = 447,
  [SMALL_STATE(16)] = 477,
  [SMALL_STATE(17)] = 497,
  [SMALL_STATE(18)] = 519,
  [SMALL_STATE(19)] = 541,
  [SMALL_STATE(20)] = 571,
  [SMALL_STATE(21)] = 593,
  [SMALL_STATE(22)] = 612,
  [SMALL_STATE(23)] = 631,
  [SMALL_STATE(24)] = 650,
  [SMALL_STATE(25)] = 669,
  [SMALL_STATE(26)] = 688,
  [SMALL_STATE(27)] = 707,
  [SMALL_STATE(28)] = 726,
  [SMALL_STATE(29)] = 745,
  [SMALL_STATE(30)] = 763,
  [SMALL_STATE(31)] = 776,
  [SMALL_STATE(32)] = 789,
  [SMALL_STATE(33)] = 802,
  [SMALL_STATE(34)] = 815,
  [SMALL_STATE(35)] = 827,
  [SMALL_STATE(36)] = 839,
  [SMALL_STATE(37)] = 845,
  [SMALL_STATE(38)] = 851,
  [SMALL_STATE(39)] = 861,
  [SMALL_STATE(40)] = 871,
  [SMALL_STATE(41)] = 881,
  [SMALL_STATE(42)] = 886,
  [SMALL_STATE(43)] = 893,
  [SMALL_STATE(44)] = 898,
  [SMALL_STATE(45)] = 902,
  [SMALL_STATE(46)] = 906,
  [SMALL_STATE(47)] = 910,
  [SMALL_STATE(48)] = 914,
  [SMALL_STATE(49)] = 918,
  [SMALL_STATE(50)] = 922,
  [SMALL_STATE(51)] = 926,
  [SMALL_STATE(52)] = 930,
  [SMALL_STATE(53)] = 934,
  [SMALL_STATE(54)] = 938,
  [SMALL_STATE(55)] = 942,
  [SMALL_STATE(56)] = 946,
  [SMALL_STATE(57)] = 950,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 1),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_repeat1, 2), SHIFT_REPEAT(37),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_repeat1, 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arg_repeat1, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logical_group_repeat1, 2), SHIFT_REPEAT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logical_group_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logical_group_repeat1, 2), SHIFT_REPEAT(30),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logical_group_repeat1, 2), SHIFT_REPEAT(30),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_content, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_content, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_logical_group_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical_group, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_group, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical_group, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_group, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical_group, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_group, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_deref, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_args, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_args, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__call_args_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__call_args_repeat1, 2), SHIFT_REPEAT(5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [177] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
