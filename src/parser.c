#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_null = 1,
  anon_sym_true = 2,
  anon_sym_false = 3,
  sym_identifier = 4,
  sym_env_var = 5,
  sym_number = 6,
  sym_whitespace = 7,
  sym__dot = 8,
  sym_equals = 9,
  anon_sym_SQUOTE = 10,
  anon_sym_DOLLAR_LBRACE_LBRACE = 11,
  anon_sym_RBRACE_RBRACE = 12,
  sym_source_file = 13,
  sym__definition = 14,
  sym_boolean = 15,
  sym_context = 16,
  sym_property = 17,
  sym_string = 18,
  sym_variable = 19,
  aux_sym_source_file_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_null] = "null",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_identifier] = "identifier",
  [sym_env_var] = "env_var",
  [sym_number] = "number",
  [sym_whitespace] = "whitespace",
  [sym__dot] = "_dot",
  [sym_equals] = "equals",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DOLLAR_LBRACE_LBRACE] = "${{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_boolean] = "boolean",
  [sym_context] = "context",
  [sym_property] = "property",
  [sym_string] = "string",
  [sym_variable] = "variable",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_null] = sym_null,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_identifier] = sym_identifier,
  [sym_env_var] = sym_env_var,
  [sym_number] = sym_number,
  [sym_whitespace] = sym_whitespace,
  [sym__dot] = sym__dot,
  [sym_equals] = sym_equals,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DOLLAR_LBRACE_LBRACE] = anon_sym_DOLLAR_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_boolean] = sym_boolean,
  [sym_context] = sym_context,
  [sym_property] = sym_property,
  [sym_string] = sym_string,
  [sym_variable] = sym_variable,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_env_var] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym__dot] = {
    .visible = false,
    .named = true,
  },
  [sym_equals] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
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
  [sym_boolean] = {
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
  [sym_string] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '=') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '}') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == '{') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == '{') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(29);
      END_STATE();
    case 6:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(22);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_null);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_true);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_false);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(14);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(8);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_env_var);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_equals);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_LBRACE);
      END_STATE();
    case 29:
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
  [11] = {.lex_state = 6},
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
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_env_var] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(1),
    [sym__dot] = ACTIONS(1),
    [sym_equals] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym__definition] = STATE(5),
    [sym_variable] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOLLAR_LBRACE_LBRACE] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      sym_null,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      sym_context,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym_boolean,
      sym_string,
  [21] = 6,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      sym_null,
    STATE(7), 1,
      sym_context,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 2,
      sym_boolean,
      sym_string,
  [42] = 6,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      sym_null,
    STATE(8), 1,
      sym_context,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 2,
      sym_boolean,
      sym_string,
  [63] = 3,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(6), 3,
      sym__definition,
      sym_variable,
      aux_sym_source_file_repeat1,
  [75] = 3,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    STATE(6), 3,
      sym__definition,
      sym_variable,
      aux_sym_source_file_repeat1,
  [87] = 4,
    ACTIONS(26), 1,
      sym__dot,
    ACTIONS(28), 1,
      sym_equals,
    ACTIONS(30), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(13), 1,
      sym_property,
  [100] = 3,
    ACTIONS(26), 1,
      sym__dot,
    ACTIONS(32), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(27), 1,
      sym_property,
  [110] = 3,
    ACTIONS(26), 1,
      sym__dot,
    ACTIONS(34), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(26), 1,
      sym_property,
  [120] = 1,
    ACTIONS(36), 3,
      sym__dot,
      sym_equals,
      anon_sym_RBRACE_RBRACE,
  [126] = 1,
    ACTIONS(38), 2,
      sym_identifier,
      sym_env_var,
  [131] = 1,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [136] = 2,
    ACTIONS(42), 1,
      sym_equals,
    ACTIONS(44), 1,
      anon_sym_RBRACE_RBRACE,
  [143] = 1,
    ACTIONS(46), 2,
      sym_equals,
      anon_sym_RBRACE_RBRACE,
  [148] = 1,
    ACTIONS(48), 2,
      sym_equals,
      anon_sym_RBRACE_RBRACE,
  [153] = 1,
    ACTIONS(50), 2,
      sym_equals,
      anon_sym_RBRACE_RBRACE,
  [158] = 1,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [163] = 1,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [168] = 2,
    ACTIONS(28), 1,
      sym_equals,
    ACTIONS(30), 1,
      anon_sym_RBRACE_RBRACE,
  [175] = 1,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [180] = 1,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [185] = 1,
    ACTIONS(60), 1,
      anon_sym_SQUOTE,
  [189] = 1,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
  [193] = 1,
    ACTIONS(34), 1,
      anon_sym_RBRACE_RBRACE,
  [197] = 1,
    ACTIONS(64), 1,
      sym_identifier,
  [201] = 1,
    ACTIONS(32), 1,
      anon_sym_RBRACE_RBRACE,
  [205] = 1,
    ACTIONS(66), 1,
      anon_sym_RBRACE_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 75,
  [SMALL_STATE(7)] = 87,
  [SMALL_STATE(8)] = 100,
  [SMALL_STATE(9)] = 110,
  [SMALL_STATE(10)] = 120,
  [SMALL_STATE(11)] = 126,
  [SMALL_STATE(12)] = 131,
  [SMALL_STATE(13)] = 136,
  [SMALL_STATE(14)] = 143,
  [SMALL_STATE(15)] = 148,
  [SMALL_STATE(16)] = 153,
  [SMALL_STATE(17)] = 158,
  [SMALL_STATE(18)] = 163,
  [SMALL_STATE(19)] = 168,
  [SMALL_STATE(20)] = 175,
  [SMALL_STATE(21)] = 180,
  [SMALL_STATE(22)] = 185,
  [SMALL_STATE(23)] = 189,
  [SMALL_STATE(24)] = 193,
  [SMALL_STATE(25)] = 197,
  [SMALL_STATE(26)] = 201,
  [SMALL_STATE(27)] = 205,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 7),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [62] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
