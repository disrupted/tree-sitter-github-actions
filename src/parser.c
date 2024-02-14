#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__dot = 1,
  sym__number = 2,
  sym_string_content = 3,
  sym_identifier = 4,
  sym_null = 5,
  sym_true = 6,
  sym_false = 7,
  anon_sym_DASH = 8,
  anon_sym_0x = 9,
  aux_sym_hex_token1 = 10,
  anon_sym_e = 11,
  anon_sym_SQUOTE = 12,
  sym_logical_group = 13,
  sym_index = 14,
  sym_not = 15,
  sym_lt = 16,
  sym_le = 17,
  sym_gt = 18,
  sym_ge = 19,
  sym_eq = 20,
  sym_ne = 21,
  sym_and = 22,
  sym_or = 23,
  sym_env_var = 24,
  sym_whitespace = 25,
  anon_sym_DOLLAR_LBRACE_LBRACE = 26,
  anon_sym_RBRACE_RBRACE = 27,
  sym_source_file = 28,
  sym__definition = 29,
  sym_type = 30,
  sym_boolean = 31,
  sym_int = 32,
  sym__float = 33,
  sym_float = 34,
  sym_hex = 35,
  sym_exp = 36,
  sym_string = 37,
  sym_operator = 38,
  sym_property_deref = 39,
  sym_context = 40,
  sym_property = 41,
  sym_variable = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_variable_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__dot] = "_dot",
  [sym__number] = "_number",
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
  [anon_sym_DOLLAR_LBRACE_LBRACE] = "${{",
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
  [sym_variable] = "variable",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_variable_repeat1] = "variable_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__dot] = sym__dot,
  [sym__number] = sym__number,
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
  [anon_sym_DOLLAR_LBRACE_LBRACE] = anon_sym_DOLLAR_LBRACE_LBRACE,
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
  [sym_variable] = sym_variable,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_variable_repeat1] = aux_sym_variable_repeat1,
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
  [anon_sym_DOLLAR_LBRACE_LBRACE] = {
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
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(1);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '0') ADVANCE(20);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '[') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '}') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '(') ADVANCE(1);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(7);
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
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '0') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 't') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(45);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 8:
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 11:
      if (lookahead == '{') ADVANCE(58);
      END_STATE();
    case 12:
      if (lookahead == '{') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '|') ADVANCE(55);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(59);
      END_STATE();
    case 15:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 16:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(24);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == 'x') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(17);
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
      if (lookahead == '\\') ADVANCE(17);
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
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_LBRACE);
      END_STATE();
    case 59:
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
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
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__dot] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
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
    [anon_sym_DOLLAR_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(35),
    [sym__definition] = STATE(27),
    [sym_variable] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOLLAR_LBRACE_LBRACE] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
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
    STATE(4), 1,
      sym_context,
    STATE(6), 1,
      sym_type,
    STATE(12), 1,
      sym__float,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(22), 6,
      sym_boolean,
      sym_int,
      sym_float,
      sym_hex,
      sym_exp,
      sym_string,
  [40] = 11,
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
    STATE(5), 1,
      sym_context,
    STATE(12), 1,
      sym__float,
    STATE(21), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(22), 6,
      sym_boolean,
      sym_int,
      sym_float,
      sym_hex,
      sym_exp,
      sym_string,
  [80] = 8,
    ACTIONS(21), 1,
      sym__dot,
    ACTIONS(27), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(3), 1,
      sym_operator,
    STATE(7), 1,
      sym_property,
    STATE(8), 1,
      aux_sym_variable_repeat1,
    STATE(28), 1,
      sym_property_deref,
    ACTIONS(25), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(23), 8,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [114] = 5,
    ACTIONS(21), 1,
      sym__dot,
    STATE(24), 1,
      sym_property,
    STATE(28), 1,
      sym_property_deref,
    ACTIONS(31), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(29), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [140] = 5,
    ACTIONS(27), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(3), 1,
      sym_operator,
    STATE(8), 1,
      aux_sym_variable_repeat1,
    ACTIONS(25), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(23), 8,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [165] = 5,
    ACTIONS(33), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(3), 1,
      sym_operator,
    STATE(10), 1,
      aux_sym_variable_repeat1,
    ACTIONS(25), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(23), 8,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [190] = 5,
    ACTIONS(33), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(3), 1,
      sym_operator,
    STATE(9), 1,
      aux_sym_variable_repeat1,
    ACTIONS(25), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(23), 8,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [215] = 5,
    ACTIONS(29), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(3), 1,
      sym_operator,
    STATE(9), 1,
      aux_sym_variable_repeat1,
    ACTIONS(38), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(35), 8,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [240] = 5,
    ACTIONS(41), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(3), 1,
      sym_operator,
    STATE(9), 1,
      aux_sym_variable_repeat1,
    ACTIONS(25), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(23), 8,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [265] = 2,
    ACTIONS(45), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(43), 10,
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
  [283] = 3,
    ACTIONS(47), 1,
      anon_sym_e,
    ACTIONS(51), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(49), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [303] = 2,
    ACTIONS(55), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(53), 10,
      anon_sym_e,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [321] = 2,
    ACTIONS(59), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(57), 10,
      anon_sym_e,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [339] = 3,
    ACTIONS(61), 1,
      sym__dot,
    ACTIONS(65), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(63), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [359] = 2,
    ACTIONS(69), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(67), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [376] = 2,
    ACTIONS(73), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(71), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [393] = 2,
    ACTIONS(77), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(75), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [410] = 2,
    ACTIONS(81), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(79), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [427] = 2,
    ACTIONS(85), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(83), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [444] = 2,
    ACTIONS(31), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(29), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [461] = 2,
    ACTIONS(89), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(87), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [478] = 2,
    ACTIONS(93), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(91), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [495] = 2,
    ACTIONS(97), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(95), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [512] = 2,
    ACTIONS(101), 3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_SQUOTE,
    ACTIONS(99), 5,
      sym__number,
      sym_identifier,
      sym_null,
      sym_true,
      sym_false,
  [525] = 3,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    STATE(26), 3,
      sym__definition,
      sym_variable,
      aux_sym_source_file_repeat1,
  [537] = 3,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    STATE(26), 3,
      sym__definition,
      sym_variable,
      aux_sym_source_file_repeat1,
  [549] = 1,
    ACTIONS(110), 2,
      sym_identifier,
      sym_env_var,
  [554] = 2,
    ACTIONS(112), 1,
      sym__number,
    ACTIONS(114), 1,
      anon_sym_DASH,
  [561] = 1,
    ACTIONS(116), 2,
      sym_identifier,
      sym_env_var,
  [566] = 1,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [571] = 1,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [576] = 1,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [581] = 1,
    ACTIONS(124), 1,
      sym__number,
  [585] = 1,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
  [589] = 1,
    ACTIONS(128), 1,
      anon_sym_SQUOTE,
  [593] = 1,
    ACTIONS(130), 1,
      sym__dot,
  [597] = 1,
    ACTIONS(132), 1,
      sym__number,
  [601] = 1,
    ACTIONS(134), 1,
      sym__number,
  [605] = 1,
    ACTIONS(136), 1,
      sym_string_content,
  [609] = 1,
    ACTIONS(138), 1,
      aux_sym_hex_token1,
  [613] = 1,
    ACTIONS(140), 1,
      sym__number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 140,
  [SMALL_STATE(7)] = 165,
  [SMALL_STATE(8)] = 190,
  [SMALL_STATE(9)] = 215,
  [SMALL_STATE(10)] = 240,
  [SMALL_STATE(11)] = 265,
  [SMALL_STATE(12)] = 283,
  [SMALL_STATE(13)] = 303,
  [SMALL_STATE(14)] = 321,
  [SMALL_STATE(15)] = 339,
  [SMALL_STATE(16)] = 359,
  [SMALL_STATE(17)] = 376,
  [SMALL_STATE(18)] = 393,
  [SMALL_STATE(19)] = 410,
  [SMALL_STATE(20)] = 427,
  [SMALL_STATE(21)] = 444,
  [SMALL_STATE(22)] = 461,
  [SMALL_STATE(23)] = 478,
  [SMALL_STATE(24)] = 495,
  [SMALL_STATE(25)] = 512,
  [SMALL_STATE(26)] = 525,
  [SMALL_STATE(27)] = 537,
  [SMALL_STATE(28)] = 549,
  [SMALL_STATE(29)] = 554,
  [SMALL_STATE(30)] = 561,
  [SMALL_STATE(31)] = 566,
  [SMALL_STATE(32)] = 571,
  [SMALL_STATE(33)] = 576,
  [SMALL_STATE(34)] = 581,
  [SMALL_STATE(35)] = 585,
  [SMALL_STATE(36)] = 589,
  [SMALL_STATE(37)] = 593,
  [SMALL_STATE(38)] = 597,
  [SMALL_STATE(39)] = 601,
  [SMALL_STATE(40)] = 605,
  [SMALL_STATE(41)] = 609,
  [SMALL_STATE(42)] = 613,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(25),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(25),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 4),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 4),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_deref, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [126] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
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
