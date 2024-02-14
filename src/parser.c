#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_whitespace = 2,
  sym__dot = 3,
  anon_sym_SQUOTE = 4,
  anon_sym_DOLLAR_LBRACE_LBRACE = 5,
  anon_sym_RBRACE_RBRACE = 6,
  sym_source_file = 7,
  sym__definition = 8,
  sym_context = 9,
  sym_property = 10,
  sym_string = 11,
  sym_variable = 12,
  aux_sym_source_file_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_whitespace] = "whitespace",
  [sym__dot] = "_dot",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DOLLAR_LBRACE_LBRACE] = "${{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_context] = "context",
  [sym_property] = "property",
  [sym_string] = "string",
  [sym_variable] = "variable",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_whitespace] = sym_whitespace,
  [sym__dot] = sym__dot,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DOLLAR_LBRACE_LBRACE] = anon_sym_DOLLAR_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
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
  [sym_identifier] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '}') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == '{') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == '{') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '}') ADVANCE(11);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_LBRACE);
      END_STATE();
    case 11:
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(1),
    [sym__dot] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(9),
    [sym__definition] = STATE(2),
    [sym_variable] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOLLAR_LBRACE_LBRACE] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(3), 3,
      sym__definition,
      sym_variable,
      aux_sym_source_file_repeat1,
  [12] = 3,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    STATE(3), 3,
      sym__definition,
      sym_variable,
      aux_sym_source_file_repeat1,
  [24] = 4,
    ACTIONS(14), 1,
      sym_identifier,
    ACTIONS(16), 1,
      anon_sym_SQUOTE,
    STATE(5), 1,
      sym_context,
    STATE(11), 1,
      sym_string,
  [37] = 3,
    ACTIONS(18), 1,
      sym__dot,
    ACTIONS(20), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(14), 1,
      sym_property,
  [47] = 1,
    ACTIONS(22), 2,
      sym__dot,
      anon_sym_RBRACE_RBRACE,
  [52] = 1,
    ACTIONS(24), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [57] = 1,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [62] = 1,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
  [66] = 1,
    ACTIONS(30), 1,
      sym_identifier,
  [70] = 1,
    ACTIONS(20), 1,
      anon_sym_RBRACE_RBRACE,
  [74] = 1,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
  [78] = 1,
    ACTIONS(34), 1,
      sym_identifier,
  [82] = 1,
    ACTIONS(36), 1,
      anon_sym_RBRACE_RBRACE,
  [86] = 1,
    ACTIONS(38), 1,
      anon_sym_RBRACE_RBRACE,
  [90] = 1,
    ACTIONS(40), 1,
      anon_sym_RBRACE_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 12,
  [SMALL_STATE(4)] = 24,
  [SMALL_STATE(5)] = 37,
  [SMALL_STATE(6)] = 47,
  [SMALL_STATE(7)] = 52,
  [SMALL_STATE(8)] = 57,
  [SMALL_STATE(9)] = 62,
  [SMALL_STATE(10)] = 66,
  [SMALL_STATE(11)] = 70,
  [SMALL_STATE(12)] = 74,
  [SMALL_STATE(13)] = 78,
  [SMALL_STATE(14)] = 82,
  [SMALL_STATE(15)] = 86,
  [SMALL_STATE(16)] = 90,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 1),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4),
  [28] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2),
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
