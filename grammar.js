module.exports = grammar({
  name: 'balls',

  // Extras is an array of tokens that is allowed anywhere in the document.
  extras: ($) => [
    // Allow comments to be placed anywhere in the file
    $.comment,
    // Allow characters such as whitespaces to be placed anywhere in the file
    /[\s\uFEFF\u2060\u200B\u00A0]/,
  ],

  word: ($) => $.identifier,

  rules: {
    source_file: ($) => seq(repeat($._definition)),

    comment: () =>
      token(
        choice(
          seq('//', /([^\r\n])*/),
          seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')
        )
      ),

    identifier: () => /[a-zA-Z_][a-zA-Z0-9_]*'*/,
    hex_number: () => /0x[a-fA-F0-9]+/,
    decimal_number: () => /\d+/,
    number: ($) => choice($.hex_number, $.decimal_number),

    ident_list: ($) =>
      seq('(', repeat(seq($.identifier, ',')), optional($.identifier), ')'),

    reads: ($) => seq('reads', $.ident_list),
    writes: ($) => seq('writes', $.ident_list),

    _definition: ($) =>
      choice(
        $.huff_const,
        $.abstract_dependency,
        $.extern_macro,
        $.function_definition
      ),

    huff_const: ($) => seq('const', field('identifier', $.identifier)),
    abstract_dependency: ($) =>
      seq('dependency', field('identifier', $.identifier)),
    extern_macro: ($) =>
      seq(
        'extern',
        $.identifier,
        $.ident_list,
        $.huff_macro_stack_in_out,
        optional($.reads),
        optional($.writes)
      ),

    huff_macro_stack_in_out: ($) =>
      seq('stack', '(', $.decimal_number, ',', $.decimal_number, ')'),

    function_definition: ($) =>
      seq(
        'fn',
        field('identifier', $.identifier),
        $.ident_list,
        optional($.reads),
        optional($.writes),
        $.stack_in_out,
        $.function_body
      ),

    stack_arg_list: ($) =>
      seq('[', repeat(seq($.identifier, ',')), optional($.identifier), ']'),
    stack_in_out: ($) => seq($.stack_arg_list, '->', $.stack_arg_list),

    function_body: ($) => seq('{', repeat($.statement), '}'),

    statement: ($) => seq(optional(seq($.identifier, '=')), $.expression),
    expression: ($) => choice($.number, $.identifier, $.invocation),

    invocation: ($) =>
      seq(
        choice($.std_evm_op, $.identifier),
        optional(
          seq(
            '<',
            repeat(seq($.inlined_arg, ',')),
            optional($.inlined_arg),
            '>'
          )
        ),
        seq('(', repeat(seq($.expression, ',')), optional($.expression), ')')
      ),
    inlined_arg: ($) => choice($.identifier, $.number),

    std_evm_op: () =>
      choice(
        'add',
        'addmod',
        'address',
        'and',
        'balance',
        'basefee',
        'blockhash',
        'byte',
        'call',
        'callcode',
        'calldatacopy',
        'calldataload',
        'calldatasize',
        'caller',
        'callvalue',
        'chainid',
        'codecopy',
        'codesize',
        'coinbase',
        'create',
        'create2',
        'delegatecall',
        'diff',
        'div',
        'eq',
        'exp',
        'extcodecopy',
        'extcodehash',
        'extcodesize',
        'gas',
        'gaslimit',
        'gasprice',
        'gt',
        'invalid',
        'iszero',
        'jump',
        'jumpi',
        'log0',
        'log1',
        'log2',
        'log3',
        'log4',
        'lt',
        'mload',
        'mod',
        'msize',
        'mstore',
        'mstore8',
        'mul',
        'mulmod',
        'not',
        'number',
        'or',
        'origin',
        'prevrandao',
        'return',
        'returndatacopy',
        'returndatasize',
        'revert',
        'sar',
        'sdiv',
        'selfbalance',
        'selfdestruct',
        'sgt',
        'sha3',
        'shl',
        'shr',
        'signextend',
        'sload',
        'slt',
        'smod',
        'sstore',
        'staticcall',
        'stop',
        'sub',
        'timestamp',
        'tload',
        'tstore',
        'xor'
      ),
  },
})
