module.exports = grammar({
  name: "githubactionsvariables",

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ =>
      choice(
        $.variable
        // TODO: other kinds of definitions
      ),

    identifier: $ => /[a-z]+/,
    env_var: $ => /[A-Z_]+/,
    number: $ => /\d+/,
    whitespace: $ => /\\s+/,
    _dot: $ => '.',
    context: $ => $.identifier,
    property: $ => seq($._dot, choice($.identifier, $.env_var)),
    string: $ => seq("'", $.identifier, "'"),

    variable: $ => seq(
        "${{",
        choice(
            $.string,
            seq($.context, optional($.property))
        ),
        "}}"
    ),
  },
});
