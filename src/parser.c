#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__dot = 1,
  sym_identifier = 2,
  sym__number = 3,
  sym_null = 4,
  sym_true = 5,
  sym_false = 6,
  anon_sym_DASH = 7,
  anon_sym_SQUOTE = 8,
  sym_logical_group = 9,
  sym_index = 10,
  sym_not = 11,
  sym_lt = 12,
  sym_le = 13,
  sym_gt = 14,
  sym_ge = 15,
  sym_eq = 16,
  sym_ne = 17,
  sym_and = 18,
  sym_or = 19,
  sym_env_var = 20,
  sym_whitespace = 21,
  anon_sym_DOLLAR_LBRACE_LBRACE = 22,
  anon_sym_RBRACE_RBRACE = 23,
  sym_source_file = 24,
  sym__definition = 25,
  sym_type = 26,
  sym_boolean = 27,
  sym_int = 28,
  sym_float = 29,
  sym_string = 30,
  sym_operator = 31,
  sym_property_deref = 32,
  sym_context = 33,
  sym_property = 34,
  sym_variable = 35,
  aux_sym_source_file_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__dot] = "_dot",
  [sym_identifier] = "identifier",
  [sym__number] = "_number",
  [sym_null] = "null",
  [sym_true] = "true",
  [sym_false] = "false",
  [anon_sym_DASH] = "-",
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
  [sym_string] = "string",
  [sym_operator] = "operator",
  [sym_property_deref] = "property_deref",
  [sym_context] = "context",
  [sym_property] = "property",
  [sym_variable] = "variable",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__dot] = sym__dot,
  [sym_identifier] = sym_identifier,
  [sym__number] = sym__number,
  [sym_null] = sym_null,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [anon_sym_DASH] = anon_sym_DASH,
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
  [sym_string] = sym_string,
  [sym_operator] = sym_operator,
  [sym_property_deref] = sym_property_deref,
  [sym_context] = sym_context,
  [sym_property] = sym_property,
  [sym_variable] = sym_variable,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
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
      if (eof) ADVANCE(13);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '(') ADVANCE(1);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '[') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '}') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 6:
      if (lookahead == ']') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 8:
      if (lookahead == '{') ADVANCE(45);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '|') ADVANCE(42);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(46);
      END_STATE();
    case 12:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(43);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(18);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_null);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_true);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_false);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_logical_group);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_index);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_not);
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_le);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_ge);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_ne);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_env_var);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_LBRACE);
      END_STATE();
    case 46:
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
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
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
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__dot] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
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
    [sym_source_file] = STATE(29),
    [sym__definition] = STATE(17),
    [sym_variable] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOLLAR_LBRACE_LBRACE] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      sym__dot,
    ACTIONS(13), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(8), 1,
      sym_operator,
    STATE(9), 1,
      sym_property,
    STATE(23), 1,
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
  [31] = 9,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym__number,
    ACTIONS(19), 1,
      sym_null,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    STATE(20), 1,
      sym_context,
    STATE(35), 1,
      sym_type,
    ACTIONS(21), 2,
      sym_true,
      sym_false,
    STATE(10), 4,
      sym_boolean,
      sym_int,
      sym_float,
      sym_string,
  [63] = 2,
    ACTIONS(29), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(27), 10,
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
  [81] = 3,
    ACTIONS(31), 1,
      sym__dot,
    ACTIONS(35), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(33), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [101] = 4,
    ACTIONS(13), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(8), 1,
      sym_operator,
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
  [123] = 9,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym__number,
    ACTIONS(19), 1,
      sym_null,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    STATE(2), 1,
      sym_context,
    STATE(6), 1,
      sym_type,
    ACTIONS(21), 2,
      sym_true,
      sym_false,
    STATE(10), 4,
      sym_boolean,
      sym_int,
      sym_float,
      sym_string,
  [155] = 9,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym__number,
    ACTIONS(19), 1,
      sym_null,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    STATE(19), 1,
      sym_context,
    STATE(30), 1,
      sym_type,
    ACTIONS(21), 2,
      sym_true,
      sym_false,
    STATE(10), 4,
      sym_boolean,
      sym_int,
      sym_float,
      sym_string,
  [187] = 4,
    ACTIONS(37), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(3), 1,
      sym_operator,
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
  [209] = 2,
    ACTIONS(41), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(39), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [226] = 2,
    ACTIONS(45), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(43), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [243] = 2,
    ACTIONS(49), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(47), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [260] = 2,
    ACTIONS(53), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(51), 9,
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
    ACTIONS(57), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(55), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [294] = 2,
    ACTIONS(61), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(59), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [311] = 2,
    ACTIONS(65), 3,
      sym__number,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(63), 4,
      sym_identifier,
      sym_null,
      sym_true,
      sym_false,
  [323] = 3,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(18), 3,
      sym__definition,
      sym_variable,
      aux_sym_source_file_repeat1,
  [335] = 3,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    STATE(18), 3,
      sym__definition,
      sym_variable,
      aux_sym_source_file_repeat1,
  [347] = 4,
    ACTIONS(7), 1,
      sym__dot,
    ACTIONS(74), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(23), 1,
      sym_property_deref,
    STATE(35), 1,
      sym_property,
  [360] = 4,
    ACTIONS(7), 1,
      sym__dot,
    ACTIONS(76), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(23), 1,
      sym_property_deref,
    STATE(37), 1,
      sym_property,
  [373] = 1,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [378] = 1,
    ACTIONS(80), 2,
      sym_identifier,
      sym_env_var,
  [383] = 1,
    ACTIONS(82), 2,
      sym_identifier,
      sym_env_var,
  [388] = 1,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [393] = 1,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [398] = 1,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [403] = 1,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [408] = 1,
    ACTIONS(92), 1,
      sym__number,
  [412] = 1,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
  [416] = 1,
    ACTIONS(74), 1,
      anon_sym_RBRACE_RBRACE,
  [420] = 1,
    ACTIONS(96), 1,
      anon_sym_SQUOTE,
  [424] = 1,
    ACTIONS(98), 1,
      sym__dot,
  [428] = 1,
    ACTIONS(100), 1,
      sym__number,
  [432] = 1,
    ACTIONS(102), 1,
      sym_identifier,
  [436] = 1,
    ACTIONS(76), 1,
      anon_sym_RBRACE_RBRACE,
  [440] = 1,
    ACTIONS(104), 1,
      sym__number,
  [444] = 1,
    ACTIONS(106), 1,
      anon_sym_RBRACE_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 63,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 101,
  [SMALL_STATE(7)] = 123,
  [SMALL_STATE(8)] = 155,
  [SMALL_STATE(9)] = 187,
  [SMALL_STATE(10)] = 209,
  [SMALL_STATE(11)] = 226,
  [SMALL_STATE(12)] = 243,
  [SMALL_STATE(13)] = 260,
  [SMALL_STATE(14)] = 277,
  [SMALL_STATE(15)] = 294,
  [SMALL_STATE(16)] = 311,
  [SMALL_STATE(17)] = 323,
  [SMALL_STATE(18)] = 335,
  [SMALL_STATE(19)] = 347,
  [SMALL_STATE(20)] = 360,
  [SMALL_STATE(21)] = 373,
  [SMALL_STATE(22)] = 378,
  [SMALL_STATE(23)] = 383,
  [SMALL_STATE(24)] = 388,
  [SMALL_STATE(25)] = 393,
  [SMALL_STATE(26)] = 398,
  [SMALL_STATE(27)] = 403,
  [SMALL_STATE(28)] = 408,
  [SMALL_STATE(29)] = 412,
  [SMALL_STATE(30)] = 416,
  [SMALL_STATE(31)] = 420,
  [SMALL_STATE(32)] = 424,
  [SMALL_STATE(33)] = 428,
  [SMALL_STATE(34)] = 432,
  [SMALL_STATE(35)] = 436,
  [SMALL_STATE(36)] = 440,
  [SMALL_STATE(37)] = 444,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 4),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_deref, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 7),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [94] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
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
