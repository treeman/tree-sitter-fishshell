module.exports = grammar({
  name: "fishshell",

  extras: (_) => ["\r", " "],

  rules: {
    source: ($) => repeat1(choice($.fish_source, $.output)),

    fish_source: ($) => seq($.marker, $.code),
    code: ($) => seq($._text, repeat(seq("\\\n", $._text)), "\n"),
    marker: (_) => /\$ +/,

    output: ($) => prec.left(repeat1(seq(/[^\$]/, optional($._text), "\n"))),

    _text: (_) => repeat1(/[^\n]/),
  },
});
