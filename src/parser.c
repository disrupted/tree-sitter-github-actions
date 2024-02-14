#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
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
  sym_logical_group = 14,
  sym_index = 15,
  sym_not = 16,
  sym_lt = 17,
  sym_le = 18,
  sym_gt = 19,
  sym_ge = 20,
  sym_eq = 21,
  sym_ne = 22,
  sym_and = 23,
  sym_or = 24,
  sym_env_var = 25,
  sym_whitespace = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  anon_sym_COMMA = 29,
  anon_sym_DOLLAR = 30,
  anon_sym_LBRACE_LBRACE = 31,
  anon_sym_RBRACE_RBRACE = 32,
  sym_source_file = 33,
  sym__definition = 34,
  sym_type = 35,
  sym_boolean = 36,
  sym_int = 37,
  sym__float = 38,
  sym_float = 39,
  sym_hex = 40,
  sym_exp = 41,
  sym_string = 42,
  sym_operator = 43,
  sym_property_deref = 44,
  sym_context = 45,
  sym_property = 46,
  sym_arg = 47,
  sym_call = 48,
  sym__call_args = 49,
  sym_variable_content = 50,
  sym_variable = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_arg_repeat1 = 53,
  aux_sym__call_args_repeat1 = 54,
  aux_sym_variable_content_repeat1 = 55,
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
  [sym_logical_group] = "logical_group",
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
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
  [sym_property_deref] = "property_deref",
  [sym_context] = "context",
  [sym_property] = "property",
  [sym_arg] = "arg",
  [sym_call] = "call",
  [sym__call_args] = "_call_args",
  [sym_variable_content] = "variable_content",
  [sym_variable] = "variable",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_arg_repeat1] = "arg_repeat1",
  [aux_sym__call_args_repeat1] = "_call_args_repeat1",
  [aux_sym_variable_content_repeat1] = "variable_content_repeat1",
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
  [sym_logical_group] = sym_logical_group,
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
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
  [sym_property_deref] = sym_property_deref,
  [sym_context] = sym_context,
  [sym_property] = sym_property,
  [sym_arg] = sym_arg,
  [sym_call] = sym_call,
  [sym__call_args] = sym__call_args,
  [sym_variable_content] = sym_variable_content,
  [sym_variable] = sym_variable,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_arg_repeat1] = aux_sym_arg_repeat1,
  [aux_sym__call_args_repeat1] = aux_sym__call_args_repeat1,
  [aux_sym_variable_content_repeat1] = aux_sym_variable_content_repeat1,
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
  [sym_logical_group] = {
    .visible = true,
    .named = true,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
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
  [aux_sym_arg_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__call_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_content_repeat1] = {
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
  [30] = 25,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '0') ADVANCE(19);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '[') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '}') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '(') ADVANCE(1);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '[') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '}') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(54);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '0') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 't') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(45);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 9:
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == ']') ADVANCE(46);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 12:
      if (lookahead == '{') ADVANCE(63);
      END_STATE();
    case 13:
      if (lookahead == '|') ADVANCE(55);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(64);
      END_STATE();
    case 15:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(24);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == 'x') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(16);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(28);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_null);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_true);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_false);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_e);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_logical_group);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_index);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_not);
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_le);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_ge);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_ne);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_env_var);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
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
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__dot] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [sym_asterisk] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_logical_group] = ACTIONS(1),
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(50),
    [sym__definition] = STATE(29),
    [sym_variable] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(29),
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
    STATE(6), 1,
      sym_context,
    STATE(13), 1,
      sym__float,
    STATE(17), 1,
      sym_arg,
    STATE(46), 1,
      sym_variable_content,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(16), 2,
      sym_type,
      sym_call,
    STATE(14), 6,
      sym_boolean,
      sym_int,
      sym_float,
      sym_hex,
      sym_exp,
      sym_string,
  [47] = 13,
    ACTIONS(7), 1,
      sym__number,
    ACTIONS(11), 1,
      sym_null,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_0x,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(6), 1,
      sym_context,
    STATE(13), 1,
      sym__float,
    STATE(33), 1,
      sym_arg,
    STATE(39), 1,
      sym__call_args,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(16), 2,
      sym_type,
      sym_call,
    STATE(14), 6,
      sym_boolean,
      sym_int,
      sym_float,
      sym_hex,
      sym_exp,
      sym_string,
  [94] = 12,
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
    STATE(6), 1,
      sym_context,
    STATE(13), 1,
      sym__float,
    STATE(26), 1,
      sym_arg,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(16), 2,
      sym_type,
      sym_call,
    STATE(14), 6,
      sym_boolean,
      sym_int,
      sym_float,
      sym_hex,
      sym_exp,
      sym_string,
  [138] = 12,
    ACTIONS(7), 1,
      sym__number,
    ACTIONS(11), 1,
      sym_null,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_0x,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(6), 1,
      sym_context,
    STATE(13), 1,
      sym__float,
    STATE(38), 1,
      sym_arg,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(16), 2,
      sym_type,
      sym_call,
    STATE(14), 6,
      sym_boolean,
      sym_int,
      sym_float,
      sym_hex,
      sym_exp,
      sym_string,
  [182] = 5,
    ACTIONS(23), 1,
      sym__dot,
    STATE(31), 1,
      sym_property_deref,
    STATE(7), 2,
      sym_property,
      aux_sym_arg_repeat1,
    ACTIONS(27), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(25), 11,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [211] = 5,
    ACTIONS(23), 1,
      sym__dot,
    STATE(31), 1,
      sym_property_deref,
    STATE(8), 2,
      sym_property,
      aux_sym_arg_repeat1,
    ACTIONS(31), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(29), 11,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [240] = 5,
    ACTIONS(33), 1,
      sym__dot,
    STATE(31), 1,
      sym_property_deref,
    STATE(8), 2,
      sym_property,
      aux_sym_arg_repeat1,
    ACTIONS(38), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(36), 11,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [269] = 2,
    ACTIONS(42), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(40), 12,
      sym__dot,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [289] = 2,
    ACTIONS(46), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(44), 12,
      anon_sym_e,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [309] = 3,
    ACTIONS(48), 1,
      sym__dot,
    ACTIONS(52), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(50), 11,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [331] = 2,
    ACTIONS(56), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(54), 12,
      anon_sym_e,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [351] = 3,
    ACTIONS(58), 1,
      anon_sym_e,
    ACTIONS(62), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(60), 11,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [373] = 2,
    ACTIONS(66), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(64), 11,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [392] = 5,
    ACTIONS(72), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(4), 1,
      sym_operator,
    STATE(21), 1,
      aux_sym_variable_content_repeat1,
    ACTIONS(70), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(68), 8,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [417] = 2,
    ACTIONS(27), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(25), 11,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [436] = 5,
    ACTIONS(74), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(4), 1,
      sym_operator,
    STATE(15), 1,
      aux_sym_variable_content_repeat1,
    ACTIONS(70), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(68), 8,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [461] = 2,
    ACTIONS(78), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(76), 11,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [480] = 2,
    ACTIONS(82), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(80), 11,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [499] = 2,
    ACTIONS(86), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(84), 11,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [518] = 5,
    ACTIONS(94), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(4), 1,
      sym_operator,
    STATE(21), 1,
      aux_sym_variable_content_repeat1,
    ACTIONS(91), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(88), 8,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [543] = 2,
    ACTIONS(98), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(96), 11,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [562] = 2,
    ACTIONS(102), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(100), 11,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [581] = 2,
    ACTIONS(106), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(104), 11,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [600] = 3,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(108), 10,
      sym__dot,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [621] = 2,
    ACTIONS(114), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(94), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [638] = 2,
    ACTIONS(118), 3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_SQUOTE,
    ACTIONS(116), 5,
      sym__number,
      sym_identifier,
      sym_null,
      sym_true,
      sym_false,
  [651] = 3,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 1,
      anon_sym_DOLLAR,
    STATE(28), 3,
      sym__definition,
      sym_variable,
      aux_sym_source_file_repeat1,
  [663] = 3,
    ACTIONS(5), 1,
      anon_sym_DOLLAR,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    STATE(28), 3,
      sym__definition,
      sym_variable,
      aux_sym_source_file_repeat1,
  [675] = 2,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 3,
      sym__dot,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [684] = 1,
    ACTIONS(129), 3,
      sym_asterisk,
      sym_identifier,
      sym_env_var,
  [690] = 1,
    ACTIONS(131), 3,
      sym_asterisk,
      sym_identifier,
      sym_env_var,
  [696] = 3,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym__call_args_repeat1,
  [706] = 3,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym__call_args_repeat1,
  [716] = 3,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym__call_args_repeat1,
  [726] = 2,
    ACTIONS(144), 1,
      sym__number,
    ACTIONS(146), 1,
      anon_sym_DASH,
  [733] = 1,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
  [738] = 1,
    ACTIONS(139), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [743] = 1,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
  [747] = 1,
    ACTIONS(152), 1,
      sym__number,
  [751] = 1,
    ACTIONS(154), 1,
      sym__number,
  [755] = 1,
    ACTIONS(156), 1,
      anon_sym_LBRACE_LBRACE,
  [759] = 1,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
  [763] = 1,
    ACTIONS(160), 1,
      sym__dot,
  [767] = 1,
    ACTIONS(162), 1,
      sym__number,
  [771] = 1,
    ACTIONS(164), 1,
      anon_sym_RBRACE_RBRACE,
  [775] = 1,
    ACTIONS(166), 1,
      sym_string_content,
  [779] = 1,
    ACTIONS(168), 1,
      aux_sym_hex_token1,
  [783] = 1,
    ACTIONS(170), 1,
      sym__number,
  [787] = 1,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 182,
  [SMALL_STATE(7)] = 211,
  [SMALL_STATE(8)] = 240,
  [SMALL_STATE(9)] = 269,
  [SMALL_STATE(10)] = 289,
  [SMALL_STATE(11)] = 309,
  [SMALL_STATE(12)] = 331,
  [SMALL_STATE(13)] = 351,
  [SMALL_STATE(14)] = 373,
  [SMALL_STATE(15)] = 392,
  [SMALL_STATE(16)] = 417,
  [SMALL_STATE(17)] = 436,
  [SMALL_STATE(18)] = 461,
  [SMALL_STATE(19)] = 480,
  [SMALL_STATE(20)] = 499,
  [SMALL_STATE(21)] = 518,
  [SMALL_STATE(22)] = 543,
  [SMALL_STATE(23)] = 562,
  [SMALL_STATE(24)] = 581,
  [SMALL_STATE(25)] = 600,
  [SMALL_STATE(26)] = 621,
  [SMALL_STATE(27)] = 638,
  [SMALL_STATE(28)] = 651,
  [SMALL_STATE(29)] = 663,
  [SMALL_STATE(30)] = 675,
  [SMALL_STATE(31)] = 684,
  [SMALL_STATE(32)] = 690,
  [SMALL_STATE(33)] = 696,
  [SMALL_STATE(34)] = 706,
  [SMALL_STATE(35)] = 716,
  [SMALL_STATE(36)] = 726,
  [SMALL_STATE(37)] = 733,
  [SMALL_STATE(38)] = 738,
  [SMALL_STATE(39)] = 743,
  [SMALL_STATE(40)] = 747,
  [SMALL_STATE(41)] = 751,
  [SMALL_STATE(42)] = 755,
  [SMALL_STATE(43)] = 759,
  [SMALL_STATE(44)] = 763,
  [SMALL_STATE(45)] = 767,
  [SMALL_STATE(46)] = 771,
  [SMALL_STATE(47)] = 775,
  [SMALL_STATE(48)] = 779,
  [SMALL_STATE(49)] = 783,
  [SMALL_STATE(50)] = 787,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_repeat1, 2), SHIFT_REPEAT(32),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_repeat1, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arg_repeat1, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 3),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 4),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 4),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_content, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_content, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 4),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 4),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_content_repeat1, 2), SHIFT_REPEAT(27),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_content_repeat1, 2), SHIFT_REPEAT(27),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_content_repeat1, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_content_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_deref, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_args, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_args, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__call_args_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__call_args_repeat1, 2), SHIFT_REPEAT(5),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [172] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
