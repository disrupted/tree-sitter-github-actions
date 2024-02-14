#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
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
  anon_sym_SQUOTE = 11,
  sym_logical_group = 12,
  sym_index = 13,
  sym_not = 14,
  sym_lt = 15,
  sym_le = 16,
  sym_gt = 17,
  sym_ge = 18,
  sym_eq = 19,
  sym_ne = 20,
  sym_and = 21,
  sym_or = 22,
  sym_env_var = 23,
  sym_whitespace = 24,
  anon_sym_DOLLAR_LBRACE_LBRACE = 25,
  anon_sym_RBRACE_RBRACE = 26,
  sym_source_file = 27,
  sym__definition = 28,
  sym_type = 29,
  sym_boolean = 30,
  sym_int = 31,
  sym_float = 32,
  sym_hex = 33,
  sym_string = 34,
  sym_operator = 35,
  sym_property_deref = 36,
  sym_context = 37,
  sym_property = 38,
  sym_variable = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_variable_repeat1 = 41,
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
  [sym_float] = "float",
  [sym_hex] = "hex",
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
  [sym_float] = sym_float,
  [sym_hex] = sym_hex,
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
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_hex] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '(') ADVANCE(1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '0') ADVANCE(19);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '[') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 't') ADVANCE(34);
      if (lookahead == '|') ADVANCE(12);
      if (lookahead == '}') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(58);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(56);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '0') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 't') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 7:
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == ']') ADVANCE(48);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 10:
      if (lookahead == '{') ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == '{') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '|') ADVANCE(57);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(61);
      END_STATE();
    case 14:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(58);
      END_STATE();
    case 15:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(25);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == 'x') ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == 'x') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(16);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(30);
      if (('b' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(31);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_null);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_true);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_false);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_logical_group);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_index);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_not);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_le);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_ge);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_ne);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_env_var);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_LBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 0},
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
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 4},
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
    [aux_sym_hex_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(32),
    [sym__definition] = STATE(24),
    [sym_variable] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOLLAR_LBRACE_LBRACE] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      sym__dot,
    ACTIONS(13), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      sym_operator,
    STATE(6), 1,
      sym_property,
    STATE(7), 1,
      aux_sym_variable_repeat1,
    STATE(28), 1,
      sym_property_deref,
    ACTIONS(11), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(9), 8,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [34] = 10,
    ACTIONS(15), 1,
      sym__number,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_null,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_0x,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(2), 1,
      sym_context,
    STATE(10), 1,
      sym_type,
    ACTIONS(21), 2,
      sym_true,
      sym_false,
    STATE(13), 5,
      sym_boolean,
      sym_int,
      sym_float,
      sym_hex,
      sym_string,
  [70] = 5,
    ACTIONS(7), 1,
      sym__dot,
    STATE(17), 1,
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
  [96] = 10,
    ACTIONS(15), 1,
      sym__number,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_null,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_0x,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(4), 1,
      sym_context,
    STATE(21), 1,
      sym_type,
    ACTIONS(21), 2,
      sym_true,
      sym_false,
    STATE(13), 5,
      sym_boolean,
      sym_int,
      sym_float,
      sym_hex,
      sym_string,
  [132] = 5,
    ACTIONS(33), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      sym_operator,
    STATE(9), 1,
      aux_sym_variable_repeat1,
    ACTIONS(11), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(9), 8,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [157] = 5,
    ACTIONS(33), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      sym_operator,
    STATE(8), 1,
      aux_sym_variable_repeat1,
    ACTIONS(11), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(9), 8,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [182] = 5,
    ACTIONS(29), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      sym_operator,
    STATE(8), 1,
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
  [207] = 5,
    ACTIONS(41), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      sym_operator,
    STATE(8), 1,
      aux_sym_variable_repeat1,
    ACTIONS(11), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(9), 8,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [232] = 5,
    ACTIONS(13), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      sym_operator,
    STATE(7), 1,
      aux_sym_variable_repeat1,
    ACTIONS(11), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(9), 8,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [257] = 3,
    ACTIONS(43), 1,
      sym__dot,
    ACTIONS(47), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(45), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [277] = 2,
    ACTIONS(51), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(49), 10,
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
  [295] = 2,
    ACTIONS(55), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(53), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [312] = 2,
    ACTIONS(59), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(57), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [329] = 2,
    ACTIONS(63), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(61), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [346] = 2,
    ACTIONS(67), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(65), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [363] = 2,
    ACTIONS(71), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(69), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [380] = 2,
    ACTIONS(75), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(73), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [397] = 2,
    ACTIONS(79), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(77), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [414] = 2,
    ACTIONS(83), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(81), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [431] = 2,
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
  [448] = 2,
    ACTIONS(87), 3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_SQUOTE,
    ACTIONS(85), 5,
      sym__number,
      sym_identifier,
      sym_null,
      sym_true,
      sym_false,
  [461] = 3,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    STATE(23), 3,
      sym__definition,
      sym_variable,
      aux_sym_source_file_repeat1,
  [473] = 3,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    STATE(23), 3,
      sym__definition,
      sym_variable,
      aux_sym_source_file_repeat1,
  [485] = 1,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [490] = 1,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [495] = 1,
    ACTIONS(100), 2,
      sym_identifier,
      sym_env_var,
  [500] = 1,
    ACTIONS(102), 2,
      sym_identifier,
      sym_env_var,
  [505] = 1,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [510] = 1,
    ACTIONS(106), 1,
      anon_sym_SQUOTE,
  [514] = 1,
    ACTIONS(108), 1,
      sym__number,
  [518] = 1,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
  [522] = 1,
    ACTIONS(112), 1,
      sym__dot,
  [526] = 1,
    ACTIONS(114), 1,
      sym__number,
  [530] = 1,
    ACTIONS(116), 1,
      sym_string_content,
  [534] = 1,
    ACTIONS(118), 1,
      aux_sym_hex_token1,
  [538] = 1,
    ACTIONS(120), 1,
      sym__number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 157,
  [SMALL_STATE(8)] = 182,
  [SMALL_STATE(9)] = 207,
  [SMALL_STATE(10)] = 232,
  [SMALL_STATE(11)] = 257,
  [SMALL_STATE(12)] = 277,
  [SMALL_STATE(13)] = 295,
  [SMALL_STATE(14)] = 312,
  [SMALL_STATE(15)] = 329,
  [SMALL_STATE(16)] = 346,
  [SMALL_STATE(17)] = 363,
  [SMALL_STATE(18)] = 380,
  [SMALL_STATE(19)] = 397,
  [SMALL_STATE(20)] = 414,
  [SMALL_STATE(21)] = 431,
  [SMALL_STATE(22)] = 448,
  [SMALL_STATE(23)] = 461,
  [SMALL_STATE(24)] = 473,
  [SMALL_STATE(25)] = 485,
  [SMALL_STATE(26)] = 490,
  [SMALL_STATE(27)] = 495,
  [SMALL_STATE(28)] = 500,
  [SMALL_STATE(29)] = 505,
  [SMALL_STATE(30)] = 510,
  [SMALL_STATE(31)] = 514,
  [SMALL_STATE(32)] = 518,
  [SMALL_STATE(33)] = 522,
  [SMALL_STATE(34)] = 526,
  [SMALL_STATE(35)] = 530,
  [SMALL_STATE(36)] = 534,
  [SMALL_STATE(37)] = 538,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(22),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(22),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_deref, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [110] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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
