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
    identifier: $ => /[a-z][-_a-zA-Z0-9]+/,

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
            // $.logical_group,
            // $.index,
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
    logical_group: $ => seq("(", optional($.expression), ")"),
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

    expression: $ => sep1($.arg, $.operator),
    arg: $ => choice($.logical_group, $.type, $.call, seq($.context, optional(repeat($.property)))),
    call: $ => prec(2, seq(field("function", $.identifier), "(", field("arguments", $._call_args), ")")),
    _call_args: $ => seq($.arg, optional(repeat(seq(",", $.arg)))),

    variable: $ =>
      seq(
        "$",
        "{",
        "{",
        optional($.expression),
        "}",
        "}",
      ),
  },
});

/**
 * Creates a rule to match one or more occurrences of `rule` separated by `sep`
 *
 * @param {RuleOrLiteral} rule
 *
 * @param {RuleOrLiteral} separator
 *
 * @return {SeqRule}
 *
 */
function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
