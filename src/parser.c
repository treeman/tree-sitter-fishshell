#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_BSLASH_LF = 1,
  anon_sym_LF = 2,
  sym_marker = 3,
  aux_sym_output_token1 = 4,
  aux_sym__text_token1 = 5,
  sym_source = 6,
  sym_fish_source = 7,
  sym_code = 8,
  sym_output = 9,
  aux_sym__text = 10,
  aux_sym_source_repeat1 = 11,
  aux_sym_code_repeat1 = 12,
  aux_sym_output_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BSLASH_LF] = "\\\n",
  [anon_sym_LF] = "\n",
  [sym_marker] = "marker",
  [aux_sym_output_token1] = "output_token1",
  [aux_sym__text_token1] = "_text_token1",
  [sym_source] = "source",
  [sym_fish_source] = "fish_source",
  [sym_code] = "code",
  [sym_output] = "output",
  [aux_sym__text] = "_text",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_output_repeat1] = "output_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BSLASH_LF] = anon_sym_BSLASH_LF,
  [anon_sym_LF] = anon_sym_LF,
  [sym_marker] = sym_marker,
  [aux_sym_output_token1] = aux_sym_output_token1,
  [aux_sym__text_token1] = aux_sym__text_token1,
  [sym_source] = sym_source,
  [sym_fish_source] = sym_fish_source,
  [sym_code] = sym_code,
  [sym_output] = sym_output,
  [aux_sym__text] = aux_sym__text,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
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
  [aux_sym_output_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_token1] = {
    .visible = false,
    .named = false,
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
  [aux_sym__text] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
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
  [18] = 18,
  [19] = 5,
  [20] = 20,
  [21] = 21,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_marker);
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_output_token1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_output_token1);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(10);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym__text_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '\n') ADVANCE(7);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BSLASH_LF] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_marker] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(21),
    [sym_fish_source] = STATE(2),
    [sym_output] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [aux_sym_output_repeat1] = STATE(6),
    [sym_marker] = ACTIONS(3),
    [aux_sym_output_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_marker,
    ACTIONS(5), 1,
      aux_sym_output_token1,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_output_repeat1,
    STATE(3), 3,
      sym_fish_source,
      sym_output,
      aux_sym_source_repeat1,
  [18] = 5,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_marker,
    ACTIONS(14), 1,
      aux_sym_output_token1,
    STATE(6), 1,
      aux_sym_output_repeat1,
    STATE(3), 3,
      sym_fish_source,
      sym_output,
      aux_sym_source_repeat1,
  [36] = 5,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(19), 1,
      anon_sym_LF,
    ACTIONS(21), 1,
      aux_sym__text_token1,
    STATE(5), 1,
      aux_sym__text,
    STATE(15), 1,
      aux_sym_code_repeat1,
  [52] = 3,
    ACTIONS(25), 1,
      aux_sym__text_token1,
    STATE(5), 1,
      aux_sym__text,
    ACTIONS(23), 2,
      anon_sym_BSLASH_LF,
      anon_sym_LF,
  [63] = 3,
    ACTIONS(30), 1,
      sym_marker,
    STATE(7), 1,
      aux_sym_output_repeat1,
    ACTIONS(28), 2,
      ts_builtin_sym_end,
      aux_sym_output_token1,
  [74] = 4,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      sym_marker,
    ACTIONS(36), 1,
      aux_sym_output_token1,
    STATE(7), 1,
      aux_sym_output_repeat1,
  [87] = 3,
    ACTIONS(21), 1,
      aux_sym__text_token1,
    STATE(5), 1,
      aux_sym__text,
    ACTIONS(39), 2,
      anon_sym_BSLASH_LF,
      anon_sym_LF,
  [98] = 2,
    ACTIONS(43), 1,
      sym_marker,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      aux_sym_output_token1,
  [106] = 2,
    ACTIONS(34), 1,
      sym_marker,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      aux_sym_output_token1,
  [114] = 3,
    ACTIONS(45), 1,
      anon_sym_LF,
    ACTIONS(47), 1,
      aux_sym__text_token1,
    STATE(19), 1,
      aux_sym__text,
  [124] = 3,
    ACTIONS(49), 1,
      aux_sym__text_token1,
    STATE(4), 1,
      aux_sym__text,
    STATE(9), 1,
      sym_code,
  [134] = 2,
    ACTIONS(53), 1,
      sym_marker,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      aux_sym_output_token1,
  [142] = 3,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(57), 1,
      aux_sym__text_token1,
    STATE(11), 1,
      aux_sym__text,
  [152] = 3,
    ACTIONS(59), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(61), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym_code_repeat1,
  [162] = 2,
    ACTIONS(65), 1,
      sym_marker,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      aux_sym_output_token1,
  [170] = 2,
    ACTIONS(69), 1,
      sym_marker,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      aux_sym_output_token1,
  [178] = 3,
    ACTIONS(71), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(74), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym_code_repeat1,
  [188] = 3,
    ACTIONS(23), 1,
      anon_sym_LF,
    ACTIONS(76), 1,
      aux_sym__text_token1,
    STATE(19), 1,
      aux_sym__text,
  [198] = 2,
    ACTIONS(79), 1,
      aux_sym__text_token1,
    STATE(8), 1,
      aux_sym__text,
  [205] = 1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 52,
  [SMALL_STATE(6)] = 63,
  [SMALL_STATE(7)] = 74,
  [SMALL_STATE(8)] = 87,
  [SMALL_STATE(9)] = 98,
  [SMALL_STATE(10)] = 106,
  [SMALL_STATE(11)] = 114,
  [SMALL_STATE(12)] = 124,
  [SMALL_STATE(13)] = 134,
  [SMALL_STATE(14)] = 142,
  [SMALL_STATE(15)] = 152,
  [SMALL_STATE(16)] = 162,
  [SMALL_STATE(17)] = 170,
  [SMALL_STATE(18)] = 178,
  [SMALL_STATE(19)] = 188,
  [SMALL_STATE(20)] = 198,
  [SMALL_STATE(21)] = 205,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(12),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(14),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text, 2), SHIFT_REPEAT(5),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_repeat1, 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_output_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_repeat1, 2), SHIFT_REPEAT(14),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fish_source, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fish_source, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_repeat1, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_output_repeat1, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(20),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text, 2), SHIFT_REPEAT(19),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [81] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
