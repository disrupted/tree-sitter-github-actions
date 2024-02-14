module.exports = grammar({
  name: "githubactionsvariables",

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ =>
      choice(
        $.variable
        // TODO: other kinds of definitions
      ),

    _dot: $ => ".",
    identifier: $ => /[a-z]+/,
    _number: $ => /\d+/,

    // primitive types
    type: $ => choice(
            $.null,
            $.boolean,
            $.int,
            $.float,
            $.string
        ),
    null: $ => "null",
    true: $ => "true",
    false: $ => "false",
    boolean: $ => choice($.true, $.false),
    int: $ => $._number,
    float: $ => seq(optional("-"), $._number, $._dot, $._number),
    string: $ => seq("'", $.identifier, "'"),

    // operators
    operator: $ => choice(
            $.logical_group,
            $.index,
            // $.property_deref,
            $.not,
            $.lt,
            $.le,
            $.gt,
            $.ge,
            $.eq,
            $.ne,
            $.and,
            $.or,
        ),
    logical_group: $ => "( )",
    index: $ => "[ ]",
    property_deref: $ => $._dot,
    not: $ => "!",
    lt: $ => "<",
    le: $ => "<=",
    gt: $ => ">",
    ge: $ => ">=",
    eq: $ => "==",
    ne: $ => "!=",
    and: $ => "&&",
    or: $ => "||",

    env_var: $ => /[A-Z_]+/,
    whitespace: $ => /\\s+/,
    context: $ => $.identifier,
    property: $ => seq($.property_deref, choice($.identifier, $.env_var)),

    variable: $ =>
      seq(
        "${{",
        seq(
          choice(
            $.type,
            seq($.context, optional($.property))
          ),
          optional(seq(
            $.operator,
            choice(
              $.type,
              seq($.context, optional($.property))
            )
          ))
        ),
        "}}"
      ),
  },
});
