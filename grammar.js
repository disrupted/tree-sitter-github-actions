module.exports = grammar({
  name: "githubactionsvariables",

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ =>
      choice(
        $.variable
        // TODO: other kinds of definitions
      ),

    null: $ => 'null',
    boolean: $ => choice('true', 'false'),
    identifier: $ => /[a-z]+/,
    env_var: $ => /[A-Z_]+/,
    number: $ => /\d+/,
    whitespace: $ => /\\s+/,
    _dot: $ => '.',
    equals: $ => '==',
    context: $ => $.identifier,
    property: $ => seq($._dot, choice($.identifier, $.env_var)),
    string: $ => seq("'", $.identifier, "'"),

    variable: $ => seq(
        "${{",
        seq(
            choice(
                $.null,
                $.boolean,
                $.string,
                seq($.context, optional($.property))
            ),
            optional(seq(
                $.equals,
                choice(
                    $.null,
                    $.boolean,
                    $.string,
                    seq($.context, optional($.property))
            ))),
        ),
        "}}"
    ),
  },
});
