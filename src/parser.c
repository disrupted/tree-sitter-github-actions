#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__dot = 1,
  sym__str = 2,
  sym_string_content = 3,
  sym__number = 4,
  sym_identifier = 5,
  sym_null = 6,
  sym_true = 7,
  sym_false = 8,
  anon_sym_DASH = 9,
  anon_sym_SQUOTE = 10,
  sym_logical_group = 11,
  sym_index = 12,
  sym_not = 13,
  sym_lt = 14,
  sym_le = 15,
  sym_gt = 16,
  sym_ge = 17,
  sym_eq = 18,
  sym_ne = 19,
  sym_and = 20,
  sym_or = 21,
  sym_env_var = 22,
  sym_whitespace = 23,
  anon_sym_DOLLAR_LBRACE_LBRACE = 24,
  anon_sym_RBRACE_RBRACE = 25,
  sym_source_file = 26,
  sym__definition = 27,
  sym_type = 28,
  sym_boolean = 29,
  sym_int = 30,
  sym_float = 31,
  sym_string = 32,
  sym_operator = 33,
  sym_property_deref = 34,
  sym_context = 35,
  sym_property = 36,
  sym_variable = 37,
  aux_sym_source_file_repeat1 = 38,
  aux_sym_variable_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__dot] = "_dot",
  [sym__str] = "_str",
  [sym_string_content] = "string_content",
  [sym__number] = "_number",
  [sym_identifier] = "identifier",
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
  [aux_sym_variable_repeat1] = "variable_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__dot] = sym__dot,
  [sym__str] = sym__str,
  [sym_string_content] = sym_string_content,
  [sym__number] = sym__number,
  [sym_identifier] = sym_identifier,
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
  [sym__str] = {
    .visible = false,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '!') ADVANCE(57);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '(') ADVANCE(1);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == '[') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == '|') ADVANCE(12);
      if (lookahead == '}') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(64);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 't') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(55);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 7:
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(33);
      END_STATE();
    case 8:
      if (lookahead == ']') ADVANCE(56);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 10:
      if (lookahead == '{') ADVANCE(68);
      END_STATE();
    case 11:
      if (lookahead == '{') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '|') ADVANCE(65);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(69);
      END_STATE();
    case 14:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(66);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(34);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__str);
      if (lookahead == 'a') ADVANCE(21);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(31);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__str);
      if (lookahead == 'e') ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(31);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__str);
      if (lookahead == 'e') ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(31);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__str);
      if (lookahead == 'l') ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(31);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__str);
      if (lookahead == 'l') ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(31);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__str);
      if (lookahead == 'l') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(31);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__str);
      if (lookahead == 'r') ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(31);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__str);
      if (lookahead == 's') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(31);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__str);
      if (lookahead == 'u') ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__str);
      if (lookahead == 'u') ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(31);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__str);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__str);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__str);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(15);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(39);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(48);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_null);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(31);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_null);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_true);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(31);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_true);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_false);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(31);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_false);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_logical_group);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_index);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_not);
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_le);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_ge);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_ne);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_env_var);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_LBRACE);
      END_STATE();
    case 69:
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
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__dot] = ACTIONS(1),
    [sym__str] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
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
    [sym_source_file] = STATE(30),
    [sym__definition] = STATE(23),
    [sym_variable] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
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
      sym_property,
    STATE(6), 1,
      aux_sym_variable_repeat1,
    STATE(11), 1,
      sym_operator,
    STATE(26), 1,
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
  [34] = 5,
    ACTIONS(7), 1,
      sym__dot,
    STATE(14), 1,
      sym_property,
    STATE(26), 1,
      sym_property_deref,
    ACTIONS(17), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(15), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [60] = 5,
    ACTIONS(13), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(6), 1,
      aux_sym_variable_repeat1,
    STATE(11), 1,
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
  [85] = 5,
    ACTIONS(19), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(7), 1,
      aux_sym_variable_repeat1,
    STATE(11), 1,
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
  [110] = 5,
    ACTIONS(19), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(8), 1,
      aux_sym_variable_repeat1,
    STATE(11), 1,
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
  [135] = 5,
    ACTIONS(21), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(8), 1,
      aux_sym_variable_repeat1,
    STATE(11), 1,
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
  [160] = 5,
    ACTIONS(15), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(8), 1,
      aux_sym_variable_repeat1,
    STATE(11), 1,
      sym_operator,
    ACTIONS(26), 3,
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
  [185] = 3,
    ACTIONS(29), 1,
      sym__dot,
    ACTIONS(33), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(31), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [205] = 2,
    ACTIONS(37), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(35), 10,
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
  [223] = 9,
    ACTIONS(39), 1,
      sym__number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      sym_null,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    STATE(3), 1,
      sym_context,
    STATE(17), 1,
      sym_type,
    ACTIONS(45), 2,
      sym_true,
      sym_false,
    STATE(18), 4,
      sym_boolean,
      sym_int,
      sym_float,
      sym_string,
  [255] = 9,
    ACTIONS(39), 1,
      sym__number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      sym_null,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    STATE(2), 1,
      sym_context,
    STATE(4), 1,
      sym_type,
    ACTIONS(45), 2,
      sym_true,
      sym_false,
    STATE(18), 4,
      sym_boolean,
      sym_int,
      sym_float,
      sym_string,
  [287] = 2,
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
  [304] = 2,
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
  [321] = 2,
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
  [338] = 2,
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
  [355] = 2,
    ACTIONS(17), 3,
      sym_not,
      sym_lt,
      sym_gt,
    ACTIONS(15), 9,
      sym_logical_group,
      sym_index,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
      anon_sym_RBRACE_RBRACE,
  [372] = 2,
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
  [389] = 2,
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
  [406] = 2,
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
  [423] = 2,
    ACTIONS(79), 3,
      sym__number,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(81), 4,
      sym_identifier,
      sym_null,
      sym_true,
      sym_false,
  [435] = 3,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    STATE(22), 3,
      sym__definition,
      sym_variable,
      aux_sym_source_file_repeat1,
  [447] = 3,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    STATE(22), 3,
      sym__definition,
      sym_variable,
      aux_sym_source_file_repeat1,
  [459] = 1,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [464] = 1,
    ACTIONS(92), 2,
      sym_identifier,
      sym_env_var,
  [469] = 1,
    ACTIONS(94), 2,
      sym_identifier,
      sym_env_var,
  [474] = 1,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [479] = 1,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE_LBRACE,
  [484] = 1,
    ACTIONS(100), 1,
      sym__number,
  [488] = 1,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
  [492] = 1,
    ACTIONS(104), 1,
      anon_sym_SQUOTE,
  [496] = 1,
    ACTIONS(106), 1,
      sym__dot,
  [500] = 1,
    ACTIONS(108), 1,
      sym__number,
  [504] = 1,
    ACTIONS(110), 1,
      sym_string_content,
  [508] = 1,
    ACTIONS(112), 1,
      sym__number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 85,
  [SMALL_STATE(6)] = 110,
  [SMALL_STATE(7)] = 135,
  [SMALL_STATE(8)] = 160,
  [SMALL_STATE(9)] = 185,
  [SMALL_STATE(10)] = 205,
  [SMALL_STATE(11)] = 223,
  [SMALL_STATE(12)] = 255,
  [SMALL_STATE(13)] = 287,
  [SMALL_STATE(14)] = 304,
  [SMALL_STATE(15)] = 321,
  [SMALL_STATE(16)] = 338,
  [SMALL_STATE(17)] = 355,
  [SMALL_STATE(18)] = 372,
  [SMALL_STATE(19)] = 389,
  [SMALL_STATE(20)] = 406,
  [SMALL_STATE(21)] = 423,
  [SMALL_STATE(22)] = 435,
  [SMALL_STATE(23)] = 447,
  [SMALL_STATE(24)] = 459,
  [SMALL_STATE(25)] = 464,
  [SMALL_STATE(26)] = 469,
  [SMALL_STATE(27)] = 474,
  [SMALL_STATE(28)] = 479,
  [SMALL_STATE(29)] = 484,
  [SMALL_STATE(30)] = 488,
  [SMALL_STATE(31)] = 492,
  [SMALL_STATE(32)] = 496,
  [SMALL_STATE(33)] = 500,
  [SMALL_STATE(34)] = 504,
  [SMALL_STATE(35)] = 508,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(21),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(21),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_deref, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [102] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
