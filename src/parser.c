#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_BSLASH_LF = 1,
  anon_sym_LF = 2,
  sym_marker = 3,
  sym__text = 4,
  sym_source = 5,
  sym_fish_source = 6,
  sym_code = 7,
  sym_output = 8,
  aux_sym_code_repeat1 = 9,
  aux_sym_output_repeat1 = 10,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BSLASH_LF] = "\\\n",
  [anon_sym_LF] = "\n",
  [sym_marker] = "marker",
  [sym__text] = "_text",
  [sym_source] = "source",
  [sym_fish_source] = "fish_source",
  [sym_code] = "code",
  [sym_output] = "output",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_output_repeat1] = "output_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BSLASH_LF] = anon_sym_BSLASH_LF,
  [anon_sym_LF] = anon_sym_LF,
  [sym_marker] = sym_marker,
  [sym__text] = sym__text,
  [sym_source] = sym_source,
  [sym_fish_source] = sym_fish_source,
  [sym_code] = sym_code,
  [sym_output] = sym_output,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
  [aux_sym_output_repeat1] = aux_sym_output_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASH_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_marker] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_fish_source] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_output] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_output_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(1);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_marker);
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__text);
      if (eof) ADVANCE(3);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BSLASH_LF] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_marker] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(11),
    [sym_fish_source] = STATE(2),
    [sym_marker] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      sym__text,
    STATE(4), 1,
      aux_sym_output_repeat1,
    STATE(14), 1,
      sym_output,
  [10] = 3,
    ACTIONS(7), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(9), 1,
      anon_sym_LF,
    STATE(5), 1,
      aux_sym_code_repeat1,
  [20] = 3,
    ACTIONS(5), 1,
      sym__text,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_output_repeat1,
  [30] = 3,
    ACTIONS(7), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(13), 1,
      anon_sym_LF,
    STATE(7), 1,
      aux_sym_code_repeat1,
  [40] = 3,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym__text,
    STATE(6), 1,
      aux_sym_output_repeat1,
  [50] = 3,
    ACTIONS(20), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(23), 1,
      anon_sym_LF,
    STATE(7), 1,
      aux_sym_code_repeat1,
  [60] = 2,
    ACTIONS(25), 1,
      sym__text,
    STATE(12), 1,
      sym_code,
  [67] = 1,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      sym__text,
  [72] = 1,
    ACTIONS(23), 2,
      anon_sym_BSLASH_LF,
      anon_sym_LF,
  [77] = 1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
  [81] = 1,
    ACTIONS(29), 1,
      sym__text,
  [85] = 1,
    ACTIONS(31), 1,
      anon_sym_LF,
  [89] = 1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
  [93] = 1,
    ACTIONS(35), 1,
      sym__text,
  [97] = 1,
    ACTIONS(37), 1,
      sym__text,
  [101] = 1,
    ACTIONS(39), 1,
      sym__text,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 10,
  [SMALL_STATE(4)] = 20,
  [SMALL_STATE(5)] = 30,
  [SMALL_STATE(6)] = 40,
  [SMALL_STATE(7)] = 50,
  [SMALL_STATE(8)] = 60,
  [SMALL_STATE(9)] = 67,
  [SMALL_STATE(10)] = 72,
  [SMALL_STATE(11)] = 77,
  [SMALL_STATE(12)] = 81,
  [SMALL_STATE(13)] = 85,
  [SMALL_STATE(14)] = 89,
  [SMALL_STATE(15)] = 93,
  [SMALL_STATE(16)] = 97,
  [SMALL_STATE(17)] = 101,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_repeat1, 2), SHIFT_REPEAT(13),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fish_source, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_fishshell() {
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
