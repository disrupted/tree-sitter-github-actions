#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
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
  sym_env_var = 9,
  sym_whitespace = 10,
  sym_equals = 11,
  anon_sym_DOLLAR_LBRACE_LBRACE = 12,
  anon_sym_RBRACE_RBRACE = 13,
  sym_source_file = 14,
  sym__definition = 15,
  sym_type = 16,
  sym_boolean = 17,
  sym_int = 18,
  sym_float = 19,
  sym_string = 20,
  sym_context = 21,
  sym_property = 22,
  sym_variable = 23,
  aux_sym_source_file_repeat1 = 24,
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
  [sym_env_var] = "env_var",
  [sym_whitespace] = "whitespace",
  [sym_equals] = "equals",
  [anon_sym_DOLLAR_LBRACE_LBRACE] = "${{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_type] = "type",
  [sym_boolean] = "boolean",
  [sym_int] = "int",
  [sym_float] = "float",
  [sym_string] = "string",
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
  [sym_env_var] = sym_env_var,
  [sym_whitespace] = sym_whitespace,
  [sym_equals] = sym_equals,
  [anon_sym_DOLLAR_LBRACE_LBRACE] = anon_sym_DOLLAR_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_type] = sym_type,
  [sym_boolean] = sym_boolean,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
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
  [sym_env_var] = {
    .visible = true,
    .named = true,
  },
  [sym_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_equals] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '=') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == '}') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '=') ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '{') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == '{') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(30);
      END_STATE();
    case 6:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(26);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(12);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_null);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_true);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_false);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_env_var);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_equals);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_LBRACE);
      END_STATE();
    case 30:
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
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
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
    [sym_env_var] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(1),
    [sym_equals] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(30),
    [sym__definition] = STATE(5),
    [sym_variable] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOLLAR_LBRACE_LBRACE] = ACTIONS(5),
  },
  [2] = {
    [sym_type] = STATE(14),
    [sym_boolean] = STATE(17),
    [sym_int] = STATE(17),
    [sym_float] = STATE(17),
    [sym_string] = STATE(17),
    [sym_context] = STATE(7),
    [sym_identifier] = ACTIONS(7),
    [sym__number] = ACTIONS(9),
    [sym_null] = ACTIONS(11),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [3] = {
    [sym_type] = STATE(31),
    [sym_boolean] = STATE(17),
    [sym_int] = STATE(17),
    [sym_float] = STATE(17),
    [sym_string] = STATE(17),
    [sym_context] = STATE(8),
    [sym_identifier] = ACTIONS(7),
    [sym__number] = ACTIONS(9),
    [sym_null] = ACTIONS(11),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [4] = {
    [sym_type] = STATE(27),
    [sym_boolean] = STATE(17),
    [sym_int] = STATE(17),
    [sym_float] = STATE(17),
    [sym_string] = STATE(17),
    [sym_context] = STATE(11),
    [sym_identifier] = ACTIONS(7),
    [sym__number] = ACTIONS(9),
    [sym_null] = ACTIONS(11),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(6), 3,
      sym__definition,
      sym_variable,
      aux_sym_source_file_repeat1,
  [12] = 3,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    STATE(6), 3,
      sym__definition,
      sym_variable,
      aux_sym_source_file_repeat1,
  [24] = 4,
    ACTIONS(26), 1,
      sym__dot,
    ACTIONS(28), 1,
      sym_equals,
    ACTIONS(30), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(20), 1,
      sym_property,
  [37] = 3,
    ACTIONS(26), 1,
      sym__dot,
    ACTIONS(32), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(34), 1,
      sym_property,
  [47] = 1,
    ACTIONS(34), 3,
      sym__dot,
      sym_equals,
      anon_sym_RBRACE_RBRACE,
  [53] = 2,
    ACTIONS(36), 1,
      sym__dot,
    ACTIONS(38), 2,
      sym_equals,
      anon_sym_RBRACE_RBRACE,
  [61] = 3,
    ACTIONS(26), 1,
      sym__dot,
    ACTIONS(40), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(31), 1,
      sym_property,
  [71] = 1,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [76] = 1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [81] = 2,
    ACTIONS(28), 1,
      sym_equals,
    ACTIONS(30), 1,
      anon_sym_RBRACE_RBRACE,
  [88] = 1,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [93] = 1,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [98] = 1,
    ACTIONS(50), 2,
      sym_equals,
      anon_sym_RBRACE_RBRACE,
  [103] = 1,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [108] = 1,
    ACTIONS(54), 2,
      sym_identifier,
      sym_env_var,
  [113] = 2,
    ACTIONS(56), 1,
      sym_equals,
    ACTIONS(58), 1,
      anon_sym_RBRACE_RBRACE,
  [120] = 1,
    ACTIONS(60), 2,
      sym_equals,
      anon_sym_RBRACE_RBRACE,
  [125] = 1,
    ACTIONS(62), 2,
      sym_equals,
      anon_sym_RBRACE_RBRACE,
  [130] = 1,
    ACTIONS(64), 2,
      sym_equals,
      anon_sym_RBRACE_RBRACE,
  [135] = 1,
    ACTIONS(66), 2,
      sym_equals,
      anon_sym_RBRACE_RBRACE,
  [140] = 1,
    ACTIONS(68), 2,
      sym_equals,
      anon_sym_RBRACE_RBRACE,
  [145] = 1,
    ACTIONS(70), 1,
      sym__number,
  [149] = 1,
    ACTIONS(40), 1,
      anon_sym_RBRACE_RBRACE,
  [153] = 1,
    ACTIONS(72), 1,
      sym_identifier,
  [157] = 1,
    ACTIONS(74), 1,
      sym__number,
  [161] = 1,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
  [165] = 1,
    ACTIONS(32), 1,
      anon_sym_RBRACE_RBRACE,
  [169] = 1,
    ACTIONS(78), 1,
      anon_sym_SQUOTE,
  [173] = 1,
    ACTIONS(80), 1,
      sym__dot,
  [177] = 1,
    ACTIONS(82), 1,
      anon_sym_RBRACE_RBRACE,
  [181] = 1,
    ACTIONS(84), 1,
      sym__number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 12,
  [SMALL_STATE(7)] = 24,
  [SMALL_STATE(8)] = 37,
  [SMALL_STATE(9)] = 47,
  [SMALL_STATE(10)] = 53,
  [SMALL_STATE(11)] = 61,
  [SMALL_STATE(12)] = 71,
  [SMALL_STATE(13)] = 76,
  [SMALL_STATE(14)] = 81,
  [SMALL_STATE(15)] = 88,
  [SMALL_STATE(16)] = 93,
  [SMALL_STATE(17)] = 98,
  [SMALL_STATE(18)] = 103,
  [SMALL_STATE(19)] = 108,
  [SMALL_STATE(20)] = 113,
  [SMALL_STATE(21)] = 120,
  [SMALL_STATE(22)] = 125,
  [SMALL_STATE(23)] = 130,
  [SMALL_STATE(24)] = 135,
  [SMALL_STATE(25)] = 140,
  [SMALL_STATE(26)] = 145,
  [SMALL_STATE(27)] = 149,
  [SMALL_STATE(28)] = 153,
  [SMALL_STATE(29)] = 157,
  [SMALL_STATE(30)] = 161,
  [SMALL_STATE(31)] = 165,
  [SMALL_STATE(32)] = 169,
  [SMALL_STATE(33)] = 173,
  [SMALL_STATE(34)] = 177,
  [SMALL_STATE(35)] = 181,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 7),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [76] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
