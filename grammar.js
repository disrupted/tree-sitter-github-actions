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
    _number: $ => /\d+/,
    asterisk: $ => "*",
    string_content: _ => token(prec(-1, /([^'\\\r\n]|\\(.|\r?\n))+/)),
    identifier: $ => /[a-z][a-zA-Z0-9_]+/,

    // primitive types
    type: $ => choice(
            $.null,
            $.boolean,
            $.int,
            $.float,
            $.hex,
            $.exp,
            $.string
        ),
    null: $ => "null",
    true: $ => "true",
    false: $ => "false",
    boolean: $ => choice($.true, $.false),
    int: $ => $._number,
    _float: $ => seq(optional("-"), $._number, $._dot, $._number),
    float: $ => $._float,
    hex: $ => seq("0x", /[0-9a-f]+/),
    exp: $ => seq($._float, "e", optional("-"), $._number),
    string: $ => seq("'", $.string_content, "'"),

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
    property: $ => seq($.property_deref, choice($.identifier, $.env_var, $.asterisk)),

    arg: $ => choice($.type, $.call, seq($.context, optional(repeat($.property)))),
    call: $ => seq(field("function", $.identifier), "(", field("arguments", $._call_args), ")"),
    _call_args: $ => seq($.arg, optional(repeat(seq(",", $.arg)))),

    variable_content: $ => seq(
          $.arg,
          optional(repeat(seq(
            $.operator,
            $.arg
          )))
        ),
    variable: $ =>
      seq(
        "$",
        "{",
        "{",
        $.variable_content,
        "}",
        "}",
      ),
  },
});
