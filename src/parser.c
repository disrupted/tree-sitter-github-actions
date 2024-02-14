#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_env_var = 2,
  sym_number = 3,
  sym_whitespace = 4,
  sym__dot = 5,
  sym_equals = 6,
  anon_sym_SQUOTE = 7,
  anon_sym_DOLLAR_LBRACE_LBRACE = 8,
  anon_sym_RBRACE_RBRACE = 9,
  sym_source_file = 10,
  sym__definition = 11,
  sym_context = 12,
  sym_property = 13,
  sym_string = 14,
  sym_variable = 15,
  aux_sym_source_file_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [sym_context] = "context",
  [sym_property] = "property",
  [sym_string] = "string",
  [sym_variable] = "variable",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '=') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '}') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == '=') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == '{') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == '{') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(15);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_env_var);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_equals);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_LBRACE);
      END_STATE();
    case 15:
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
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_source_file] = STATE(17),
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
    STATE(10), 1,
      sym_context,
    STATE(23), 1,
      sym_string,
  [37] = 4,
    ACTIONS(14), 1,
      sym_identifier,
    ACTIONS(16), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      sym_context,
    STATE(22), 1,
      sym_string,
  [50] = 4,
    ACTIONS(14), 1,
      sym_identifier,
    ACTIONS(16), 1,
      anon_sym_SQUOTE,
    STATE(8), 1,
      sym_context,
    STATE(19), 1,
      sym_string,
  [63] = 1,
    ACTIONS(18), 3,
      sym__dot,
      sym_equals,
      anon_sym_RBRACE_RBRACE,
  [69] = 3,
    ACTIONS(20), 1,
      sym__dot,
    ACTIONS(22), 1,
      sym_equals,
    STATE(21), 1,
      sym_property,
  [79] = 3,
    ACTIONS(20), 1,
      sym__dot,
    ACTIONS(24), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(23), 1,
      sym_property,
  [89] = 3,
    ACTIONS(20), 1,
      sym__dot,
    ACTIONS(26), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(24), 1,
      sym_property,
  [99] = 1,
    ACTIONS(28), 2,
      sym_identifier,
      sym_env_var,
  [104] = 1,
    ACTIONS(30), 2,
      sym_equals,
      anon_sym_RBRACE_RBRACE,
  [109] = 1,
    ACTIONS(32), 2,
      sym_equals,
      anon_sym_RBRACE_RBRACE,
  [114] = 1,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [119] = 1,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [124] = 1,
    ACTIONS(38), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [129] = 1,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
  [133] = 1,
    ACTIONS(42), 1,
      sym_identifier,
  [137] = 1,
    ACTIONS(22), 1,
      sym_equals,
  [141] = 1,
    ACTIONS(44), 1,
      anon_sym_SQUOTE,
  [145] = 1,
    ACTIONS(46), 1,
      sym_equals,
  [149] = 1,
    ACTIONS(24), 1,
      anon_sym_RBRACE_RBRACE,
  [153] = 1,
    ACTIONS(26), 1,
      anon_sym_RBRACE_RBRACE,
  [157] = 1,
    ACTIONS(48), 1,
      anon_sym_RBRACE_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 12,
  [SMALL_STATE(4)] = 24,
  [SMALL_STATE(5)] = 37,
  [SMALL_STATE(6)] = 50,
  [SMALL_STATE(7)] = 63,
  [SMALL_STATE(8)] = 69,
  [SMALL_STATE(9)] = 79,
  [SMALL_STATE(10)] = 89,
  [SMALL_STATE(11)] = 99,
  [SMALL_STATE(12)] = 104,
  [SMALL_STATE(13)] = 109,
  [SMALL_STATE(14)] = 114,
  [SMALL_STATE(15)] = 119,
  [SMALL_STATE(16)] = 124,
  [SMALL_STATE(17)] = 129,
  [SMALL_STATE(18)] = 133,
  [SMALL_STATE(19)] = 137,
  [SMALL_STATE(20)] = 141,
  [SMALL_STATE(21)] = 145,
  [SMALL_STATE(22)] = 149,
  [SMALL_STATE(23)] = 153,
  [SMALL_STATE(24)] = 157,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 1),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 7),
  [40] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
