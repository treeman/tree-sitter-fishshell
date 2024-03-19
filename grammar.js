module.exports = grammar({
  name: "fishshell",

  extras: (_) => ["\r", " "],

  rules: {
    source: ($) => seq($.fish_source, $.output),

    fish_source: ($) => seq($.marker, $.code),
    code: ($) => seq($._text, repeat(seq("\\\n", $._text)), "\n"),
    marker: (_) => /\$ +/,

    output: ($) => repeat1(seq($._text, "\n")),

    _text: (_) => /[^\n]*/,
  },
});
