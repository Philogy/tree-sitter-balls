#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 107
#define LARGE_STATE_COUNT 29
#define SYMBOL_COUNT 126
#define ALIAS_COUNT 0
#define TOKEN_COUNT 102
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 2

enum {
  sym_identifier = 1,
  sym_comment = 2,
  sym_hex_number = 3,
  sym_decimal_number = 4,
  anon_sym_LPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_RPAREN = 7,
  anon_sym_reads = 8,
  anon_sym_writes = 9,
  anon_sym_const = 10,
  anon_sym_dependency = 11,
  anon_sym_extern = 12,
  anon_sym_stack = 13,
  anon_sym_fn = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  anon_sym_DASH_GT = 17,
  anon_sym_LBRACE = 18,
  anon_sym_RBRACE = 19,
  anon_sym_EQ = 20,
  anon_sym_LT = 21,
  anon_sym_GT = 22,
  anon_sym_add = 23,
  anon_sym_addmod = 24,
  anon_sym_address = 25,
  anon_sym_and = 26,
  anon_sym_balance = 27,
  anon_sym_basefee = 28,
  anon_sym_blockhash = 29,
  anon_sym_byte = 30,
  anon_sym_call = 31,
  anon_sym_callcode = 32,
  anon_sym_calldatacopy = 33,
  anon_sym_calldataload = 34,
  anon_sym_calldatasize = 35,
  anon_sym_caller = 36,
  anon_sym_callvalue = 37,
  anon_sym_chainid = 38,
  anon_sym_codecopy = 39,
  anon_sym_codesize = 40,
  anon_sym_coinbase = 41,
  anon_sym_create = 42,
  anon_sym_create2 = 43,
  anon_sym_delegatecall = 44,
  anon_sym_diff = 45,
  anon_sym_div = 46,
  anon_sym_eq = 47,
  anon_sym_exp = 48,
  anon_sym_extcodecopy = 49,
  anon_sym_extcodehash = 50,
  anon_sym_extcodesize = 51,
  anon_sym_gas = 52,
  anon_sym_gaslimit = 53,
  anon_sym_gasprice = 54,
  anon_sym_gt = 55,
  anon_sym_invalid = 56,
  anon_sym_iszero = 57,
  anon_sym_jump = 58,
  anon_sym_jumpi = 59,
  anon_sym_log0 = 60,
  anon_sym_log1 = 61,
  anon_sym_log2 = 62,
  anon_sym_log3 = 63,
  anon_sym_log4 = 64,
  anon_sym_lt = 65,
  anon_sym_mload = 66,
  anon_sym_mod = 67,
  anon_sym_msize = 68,
  anon_sym_mstore = 69,
  anon_sym_mstore8 = 70,
  anon_sym_mul = 71,
  anon_sym_mulmod = 72,
  anon_sym_not = 73,
  anon_sym_number = 74,
  anon_sym_or = 75,
  anon_sym_origin = 76,
  anon_sym_prevrandao = 77,
  anon_sym_return = 78,
  anon_sym_returndatacopy = 79,
  anon_sym_returndatasize = 80,
  anon_sym_revert = 81,
  anon_sym_sar = 82,
  anon_sym_sdiv = 83,
  anon_sym_selfbalance = 84,
  anon_sym_selfdestruct = 85,
  anon_sym_sgt = 86,
  anon_sym_sha3 = 87,
  anon_sym_shl = 88,
  anon_sym_shr = 89,
  anon_sym_signextend = 90,
  anon_sym_sload = 91,
  anon_sym_slt = 92,
  anon_sym_smod = 93,
  anon_sym_sstore = 94,
  anon_sym_staticcall = 95,
  anon_sym_stop = 96,
  anon_sym_sub = 97,
  anon_sym_timestamp = 98,
  anon_sym_tload = 99,
  anon_sym_tstore = 100,
  anon_sym_xor = 101,
  sym_source_file = 102,
  sym_number = 103,
  sym_ident_list = 104,
  sym_reads = 105,
  sym_writes = 106,
  sym__definition = 107,
  sym_huff_const = 108,
  sym_abstract_dependency = 109,
  sym_extern_macro = 110,
  sym_huff_macro_stack_in_out = 111,
  sym_function_definition = 112,
  sym_stack_arg_list = 113,
  sym_stack_in_out = 114,
  sym_function_body = 115,
  sym_statement = 116,
  sym_expression = 117,
  sym_invocation = 118,
  sym_inlined_arg = 119,
  sym_std_evm_op = 120,
  aux_sym_source_file_repeat1 = 121,
  aux_sym_ident_list_repeat1 = 122,
  aux_sym_function_body_repeat1 = 123,
  aux_sym_invocation_repeat1 = 124,
  aux_sym_invocation_repeat2 = 125,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_hex_number] = "hex_number",
  [sym_decimal_number] = "decimal_number",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_reads] = "reads",
  [anon_sym_writes] = "writes",
  [anon_sym_const] = "const",
  [anon_sym_dependency] = "dependency",
  [anon_sym_extern] = "extern",
  [anon_sym_stack] = "stack",
  [anon_sym_fn] = "fn",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_add] = "add",
  [anon_sym_addmod] = "addmod",
  [anon_sym_address] = "address",
  [anon_sym_and] = "and",
  [anon_sym_balance] = "balance",
  [anon_sym_basefee] = "basefee",
  [anon_sym_blockhash] = "blockhash",
  [anon_sym_byte] = "byte",
  [anon_sym_call] = "call",
  [anon_sym_callcode] = "callcode",
  [anon_sym_calldatacopy] = "calldatacopy",
  [anon_sym_calldataload] = "calldataload",
  [anon_sym_calldatasize] = "calldatasize",
  [anon_sym_caller] = "caller",
  [anon_sym_callvalue] = "callvalue",
  [anon_sym_chainid] = "chainid",
  [anon_sym_codecopy] = "codecopy",
  [anon_sym_codesize] = "codesize",
  [anon_sym_coinbase] = "coinbase",
  [anon_sym_create] = "create",
  [anon_sym_create2] = "create2",
  [anon_sym_delegatecall] = "delegatecall",
  [anon_sym_diff] = "diff",
  [anon_sym_div] = "div",
  [anon_sym_eq] = "eq",
  [anon_sym_exp] = "exp",
  [anon_sym_extcodecopy] = "extcodecopy",
  [anon_sym_extcodehash] = "extcodehash",
  [anon_sym_extcodesize] = "extcodesize",
  [anon_sym_gas] = "gas",
  [anon_sym_gaslimit] = "gaslimit",
  [anon_sym_gasprice] = "gasprice",
  [anon_sym_gt] = "gt",
  [anon_sym_invalid] = "invalid",
  [anon_sym_iszero] = "iszero",
  [anon_sym_jump] = "jump",
  [anon_sym_jumpi] = "jumpi",
  [anon_sym_log0] = "log0",
  [anon_sym_log1] = "log1",
  [anon_sym_log2] = "log2",
  [anon_sym_log3] = "log3",
  [anon_sym_log4] = "log4",
  [anon_sym_lt] = "lt",
  [anon_sym_mload] = "mload",
  [anon_sym_mod] = "mod",
  [anon_sym_msize] = "msize",
  [anon_sym_mstore] = "mstore",
  [anon_sym_mstore8] = "mstore8",
  [anon_sym_mul] = "mul",
  [anon_sym_mulmod] = "mulmod",
  [anon_sym_not] = "not",
  [anon_sym_number] = "number",
  [anon_sym_or] = "or",
  [anon_sym_origin] = "origin",
  [anon_sym_prevrandao] = "prevrandao",
  [anon_sym_return] = "return",
  [anon_sym_returndatacopy] = "returndatacopy",
  [anon_sym_returndatasize] = "returndatasize",
  [anon_sym_revert] = "revert",
  [anon_sym_sar] = "sar",
  [anon_sym_sdiv] = "sdiv",
  [anon_sym_selfbalance] = "selfbalance",
  [anon_sym_selfdestruct] = "selfdestruct",
  [anon_sym_sgt] = "sgt",
  [anon_sym_sha3] = "sha3",
  [anon_sym_shl] = "shl",
  [anon_sym_shr] = "shr",
  [anon_sym_signextend] = "signextend",
  [anon_sym_sload] = "sload",
  [anon_sym_slt] = "slt",
  [anon_sym_smod] = "smod",
  [anon_sym_sstore] = "sstore",
  [anon_sym_staticcall] = "staticcall",
  [anon_sym_stop] = "stop",
  [anon_sym_sub] = "sub",
  [anon_sym_timestamp] = "timestamp",
  [anon_sym_tload] = "tload",
  [anon_sym_tstore] = "tstore",
  [anon_sym_xor] = "xor",
  [sym_source_file] = "source_file",
  [sym_number] = "number",
  [sym_ident_list] = "ident_list",
  [sym_reads] = "reads",
  [sym_writes] = "writes",
  [sym__definition] = "_definition",
  [sym_huff_const] = "huff_const",
  [sym_abstract_dependency] = "abstract_dependency",
  [sym_extern_macro] = "extern_macro",
  [sym_huff_macro_stack_in_out] = "huff_macro_stack_in_out",
  [sym_function_definition] = "function_definition",
  [sym_stack_arg_list] = "stack_arg_list",
  [sym_stack_in_out] = "stack_in_out",
  [sym_function_body] = "function_body",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_invocation] = "invocation",
  [sym_inlined_arg] = "inlined_arg",
  [sym_std_evm_op] = "std_evm_op",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_ident_list_repeat1] = "ident_list_repeat1",
  [aux_sym_function_body_repeat1] = "function_body_repeat1",
  [aux_sym_invocation_repeat1] = "invocation_repeat1",
  [aux_sym_invocation_repeat2] = "invocation_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_hex_number] = sym_hex_number,
  [sym_decimal_number] = sym_decimal_number,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_reads] = anon_sym_reads,
  [anon_sym_writes] = anon_sym_writes,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_dependency] = anon_sym_dependency,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_stack] = anon_sym_stack,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_addmod] = anon_sym_addmod,
  [anon_sym_address] = anon_sym_address,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_balance] = anon_sym_balance,
  [anon_sym_basefee] = anon_sym_basefee,
  [anon_sym_blockhash] = anon_sym_blockhash,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_callcode] = anon_sym_callcode,
  [anon_sym_calldatacopy] = anon_sym_calldatacopy,
  [anon_sym_calldataload] = anon_sym_calldataload,
  [anon_sym_calldatasize] = anon_sym_calldatasize,
  [anon_sym_caller] = anon_sym_caller,
  [anon_sym_callvalue] = anon_sym_callvalue,
  [anon_sym_chainid] = anon_sym_chainid,
  [anon_sym_codecopy] = anon_sym_codecopy,
  [anon_sym_codesize] = anon_sym_codesize,
  [anon_sym_coinbase] = anon_sym_coinbase,
  [anon_sym_create] = anon_sym_create,
  [anon_sym_create2] = anon_sym_create2,
  [anon_sym_delegatecall] = anon_sym_delegatecall,
  [anon_sym_diff] = anon_sym_diff,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_eq] = anon_sym_eq,
  [anon_sym_exp] = anon_sym_exp,
  [anon_sym_extcodecopy] = anon_sym_extcodecopy,
  [anon_sym_extcodehash] = anon_sym_extcodehash,
  [anon_sym_extcodesize] = anon_sym_extcodesize,
  [anon_sym_gas] = anon_sym_gas,
  [anon_sym_gaslimit] = anon_sym_gaslimit,
  [anon_sym_gasprice] = anon_sym_gasprice,
  [anon_sym_gt] = anon_sym_gt,
  [anon_sym_invalid] = anon_sym_invalid,
  [anon_sym_iszero] = anon_sym_iszero,
  [anon_sym_jump] = anon_sym_jump,
  [anon_sym_jumpi] = anon_sym_jumpi,
  [anon_sym_log0] = anon_sym_log0,
  [anon_sym_log1] = anon_sym_log1,
  [anon_sym_log2] = anon_sym_log2,
  [anon_sym_log3] = anon_sym_log3,
  [anon_sym_log4] = anon_sym_log4,
  [anon_sym_lt] = anon_sym_lt,
  [anon_sym_mload] = anon_sym_mload,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_msize] = anon_sym_msize,
  [anon_sym_mstore] = anon_sym_mstore,
  [anon_sym_mstore8] = anon_sym_mstore8,
  [anon_sym_mul] = anon_sym_mul,
  [anon_sym_mulmod] = anon_sym_mulmod,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_origin] = anon_sym_origin,
  [anon_sym_prevrandao] = anon_sym_prevrandao,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_returndatacopy] = anon_sym_returndatacopy,
  [anon_sym_returndatasize] = anon_sym_returndatasize,
  [anon_sym_revert] = anon_sym_revert,
  [anon_sym_sar] = anon_sym_sar,
  [anon_sym_sdiv] = anon_sym_sdiv,
  [anon_sym_selfbalance] = anon_sym_selfbalance,
  [anon_sym_selfdestruct] = anon_sym_selfdestruct,
  [anon_sym_sgt] = anon_sym_sgt,
  [anon_sym_sha3] = anon_sym_sha3,
  [anon_sym_shl] = anon_sym_shl,
  [anon_sym_shr] = anon_sym_shr,
  [anon_sym_signextend] = anon_sym_signextend,
  [anon_sym_sload] = anon_sym_sload,
  [anon_sym_slt] = anon_sym_slt,
  [anon_sym_smod] = anon_sym_smod,
  [anon_sym_sstore] = anon_sym_sstore,
  [anon_sym_staticcall] = anon_sym_staticcall,
  [anon_sym_stop] = anon_sym_stop,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_timestamp] = anon_sym_timestamp,
  [anon_sym_tload] = anon_sym_tload,
  [anon_sym_tstore] = anon_sym_tstore,
  [anon_sym_xor] = anon_sym_xor,
  [sym_source_file] = sym_source_file,
  [sym_number] = sym_number,
  [sym_ident_list] = sym_ident_list,
  [sym_reads] = sym_reads,
  [sym_writes] = sym_writes,
  [sym__definition] = sym__definition,
  [sym_huff_const] = sym_huff_const,
  [sym_abstract_dependency] = sym_abstract_dependency,
  [sym_extern_macro] = sym_extern_macro,
  [sym_huff_macro_stack_in_out] = sym_huff_macro_stack_in_out,
  [sym_function_definition] = sym_function_definition,
  [sym_stack_arg_list] = sym_stack_arg_list,
  [sym_stack_in_out] = sym_stack_in_out,
  [sym_function_body] = sym_function_body,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_invocation] = sym_invocation,
  [sym_inlined_arg] = sym_inlined_arg,
  [sym_std_evm_op] = sym_std_evm_op,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_ident_list_repeat1] = aux_sym_ident_list_repeat1,
  [aux_sym_function_body_repeat1] = aux_sym_function_body_repeat1,
  [aux_sym_invocation_repeat1] = aux_sym_invocation_repeat1,
  [aux_sym_invocation_repeat2] = aux_sym_invocation_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_number] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reads] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_writes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dependency] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addmod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_address] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_balance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_basefee] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blockhash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_callcode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_calldatacopy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_calldataload] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_calldatasize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_caller] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_callvalue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chainid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_codecopy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_codesize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coinbase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_create] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_create2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delegatecall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_diff] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extcodecopy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extcodehash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extcodesize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gas] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gaslimit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gasprice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invalid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iszero] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jump] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jumpi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mload] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mstore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mstore8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mulmod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_origin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prevrandao] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returndatacopy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returndatasize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_revert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sdiv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selfbalance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selfdestruct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sgt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signextend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sload] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_slt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sstore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_staticcall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timestamp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tload] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tstore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_ident_list] = {
    .visible = true,
    .named = true,
  },
  [sym_reads] = {
    .visible = true,
    .named = true,
  },
  [sym_writes] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_huff_const] = {
    .visible = true,
    .named = true,
  },
  [sym_abstract_dependency] = {
    .visible = true,
    .named = true,
  },
  [sym_extern_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_huff_macro_stack_in_out] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_stack_arg_list] = {
    .visible = true,
    .named = true,
  },
  [sym_stack_in_out] = {
    .visible = true,
    .named = true,
  },
  [sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_invocation] = {
    .visible = true,
    .named = true,
  },
  [sym_inlined_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_std_evm_op] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ident_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_invocation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_invocation_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_identifier = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_identifier] = "identifier",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_identifier, 1},
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
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '0') ADVANCE(13);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(25);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == ']') ADVANCE(19);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(20);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_hex_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_decimal_number);
      if (lookahead == 'x') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_decimal_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'g') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'j') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'm') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 'p') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == 'w') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == 'y') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'h') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == 'q') ADVANCE(31);
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'g') ADVANCE(53);
      if (lookahead == 'h') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'v') ADVANCE(81);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_eq);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(82);
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_gt);
      END_STATE();
    case 36:
      if (lookahead == 'v') ADVANCE(85);
      END_STATE();
    case 37:
      if (lookahead == 'z') ADVANCE(86);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_lt);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == 'v') ADVANCE(100);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(115);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(135);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_exp);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_gas);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 87:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 88:
      if (lookahead == '0') ADVANCE(143);
      if (lookahead == '1') ADVANCE(144);
      if (lookahead == '2') ADVANCE(145);
      if (lookahead == '3') ADVANCE(146);
      if (lookahead == '4') ADVANCE(147);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 91:
      if (lookahead == 'z') ADVANCE(149);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_mul);
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 95:
      if (lookahead == 'b') ADVANCE(152);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 97:
      if (lookahead == 'v') ADVANCE(154);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_sar);
      END_STATE();
    case 102:
      if (lookahead == 'v') ADVANCE(158);
      END_STATE();
    case 103:
      if (lookahead == 'f') ADVANCE(159);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_sgt);
      END_STATE();
    case 105:
      if (lookahead == '3') ADVANCE(160);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_shl);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_shr);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_slt);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(167);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 124:
      if (lookahead == 'f') ADVANCE(175);
      END_STATE();
    case 125:
      if (lookahead == 'k') ADVANCE(176);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == 'c') ADVANCE(177);
      if (lookahead == 'd') ADVANCE(178);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == 'v') ADVANCE(180);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(182);
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 130:
      if (lookahead == 'b') ADVANCE(184);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 133:
      if (lookahead == 'g') ADVANCE(187);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_diff);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_jump);
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_log0);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_log1);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_log2);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_log3);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_log4);
      END_STATE();
    case 148:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_sdiv);
      END_STATE();
    case 159:
      if (lookahead == 'b') ADVANCE(206);
      if (lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_sha3);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 162:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_smod);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 165:
      if (lookahead == 'k') ADVANCE(211);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_stop);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 176:
      if (lookahead == 'h') ADVANCE(221);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(235);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_jumpi);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_mload);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_msize);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_reads);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 208:
      if (lookahead == 'x') ADVANCE(248);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_sload);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_stack);
      END_STATE();
    case 212:
      if (lookahead == 'c') ADVANCE(250);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_tload);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_addmod);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 221:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(258);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_caller);
      END_STATE();
    case 225:
      if (lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(261);
      END_STATE();
    case 227:
      if (lookahead == 'p') ADVANCE(262);
      END_STATE();
    case 228:
      if (lookahead == 'z') ADVANCE(263);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_create);
      if (lookahead == '2') ADVANCE(265);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 236:
      if (lookahead == 'c') ADVANCE(270);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(271);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_iszero);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_mstore);
      if (lookahead == '8') ADVANCE(272);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_mulmod);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 243:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == 'd') ADVANCE(274);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_revert);
      END_STATE();
    case 246:
      if (lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_sstore);
      END_STATE();
    case 250:
      if (lookahead == 'c') ADVANCE(278);
      END_STATE();
    case 251:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_tstore);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_writes);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_address);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_basefee);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 259:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 260:
      if (lookahead == 'u') ADVANCE(283);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_chainid);
      END_STATE();
    case 262:
      if (lookahead == 'y') ADVANCE(284);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_create2);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 268:
      if (lookahead == 'c') ADVANCE(289);
      if (lookahead == 'h') ADVANCE(290);
      if (lookahead == 's') ADVANCE(291);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_invalid);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_mstore8);
      END_STATE();
    case 273:
      if (lookahead == 'd') ADVANCE(294);
      END_STATE();
    case 274:
      if (lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 275:
      if (lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 278:
      if (lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 279:
      if (lookahead == 'm') ADVANCE(300);
      END_STATE();
    case 280:
      if (lookahead == 'h') ADVANCE(301);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_callcode);
      END_STATE();
    case 282:
      if (lookahead == 'c') ADVANCE(302);
      if (lookahead == 'l') ADVANCE(303);
      if (lookahead == 's') ADVANCE(304);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_codecopy);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_codesize);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_coinbase);
      END_STATE();
    case 287:
      if (lookahead == 'c') ADVANCE(306);
      END_STATE();
    case 288:
      if (lookahead == 'c') ADVANCE(307);
      END_STATE();
    case 289:
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 290:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_gaslimit);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_gasprice);
      END_STATE();
    case 294:
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 297:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(315);
      END_STATE();
    case 299:
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 300:
      if (lookahead == 'p') ADVANCE(317);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_blockhash);
      END_STATE();
    case 302:
      if (lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 303:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 304:
      if (lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_callvalue);
      END_STATE();
    case 306:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 307:
      if (lookahead == 'y') ADVANCE(322);
      END_STATE();
    case 308:
      if (lookahead == 'p') ADVANCE(323);
      END_STATE();
    case 309:
      if (lookahead == 's') ADVANCE(324);
      END_STATE();
    case 310:
      if (lookahead == 'z') ADVANCE(325);
      END_STATE();
    case 311:
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 312:
      if (lookahead == 'a') ADVANCE(327);
      END_STATE();
    case 313:
      if (lookahead == 'c') ADVANCE(328);
      END_STATE();
    case 314:
      if (lookahead == 'u') ADVANCE(329);
      END_STATE();
    case 315:
      if (lookahead == 'd') ADVANCE(330);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(331);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 318:
      if (lookahead == 'p') ADVANCE(332);
      END_STATE();
    case 319:
      if (lookahead == 'a') ADVANCE(333);
      END_STATE();
    case 320:
      if (lookahead == 'z') ADVANCE(334);
      END_STATE();
    case 321:
      if (lookahead == 'l') ADVANCE(335);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_dependency);
      END_STATE();
    case 323:
      if (lookahead == 'y') ADVANCE(336);
      END_STATE();
    case 324:
      if (lookahead == 'h') ADVANCE(337);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_prevrandao);
      END_STATE();
    case 327:
      if (lookahead == 'c') ADVANCE(339);
      if (lookahead == 's') ADVANCE(340);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 329:
      if (lookahead == 'c') ADVANCE(342);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_signextend);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_staticcall);
      END_STATE();
    case 332:
      if (lookahead == 'y') ADVANCE(343);
      END_STATE();
    case 333:
      if (lookahead == 'd') ADVANCE(344);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 335:
      if (lookahead == 'l') ADVANCE(346);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_extcodecopy);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_extcodehash);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_extcodesize);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 340:
      if (lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_selfbalance);
      END_STATE();
    case 342:
      if (lookahead == 't') ADVANCE(349);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_calldatacopy);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_calldataload);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_calldatasize);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_delegatecall);
      END_STATE();
    case 347:
      if (lookahead == 'p') ADVANCE(350);
      END_STATE();
    case 348:
      if (lookahead == 'z') ADVANCE(351);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_selfdestruct);
      END_STATE();
    case 350:
      if (lookahead == 'y') ADVANCE(352);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_returndatacopy);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_returndatasize);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(1),
    [sym_decimal_number] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_reads] = ACTIONS(1),
    [anon_sym_writes] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_dependency] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_stack] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_addmod] = ACTIONS(1),
    [anon_sym_address] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_balance] = ACTIONS(1),
    [anon_sym_basefee] = ACTIONS(1),
    [anon_sym_blockhash] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_callcode] = ACTIONS(1),
    [anon_sym_calldatacopy] = ACTIONS(1),
    [anon_sym_calldataload] = ACTIONS(1),
    [anon_sym_calldatasize] = ACTIONS(1),
    [anon_sym_caller] = ACTIONS(1),
    [anon_sym_callvalue] = ACTIONS(1),
    [anon_sym_chainid] = ACTIONS(1),
    [anon_sym_codecopy] = ACTIONS(1),
    [anon_sym_codesize] = ACTIONS(1),
    [anon_sym_coinbase] = ACTIONS(1),
    [anon_sym_create] = ACTIONS(1),
    [anon_sym_create2] = ACTIONS(1),
    [anon_sym_delegatecall] = ACTIONS(1),
    [anon_sym_diff] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_eq] = ACTIONS(1),
    [anon_sym_exp] = ACTIONS(1),
    [anon_sym_extcodecopy] = ACTIONS(1),
    [anon_sym_extcodehash] = ACTIONS(1),
    [anon_sym_extcodesize] = ACTIONS(1),
    [anon_sym_gas] = ACTIONS(1),
    [anon_sym_gaslimit] = ACTIONS(1),
    [anon_sym_gasprice] = ACTIONS(1),
    [anon_sym_gt] = ACTIONS(1),
    [anon_sym_invalid] = ACTIONS(1),
    [anon_sym_iszero] = ACTIONS(1),
    [anon_sym_jump] = ACTIONS(1),
    [anon_sym_jumpi] = ACTIONS(1),
    [anon_sym_log0] = ACTIONS(1),
    [anon_sym_log1] = ACTIONS(1),
    [anon_sym_log2] = ACTIONS(1),
    [anon_sym_log3] = ACTIONS(1),
    [anon_sym_log4] = ACTIONS(1),
    [anon_sym_lt] = ACTIONS(1),
    [anon_sym_mload] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_msize] = ACTIONS(1),
    [anon_sym_mstore] = ACTIONS(1),
    [anon_sym_mstore8] = ACTIONS(1),
    [anon_sym_mul] = ACTIONS(1),
    [anon_sym_mulmod] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_origin] = ACTIONS(1),
    [anon_sym_prevrandao] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_returndatacopy] = ACTIONS(1),
    [anon_sym_returndatasize] = ACTIONS(1),
    [anon_sym_revert] = ACTIONS(1),
    [anon_sym_sar] = ACTIONS(1),
    [anon_sym_sdiv] = ACTIONS(1),
    [anon_sym_selfbalance] = ACTIONS(1),
    [anon_sym_selfdestruct] = ACTIONS(1),
    [anon_sym_sgt] = ACTIONS(1),
    [anon_sym_sha3] = ACTIONS(1),
    [anon_sym_shl] = ACTIONS(1),
    [anon_sym_shr] = ACTIONS(1),
    [anon_sym_signextend] = ACTIONS(1),
    [anon_sym_sload] = ACTIONS(1),
    [anon_sym_slt] = ACTIONS(1),
    [anon_sym_smod] = ACTIONS(1),
    [anon_sym_sstore] = ACTIONS(1),
    [anon_sym_staticcall] = ACTIONS(1),
    [anon_sym_stop] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_timestamp] = ACTIONS(1),
    [anon_sym_tload] = ACTIONS(1),
    [anon_sym_tstore] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(101),
    [sym__definition] = STATE(29),
    [sym_huff_const] = STATE(29),
    [sym_abstract_dependency] = STATE(29),
    [sym_extern_macro] = STATE(29),
    [sym_function_definition] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_dependency] = ACTIONS(9),
    [anon_sym_extern] = ACTIONS(11),
    [anon_sym_fn] = ACTIONS(13),
  },
  [2] = {
    [sym_number] = STATE(21),
    [sym_statement] = STATE(4),
    [sym_expression] = STATE(27),
    [sym_invocation] = STATE(21),
    [sym_std_evm_op] = STATE(64),
    [aux_sym_function_body_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(17),
    [sym_decimal_number] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_add] = ACTIONS(23),
    [anon_sym_addmod] = ACTIONS(23),
    [anon_sym_address] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_balance] = ACTIONS(23),
    [anon_sym_basefee] = ACTIONS(23),
    [anon_sym_blockhash] = ACTIONS(23),
    [anon_sym_byte] = ACTIONS(23),
    [anon_sym_call] = ACTIONS(23),
    [anon_sym_callcode] = ACTIONS(23),
    [anon_sym_calldatacopy] = ACTIONS(23),
    [anon_sym_calldataload] = ACTIONS(23),
    [anon_sym_calldatasize] = ACTIONS(23),
    [anon_sym_caller] = ACTIONS(23),
    [anon_sym_callvalue] = ACTIONS(23),
    [anon_sym_chainid] = ACTIONS(23),
    [anon_sym_codecopy] = ACTIONS(23),
    [anon_sym_codesize] = ACTIONS(23),
    [anon_sym_coinbase] = ACTIONS(23),
    [anon_sym_create] = ACTIONS(23),
    [anon_sym_create2] = ACTIONS(23),
    [anon_sym_delegatecall] = ACTIONS(23),
    [anon_sym_diff] = ACTIONS(23),
    [anon_sym_div] = ACTIONS(23),
    [anon_sym_eq] = ACTIONS(23),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_extcodecopy] = ACTIONS(23),
    [anon_sym_extcodehash] = ACTIONS(23),
    [anon_sym_extcodesize] = ACTIONS(23),
    [anon_sym_gas] = ACTIONS(23),
    [anon_sym_gaslimit] = ACTIONS(23),
    [anon_sym_gasprice] = ACTIONS(23),
    [anon_sym_gt] = ACTIONS(23),
    [anon_sym_invalid] = ACTIONS(23),
    [anon_sym_iszero] = ACTIONS(23),
    [anon_sym_jump] = ACTIONS(23),
    [anon_sym_jumpi] = ACTIONS(23),
    [anon_sym_log0] = ACTIONS(23),
    [anon_sym_log1] = ACTIONS(23),
    [anon_sym_log2] = ACTIONS(23),
    [anon_sym_log3] = ACTIONS(23),
    [anon_sym_log4] = ACTIONS(23),
    [anon_sym_lt] = ACTIONS(23),
    [anon_sym_mload] = ACTIONS(23),
    [anon_sym_mod] = ACTIONS(23),
    [anon_sym_msize] = ACTIONS(23),
    [anon_sym_mstore] = ACTIONS(23),
    [anon_sym_mstore8] = ACTIONS(23),
    [anon_sym_mul] = ACTIONS(23),
    [anon_sym_mulmod] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_number] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_origin] = ACTIONS(23),
    [anon_sym_prevrandao] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_returndatacopy] = ACTIONS(23),
    [anon_sym_returndatasize] = ACTIONS(23),
    [anon_sym_revert] = ACTIONS(23),
    [anon_sym_sar] = ACTIONS(23),
    [anon_sym_sdiv] = ACTIONS(23),
    [anon_sym_selfbalance] = ACTIONS(23),
    [anon_sym_selfdestruct] = ACTIONS(23),
    [anon_sym_sgt] = ACTIONS(23),
    [anon_sym_sha3] = ACTIONS(23),
    [anon_sym_shl] = ACTIONS(23),
    [anon_sym_shr] = ACTIONS(23),
    [anon_sym_signextend] = ACTIONS(23),
    [anon_sym_sload] = ACTIONS(23),
    [anon_sym_slt] = ACTIONS(23),
    [anon_sym_smod] = ACTIONS(23),
    [anon_sym_sstore] = ACTIONS(23),
    [anon_sym_staticcall] = ACTIONS(23),
    [anon_sym_stop] = ACTIONS(23),
    [anon_sym_sub] = ACTIONS(23),
    [anon_sym_timestamp] = ACTIONS(23),
    [anon_sym_tload] = ACTIONS(23),
    [anon_sym_tstore] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
  },
  [3] = {
    [sym_number] = STATE(21),
    [sym_statement] = STATE(2),
    [sym_expression] = STATE(27),
    [sym_invocation] = STATE(21),
    [sym_std_evm_op] = STATE(64),
    [aux_sym_function_body_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(17),
    [sym_decimal_number] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_add] = ACTIONS(23),
    [anon_sym_addmod] = ACTIONS(23),
    [anon_sym_address] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_balance] = ACTIONS(23),
    [anon_sym_basefee] = ACTIONS(23),
    [anon_sym_blockhash] = ACTIONS(23),
    [anon_sym_byte] = ACTIONS(23),
    [anon_sym_call] = ACTIONS(23),
    [anon_sym_callcode] = ACTIONS(23),
    [anon_sym_calldatacopy] = ACTIONS(23),
    [anon_sym_calldataload] = ACTIONS(23),
    [anon_sym_calldatasize] = ACTIONS(23),
    [anon_sym_caller] = ACTIONS(23),
    [anon_sym_callvalue] = ACTIONS(23),
    [anon_sym_chainid] = ACTIONS(23),
    [anon_sym_codecopy] = ACTIONS(23),
    [anon_sym_codesize] = ACTIONS(23),
    [anon_sym_coinbase] = ACTIONS(23),
    [anon_sym_create] = ACTIONS(23),
    [anon_sym_create2] = ACTIONS(23),
    [anon_sym_delegatecall] = ACTIONS(23),
    [anon_sym_diff] = ACTIONS(23),
    [anon_sym_div] = ACTIONS(23),
    [anon_sym_eq] = ACTIONS(23),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_extcodecopy] = ACTIONS(23),
    [anon_sym_extcodehash] = ACTIONS(23),
    [anon_sym_extcodesize] = ACTIONS(23),
    [anon_sym_gas] = ACTIONS(23),
    [anon_sym_gaslimit] = ACTIONS(23),
    [anon_sym_gasprice] = ACTIONS(23),
    [anon_sym_gt] = ACTIONS(23),
    [anon_sym_invalid] = ACTIONS(23),
    [anon_sym_iszero] = ACTIONS(23),
    [anon_sym_jump] = ACTIONS(23),
    [anon_sym_jumpi] = ACTIONS(23),
    [anon_sym_log0] = ACTIONS(23),
    [anon_sym_log1] = ACTIONS(23),
    [anon_sym_log2] = ACTIONS(23),
    [anon_sym_log3] = ACTIONS(23),
    [anon_sym_log4] = ACTIONS(23),
    [anon_sym_lt] = ACTIONS(23),
    [anon_sym_mload] = ACTIONS(23),
    [anon_sym_mod] = ACTIONS(23),
    [anon_sym_msize] = ACTIONS(23),
    [anon_sym_mstore] = ACTIONS(23),
    [anon_sym_mstore8] = ACTIONS(23),
    [anon_sym_mul] = ACTIONS(23),
    [anon_sym_mulmod] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_number] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_origin] = ACTIONS(23),
    [anon_sym_prevrandao] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_returndatacopy] = ACTIONS(23),
    [anon_sym_returndatasize] = ACTIONS(23),
    [anon_sym_revert] = ACTIONS(23),
    [anon_sym_sar] = ACTIONS(23),
    [anon_sym_sdiv] = ACTIONS(23),
    [anon_sym_selfbalance] = ACTIONS(23),
    [anon_sym_selfdestruct] = ACTIONS(23),
    [anon_sym_sgt] = ACTIONS(23),
    [anon_sym_sha3] = ACTIONS(23),
    [anon_sym_shl] = ACTIONS(23),
    [anon_sym_shr] = ACTIONS(23),
    [anon_sym_signextend] = ACTIONS(23),
    [anon_sym_sload] = ACTIONS(23),
    [anon_sym_slt] = ACTIONS(23),
    [anon_sym_smod] = ACTIONS(23),
    [anon_sym_sstore] = ACTIONS(23),
    [anon_sym_staticcall] = ACTIONS(23),
    [anon_sym_stop] = ACTIONS(23),
    [anon_sym_sub] = ACTIONS(23),
    [anon_sym_timestamp] = ACTIONS(23),
    [anon_sym_tload] = ACTIONS(23),
    [anon_sym_tstore] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
  },
  [4] = {
    [sym_number] = STATE(21),
    [sym_statement] = STATE(4),
    [sym_expression] = STATE(27),
    [sym_invocation] = STATE(21),
    [sym_std_evm_op] = STATE(64),
    [aux_sym_function_body_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(30),
    [sym_decimal_number] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(36),
    [anon_sym_add] = ACTIONS(38),
    [anon_sym_addmod] = ACTIONS(38),
    [anon_sym_address] = ACTIONS(38),
    [anon_sym_and] = ACTIONS(38),
    [anon_sym_balance] = ACTIONS(38),
    [anon_sym_basefee] = ACTIONS(38),
    [anon_sym_blockhash] = ACTIONS(38),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_call] = ACTIONS(38),
    [anon_sym_callcode] = ACTIONS(38),
    [anon_sym_calldatacopy] = ACTIONS(38),
    [anon_sym_calldataload] = ACTIONS(38),
    [anon_sym_calldatasize] = ACTIONS(38),
    [anon_sym_caller] = ACTIONS(38),
    [anon_sym_callvalue] = ACTIONS(38),
    [anon_sym_chainid] = ACTIONS(38),
    [anon_sym_codecopy] = ACTIONS(38),
    [anon_sym_codesize] = ACTIONS(38),
    [anon_sym_coinbase] = ACTIONS(38),
    [anon_sym_create] = ACTIONS(38),
    [anon_sym_create2] = ACTIONS(38),
    [anon_sym_delegatecall] = ACTIONS(38),
    [anon_sym_diff] = ACTIONS(38),
    [anon_sym_div] = ACTIONS(38),
    [anon_sym_eq] = ACTIONS(38),
    [anon_sym_exp] = ACTIONS(38),
    [anon_sym_extcodecopy] = ACTIONS(38),
    [anon_sym_extcodehash] = ACTIONS(38),
    [anon_sym_extcodesize] = ACTIONS(38),
    [anon_sym_gas] = ACTIONS(38),
    [anon_sym_gaslimit] = ACTIONS(38),
    [anon_sym_gasprice] = ACTIONS(38),
    [anon_sym_gt] = ACTIONS(38),
    [anon_sym_invalid] = ACTIONS(38),
    [anon_sym_iszero] = ACTIONS(38),
    [anon_sym_jump] = ACTIONS(38),
    [anon_sym_jumpi] = ACTIONS(38),
    [anon_sym_log0] = ACTIONS(38),
    [anon_sym_log1] = ACTIONS(38),
    [anon_sym_log2] = ACTIONS(38),
    [anon_sym_log3] = ACTIONS(38),
    [anon_sym_log4] = ACTIONS(38),
    [anon_sym_lt] = ACTIONS(38),
    [anon_sym_mload] = ACTIONS(38),
    [anon_sym_mod] = ACTIONS(38),
    [anon_sym_msize] = ACTIONS(38),
    [anon_sym_mstore] = ACTIONS(38),
    [anon_sym_mstore8] = ACTIONS(38),
    [anon_sym_mul] = ACTIONS(38),
    [anon_sym_mulmod] = ACTIONS(38),
    [anon_sym_not] = ACTIONS(38),
    [anon_sym_number] = ACTIONS(38),
    [anon_sym_or] = ACTIONS(38),
    [anon_sym_origin] = ACTIONS(38),
    [anon_sym_prevrandao] = ACTIONS(38),
    [anon_sym_return] = ACTIONS(38),
    [anon_sym_returndatacopy] = ACTIONS(38),
    [anon_sym_returndatasize] = ACTIONS(38),
    [anon_sym_revert] = ACTIONS(38),
    [anon_sym_sar] = ACTIONS(38),
    [anon_sym_sdiv] = ACTIONS(38),
    [anon_sym_selfbalance] = ACTIONS(38),
    [anon_sym_selfdestruct] = ACTIONS(38),
    [anon_sym_sgt] = ACTIONS(38),
    [anon_sym_sha3] = ACTIONS(38),
    [anon_sym_shl] = ACTIONS(38),
    [anon_sym_shr] = ACTIONS(38),
    [anon_sym_signextend] = ACTIONS(38),
    [anon_sym_sload] = ACTIONS(38),
    [anon_sym_slt] = ACTIONS(38),
    [anon_sym_smod] = ACTIONS(38),
    [anon_sym_sstore] = ACTIONS(38),
    [anon_sym_staticcall] = ACTIONS(38),
    [anon_sym_stop] = ACTIONS(38),
    [anon_sym_sub] = ACTIONS(38),
    [anon_sym_timestamp] = ACTIONS(38),
    [anon_sym_tload] = ACTIONS(38),
    [anon_sym_tstore] = ACTIONS(38),
    [anon_sym_xor] = ACTIONS(38),
  },
  [5] = {
    [sym_number] = STATE(21),
    [sym_expression] = STATE(72),
    [sym_invocation] = STATE(21),
    [sym_std_evm_op] = STATE(64),
    [aux_sym_invocation_repeat2] = STATE(8),
    [sym_identifier] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(17),
    [sym_decimal_number] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_add] = ACTIONS(23),
    [anon_sym_addmod] = ACTIONS(23),
    [anon_sym_address] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_balance] = ACTIONS(23),
    [anon_sym_basefee] = ACTIONS(23),
    [anon_sym_blockhash] = ACTIONS(23),
    [anon_sym_byte] = ACTIONS(23),
    [anon_sym_call] = ACTIONS(23),
    [anon_sym_callcode] = ACTIONS(23),
    [anon_sym_calldatacopy] = ACTIONS(23),
    [anon_sym_calldataload] = ACTIONS(23),
    [anon_sym_calldatasize] = ACTIONS(23),
    [anon_sym_caller] = ACTIONS(23),
    [anon_sym_callvalue] = ACTIONS(23),
    [anon_sym_chainid] = ACTIONS(23),
    [anon_sym_codecopy] = ACTIONS(23),
    [anon_sym_codesize] = ACTIONS(23),
    [anon_sym_coinbase] = ACTIONS(23),
    [anon_sym_create] = ACTIONS(23),
    [anon_sym_create2] = ACTIONS(23),
    [anon_sym_delegatecall] = ACTIONS(23),
    [anon_sym_diff] = ACTIONS(23),
    [anon_sym_div] = ACTIONS(23),
    [anon_sym_eq] = ACTIONS(23),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_extcodecopy] = ACTIONS(23),
    [anon_sym_extcodehash] = ACTIONS(23),
    [anon_sym_extcodesize] = ACTIONS(23),
    [anon_sym_gas] = ACTIONS(23),
    [anon_sym_gaslimit] = ACTIONS(23),
    [anon_sym_gasprice] = ACTIONS(23),
    [anon_sym_gt] = ACTIONS(23),
    [anon_sym_invalid] = ACTIONS(23),
    [anon_sym_iszero] = ACTIONS(23),
    [anon_sym_jump] = ACTIONS(23),
    [anon_sym_jumpi] = ACTIONS(23),
    [anon_sym_log0] = ACTIONS(23),
    [anon_sym_log1] = ACTIONS(23),
    [anon_sym_log2] = ACTIONS(23),
    [anon_sym_log3] = ACTIONS(23),
    [anon_sym_log4] = ACTIONS(23),
    [anon_sym_lt] = ACTIONS(23),
    [anon_sym_mload] = ACTIONS(23),
    [anon_sym_mod] = ACTIONS(23),
    [anon_sym_msize] = ACTIONS(23),
    [anon_sym_mstore] = ACTIONS(23),
    [anon_sym_mstore8] = ACTIONS(23),
    [anon_sym_mul] = ACTIONS(23),
    [anon_sym_mulmod] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_number] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_origin] = ACTIONS(23),
    [anon_sym_prevrandao] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_returndatacopy] = ACTIONS(23),
    [anon_sym_returndatasize] = ACTIONS(23),
    [anon_sym_revert] = ACTIONS(23),
    [anon_sym_sar] = ACTIONS(23),
    [anon_sym_sdiv] = ACTIONS(23),
    [anon_sym_selfbalance] = ACTIONS(23),
    [anon_sym_selfdestruct] = ACTIONS(23),
    [anon_sym_sgt] = ACTIONS(23),
    [anon_sym_sha3] = ACTIONS(23),
    [anon_sym_shl] = ACTIONS(23),
    [anon_sym_shr] = ACTIONS(23),
    [anon_sym_signextend] = ACTIONS(23),
    [anon_sym_sload] = ACTIONS(23),
    [anon_sym_slt] = ACTIONS(23),
    [anon_sym_smod] = ACTIONS(23),
    [anon_sym_sstore] = ACTIONS(23),
    [anon_sym_staticcall] = ACTIONS(23),
    [anon_sym_stop] = ACTIONS(23),
    [anon_sym_sub] = ACTIONS(23),
    [anon_sym_timestamp] = ACTIONS(23),
    [anon_sym_tload] = ACTIONS(23),
    [anon_sym_tstore] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
  },
  [6] = {
    [sym_number] = STATE(21),
    [sym_expression] = STATE(67),
    [sym_invocation] = STATE(21),
    [sym_std_evm_op] = STATE(64),
    [aux_sym_invocation_repeat2] = STATE(12),
    [sym_identifier] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(17),
    [sym_decimal_number] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_add] = ACTIONS(23),
    [anon_sym_addmod] = ACTIONS(23),
    [anon_sym_address] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_balance] = ACTIONS(23),
    [anon_sym_basefee] = ACTIONS(23),
    [anon_sym_blockhash] = ACTIONS(23),
    [anon_sym_byte] = ACTIONS(23),
    [anon_sym_call] = ACTIONS(23),
    [anon_sym_callcode] = ACTIONS(23),
    [anon_sym_calldatacopy] = ACTIONS(23),
    [anon_sym_calldataload] = ACTIONS(23),
    [anon_sym_calldatasize] = ACTIONS(23),
    [anon_sym_caller] = ACTIONS(23),
    [anon_sym_callvalue] = ACTIONS(23),
    [anon_sym_chainid] = ACTIONS(23),
    [anon_sym_codecopy] = ACTIONS(23),
    [anon_sym_codesize] = ACTIONS(23),
    [anon_sym_coinbase] = ACTIONS(23),
    [anon_sym_create] = ACTIONS(23),
    [anon_sym_create2] = ACTIONS(23),
    [anon_sym_delegatecall] = ACTIONS(23),
    [anon_sym_diff] = ACTIONS(23),
    [anon_sym_div] = ACTIONS(23),
    [anon_sym_eq] = ACTIONS(23),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_extcodecopy] = ACTIONS(23),
    [anon_sym_extcodehash] = ACTIONS(23),
    [anon_sym_extcodesize] = ACTIONS(23),
    [anon_sym_gas] = ACTIONS(23),
    [anon_sym_gaslimit] = ACTIONS(23),
    [anon_sym_gasprice] = ACTIONS(23),
    [anon_sym_gt] = ACTIONS(23),
    [anon_sym_invalid] = ACTIONS(23),
    [anon_sym_iszero] = ACTIONS(23),
    [anon_sym_jump] = ACTIONS(23),
    [anon_sym_jumpi] = ACTIONS(23),
    [anon_sym_log0] = ACTIONS(23),
    [anon_sym_log1] = ACTIONS(23),
    [anon_sym_log2] = ACTIONS(23),
    [anon_sym_log3] = ACTIONS(23),
    [anon_sym_log4] = ACTIONS(23),
    [anon_sym_lt] = ACTIONS(23),
    [anon_sym_mload] = ACTIONS(23),
    [anon_sym_mod] = ACTIONS(23),
    [anon_sym_msize] = ACTIONS(23),
    [anon_sym_mstore] = ACTIONS(23),
    [anon_sym_mstore8] = ACTIONS(23),
    [anon_sym_mul] = ACTIONS(23),
    [anon_sym_mulmod] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_number] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_origin] = ACTIONS(23),
    [anon_sym_prevrandao] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_returndatacopy] = ACTIONS(23),
    [anon_sym_returndatasize] = ACTIONS(23),
    [anon_sym_revert] = ACTIONS(23),
    [anon_sym_sar] = ACTIONS(23),
    [anon_sym_sdiv] = ACTIONS(23),
    [anon_sym_selfbalance] = ACTIONS(23),
    [anon_sym_selfdestruct] = ACTIONS(23),
    [anon_sym_sgt] = ACTIONS(23),
    [anon_sym_sha3] = ACTIONS(23),
    [anon_sym_shl] = ACTIONS(23),
    [anon_sym_shr] = ACTIONS(23),
    [anon_sym_signextend] = ACTIONS(23),
    [anon_sym_sload] = ACTIONS(23),
    [anon_sym_slt] = ACTIONS(23),
    [anon_sym_smod] = ACTIONS(23),
    [anon_sym_sstore] = ACTIONS(23),
    [anon_sym_staticcall] = ACTIONS(23),
    [anon_sym_stop] = ACTIONS(23),
    [anon_sym_sub] = ACTIONS(23),
    [anon_sym_timestamp] = ACTIONS(23),
    [anon_sym_tload] = ACTIONS(23),
    [anon_sym_tstore] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
  },
  [7] = {
    [sym_number] = STATE(21),
    [sym_expression] = STATE(73),
    [sym_invocation] = STATE(21),
    [sym_std_evm_op] = STATE(64),
    [aux_sym_invocation_repeat2] = STATE(11),
    [sym_identifier] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(17),
    [sym_decimal_number] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_add] = ACTIONS(23),
    [anon_sym_addmod] = ACTIONS(23),
    [anon_sym_address] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_balance] = ACTIONS(23),
    [anon_sym_basefee] = ACTIONS(23),
    [anon_sym_blockhash] = ACTIONS(23),
    [anon_sym_byte] = ACTIONS(23),
    [anon_sym_call] = ACTIONS(23),
    [anon_sym_callcode] = ACTIONS(23),
    [anon_sym_calldatacopy] = ACTIONS(23),
    [anon_sym_calldataload] = ACTIONS(23),
    [anon_sym_calldatasize] = ACTIONS(23),
    [anon_sym_caller] = ACTIONS(23),
    [anon_sym_callvalue] = ACTIONS(23),
    [anon_sym_chainid] = ACTIONS(23),
    [anon_sym_codecopy] = ACTIONS(23),
    [anon_sym_codesize] = ACTIONS(23),
    [anon_sym_coinbase] = ACTIONS(23),
    [anon_sym_create] = ACTIONS(23),
    [anon_sym_create2] = ACTIONS(23),
    [anon_sym_delegatecall] = ACTIONS(23),
    [anon_sym_diff] = ACTIONS(23),
    [anon_sym_div] = ACTIONS(23),
    [anon_sym_eq] = ACTIONS(23),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_extcodecopy] = ACTIONS(23),
    [anon_sym_extcodehash] = ACTIONS(23),
    [anon_sym_extcodesize] = ACTIONS(23),
    [anon_sym_gas] = ACTIONS(23),
    [anon_sym_gaslimit] = ACTIONS(23),
    [anon_sym_gasprice] = ACTIONS(23),
    [anon_sym_gt] = ACTIONS(23),
    [anon_sym_invalid] = ACTIONS(23),
    [anon_sym_iszero] = ACTIONS(23),
    [anon_sym_jump] = ACTIONS(23),
    [anon_sym_jumpi] = ACTIONS(23),
    [anon_sym_log0] = ACTIONS(23),
    [anon_sym_log1] = ACTIONS(23),
    [anon_sym_log2] = ACTIONS(23),
    [anon_sym_log3] = ACTIONS(23),
    [anon_sym_log4] = ACTIONS(23),
    [anon_sym_lt] = ACTIONS(23),
    [anon_sym_mload] = ACTIONS(23),
    [anon_sym_mod] = ACTIONS(23),
    [anon_sym_msize] = ACTIONS(23),
    [anon_sym_mstore] = ACTIONS(23),
    [anon_sym_mstore8] = ACTIONS(23),
    [anon_sym_mul] = ACTIONS(23),
    [anon_sym_mulmod] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_number] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_origin] = ACTIONS(23),
    [anon_sym_prevrandao] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_returndatacopy] = ACTIONS(23),
    [anon_sym_returndatasize] = ACTIONS(23),
    [anon_sym_revert] = ACTIONS(23),
    [anon_sym_sar] = ACTIONS(23),
    [anon_sym_sdiv] = ACTIONS(23),
    [anon_sym_selfbalance] = ACTIONS(23),
    [anon_sym_selfdestruct] = ACTIONS(23),
    [anon_sym_sgt] = ACTIONS(23),
    [anon_sym_sha3] = ACTIONS(23),
    [anon_sym_shl] = ACTIONS(23),
    [anon_sym_shr] = ACTIONS(23),
    [anon_sym_signextend] = ACTIONS(23),
    [anon_sym_sload] = ACTIONS(23),
    [anon_sym_slt] = ACTIONS(23),
    [anon_sym_smod] = ACTIONS(23),
    [anon_sym_sstore] = ACTIONS(23),
    [anon_sym_staticcall] = ACTIONS(23),
    [anon_sym_stop] = ACTIONS(23),
    [anon_sym_sub] = ACTIONS(23),
    [anon_sym_timestamp] = ACTIONS(23),
    [anon_sym_tload] = ACTIONS(23),
    [anon_sym_tstore] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
  },
  [8] = {
    [sym_number] = STATE(21),
    [sym_expression] = STATE(67),
    [sym_invocation] = STATE(21),
    [sym_std_evm_op] = STATE(64),
    [aux_sym_invocation_repeat2] = STATE(9),
    [sym_identifier] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(17),
    [sym_decimal_number] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_add] = ACTIONS(23),
    [anon_sym_addmod] = ACTIONS(23),
    [anon_sym_address] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_balance] = ACTIONS(23),
    [anon_sym_basefee] = ACTIONS(23),
    [anon_sym_blockhash] = ACTIONS(23),
    [anon_sym_byte] = ACTIONS(23),
    [anon_sym_call] = ACTIONS(23),
    [anon_sym_callcode] = ACTIONS(23),
    [anon_sym_calldatacopy] = ACTIONS(23),
    [anon_sym_calldataload] = ACTIONS(23),
    [anon_sym_calldatasize] = ACTIONS(23),
    [anon_sym_caller] = ACTIONS(23),
    [anon_sym_callvalue] = ACTIONS(23),
    [anon_sym_chainid] = ACTIONS(23),
    [anon_sym_codecopy] = ACTIONS(23),
    [anon_sym_codesize] = ACTIONS(23),
    [anon_sym_coinbase] = ACTIONS(23),
    [anon_sym_create] = ACTIONS(23),
    [anon_sym_create2] = ACTIONS(23),
    [anon_sym_delegatecall] = ACTIONS(23),
    [anon_sym_diff] = ACTIONS(23),
    [anon_sym_div] = ACTIONS(23),
    [anon_sym_eq] = ACTIONS(23),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_extcodecopy] = ACTIONS(23),
    [anon_sym_extcodehash] = ACTIONS(23),
    [anon_sym_extcodesize] = ACTIONS(23),
    [anon_sym_gas] = ACTIONS(23),
    [anon_sym_gaslimit] = ACTIONS(23),
    [anon_sym_gasprice] = ACTIONS(23),
    [anon_sym_gt] = ACTIONS(23),
    [anon_sym_invalid] = ACTIONS(23),
    [anon_sym_iszero] = ACTIONS(23),
    [anon_sym_jump] = ACTIONS(23),
    [anon_sym_jumpi] = ACTIONS(23),
    [anon_sym_log0] = ACTIONS(23),
    [anon_sym_log1] = ACTIONS(23),
    [anon_sym_log2] = ACTIONS(23),
    [anon_sym_log3] = ACTIONS(23),
    [anon_sym_log4] = ACTIONS(23),
    [anon_sym_lt] = ACTIONS(23),
    [anon_sym_mload] = ACTIONS(23),
    [anon_sym_mod] = ACTIONS(23),
    [anon_sym_msize] = ACTIONS(23),
    [anon_sym_mstore] = ACTIONS(23),
    [anon_sym_mstore8] = ACTIONS(23),
    [anon_sym_mul] = ACTIONS(23),
    [anon_sym_mulmod] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_number] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_origin] = ACTIONS(23),
    [anon_sym_prevrandao] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_returndatacopy] = ACTIONS(23),
    [anon_sym_returndatasize] = ACTIONS(23),
    [anon_sym_revert] = ACTIONS(23),
    [anon_sym_sar] = ACTIONS(23),
    [anon_sym_sdiv] = ACTIONS(23),
    [anon_sym_selfbalance] = ACTIONS(23),
    [anon_sym_selfdestruct] = ACTIONS(23),
    [anon_sym_sgt] = ACTIONS(23),
    [anon_sym_sha3] = ACTIONS(23),
    [anon_sym_shl] = ACTIONS(23),
    [anon_sym_shr] = ACTIONS(23),
    [anon_sym_signextend] = ACTIONS(23),
    [anon_sym_sload] = ACTIONS(23),
    [anon_sym_slt] = ACTIONS(23),
    [anon_sym_smod] = ACTIONS(23),
    [anon_sym_sstore] = ACTIONS(23),
    [anon_sym_staticcall] = ACTIONS(23),
    [anon_sym_stop] = ACTIONS(23),
    [anon_sym_sub] = ACTIONS(23),
    [anon_sym_timestamp] = ACTIONS(23),
    [anon_sym_tload] = ACTIONS(23),
    [anon_sym_tstore] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
  },
  [9] = {
    [sym_number] = STATE(21),
    [sym_expression] = STATE(91),
    [sym_invocation] = STATE(21),
    [sym_std_evm_op] = STATE(64),
    [aux_sym_invocation_repeat2] = STATE(9),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(52),
    [sym_decimal_number] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_add] = ACTIONS(60),
    [anon_sym_addmod] = ACTIONS(60),
    [anon_sym_address] = ACTIONS(60),
    [anon_sym_and] = ACTIONS(60),
    [anon_sym_balance] = ACTIONS(60),
    [anon_sym_basefee] = ACTIONS(60),
    [anon_sym_blockhash] = ACTIONS(60),
    [anon_sym_byte] = ACTIONS(60),
    [anon_sym_call] = ACTIONS(60),
    [anon_sym_callcode] = ACTIONS(60),
    [anon_sym_calldatacopy] = ACTIONS(60),
    [anon_sym_calldataload] = ACTIONS(60),
    [anon_sym_calldatasize] = ACTIONS(60),
    [anon_sym_caller] = ACTIONS(60),
    [anon_sym_callvalue] = ACTIONS(60),
    [anon_sym_chainid] = ACTIONS(60),
    [anon_sym_codecopy] = ACTIONS(60),
    [anon_sym_codesize] = ACTIONS(60),
    [anon_sym_coinbase] = ACTIONS(60),
    [anon_sym_create] = ACTIONS(60),
    [anon_sym_create2] = ACTIONS(60),
    [anon_sym_delegatecall] = ACTIONS(60),
    [anon_sym_diff] = ACTIONS(60),
    [anon_sym_div] = ACTIONS(60),
    [anon_sym_eq] = ACTIONS(60),
    [anon_sym_exp] = ACTIONS(60),
    [anon_sym_extcodecopy] = ACTIONS(60),
    [anon_sym_extcodehash] = ACTIONS(60),
    [anon_sym_extcodesize] = ACTIONS(60),
    [anon_sym_gas] = ACTIONS(60),
    [anon_sym_gaslimit] = ACTIONS(60),
    [anon_sym_gasprice] = ACTIONS(60),
    [anon_sym_gt] = ACTIONS(60),
    [anon_sym_invalid] = ACTIONS(60),
    [anon_sym_iszero] = ACTIONS(60),
    [anon_sym_jump] = ACTIONS(60),
    [anon_sym_jumpi] = ACTIONS(60),
    [anon_sym_log0] = ACTIONS(60),
    [anon_sym_log1] = ACTIONS(60),
    [anon_sym_log2] = ACTIONS(60),
    [anon_sym_log3] = ACTIONS(60),
    [anon_sym_log4] = ACTIONS(60),
    [anon_sym_lt] = ACTIONS(60),
    [anon_sym_mload] = ACTIONS(60),
    [anon_sym_mod] = ACTIONS(60),
    [anon_sym_msize] = ACTIONS(60),
    [anon_sym_mstore] = ACTIONS(60),
    [anon_sym_mstore8] = ACTIONS(60),
    [anon_sym_mul] = ACTIONS(60),
    [anon_sym_mulmod] = ACTIONS(60),
    [anon_sym_not] = ACTIONS(60),
    [anon_sym_number] = ACTIONS(60),
    [anon_sym_or] = ACTIONS(60),
    [anon_sym_origin] = ACTIONS(60),
    [anon_sym_prevrandao] = ACTIONS(60),
    [anon_sym_return] = ACTIONS(60),
    [anon_sym_returndatacopy] = ACTIONS(60),
    [anon_sym_returndatasize] = ACTIONS(60),
    [anon_sym_revert] = ACTIONS(60),
    [anon_sym_sar] = ACTIONS(60),
    [anon_sym_sdiv] = ACTIONS(60),
    [anon_sym_selfbalance] = ACTIONS(60),
    [anon_sym_selfdestruct] = ACTIONS(60),
    [anon_sym_sgt] = ACTIONS(60),
    [anon_sym_sha3] = ACTIONS(60),
    [anon_sym_shl] = ACTIONS(60),
    [anon_sym_shr] = ACTIONS(60),
    [anon_sym_signextend] = ACTIONS(60),
    [anon_sym_sload] = ACTIONS(60),
    [anon_sym_slt] = ACTIONS(60),
    [anon_sym_smod] = ACTIONS(60),
    [anon_sym_sstore] = ACTIONS(60),
    [anon_sym_staticcall] = ACTIONS(60),
    [anon_sym_stop] = ACTIONS(60),
    [anon_sym_sub] = ACTIONS(60),
    [anon_sym_timestamp] = ACTIONS(60),
    [anon_sym_tload] = ACTIONS(60),
    [anon_sym_tstore] = ACTIONS(60),
    [anon_sym_xor] = ACTIONS(60),
  },
  [10] = {
    [sym_number] = STATE(21),
    [sym_expression] = STATE(75),
    [sym_invocation] = STATE(21),
    [sym_std_evm_op] = STATE(64),
    [aux_sym_invocation_repeat2] = STATE(13),
    [sym_identifier] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(17),
    [sym_decimal_number] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_add] = ACTIONS(23),
    [anon_sym_addmod] = ACTIONS(23),
    [anon_sym_address] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_balance] = ACTIONS(23),
    [anon_sym_basefee] = ACTIONS(23),
    [anon_sym_blockhash] = ACTIONS(23),
    [anon_sym_byte] = ACTIONS(23),
    [anon_sym_call] = ACTIONS(23),
    [anon_sym_callcode] = ACTIONS(23),
    [anon_sym_calldatacopy] = ACTIONS(23),
    [anon_sym_calldataload] = ACTIONS(23),
    [anon_sym_calldatasize] = ACTIONS(23),
    [anon_sym_caller] = ACTIONS(23),
    [anon_sym_callvalue] = ACTIONS(23),
    [anon_sym_chainid] = ACTIONS(23),
    [anon_sym_codecopy] = ACTIONS(23),
    [anon_sym_codesize] = ACTIONS(23),
    [anon_sym_coinbase] = ACTIONS(23),
    [anon_sym_create] = ACTIONS(23),
    [anon_sym_create2] = ACTIONS(23),
    [anon_sym_delegatecall] = ACTIONS(23),
    [anon_sym_diff] = ACTIONS(23),
    [anon_sym_div] = ACTIONS(23),
    [anon_sym_eq] = ACTIONS(23),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_extcodecopy] = ACTIONS(23),
    [anon_sym_extcodehash] = ACTIONS(23),
    [anon_sym_extcodesize] = ACTIONS(23),
    [anon_sym_gas] = ACTIONS(23),
    [anon_sym_gaslimit] = ACTIONS(23),
    [anon_sym_gasprice] = ACTIONS(23),
    [anon_sym_gt] = ACTIONS(23),
    [anon_sym_invalid] = ACTIONS(23),
    [anon_sym_iszero] = ACTIONS(23),
    [anon_sym_jump] = ACTIONS(23),
    [anon_sym_jumpi] = ACTIONS(23),
    [anon_sym_log0] = ACTIONS(23),
    [anon_sym_log1] = ACTIONS(23),
    [anon_sym_log2] = ACTIONS(23),
    [anon_sym_log3] = ACTIONS(23),
    [anon_sym_log4] = ACTIONS(23),
    [anon_sym_lt] = ACTIONS(23),
    [anon_sym_mload] = ACTIONS(23),
    [anon_sym_mod] = ACTIONS(23),
    [anon_sym_msize] = ACTIONS(23),
    [anon_sym_mstore] = ACTIONS(23),
    [anon_sym_mstore8] = ACTIONS(23),
    [anon_sym_mul] = ACTIONS(23),
    [anon_sym_mulmod] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_number] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_origin] = ACTIONS(23),
    [anon_sym_prevrandao] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_returndatacopy] = ACTIONS(23),
    [anon_sym_returndatasize] = ACTIONS(23),
    [anon_sym_revert] = ACTIONS(23),
    [anon_sym_sar] = ACTIONS(23),
    [anon_sym_sdiv] = ACTIONS(23),
    [anon_sym_selfbalance] = ACTIONS(23),
    [anon_sym_selfdestruct] = ACTIONS(23),
    [anon_sym_sgt] = ACTIONS(23),
    [anon_sym_sha3] = ACTIONS(23),
    [anon_sym_shl] = ACTIONS(23),
    [anon_sym_shr] = ACTIONS(23),
    [anon_sym_signextend] = ACTIONS(23),
    [anon_sym_sload] = ACTIONS(23),
    [anon_sym_slt] = ACTIONS(23),
    [anon_sym_smod] = ACTIONS(23),
    [anon_sym_sstore] = ACTIONS(23),
    [anon_sym_staticcall] = ACTIONS(23),
    [anon_sym_stop] = ACTIONS(23),
    [anon_sym_sub] = ACTIONS(23),
    [anon_sym_timestamp] = ACTIONS(23),
    [anon_sym_tload] = ACTIONS(23),
    [anon_sym_tstore] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
  },
  [11] = {
    [sym_number] = STATE(21),
    [sym_expression] = STATE(83),
    [sym_invocation] = STATE(21),
    [sym_std_evm_op] = STATE(64),
    [aux_sym_invocation_repeat2] = STATE(9),
    [sym_identifier] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(17),
    [sym_decimal_number] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_add] = ACTIONS(23),
    [anon_sym_addmod] = ACTIONS(23),
    [anon_sym_address] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_balance] = ACTIONS(23),
    [anon_sym_basefee] = ACTIONS(23),
    [anon_sym_blockhash] = ACTIONS(23),
    [anon_sym_byte] = ACTIONS(23),
    [anon_sym_call] = ACTIONS(23),
    [anon_sym_callcode] = ACTIONS(23),
    [anon_sym_calldatacopy] = ACTIONS(23),
    [anon_sym_calldataload] = ACTIONS(23),
    [anon_sym_calldatasize] = ACTIONS(23),
    [anon_sym_caller] = ACTIONS(23),
    [anon_sym_callvalue] = ACTIONS(23),
    [anon_sym_chainid] = ACTIONS(23),
    [anon_sym_codecopy] = ACTIONS(23),
    [anon_sym_codesize] = ACTIONS(23),
    [anon_sym_coinbase] = ACTIONS(23),
    [anon_sym_create] = ACTIONS(23),
    [anon_sym_create2] = ACTIONS(23),
    [anon_sym_delegatecall] = ACTIONS(23),
    [anon_sym_diff] = ACTIONS(23),
    [anon_sym_div] = ACTIONS(23),
    [anon_sym_eq] = ACTIONS(23),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_extcodecopy] = ACTIONS(23),
    [anon_sym_extcodehash] = ACTIONS(23),
    [anon_sym_extcodesize] = ACTIONS(23),
    [anon_sym_gas] = ACTIONS(23),
    [anon_sym_gaslimit] = ACTIONS(23),
    [anon_sym_gasprice] = ACTIONS(23),
    [anon_sym_gt] = ACTIONS(23),
    [anon_sym_invalid] = ACTIONS(23),
    [anon_sym_iszero] = ACTIONS(23),
    [anon_sym_jump] = ACTIONS(23),
    [anon_sym_jumpi] = ACTIONS(23),
    [anon_sym_log0] = ACTIONS(23),
    [anon_sym_log1] = ACTIONS(23),
    [anon_sym_log2] = ACTIONS(23),
    [anon_sym_log3] = ACTIONS(23),
    [anon_sym_log4] = ACTIONS(23),
    [anon_sym_lt] = ACTIONS(23),
    [anon_sym_mload] = ACTIONS(23),
    [anon_sym_mod] = ACTIONS(23),
    [anon_sym_msize] = ACTIONS(23),
    [anon_sym_mstore] = ACTIONS(23),
    [anon_sym_mstore8] = ACTIONS(23),
    [anon_sym_mul] = ACTIONS(23),
    [anon_sym_mulmod] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_number] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_origin] = ACTIONS(23),
    [anon_sym_prevrandao] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_returndatacopy] = ACTIONS(23),
    [anon_sym_returndatasize] = ACTIONS(23),
    [anon_sym_revert] = ACTIONS(23),
    [anon_sym_sar] = ACTIONS(23),
    [anon_sym_sdiv] = ACTIONS(23),
    [anon_sym_selfbalance] = ACTIONS(23),
    [anon_sym_selfdestruct] = ACTIONS(23),
    [anon_sym_sgt] = ACTIONS(23),
    [anon_sym_sha3] = ACTIONS(23),
    [anon_sym_shl] = ACTIONS(23),
    [anon_sym_shr] = ACTIONS(23),
    [anon_sym_signextend] = ACTIONS(23),
    [anon_sym_sload] = ACTIONS(23),
    [anon_sym_slt] = ACTIONS(23),
    [anon_sym_smod] = ACTIONS(23),
    [anon_sym_sstore] = ACTIONS(23),
    [anon_sym_staticcall] = ACTIONS(23),
    [anon_sym_stop] = ACTIONS(23),
    [anon_sym_sub] = ACTIONS(23),
    [anon_sym_timestamp] = ACTIONS(23),
    [anon_sym_tload] = ACTIONS(23),
    [anon_sym_tstore] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
  },
  [12] = {
    [sym_number] = STATE(21),
    [sym_expression] = STATE(66),
    [sym_invocation] = STATE(21),
    [sym_std_evm_op] = STATE(64),
    [aux_sym_invocation_repeat2] = STATE(9),
    [sym_identifier] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(17),
    [sym_decimal_number] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_add] = ACTIONS(23),
    [anon_sym_addmod] = ACTIONS(23),
    [anon_sym_address] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_balance] = ACTIONS(23),
    [anon_sym_basefee] = ACTIONS(23),
    [anon_sym_blockhash] = ACTIONS(23),
    [anon_sym_byte] = ACTIONS(23),
    [anon_sym_call] = ACTIONS(23),
    [anon_sym_callcode] = ACTIONS(23),
    [anon_sym_calldatacopy] = ACTIONS(23),
    [anon_sym_calldataload] = ACTIONS(23),
    [anon_sym_calldatasize] = ACTIONS(23),
    [anon_sym_caller] = ACTIONS(23),
    [anon_sym_callvalue] = ACTIONS(23),
    [anon_sym_chainid] = ACTIONS(23),
    [anon_sym_codecopy] = ACTIONS(23),
    [anon_sym_codesize] = ACTIONS(23),
    [anon_sym_coinbase] = ACTIONS(23),
    [anon_sym_create] = ACTIONS(23),
    [anon_sym_create2] = ACTIONS(23),
    [anon_sym_delegatecall] = ACTIONS(23),
    [anon_sym_diff] = ACTIONS(23),
    [anon_sym_div] = ACTIONS(23),
    [anon_sym_eq] = ACTIONS(23),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_extcodecopy] = ACTIONS(23),
    [anon_sym_extcodehash] = ACTIONS(23),
    [anon_sym_extcodesize] = ACTIONS(23),
    [anon_sym_gas] = ACTIONS(23),
    [anon_sym_gaslimit] = ACTIONS(23),
    [anon_sym_gasprice] = ACTIONS(23),
    [anon_sym_gt] = ACTIONS(23),
    [anon_sym_invalid] = ACTIONS(23),
    [anon_sym_iszero] = ACTIONS(23),
    [anon_sym_jump] = ACTIONS(23),
    [anon_sym_jumpi] = ACTIONS(23),
    [anon_sym_log0] = ACTIONS(23),
    [anon_sym_log1] = ACTIONS(23),
    [anon_sym_log2] = ACTIONS(23),
    [anon_sym_log3] = ACTIONS(23),
    [anon_sym_log4] = ACTIONS(23),
    [anon_sym_lt] = ACTIONS(23),
    [anon_sym_mload] = ACTIONS(23),
    [anon_sym_mod] = ACTIONS(23),
    [anon_sym_msize] = ACTIONS(23),
    [anon_sym_mstore] = ACTIONS(23),
    [anon_sym_mstore8] = ACTIONS(23),
    [anon_sym_mul] = ACTIONS(23),
    [anon_sym_mulmod] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_number] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_origin] = ACTIONS(23),
    [anon_sym_prevrandao] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_returndatacopy] = ACTIONS(23),
    [anon_sym_returndatasize] = ACTIONS(23),
    [anon_sym_revert] = ACTIONS(23),
    [anon_sym_sar] = ACTIONS(23),
    [anon_sym_sdiv] = ACTIONS(23),
    [anon_sym_selfbalance] = ACTIONS(23),
    [anon_sym_selfdestruct] = ACTIONS(23),
    [anon_sym_sgt] = ACTIONS(23),
    [anon_sym_sha3] = ACTIONS(23),
    [anon_sym_shl] = ACTIONS(23),
    [anon_sym_shr] = ACTIONS(23),
    [anon_sym_signextend] = ACTIONS(23),
    [anon_sym_sload] = ACTIONS(23),
    [anon_sym_slt] = ACTIONS(23),
    [anon_sym_smod] = ACTIONS(23),
    [anon_sym_sstore] = ACTIONS(23),
    [anon_sym_staticcall] = ACTIONS(23),
    [anon_sym_stop] = ACTIONS(23),
    [anon_sym_sub] = ACTIONS(23),
    [anon_sym_timestamp] = ACTIONS(23),
    [anon_sym_tload] = ACTIONS(23),
    [anon_sym_tstore] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
  },
  [13] = {
    [sym_number] = STATE(21),
    [sym_expression] = STATE(72),
    [sym_invocation] = STATE(21),
    [sym_std_evm_op] = STATE(64),
    [aux_sym_invocation_repeat2] = STATE(9),
    [sym_identifier] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(17),
    [sym_decimal_number] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_add] = ACTIONS(23),
    [anon_sym_addmod] = ACTIONS(23),
    [anon_sym_address] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_balance] = ACTIONS(23),
    [anon_sym_basefee] = ACTIONS(23),
    [anon_sym_blockhash] = ACTIONS(23),
    [anon_sym_byte] = ACTIONS(23),
    [anon_sym_call] = ACTIONS(23),
    [anon_sym_callcode] = ACTIONS(23),
    [anon_sym_calldatacopy] = ACTIONS(23),
    [anon_sym_calldataload] = ACTIONS(23),
    [anon_sym_calldatasize] = ACTIONS(23),
    [anon_sym_caller] = ACTIONS(23),
    [anon_sym_callvalue] = ACTIONS(23),
    [anon_sym_chainid] = ACTIONS(23),
    [anon_sym_codecopy] = ACTIONS(23),
    [anon_sym_codesize] = ACTIONS(23),
    [anon_sym_coinbase] = ACTIONS(23),
    [anon_sym_create] = ACTIONS(23),
    [anon_sym_create2] = ACTIONS(23),
    [anon_sym_delegatecall] = ACTIONS(23),
    [anon_sym_diff] = ACTIONS(23),
    [anon_sym_div] = ACTIONS(23),
    [anon_sym_eq] = ACTIONS(23),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_extcodecopy] = ACTIONS(23),
    [anon_sym_extcodehash] = ACTIONS(23),
    [anon_sym_extcodesize] = ACTIONS(23),
    [anon_sym_gas] = ACTIONS(23),
    [anon_sym_gaslimit] = ACTIONS(23),
    [anon_sym_gasprice] = ACTIONS(23),
    [anon_sym_gt] = ACTIONS(23),
    [anon_sym_invalid] = ACTIONS(23),
    [anon_sym_iszero] = ACTIONS(23),
    [anon_sym_jump] = ACTIONS(23),
    [anon_sym_jumpi] = ACTIONS(23),
    [anon_sym_log0] = ACTIONS(23),
    [anon_sym_log1] = ACTIONS(23),
    [anon_sym_log2] = ACTIONS(23),
    [anon_sym_log3] = ACTIONS(23),
    [anon_sym_log4] = ACTIONS(23),
    [anon_sym_lt] = ACTIONS(23),
    [anon_sym_mload] = ACTIONS(23),
    [anon_sym_mod] = ACTIONS(23),
    [anon_sym_msize] = ACTIONS(23),
    [anon_sym_mstore] = ACTIONS(23),
    [anon_sym_mstore8] = ACTIONS(23),
    [anon_sym_mul] = ACTIONS(23),
    [anon_sym_mulmod] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_number] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_origin] = ACTIONS(23),
    [anon_sym_prevrandao] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_returndatacopy] = ACTIONS(23),
    [anon_sym_returndatasize] = ACTIONS(23),
    [anon_sym_revert] = ACTIONS(23),
    [anon_sym_sar] = ACTIONS(23),
    [anon_sym_sdiv] = ACTIONS(23),
    [anon_sym_selfbalance] = ACTIONS(23),
    [anon_sym_selfdestruct] = ACTIONS(23),
    [anon_sym_sgt] = ACTIONS(23),
    [anon_sym_sha3] = ACTIONS(23),
    [anon_sym_shl] = ACTIONS(23),
    [anon_sym_shr] = ACTIONS(23),
    [anon_sym_signextend] = ACTIONS(23),
    [anon_sym_sload] = ACTIONS(23),
    [anon_sym_slt] = ACTIONS(23),
    [anon_sym_smod] = ACTIONS(23),
    [anon_sym_sstore] = ACTIONS(23),
    [anon_sym_staticcall] = ACTIONS(23),
    [anon_sym_stop] = ACTIONS(23),
    [anon_sym_sub] = ACTIONS(23),
    [anon_sym_timestamp] = ACTIONS(23),
    [anon_sym_tload] = ACTIONS(23),
    [anon_sym_tstore] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
  },
  [14] = {
    [sym_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(71),
    [sym_decimal_number] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_add] = ACTIONS(69),
    [anon_sym_addmod] = ACTIONS(69),
    [anon_sym_address] = ACTIONS(69),
    [anon_sym_and] = ACTIONS(69),
    [anon_sym_balance] = ACTIONS(69),
    [anon_sym_basefee] = ACTIONS(69),
    [anon_sym_blockhash] = ACTIONS(69),
    [anon_sym_byte] = ACTIONS(69),
    [anon_sym_call] = ACTIONS(69),
    [anon_sym_callcode] = ACTIONS(69),
    [anon_sym_calldatacopy] = ACTIONS(69),
    [anon_sym_calldataload] = ACTIONS(69),
    [anon_sym_calldatasize] = ACTIONS(69),
    [anon_sym_caller] = ACTIONS(69),
    [anon_sym_callvalue] = ACTIONS(69),
    [anon_sym_chainid] = ACTIONS(69),
    [anon_sym_codecopy] = ACTIONS(69),
    [anon_sym_codesize] = ACTIONS(69),
    [anon_sym_coinbase] = ACTIONS(69),
    [anon_sym_create] = ACTIONS(69),
    [anon_sym_create2] = ACTIONS(69),
    [anon_sym_delegatecall] = ACTIONS(69),
    [anon_sym_diff] = ACTIONS(69),
    [anon_sym_div] = ACTIONS(69),
    [anon_sym_eq] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_extcodecopy] = ACTIONS(69),
    [anon_sym_extcodehash] = ACTIONS(69),
    [anon_sym_extcodesize] = ACTIONS(69),
    [anon_sym_gas] = ACTIONS(69),
    [anon_sym_gaslimit] = ACTIONS(69),
    [anon_sym_gasprice] = ACTIONS(69),
    [anon_sym_gt] = ACTIONS(69),
    [anon_sym_invalid] = ACTIONS(69),
    [anon_sym_iszero] = ACTIONS(69),
    [anon_sym_jump] = ACTIONS(69),
    [anon_sym_jumpi] = ACTIONS(69),
    [anon_sym_log0] = ACTIONS(69),
    [anon_sym_log1] = ACTIONS(69),
    [anon_sym_log2] = ACTIONS(69),
    [anon_sym_log3] = ACTIONS(69),
    [anon_sym_log4] = ACTIONS(69),
    [anon_sym_lt] = ACTIONS(69),
    [anon_sym_mload] = ACTIONS(69),
    [anon_sym_mod] = ACTIONS(69),
    [anon_sym_msize] = ACTIONS(69),
    [anon_sym_mstore] = ACTIONS(69),
    [anon_sym_mstore8] = ACTIONS(69),
    [anon_sym_mul] = ACTIONS(69),
    [anon_sym_mulmod] = ACTIONS(69),
    [anon_sym_not] = ACTIONS(69),
    [anon_sym_number] = ACTIONS(69),
    [anon_sym_or] = ACTIONS(69),
    [anon_sym_origin] = ACTIONS(69),
    [anon_sym_prevrandao] = ACTIONS(69),
    [anon_sym_return] = ACTIONS(69),
    [anon_sym_returndatacopy] = ACTIONS(69),
    [anon_sym_returndatasize] = ACTIONS(69),
    [anon_sym_revert] = ACTIONS(69),
    [anon_sym_sar] = ACTIONS(69),
    [anon_sym_sdiv] = ACTIONS(69),
    [anon_sym_selfbalance] = ACTIONS(69),
    [anon_sym_selfdestruct] = ACTIONS(69),
    [anon_sym_sgt] = ACTIONS(69),
    [anon_sym_sha3] = ACTIONS(69),
    [anon_sym_shl] = ACTIONS(69),
    [anon_sym_shr] = ACTIONS(69),
    [anon_sym_signextend] = ACTIONS(69),
    [anon_sym_sload] = ACTIONS(69),
    [anon_sym_slt] = ACTIONS(69),
    [anon_sym_smod] = ACTIONS(69),
    [anon_sym_sstore] = ACTIONS(69),
    [anon_sym_staticcall] = ACTIONS(69),
    [anon_sym_stop] = ACTIONS(69),
    [anon_sym_sub] = ACTIONS(69),
    [anon_sym_timestamp] = ACTIONS(69),
    [anon_sym_tload] = ACTIONS(69),
    [anon_sym_tstore] = ACTIONS(69),
    [anon_sym_xor] = ACTIONS(69),
  },
  [15] = {
    [sym_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(71),
    [sym_decimal_number] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_EQ] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_add] = ACTIONS(69),
    [anon_sym_addmod] = ACTIONS(69),
    [anon_sym_address] = ACTIONS(69),
    [anon_sym_and] = ACTIONS(69),
    [anon_sym_balance] = ACTIONS(69),
    [anon_sym_basefee] = ACTIONS(69),
    [anon_sym_blockhash] = ACTIONS(69),
    [anon_sym_byte] = ACTIONS(69),
    [anon_sym_call] = ACTIONS(69),
    [anon_sym_callcode] = ACTIONS(69),
    [anon_sym_calldatacopy] = ACTIONS(69),
    [anon_sym_calldataload] = ACTIONS(69),
    [anon_sym_calldatasize] = ACTIONS(69),
    [anon_sym_caller] = ACTIONS(69),
    [anon_sym_callvalue] = ACTIONS(69),
    [anon_sym_chainid] = ACTIONS(69),
    [anon_sym_codecopy] = ACTIONS(69),
    [anon_sym_codesize] = ACTIONS(69),
    [anon_sym_coinbase] = ACTIONS(69),
    [anon_sym_create] = ACTIONS(69),
    [anon_sym_create2] = ACTIONS(69),
    [anon_sym_delegatecall] = ACTIONS(69),
    [anon_sym_diff] = ACTIONS(69),
    [anon_sym_div] = ACTIONS(69),
    [anon_sym_eq] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_extcodecopy] = ACTIONS(69),
    [anon_sym_extcodehash] = ACTIONS(69),
    [anon_sym_extcodesize] = ACTIONS(69),
    [anon_sym_gas] = ACTIONS(69),
    [anon_sym_gaslimit] = ACTIONS(69),
    [anon_sym_gasprice] = ACTIONS(69),
    [anon_sym_gt] = ACTIONS(69),
    [anon_sym_invalid] = ACTIONS(69),
    [anon_sym_iszero] = ACTIONS(69),
    [anon_sym_jump] = ACTIONS(69),
    [anon_sym_jumpi] = ACTIONS(69),
    [anon_sym_log0] = ACTIONS(69),
    [anon_sym_log1] = ACTIONS(69),
    [anon_sym_log2] = ACTIONS(69),
    [anon_sym_log3] = ACTIONS(69),
    [anon_sym_log4] = ACTIONS(69),
    [anon_sym_lt] = ACTIONS(69),
    [anon_sym_mload] = ACTIONS(69),
    [anon_sym_mod] = ACTIONS(69),
    [anon_sym_msize] = ACTIONS(69),
    [anon_sym_mstore] = ACTIONS(69),
    [anon_sym_mstore8] = ACTIONS(69),
    [anon_sym_mul] = ACTIONS(69),
    [anon_sym_mulmod] = ACTIONS(69),
    [anon_sym_not] = ACTIONS(69),
    [anon_sym_number] = ACTIONS(69),
    [anon_sym_or] = ACTIONS(69),
    [anon_sym_origin] = ACTIONS(69),
    [anon_sym_prevrandao] = ACTIONS(69),
    [anon_sym_return] = ACTIONS(69),
    [anon_sym_returndatacopy] = ACTIONS(69),
    [anon_sym_returndatasize] = ACTIONS(69),
    [anon_sym_revert] = ACTIONS(69),
    [anon_sym_sar] = ACTIONS(69),
    [anon_sym_sdiv] = ACTIONS(69),
    [anon_sym_selfbalance] = ACTIONS(69),
    [anon_sym_selfdestruct] = ACTIONS(69),
    [anon_sym_sgt] = ACTIONS(69),
    [anon_sym_sha3] = ACTIONS(69),
    [anon_sym_shl] = ACTIONS(69),
    [anon_sym_shr] = ACTIONS(69),
    [anon_sym_signextend] = ACTIONS(69),
    [anon_sym_sload] = ACTIONS(69),
    [anon_sym_slt] = ACTIONS(69),
    [anon_sym_smod] = ACTIONS(69),
    [anon_sym_sstore] = ACTIONS(69),
    [anon_sym_staticcall] = ACTIONS(69),
    [anon_sym_stop] = ACTIONS(69),
    [anon_sym_sub] = ACTIONS(69),
    [anon_sym_timestamp] = ACTIONS(69),
    [anon_sym_tload] = ACTIONS(69),
    [anon_sym_tstore] = ACTIONS(69),
    [anon_sym_xor] = ACTIONS(69),
  },
  [16] = {
    [sym_number] = STATE(21),
    [sym_expression] = STATE(28),
    [sym_invocation] = STATE(21),
    [sym_std_evm_op] = STATE(64),
    [sym_identifier] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(17),
    [sym_decimal_number] = ACTIONS(19),
    [anon_sym_add] = ACTIONS(23),
    [anon_sym_addmod] = ACTIONS(23),
    [anon_sym_address] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_balance] = ACTIONS(23),
    [anon_sym_basefee] = ACTIONS(23),
    [anon_sym_blockhash] = ACTIONS(23),
    [anon_sym_byte] = ACTIONS(23),
    [anon_sym_call] = ACTIONS(23),
    [anon_sym_callcode] = ACTIONS(23),
    [anon_sym_calldatacopy] = ACTIONS(23),
    [anon_sym_calldataload] = ACTIONS(23),
    [anon_sym_calldatasize] = ACTIONS(23),
    [anon_sym_caller] = ACTIONS(23),
    [anon_sym_callvalue] = ACTIONS(23),
    [anon_sym_chainid] = ACTIONS(23),
    [anon_sym_codecopy] = ACTIONS(23),
    [anon_sym_codesize] = ACTIONS(23),
    [anon_sym_coinbase] = ACTIONS(23),
    [anon_sym_create] = ACTIONS(23),
    [anon_sym_create2] = ACTIONS(23),
    [anon_sym_delegatecall] = ACTIONS(23),
    [anon_sym_diff] = ACTIONS(23),
    [anon_sym_div] = ACTIONS(23),
    [anon_sym_eq] = ACTIONS(23),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_extcodecopy] = ACTIONS(23),
    [anon_sym_extcodehash] = ACTIONS(23),
    [anon_sym_extcodesize] = ACTIONS(23),
    [anon_sym_gas] = ACTIONS(23),
    [anon_sym_gaslimit] = ACTIONS(23),
    [anon_sym_gasprice] = ACTIONS(23),
    [anon_sym_gt] = ACTIONS(23),
    [anon_sym_invalid] = ACTIONS(23),
    [anon_sym_iszero] = ACTIONS(23),
    [anon_sym_jump] = ACTIONS(23),
    [anon_sym_jumpi] = ACTIONS(23),
    [anon_sym_log0] = ACTIONS(23),
    [anon_sym_log1] = ACTIONS(23),
    [anon_sym_log2] = ACTIONS(23),
    [anon_sym_log3] = ACTIONS(23),
    [anon_sym_log4] = ACTIONS(23),
    [anon_sym_lt] = ACTIONS(23),
    [anon_sym_mload] = ACTIONS(23),
    [anon_sym_mod] = ACTIONS(23),
    [anon_sym_msize] = ACTIONS(23),
    [anon_sym_mstore] = ACTIONS(23),
    [anon_sym_mstore8] = ACTIONS(23),
    [anon_sym_mul] = ACTIONS(23),
    [anon_sym_mulmod] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_number] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_origin] = ACTIONS(23),
    [anon_sym_prevrandao] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_returndatacopy] = ACTIONS(23),
    [anon_sym_returndatasize] = ACTIONS(23),
    [anon_sym_revert] = ACTIONS(23),
    [anon_sym_sar] = ACTIONS(23),
    [anon_sym_sdiv] = ACTIONS(23),
    [anon_sym_selfbalance] = ACTIONS(23),
    [anon_sym_selfdestruct] = ACTIONS(23),
    [anon_sym_sgt] = ACTIONS(23),
    [anon_sym_sha3] = ACTIONS(23),
    [anon_sym_shl] = ACTIONS(23),
    [anon_sym_shr] = ACTIONS(23),
    [anon_sym_signextend] = ACTIONS(23),
    [anon_sym_sload] = ACTIONS(23),
    [anon_sym_slt] = ACTIONS(23),
    [anon_sym_smod] = ACTIONS(23),
    [anon_sym_sstore] = ACTIONS(23),
    [anon_sym_staticcall] = ACTIONS(23),
    [anon_sym_stop] = ACTIONS(23),
    [anon_sym_sub] = ACTIONS(23),
    [anon_sym_timestamp] = ACTIONS(23),
    [anon_sym_tload] = ACTIONS(23),
    [anon_sym_tstore] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
  },
  [17] = {
    [sym_identifier] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(81),
    [sym_decimal_number] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_add] = ACTIONS(79),
    [anon_sym_addmod] = ACTIONS(79),
    [anon_sym_address] = ACTIONS(79),
    [anon_sym_and] = ACTIONS(79),
    [anon_sym_balance] = ACTIONS(79),
    [anon_sym_basefee] = ACTIONS(79),
    [anon_sym_blockhash] = ACTIONS(79),
    [anon_sym_byte] = ACTIONS(79),
    [anon_sym_call] = ACTIONS(79),
    [anon_sym_callcode] = ACTIONS(79),
    [anon_sym_calldatacopy] = ACTIONS(79),
    [anon_sym_calldataload] = ACTIONS(79),
    [anon_sym_calldatasize] = ACTIONS(79),
    [anon_sym_caller] = ACTIONS(79),
    [anon_sym_callvalue] = ACTIONS(79),
    [anon_sym_chainid] = ACTIONS(79),
    [anon_sym_codecopy] = ACTIONS(79),
    [anon_sym_codesize] = ACTIONS(79),
    [anon_sym_coinbase] = ACTIONS(79),
    [anon_sym_create] = ACTIONS(79),
    [anon_sym_create2] = ACTIONS(79),
    [anon_sym_delegatecall] = ACTIONS(79),
    [anon_sym_diff] = ACTIONS(79),
    [anon_sym_div] = ACTIONS(79),
    [anon_sym_eq] = ACTIONS(79),
    [anon_sym_exp] = ACTIONS(79),
    [anon_sym_extcodecopy] = ACTIONS(79),
    [anon_sym_extcodehash] = ACTIONS(79),
    [anon_sym_extcodesize] = ACTIONS(79),
    [anon_sym_gas] = ACTIONS(79),
    [anon_sym_gaslimit] = ACTIONS(79),
    [anon_sym_gasprice] = ACTIONS(79),
    [anon_sym_gt] = ACTIONS(79),
    [anon_sym_invalid] = ACTIONS(79),
    [anon_sym_iszero] = ACTIONS(79),
    [anon_sym_jump] = ACTIONS(79),
    [anon_sym_jumpi] = ACTIONS(79),
    [anon_sym_log0] = ACTIONS(79),
    [anon_sym_log1] = ACTIONS(79),
    [anon_sym_log2] = ACTIONS(79),
    [anon_sym_log3] = ACTIONS(79),
    [anon_sym_log4] = ACTIONS(79),
    [anon_sym_lt] = ACTIONS(79),
    [anon_sym_mload] = ACTIONS(79),
    [anon_sym_mod] = ACTIONS(79),
    [anon_sym_msize] = ACTIONS(79),
    [anon_sym_mstore] = ACTIONS(79),
    [anon_sym_mstore8] = ACTIONS(79),
    [anon_sym_mul] = ACTIONS(79),
    [anon_sym_mulmod] = ACTIONS(79),
    [anon_sym_not] = ACTIONS(79),
    [anon_sym_number] = ACTIONS(79),
    [anon_sym_or] = ACTIONS(79),
    [anon_sym_origin] = ACTIONS(79),
    [anon_sym_prevrandao] = ACTIONS(79),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_returndatacopy] = ACTIONS(79),
    [anon_sym_returndatasize] = ACTIONS(79),
    [anon_sym_revert] = ACTIONS(79),
    [anon_sym_sar] = ACTIONS(79),
    [anon_sym_sdiv] = ACTIONS(79),
    [anon_sym_selfbalance] = ACTIONS(79),
    [anon_sym_selfdestruct] = ACTIONS(79),
    [anon_sym_sgt] = ACTIONS(79),
    [anon_sym_sha3] = ACTIONS(79),
    [anon_sym_shl] = ACTIONS(79),
    [anon_sym_shr] = ACTIONS(79),
    [anon_sym_signextend] = ACTIONS(79),
    [anon_sym_sload] = ACTIONS(79),
    [anon_sym_slt] = ACTIONS(79),
    [anon_sym_smod] = ACTIONS(79),
    [anon_sym_sstore] = ACTIONS(79),
    [anon_sym_staticcall] = ACTIONS(79),
    [anon_sym_stop] = ACTIONS(79),
    [anon_sym_sub] = ACTIONS(79),
    [anon_sym_timestamp] = ACTIONS(79),
    [anon_sym_tload] = ACTIONS(79),
    [anon_sym_tstore] = ACTIONS(79),
    [anon_sym_xor] = ACTIONS(79),
  },
  [18] = {
    [sym_identifier] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(85),
    [sym_decimal_number] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_add] = ACTIONS(83),
    [anon_sym_addmod] = ACTIONS(83),
    [anon_sym_address] = ACTIONS(83),
    [anon_sym_and] = ACTIONS(83),
    [anon_sym_balance] = ACTIONS(83),
    [anon_sym_basefee] = ACTIONS(83),
    [anon_sym_blockhash] = ACTIONS(83),
    [anon_sym_byte] = ACTIONS(83),
    [anon_sym_call] = ACTIONS(83),
    [anon_sym_callcode] = ACTIONS(83),
    [anon_sym_calldatacopy] = ACTIONS(83),
    [anon_sym_calldataload] = ACTIONS(83),
    [anon_sym_calldatasize] = ACTIONS(83),
    [anon_sym_caller] = ACTIONS(83),
    [anon_sym_callvalue] = ACTIONS(83),
    [anon_sym_chainid] = ACTIONS(83),
    [anon_sym_codecopy] = ACTIONS(83),
    [anon_sym_codesize] = ACTIONS(83),
    [anon_sym_coinbase] = ACTIONS(83),
    [anon_sym_create] = ACTIONS(83),
    [anon_sym_create2] = ACTIONS(83),
    [anon_sym_delegatecall] = ACTIONS(83),
    [anon_sym_diff] = ACTIONS(83),
    [anon_sym_div] = ACTIONS(83),
    [anon_sym_eq] = ACTIONS(83),
    [anon_sym_exp] = ACTIONS(83),
    [anon_sym_extcodecopy] = ACTIONS(83),
    [anon_sym_extcodehash] = ACTIONS(83),
    [anon_sym_extcodesize] = ACTIONS(83),
    [anon_sym_gas] = ACTIONS(83),
    [anon_sym_gaslimit] = ACTIONS(83),
    [anon_sym_gasprice] = ACTIONS(83),
    [anon_sym_gt] = ACTIONS(83),
    [anon_sym_invalid] = ACTIONS(83),
    [anon_sym_iszero] = ACTIONS(83),
    [anon_sym_jump] = ACTIONS(83),
    [anon_sym_jumpi] = ACTIONS(83),
    [anon_sym_log0] = ACTIONS(83),
    [anon_sym_log1] = ACTIONS(83),
    [anon_sym_log2] = ACTIONS(83),
    [anon_sym_log3] = ACTIONS(83),
    [anon_sym_log4] = ACTIONS(83),
    [anon_sym_lt] = ACTIONS(83),
    [anon_sym_mload] = ACTIONS(83),
    [anon_sym_mod] = ACTIONS(83),
    [anon_sym_msize] = ACTIONS(83),
    [anon_sym_mstore] = ACTIONS(83),
    [anon_sym_mstore8] = ACTIONS(83),
    [anon_sym_mul] = ACTIONS(83),
    [anon_sym_mulmod] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_number] = ACTIONS(83),
    [anon_sym_or] = ACTIONS(83),
    [anon_sym_origin] = ACTIONS(83),
    [anon_sym_prevrandao] = ACTIONS(83),
    [anon_sym_return] = ACTIONS(83),
    [anon_sym_returndatacopy] = ACTIONS(83),
    [anon_sym_returndatasize] = ACTIONS(83),
    [anon_sym_revert] = ACTIONS(83),
    [anon_sym_sar] = ACTIONS(83),
    [anon_sym_sdiv] = ACTIONS(83),
    [anon_sym_selfbalance] = ACTIONS(83),
    [anon_sym_selfdestruct] = ACTIONS(83),
    [anon_sym_sgt] = ACTIONS(83),
    [anon_sym_sha3] = ACTIONS(83),
    [anon_sym_shl] = ACTIONS(83),
    [anon_sym_shr] = ACTIONS(83),
    [anon_sym_signextend] = ACTIONS(83),
    [anon_sym_sload] = ACTIONS(83),
    [anon_sym_slt] = ACTIONS(83),
    [anon_sym_smod] = ACTIONS(83),
    [anon_sym_sstore] = ACTIONS(83),
    [anon_sym_staticcall] = ACTIONS(83),
    [anon_sym_stop] = ACTIONS(83),
    [anon_sym_sub] = ACTIONS(83),
    [anon_sym_timestamp] = ACTIONS(83),
    [anon_sym_tload] = ACTIONS(83),
    [anon_sym_tstore] = ACTIONS(83),
    [anon_sym_xor] = ACTIONS(83),
  },
  [19] = {
    [sym_identifier] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(89),
    [sym_decimal_number] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_add] = ACTIONS(87),
    [anon_sym_addmod] = ACTIONS(87),
    [anon_sym_address] = ACTIONS(87),
    [anon_sym_and] = ACTIONS(87),
    [anon_sym_balance] = ACTIONS(87),
    [anon_sym_basefee] = ACTIONS(87),
    [anon_sym_blockhash] = ACTIONS(87),
    [anon_sym_byte] = ACTIONS(87),
    [anon_sym_call] = ACTIONS(87),
    [anon_sym_callcode] = ACTIONS(87),
    [anon_sym_calldatacopy] = ACTIONS(87),
    [anon_sym_calldataload] = ACTIONS(87),
    [anon_sym_calldatasize] = ACTIONS(87),
    [anon_sym_caller] = ACTIONS(87),
    [anon_sym_callvalue] = ACTIONS(87),
    [anon_sym_chainid] = ACTIONS(87),
    [anon_sym_codecopy] = ACTIONS(87),
    [anon_sym_codesize] = ACTIONS(87),
    [anon_sym_coinbase] = ACTIONS(87),
    [anon_sym_create] = ACTIONS(87),
    [anon_sym_create2] = ACTIONS(87),
    [anon_sym_delegatecall] = ACTIONS(87),
    [anon_sym_diff] = ACTIONS(87),
    [anon_sym_div] = ACTIONS(87),
    [anon_sym_eq] = ACTIONS(87),
    [anon_sym_exp] = ACTIONS(87),
    [anon_sym_extcodecopy] = ACTIONS(87),
    [anon_sym_extcodehash] = ACTIONS(87),
    [anon_sym_extcodesize] = ACTIONS(87),
    [anon_sym_gas] = ACTIONS(87),
    [anon_sym_gaslimit] = ACTIONS(87),
    [anon_sym_gasprice] = ACTIONS(87),
    [anon_sym_gt] = ACTIONS(87),
    [anon_sym_invalid] = ACTIONS(87),
    [anon_sym_iszero] = ACTIONS(87),
    [anon_sym_jump] = ACTIONS(87),
    [anon_sym_jumpi] = ACTIONS(87),
    [anon_sym_log0] = ACTIONS(87),
    [anon_sym_log1] = ACTIONS(87),
    [anon_sym_log2] = ACTIONS(87),
    [anon_sym_log3] = ACTIONS(87),
    [anon_sym_log4] = ACTIONS(87),
    [anon_sym_lt] = ACTIONS(87),
    [anon_sym_mload] = ACTIONS(87),
    [anon_sym_mod] = ACTIONS(87),
    [anon_sym_msize] = ACTIONS(87),
    [anon_sym_mstore] = ACTIONS(87),
    [anon_sym_mstore8] = ACTIONS(87),
    [anon_sym_mul] = ACTIONS(87),
    [anon_sym_mulmod] = ACTIONS(87),
    [anon_sym_not] = ACTIONS(87),
    [anon_sym_number] = ACTIONS(87),
    [anon_sym_or] = ACTIONS(87),
    [anon_sym_origin] = ACTIONS(87),
    [anon_sym_prevrandao] = ACTIONS(87),
    [anon_sym_return] = ACTIONS(87),
    [anon_sym_returndatacopy] = ACTIONS(87),
    [anon_sym_returndatasize] = ACTIONS(87),
    [anon_sym_revert] = ACTIONS(87),
    [anon_sym_sar] = ACTIONS(87),
    [anon_sym_sdiv] = ACTIONS(87),
    [anon_sym_selfbalance] = ACTIONS(87),
    [anon_sym_selfdestruct] = ACTIONS(87),
    [anon_sym_sgt] = ACTIONS(87),
    [anon_sym_sha3] = ACTIONS(87),
    [anon_sym_shl] = ACTIONS(87),
    [anon_sym_shr] = ACTIONS(87),
    [anon_sym_signextend] = ACTIONS(87),
    [anon_sym_sload] = ACTIONS(87),
    [anon_sym_slt] = ACTIONS(87),
    [anon_sym_smod] = ACTIONS(87),
    [anon_sym_sstore] = ACTIONS(87),
    [anon_sym_staticcall] = ACTIONS(87),
    [anon_sym_stop] = ACTIONS(87),
    [anon_sym_sub] = ACTIONS(87),
    [anon_sym_timestamp] = ACTIONS(87),
    [anon_sym_tload] = ACTIONS(87),
    [anon_sym_tstore] = ACTIONS(87),
    [anon_sym_xor] = ACTIONS(87),
  },
  [20] = {
    [sym_identifier] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(93),
    [sym_decimal_number] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_add] = ACTIONS(91),
    [anon_sym_addmod] = ACTIONS(91),
    [anon_sym_address] = ACTIONS(91),
    [anon_sym_and] = ACTIONS(91),
    [anon_sym_balance] = ACTIONS(91),
    [anon_sym_basefee] = ACTIONS(91),
    [anon_sym_blockhash] = ACTIONS(91),
    [anon_sym_byte] = ACTIONS(91),
    [anon_sym_call] = ACTIONS(91),
    [anon_sym_callcode] = ACTIONS(91),
    [anon_sym_calldatacopy] = ACTIONS(91),
    [anon_sym_calldataload] = ACTIONS(91),
    [anon_sym_calldatasize] = ACTIONS(91),
    [anon_sym_caller] = ACTIONS(91),
    [anon_sym_callvalue] = ACTIONS(91),
    [anon_sym_chainid] = ACTIONS(91),
    [anon_sym_codecopy] = ACTIONS(91),
    [anon_sym_codesize] = ACTIONS(91),
    [anon_sym_coinbase] = ACTIONS(91),
    [anon_sym_create] = ACTIONS(91),
    [anon_sym_create2] = ACTIONS(91),
    [anon_sym_delegatecall] = ACTIONS(91),
    [anon_sym_diff] = ACTIONS(91),
    [anon_sym_div] = ACTIONS(91),
    [anon_sym_eq] = ACTIONS(91),
    [anon_sym_exp] = ACTIONS(91),
    [anon_sym_extcodecopy] = ACTIONS(91),
    [anon_sym_extcodehash] = ACTIONS(91),
    [anon_sym_extcodesize] = ACTIONS(91),
    [anon_sym_gas] = ACTIONS(91),
    [anon_sym_gaslimit] = ACTIONS(91),
    [anon_sym_gasprice] = ACTIONS(91),
    [anon_sym_gt] = ACTIONS(91),
    [anon_sym_invalid] = ACTIONS(91),
    [anon_sym_iszero] = ACTIONS(91),
    [anon_sym_jump] = ACTIONS(91),
    [anon_sym_jumpi] = ACTIONS(91),
    [anon_sym_log0] = ACTIONS(91),
    [anon_sym_log1] = ACTIONS(91),
    [anon_sym_log2] = ACTIONS(91),
    [anon_sym_log3] = ACTIONS(91),
    [anon_sym_log4] = ACTIONS(91),
    [anon_sym_lt] = ACTIONS(91),
    [anon_sym_mload] = ACTIONS(91),
    [anon_sym_mod] = ACTIONS(91),
    [anon_sym_msize] = ACTIONS(91),
    [anon_sym_mstore] = ACTIONS(91),
    [anon_sym_mstore8] = ACTIONS(91),
    [anon_sym_mul] = ACTIONS(91),
    [anon_sym_mulmod] = ACTIONS(91),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_number] = ACTIONS(91),
    [anon_sym_or] = ACTIONS(91),
    [anon_sym_origin] = ACTIONS(91),
    [anon_sym_prevrandao] = ACTIONS(91),
    [anon_sym_return] = ACTIONS(91),
    [anon_sym_returndatacopy] = ACTIONS(91),
    [anon_sym_returndatasize] = ACTIONS(91),
    [anon_sym_revert] = ACTIONS(91),
    [anon_sym_sar] = ACTIONS(91),
    [anon_sym_sdiv] = ACTIONS(91),
    [anon_sym_selfbalance] = ACTIONS(91),
    [anon_sym_selfdestruct] = ACTIONS(91),
    [anon_sym_sgt] = ACTIONS(91),
    [anon_sym_sha3] = ACTIONS(91),
    [anon_sym_shl] = ACTIONS(91),
    [anon_sym_shr] = ACTIONS(91),
    [anon_sym_signextend] = ACTIONS(91),
    [anon_sym_sload] = ACTIONS(91),
    [anon_sym_slt] = ACTIONS(91),
    [anon_sym_smod] = ACTIONS(91),
    [anon_sym_sstore] = ACTIONS(91),
    [anon_sym_staticcall] = ACTIONS(91),
    [anon_sym_stop] = ACTIONS(91),
    [anon_sym_sub] = ACTIONS(91),
    [anon_sym_timestamp] = ACTIONS(91),
    [anon_sym_tload] = ACTIONS(91),
    [anon_sym_tstore] = ACTIONS(91),
    [anon_sym_xor] = ACTIONS(91),
  },
  [21] = {
    [sym_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(71),
    [sym_decimal_number] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_add] = ACTIONS(69),
    [anon_sym_addmod] = ACTIONS(69),
    [anon_sym_address] = ACTIONS(69),
    [anon_sym_and] = ACTIONS(69),
    [anon_sym_balance] = ACTIONS(69),
    [anon_sym_basefee] = ACTIONS(69),
    [anon_sym_blockhash] = ACTIONS(69),
    [anon_sym_byte] = ACTIONS(69),
    [anon_sym_call] = ACTIONS(69),
    [anon_sym_callcode] = ACTIONS(69),
    [anon_sym_calldatacopy] = ACTIONS(69),
    [anon_sym_calldataload] = ACTIONS(69),
    [anon_sym_calldatasize] = ACTIONS(69),
    [anon_sym_caller] = ACTIONS(69),
    [anon_sym_callvalue] = ACTIONS(69),
    [anon_sym_chainid] = ACTIONS(69),
    [anon_sym_codecopy] = ACTIONS(69),
    [anon_sym_codesize] = ACTIONS(69),
    [anon_sym_coinbase] = ACTIONS(69),
    [anon_sym_create] = ACTIONS(69),
    [anon_sym_create2] = ACTIONS(69),
    [anon_sym_delegatecall] = ACTIONS(69),
    [anon_sym_diff] = ACTIONS(69),
    [anon_sym_div] = ACTIONS(69),
    [anon_sym_eq] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_extcodecopy] = ACTIONS(69),
    [anon_sym_extcodehash] = ACTIONS(69),
    [anon_sym_extcodesize] = ACTIONS(69),
    [anon_sym_gas] = ACTIONS(69),
    [anon_sym_gaslimit] = ACTIONS(69),
    [anon_sym_gasprice] = ACTIONS(69),
    [anon_sym_gt] = ACTIONS(69),
    [anon_sym_invalid] = ACTIONS(69),
    [anon_sym_iszero] = ACTIONS(69),
    [anon_sym_jump] = ACTIONS(69),
    [anon_sym_jumpi] = ACTIONS(69),
    [anon_sym_log0] = ACTIONS(69),
    [anon_sym_log1] = ACTIONS(69),
    [anon_sym_log2] = ACTIONS(69),
    [anon_sym_log3] = ACTIONS(69),
    [anon_sym_log4] = ACTIONS(69),
    [anon_sym_lt] = ACTIONS(69),
    [anon_sym_mload] = ACTIONS(69),
    [anon_sym_mod] = ACTIONS(69),
    [anon_sym_msize] = ACTIONS(69),
    [anon_sym_mstore] = ACTIONS(69),
    [anon_sym_mstore8] = ACTIONS(69),
    [anon_sym_mul] = ACTIONS(69),
    [anon_sym_mulmod] = ACTIONS(69),
    [anon_sym_not] = ACTIONS(69),
    [anon_sym_number] = ACTIONS(69),
    [anon_sym_or] = ACTIONS(69),
    [anon_sym_origin] = ACTIONS(69),
    [anon_sym_prevrandao] = ACTIONS(69),
    [anon_sym_return] = ACTIONS(69),
    [anon_sym_returndatacopy] = ACTIONS(69),
    [anon_sym_returndatasize] = ACTIONS(69),
    [anon_sym_revert] = ACTIONS(69),
    [anon_sym_sar] = ACTIONS(69),
    [anon_sym_sdiv] = ACTIONS(69),
    [anon_sym_selfbalance] = ACTIONS(69),
    [anon_sym_selfdestruct] = ACTIONS(69),
    [anon_sym_sgt] = ACTIONS(69),
    [anon_sym_sha3] = ACTIONS(69),
    [anon_sym_shl] = ACTIONS(69),
    [anon_sym_shr] = ACTIONS(69),
    [anon_sym_signextend] = ACTIONS(69),
    [anon_sym_sload] = ACTIONS(69),
    [anon_sym_slt] = ACTIONS(69),
    [anon_sym_smod] = ACTIONS(69),
    [anon_sym_sstore] = ACTIONS(69),
    [anon_sym_staticcall] = ACTIONS(69),
    [anon_sym_stop] = ACTIONS(69),
    [anon_sym_sub] = ACTIONS(69),
    [anon_sym_timestamp] = ACTIONS(69),
    [anon_sym_tload] = ACTIONS(69),
    [anon_sym_tstore] = ACTIONS(69),
    [anon_sym_xor] = ACTIONS(69),
  },
  [22] = {
    [sym_identifier] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(97),
    [sym_decimal_number] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_add] = ACTIONS(95),
    [anon_sym_addmod] = ACTIONS(95),
    [anon_sym_address] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(95),
    [anon_sym_balance] = ACTIONS(95),
    [anon_sym_basefee] = ACTIONS(95),
    [anon_sym_blockhash] = ACTIONS(95),
    [anon_sym_byte] = ACTIONS(95),
    [anon_sym_call] = ACTIONS(95),
    [anon_sym_callcode] = ACTIONS(95),
    [anon_sym_calldatacopy] = ACTIONS(95),
    [anon_sym_calldataload] = ACTIONS(95),
    [anon_sym_calldatasize] = ACTIONS(95),
    [anon_sym_caller] = ACTIONS(95),
    [anon_sym_callvalue] = ACTIONS(95),
    [anon_sym_chainid] = ACTIONS(95),
    [anon_sym_codecopy] = ACTIONS(95),
    [anon_sym_codesize] = ACTIONS(95),
    [anon_sym_coinbase] = ACTIONS(95),
    [anon_sym_create] = ACTIONS(95),
    [anon_sym_create2] = ACTIONS(95),
    [anon_sym_delegatecall] = ACTIONS(95),
    [anon_sym_diff] = ACTIONS(95),
    [anon_sym_div] = ACTIONS(95),
    [anon_sym_eq] = ACTIONS(95),
    [anon_sym_exp] = ACTIONS(95),
    [anon_sym_extcodecopy] = ACTIONS(95),
    [anon_sym_extcodehash] = ACTIONS(95),
    [anon_sym_extcodesize] = ACTIONS(95),
    [anon_sym_gas] = ACTIONS(95),
    [anon_sym_gaslimit] = ACTIONS(95),
    [anon_sym_gasprice] = ACTIONS(95),
    [anon_sym_gt] = ACTIONS(95),
    [anon_sym_invalid] = ACTIONS(95),
    [anon_sym_iszero] = ACTIONS(95),
    [anon_sym_jump] = ACTIONS(95),
    [anon_sym_jumpi] = ACTIONS(95),
    [anon_sym_log0] = ACTIONS(95),
    [anon_sym_log1] = ACTIONS(95),
    [anon_sym_log2] = ACTIONS(95),
    [anon_sym_log3] = ACTIONS(95),
    [anon_sym_log4] = ACTIONS(95),
    [anon_sym_lt] = ACTIONS(95),
    [anon_sym_mload] = ACTIONS(95),
    [anon_sym_mod] = ACTIONS(95),
    [anon_sym_msize] = ACTIONS(95),
    [anon_sym_mstore] = ACTIONS(95),
    [anon_sym_mstore8] = ACTIONS(95),
    [anon_sym_mul] = ACTIONS(95),
    [anon_sym_mulmod] = ACTIONS(95),
    [anon_sym_not] = ACTIONS(95),
    [anon_sym_number] = ACTIONS(95),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_origin] = ACTIONS(95),
    [anon_sym_prevrandao] = ACTIONS(95),
    [anon_sym_return] = ACTIONS(95),
    [anon_sym_returndatacopy] = ACTIONS(95),
    [anon_sym_returndatasize] = ACTIONS(95),
    [anon_sym_revert] = ACTIONS(95),
    [anon_sym_sar] = ACTIONS(95),
    [anon_sym_sdiv] = ACTIONS(95),
    [anon_sym_selfbalance] = ACTIONS(95),
    [anon_sym_selfdestruct] = ACTIONS(95),
    [anon_sym_sgt] = ACTIONS(95),
    [anon_sym_sha3] = ACTIONS(95),
    [anon_sym_shl] = ACTIONS(95),
    [anon_sym_shr] = ACTIONS(95),
    [anon_sym_signextend] = ACTIONS(95),
    [anon_sym_sload] = ACTIONS(95),
    [anon_sym_slt] = ACTIONS(95),
    [anon_sym_smod] = ACTIONS(95),
    [anon_sym_sstore] = ACTIONS(95),
    [anon_sym_staticcall] = ACTIONS(95),
    [anon_sym_stop] = ACTIONS(95),
    [anon_sym_sub] = ACTIONS(95),
    [anon_sym_timestamp] = ACTIONS(95),
    [anon_sym_tload] = ACTIONS(95),
    [anon_sym_tstore] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
  },
  [23] = {
    [sym_identifier] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(101),
    [sym_decimal_number] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_add] = ACTIONS(99),
    [anon_sym_addmod] = ACTIONS(99),
    [anon_sym_address] = ACTIONS(99),
    [anon_sym_and] = ACTIONS(99),
    [anon_sym_balance] = ACTIONS(99),
    [anon_sym_basefee] = ACTIONS(99),
    [anon_sym_blockhash] = ACTIONS(99),
    [anon_sym_byte] = ACTIONS(99),
    [anon_sym_call] = ACTIONS(99),
    [anon_sym_callcode] = ACTIONS(99),
    [anon_sym_calldatacopy] = ACTIONS(99),
    [anon_sym_calldataload] = ACTIONS(99),
    [anon_sym_calldatasize] = ACTIONS(99),
    [anon_sym_caller] = ACTIONS(99),
    [anon_sym_callvalue] = ACTIONS(99),
    [anon_sym_chainid] = ACTIONS(99),
    [anon_sym_codecopy] = ACTIONS(99),
    [anon_sym_codesize] = ACTIONS(99),
    [anon_sym_coinbase] = ACTIONS(99),
    [anon_sym_create] = ACTIONS(99),
    [anon_sym_create2] = ACTIONS(99),
    [anon_sym_delegatecall] = ACTIONS(99),
    [anon_sym_diff] = ACTIONS(99),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_eq] = ACTIONS(99),
    [anon_sym_exp] = ACTIONS(99),
    [anon_sym_extcodecopy] = ACTIONS(99),
    [anon_sym_extcodehash] = ACTIONS(99),
    [anon_sym_extcodesize] = ACTIONS(99),
    [anon_sym_gas] = ACTIONS(99),
    [anon_sym_gaslimit] = ACTIONS(99),
    [anon_sym_gasprice] = ACTIONS(99),
    [anon_sym_gt] = ACTIONS(99),
    [anon_sym_invalid] = ACTIONS(99),
    [anon_sym_iszero] = ACTIONS(99),
    [anon_sym_jump] = ACTIONS(99),
    [anon_sym_jumpi] = ACTIONS(99),
    [anon_sym_log0] = ACTIONS(99),
    [anon_sym_log1] = ACTIONS(99),
    [anon_sym_log2] = ACTIONS(99),
    [anon_sym_log3] = ACTIONS(99),
    [anon_sym_log4] = ACTIONS(99),
    [anon_sym_lt] = ACTIONS(99),
    [anon_sym_mload] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_msize] = ACTIONS(99),
    [anon_sym_mstore] = ACTIONS(99),
    [anon_sym_mstore8] = ACTIONS(99),
    [anon_sym_mul] = ACTIONS(99),
    [anon_sym_mulmod] = ACTIONS(99),
    [anon_sym_not] = ACTIONS(99),
    [anon_sym_number] = ACTIONS(99),
    [anon_sym_or] = ACTIONS(99),
    [anon_sym_origin] = ACTIONS(99),
    [anon_sym_prevrandao] = ACTIONS(99),
    [anon_sym_return] = ACTIONS(99),
    [anon_sym_returndatacopy] = ACTIONS(99),
    [anon_sym_returndatasize] = ACTIONS(99),
    [anon_sym_revert] = ACTIONS(99),
    [anon_sym_sar] = ACTIONS(99),
    [anon_sym_sdiv] = ACTIONS(99),
    [anon_sym_selfbalance] = ACTIONS(99),
    [anon_sym_selfdestruct] = ACTIONS(99),
    [anon_sym_sgt] = ACTIONS(99),
    [anon_sym_sha3] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [anon_sym_signextend] = ACTIONS(99),
    [anon_sym_sload] = ACTIONS(99),
    [anon_sym_slt] = ACTIONS(99),
    [anon_sym_smod] = ACTIONS(99),
    [anon_sym_sstore] = ACTIONS(99),
    [anon_sym_staticcall] = ACTIONS(99),
    [anon_sym_stop] = ACTIONS(99),
    [anon_sym_sub] = ACTIONS(99),
    [anon_sym_timestamp] = ACTIONS(99),
    [anon_sym_tload] = ACTIONS(99),
    [anon_sym_tstore] = ACTIONS(99),
    [anon_sym_xor] = ACTIONS(99),
  },
  [24] = {
    [sym_identifier] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(105),
    [sym_decimal_number] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_add] = ACTIONS(103),
    [anon_sym_addmod] = ACTIONS(103),
    [anon_sym_address] = ACTIONS(103),
    [anon_sym_and] = ACTIONS(103),
    [anon_sym_balance] = ACTIONS(103),
    [anon_sym_basefee] = ACTIONS(103),
    [anon_sym_blockhash] = ACTIONS(103),
    [anon_sym_byte] = ACTIONS(103),
    [anon_sym_call] = ACTIONS(103),
    [anon_sym_callcode] = ACTIONS(103),
    [anon_sym_calldatacopy] = ACTIONS(103),
    [anon_sym_calldataload] = ACTIONS(103),
    [anon_sym_calldatasize] = ACTIONS(103),
    [anon_sym_caller] = ACTIONS(103),
    [anon_sym_callvalue] = ACTIONS(103),
    [anon_sym_chainid] = ACTIONS(103),
    [anon_sym_codecopy] = ACTIONS(103),
    [anon_sym_codesize] = ACTIONS(103),
    [anon_sym_coinbase] = ACTIONS(103),
    [anon_sym_create] = ACTIONS(103),
    [anon_sym_create2] = ACTIONS(103),
    [anon_sym_delegatecall] = ACTIONS(103),
    [anon_sym_diff] = ACTIONS(103),
    [anon_sym_div] = ACTIONS(103),
    [anon_sym_eq] = ACTIONS(103),
    [anon_sym_exp] = ACTIONS(103),
    [anon_sym_extcodecopy] = ACTIONS(103),
    [anon_sym_extcodehash] = ACTIONS(103),
    [anon_sym_extcodesize] = ACTIONS(103),
    [anon_sym_gas] = ACTIONS(103),
    [anon_sym_gaslimit] = ACTIONS(103),
    [anon_sym_gasprice] = ACTIONS(103),
    [anon_sym_gt] = ACTIONS(103),
    [anon_sym_invalid] = ACTIONS(103),
    [anon_sym_iszero] = ACTIONS(103),
    [anon_sym_jump] = ACTIONS(103),
    [anon_sym_jumpi] = ACTIONS(103),
    [anon_sym_log0] = ACTIONS(103),
    [anon_sym_log1] = ACTIONS(103),
    [anon_sym_log2] = ACTIONS(103),
    [anon_sym_log3] = ACTIONS(103),
    [anon_sym_log4] = ACTIONS(103),
    [anon_sym_lt] = ACTIONS(103),
    [anon_sym_mload] = ACTIONS(103),
    [anon_sym_mod] = ACTIONS(103),
    [anon_sym_msize] = ACTIONS(103),
    [anon_sym_mstore] = ACTIONS(103),
    [anon_sym_mstore8] = ACTIONS(103),
    [anon_sym_mul] = ACTIONS(103),
    [anon_sym_mulmod] = ACTIONS(103),
    [anon_sym_not] = ACTIONS(103),
    [anon_sym_number] = ACTIONS(103),
    [anon_sym_or] = ACTIONS(103),
    [anon_sym_origin] = ACTIONS(103),
    [anon_sym_prevrandao] = ACTIONS(103),
    [anon_sym_return] = ACTIONS(103),
    [anon_sym_returndatacopy] = ACTIONS(103),
    [anon_sym_returndatasize] = ACTIONS(103),
    [anon_sym_revert] = ACTIONS(103),
    [anon_sym_sar] = ACTIONS(103),
    [anon_sym_sdiv] = ACTIONS(103),
    [anon_sym_selfbalance] = ACTIONS(103),
    [anon_sym_selfdestruct] = ACTIONS(103),
    [anon_sym_sgt] = ACTIONS(103),
    [anon_sym_sha3] = ACTIONS(103),
    [anon_sym_shl] = ACTIONS(103),
    [anon_sym_shr] = ACTIONS(103),
    [anon_sym_signextend] = ACTIONS(103),
    [anon_sym_sload] = ACTIONS(103),
    [anon_sym_slt] = ACTIONS(103),
    [anon_sym_smod] = ACTIONS(103),
    [anon_sym_sstore] = ACTIONS(103),
    [anon_sym_staticcall] = ACTIONS(103),
    [anon_sym_stop] = ACTIONS(103),
    [anon_sym_sub] = ACTIONS(103),
    [anon_sym_timestamp] = ACTIONS(103),
    [anon_sym_tload] = ACTIONS(103),
    [anon_sym_tstore] = ACTIONS(103),
    [anon_sym_xor] = ACTIONS(103),
  },
  [25] = {
    [sym_identifier] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(109),
    [sym_decimal_number] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_add] = ACTIONS(107),
    [anon_sym_addmod] = ACTIONS(107),
    [anon_sym_address] = ACTIONS(107),
    [anon_sym_and] = ACTIONS(107),
    [anon_sym_balance] = ACTIONS(107),
    [anon_sym_basefee] = ACTIONS(107),
    [anon_sym_blockhash] = ACTIONS(107),
    [anon_sym_byte] = ACTIONS(107),
    [anon_sym_call] = ACTIONS(107),
    [anon_sym_callcode] = ACTIONS(107),
    [anon_sym_calldatacopy] = ACTIONS(107),
    [anon_sym_calldataload] = ACTIONS(107),
    [anon_sym_calldatasize] = ACTIONS(107),
    [anon_sym_caller] = ACTIONS(107),
    [anon_sym_callvalue] = ACTIONS(107),
    [anon_sym_chainid] = ACTIONS(107),
    [anon_sym_codecopy] = ACTIONS(107),
    [anon_sym_codesize] = ACTIONS(107),
    [anon_sym_coinbase] = ACTIONS(107),
    [anon_sym_create] = ACTIONS(107),
    [anon_sym_create2] = ACTIONS(107),
    [anon_sym_delegatecall] = ACTIONS(107),
    [anon_sym_diff] = ACTIONS(107),
    [anon_sym_div] = ACTIONS(107),
    [anon_sym_eq] = ACTIONS(107),
    [anon_sym_exp] = ACTIONS(107),
    [anon_sym_extcodecopy] = ACTIONS(107),
    [anon_sym_extcodehash] = ACTIONS(107),
    [anon_sym_extcodesize] = ACTIONS(107),
    [anon_sym_gas] = ACTIONS(107),
    [anon_sym_gaslimit] = ACTIONS(107),
    [anon_sym_gasprice] = ACTIONS(107),
    [anon_sym_gt] = ACTIONS(107),
    [anon_sym_invalid] = ACTIONS(107),
    [anon_sym_iszero] = ACTIONS(107),
    [anon_sym_jump] = ACTIONS(107),
    [anon_sym_jumpi] = ACTIONS(107),
    [anon_sym_log0] = ACTIONS(107),
    [anon_sym_log1] = ACTIONS(107),
    [anon_sym_log2] = ACTIONS(107),
    [anon_sym_log3] = ACTIONS(107),
    [anon_sym_log4] = ACTIONS(107),
    [anon_sym_lt] = ACTIONS(107),
    [anon_sym_mload] = ACTIONS(107),
    [anon_sym_mod] = ACTIONS(107),
    [anon_sym_msize] = ACTIONS(107),
    [anon_sym_mstore] = ACTIONS(107),
    [anon_sym_mstore8] = ACTIONS(107),
    [anon_sym_mul] = ACTIONS(107),
    [anon_sym_mulmod] = ACTIONS(107),
    [anon_sym_not] = ACTIONS(107),
    [anon_sym_number] = ACTIONS(107),
    [anon_sym_or] = ACTIONS(107),
    [anon_sym_origin] = ACTIONS(107),
    [anon_sym_prevrandao] = ACTIONS(107),
    [anon_sym_return] = ACTIONS(107),
    [anon_sym_returndatacopy] = ACTIONS(107),
    [anon_sym_returndatasize] = ACTIONS(107),
    [anon_sym_revert] = ACTIONS(107),
    [anon_sym_sar] = ACTIONS(107),
    [anon_sym_sdiv] = ACTIONS(107),
    [anon_sym_selfbalance] = ACTIONS(107),
    [anon_sym_selfdestruct] = ACTIONS(107),
    [anon_sym_sgt] = ACTIONS(107),
    [anon_sym_sha3] = ACTIONS(107),
    [anon_sym_shl] = ACTIONS(107),
    [anon_sym_shr] = ACTIONS(107),
    [anon_sym_signextend] = ACTIONS(107),
    [anon_sym_sload] = ACTIONS(107),
    [anon_sym_slt] = ACTIONS(107),
    [anon_sym_smod] = ACTIONS(107),
    [anon_sym_sstore] = ACTIONS(107),
    [anon_sym_staticcall] = ACTIONS(107),
    [anon_sym_stop] = ACTIONS(107),
    [anon_sym_sub] = ACTIONS(107),
    [anon_sym_timestamp] = ACTIONS(107),
    [anon_sym_tload] = ACTIONS(107),
    [anon_sym_tstore] = ACTIONS(107),
    [anon_sym_xor] = ACTIONS(107),
  },
  [26] = {
    [sym_identifier] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(58),
    [sym_decimal_number] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_add] = ACTIONS(111),
    [anon_sym_addmod] = ACTIONS(111),
    [anon_sym_address] = ACTIONS(111),
    [anon_sym_and] = ACTIONS(111),
    [anon_sym_balance] = ACTIONS(111),
    [anon_sym_basefee] = ACTIONS(111),
    [anon_sym_blockhash] = ACTIONS(111),
    [anon_sym_byte] = ACTIONS(111),
    [anon_sym_call] = ACTIONS(111),
    [anon_sym_callcode] = ACTIONS(111),
    [anon_sym_calldatacopy] = ACTIONS(111),
    [anon_sym_calldataload] = ACTIONS(111),
    [anon_sym_calldatasize] = ACTIONS(111),
    [anon_sym_caller] = ACTIONS(111),
    [anon_sym_callvalue] = ACTIONS(111),
    [anon_sym_chainid] = ACTIONS(111),
    [anon_sym_codecopy] = ACTIONS(111),
    [anon_sym_codesize] = ACTIONS(111),
    [anon_sym_coinbase] = ACTIONS(111),
    [anon_sym_create] = ACTIONS(111),
    [anon_sym_create2] = ACTIONS(111),
    [anon_sym_delegatecall] = ACTIONS(111),
    [anon_sym_diff] = ACTIONS(111),
    [anon_sym_div] = ACTIONS(111),
    [anon_sym_eq] = ACTIONS(111),
    [anon_sym_exp] = ACTIONS(111),
    [anon_sym_extcodecopy] = ACTIONS(111),
    [anon_sym_extcodehash] = ACTIONS(111),
    [anon_sym_extcodesize] = ACTIONS(111),
    [anon_sym_gas] = ACTIONS(111),
    [anon_sym_gaslimit] = ACTIONS(111),
    [anon_sym_gasprice] = ACTIONS(111),
    [anon_sym_gt] = ACTIONS(111),
    [anon_sym_invalid] = ACTIONS(111),
    [anon_sym_iszero] = ACTIONS(111),
    [anon_sym_jump] = ACTIONS(111),
    [anon_sym_jumpi] = ACTIONS(111),
    [anon_sym_log0] = ACTIONS(111),
    [anon_sym_log1] = ACTIONS(111),
    [anon_sym_log2] = ACTIONS(111),
    [anon_sym_log3] = ACTIONS(111),
    [anon_sym_log4] = ACTIONS(111),
    [anon_sym_lt] = ACTIONS(111),
    [anon_sym_mload] = ACTIONS(111),
    [anon_sym_mod] = ACTIONS(111),
    [anon_sym_msize] = ACTIONS(111),
    [anon_sym_mstore] = ACTIONS(111),
    [anon_sym_mstore8] = ACTIONS(111),
    [anon_sym_mul] = ACTIONS(111),
    [anon_sym_mulmod] = ACTIONS(111),
    [anon_sym_not] = ACTIONS(111),
    [anon_sym_number] = ACTIONS(111),
    [anon_sym_or] = ACTIONS(111),
    [anon_sym_origin] = ACTIONS(111),
    [anon_sym_prevrandao] = ACTIONS(111),
    [anon_sym_return] = ACTIONS(111),
    [anon_sym_returndatacopy] = ACTIONS(111),
    [anon_sym_returndatasize] = ACTIONS(111),
    [anon_sym_revert] = ACTIONS(111),
    [anon_sym_sar] = ACTIONS(111),
    [anon_sym_sdiv] = ACTIONS(111),
    [anon_sym_selfbalance] = ACTIONS(111),
    [anon_sym_selfdestruct] = ACTIONS(111),
    [anon_sym_sgt] = ACTIONS(111),
    [anon_sym_sha3] = ACTIONS(111),
    [anon_sym_shl] = ACTIONS(111),
    [anon_sym_shr] = ACTIONS(111),
    [anon_sym_signextend] = ACTIONS(111),
    [anon_sym_sload] = ACTIONS(111),
    [anon_sym_slt] = ACTIONS(111),
    [anon_sym_smod] = ACTIONS(111),
    [anon_sym_sstore] = ACTIONS(111),
    [anon_sym_staticcall] = ACTIONS(111),
    [anon_sym_stop] = ACTIONS(111),
    [anon_sym_sub] = ACTIONS(111),
    [anon_sym_timestamp] = ACTIONS(111),
    [anon_sym_tload] = ACTIONS(111),
    [anon_sym_tstore] = ACTIONS(111),
    [anon_sym_xor] = ACTIONS(111),
  },
  [27] = {
    [sym_identifier] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(115),
    [sym_decimal_number] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_add] = ACTIONS(113),
    [anon_sym_addmod] = ACTIONS(113),
    [anon_sym_address] = ACTIONS(113),
    [anon_sym_and] = ACTIONS(113),
    [anon_sym_balance] = ACTIONS(113),
    [anon_sym_basefee] = ACTIONS(113),
    [anon_sym_blockhash] = ACTIONS(113),
    [anon_sym_byte] = ACTIONS(113),
    [anon_sym_call] = ACTIONS(113),
    [anon_sym_callcode] = ACTIONS(113),
    [anon_sym_calldatacopy] = ACTIONS(113),
    [anon_sym_calldataload] = ACTIONS(113),
    [anon_sym_calldatasize] = ACTIONS(113),
    [anon_sym_caller] = ACTIONS(113),
    [anon_sym_callvalue] = ACTIONS(113),
    [anon_sym_chainid] = ACTIONS(113),
    [anon_sym_codecopy] = ACTIONS(113),
    [anon_sym_codesize] = ACTIONS(113),
    [anon_sym_coinbase] = ACTIONS(113),
    [anon_sym_create] = ACTIONS(113),
    [anon_sym_create2] = ACTIONS(113),
    [anon_sym_delegatecall] = ACTIONS(113),
    [anon_sym_diff] = ACTIONS(113),
    [anon_sym_div] = ACTIONS(113),
    [anon_sym_eq] = ACTIONS(113),
    [anon_sym_exp] = ACTIONS(113),
    [anon_sym_extcodecopy] = ACTIONS(113),
    [anon_sym_extcodehash] = ACTIONS(113),
    [anon_sym_extcodesize] = ACTIONS(113),
    [anon_sym_gas] = ACTIONS(113),
    [anon_sym_gaslimit] = ACTIONS(113),
    [anon_sym_gasprice] = ACTIONS(113),
    [anon_sym_gt] = ACTIONS(113),
    [anon_sym_invalid] = ACTIONS(113),
    [anon_sym_iszero] = ACTIONS(113),
    [anon_sym_jump] = ACTIONS(113),
    [anon_sym_jumpi] = ACTIONS(113),
    [anon_sym_log0] = ACTIONS(113),
    [anon_sym_log1] = ACTIONS(113),
    [anon_sym_log2] = ACTIONS(113),
    [anon_sym_log3] = ACTIONS(113),
    [anon_sym_log4] = ACTIONS(113),
    [anon_sym_lt] = ACTIONS(113),
    [anon_sym_mload] = ACTIONS(113),
    [anon_sym_mod] = ACTIONS(113),
    [anon_sym_msize] = ACTIONS(113),
    [anon_sym_mstore] = ACTIONS(113),
    [anon_sym_mstore8] = ACTIONS(113),
    [anon_sym_mul] = ACTIONS(113),
    [anon_sym_mulmod] = ACTIONS(113),
    [anon_sym_not] = ACTIONS(113),
    [anon_sym_number] = ACTIONS(113),
    [anon_sym_or] = ACTIONS(113),
    [anon_sym_origin] = ACTIONS(113),
    [anon_sym_prevrandao] = ACTIONS(113),
    [anon_sym_return] = ACTIONS(113),
    [anon_sym_returndatacopy] = ACTIONS(113),
    [anon_sym_returndatasize] = ACTIONS(113),
    [anon_sym_revert] = ACTIONS(113),
    [anon_sym_sar] = ACTIONS(113),
    [anon_sym_sdiv] = ACTIONS(113),
    [anon_sym_selfbalance] = ACTIONS(113),
    [anon_sym_selfdestruct] = ACTIONS(113),
    [anon_sym_sgt] = ACTIONS(113),
    [anon_sym_sha3] = ACTIONS(113),
    [anon_sym_shl] = ACTIONS(113),
    [anon_sym_shr] = ACTIONS(113),
    [anon_sym_signextend] = ACTIONS(113),
    [anon_sym_sload] = ACTIONS(113),
    [anon_sym_slt] = ACTIONS(113),
    [anon_sym_smod] = ACTIONS(113),
    [anon_sym_sstore] = ACTIONS(113),
    [anon_sym_staticcall] = ACTIONS(113),
    [anon_sym_stop] = ACTIONS(113),
    [anon_sym_sub] = ACTIONS(113),
    [anon_sym_timestamp] = ACTIONS(113),
    [anon_sym_tload] = ACTIONS(113),
    [anon_sym_tstore] = ACTIONS(113),
    [anon_sym_xor] = ACTIONS(113),
  },
  [28] = {
    [sym_identifier] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
    [sym_hex_number] = ACTIONS(119),
    [sym_decimal_number] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_add] = ACTIONS(117),
    [anon_sym_addmod] = ACTIONS(117),
    [anon_sym_address] = ACTIONS(117),
    [anon_sym_and] = ACTIONS(117),
    [anon_sym_balance] = ACTIONS(117),
    [anon_sym_basefee] = ACTIONS(117),
    [anon_sym_blockhash] = ACTIONS(117),
    [anon_sym_byte] = ACTIONS(117),
    [anon_sym_call] = ACTIONS(117),
    [anon_sym_callcode] = ACTIONS(117),
    [anon_sym_calldatacopy] = ACTIONS(117),
    [anon_sym_calldataload] = ACTIONS(117),
    [anon_sym_calldatasize] = ACTIONS(117),
    [anon_sym_caller] = ACTIONS(117),
    [anon_sym_callvalue] = ACTIONS(117),
    [anon_sym_chainid] = ACTIONS(117),
    [anon_sym_codecopy] = ACTIONS(117),
    [anon_sym_codesize] = ACTIONS(117),
    [anon_sym_coinbase] = ACTIONS(117),
    [anon_sym_create] = ACTIONS(117),
    [anon_sym_create2] = ACTIONS(117),
    [anon_sym_delegatecall] = ACTIONS(117),
    [anon_sym_diff] = ACTIONS(117),
    [anon_sym_div] = ACTIONS(117),
    [anon_sym_eq] = ACTIONS(117),
    [anon_sym_exp] = ACTIONS(117),
    [anon_sym_extcodecopy] = ACTIONS(117),
    [anon_sym_extcodehash] = ACTIONS(117),
    [anon_sym_extcodesize] = ACTIONS(117),
    [anon_sym_gas] = ACTIONS(117),
    [anon_sym_gaslimit] = ACTIONS(117),
    [anon_sym_gasprice] = ACTIONS(117),
    [anon_sym_gt] = ACTIONS(117),
    [anon_sym_invalid] = ACTIONS(117),
    [anon_sym_iszero] = ACTIONS(117),
    [anon_sym_jump] = ACTIONS(117),
    [anon_sym_jumpi] = ACTIONS(117),
    [anon_sym_log0] = ACTIONS(117),
    [anon_sym_log1] = ACTIONS(117),
    [anon_sym_log2] = ACTIONS(117),
    [anon_sym_log3] = ACTIONS(117),
    [anon_sym_log4] = ACTIONS(117),
    [anon_sym_lt] = ACTIONS(117),
    [anon_sym_mload] = ACTIONS(117),
    [anon_sym_mod] = ACTIONS(117),
    [anon_sym_msize] = ACTIONS(117),
    [anon_sym_mstore] = ACTIONS(117),
    [anon_sym_mstore8] = ACTIONS(117),
    [anon_sym_mul] = ACTIONS(117),
    [anon_sym_mulmod] = ACTIONS(117),
    [anon_sym_not] = ACTIONS(117),
    [anon_sym_number] = ACTIONS(117),
    [anon_sym_or] = ACTIONS(117),
    [anon_sym_origin] = ACTIONS(117),
    [anon_sym_prevrandao] = ACTIONS(117),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_returndatacopy] = ACTIONS(117),
    [anon_sym_returndatasize] = ACTIONS(117),
    [anon_sym_revert] = ACTIONS(117),
    [anon_sym_sar] = ACTIONS(117),
    [anon_sym_sdiv] = ACTIONS(117),
    [anon_sym_selfbalance] = ACTIONS(117),
    [anon_sym_selfdestruct] = ACTIONS(117),
    [anon_sym_sgt] = ACTIONS(117),
    [anon_sym_sha3] = ACTIONS(117),
    [anon_sym_shl] = ACTIONS(117),
    [anon_sym_shr] = ACTIONS(117),
    [anon_sym_signextend] = ACTIONS(117),
    [anon_sym_sload] = ACTIONS(117),
    [anon_sym_slt] = ACTIONS(117),
    [anon_sym_smod] = ACTIONS(117),
    [anon_sym_sstore] = ACTIONS(117),
    [anon_sym_staticcall] = ACTIONS(117),
    [anon_sym_stop] = ACTIONS(117),
    [anon_sym_sub] = ACTIONS(117),
    [anon_sym_timestamp] = ACTIONS(117),
    [anon_sym_tload] = ACTIONS(117),
    [anon_sym_tstore] = ACTIONS(117),
    [anon_sym_xor] = ACTIONS(117),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_const,
    ACTIONS(9), 1,
      anon_sym_dependency,
    ACTIONS(11), 1,
      anon_sym_extern,
    ACTIONS(13), 1,
      anon_sym_fn,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    STATE(30), 6,
      sym__definition,
      sym_huff_const,
      sym_abstract_dependency,
      sym_extern_macro,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [27] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      anon_sym_const,
    ACTIONS(128), 1,
      anon_sym_dependency,
    ACTIONS(131), 1,
      anon_sym_extern,
    ACTIONS(134), 1,
      anon_sym_fn,
    STATE(30), 6,
      sym__definition,
      sym_huff_const,
      sym_abstract_dependency,
      sym_extern_macro,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [54] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 9,
      ts_builtin_sym_end,
      anon_sym_reads,
      anon_sym_writes,
      anon_sym_const,
      anon_sym_dependency,
      anon_sym_extern,
      anon_sym_stack,
      anon_sym_fn,
      anon_sym_LBRACK,
  [69] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 9,
      ts_builtin_sym_end,
      anon_sym_reads,
      anon_sym_writes,
      anon_sym_const,
      anon_sym_dependency,
      anon_sym_extern,
      anon_sym_stack,
      anon_sym_fn,
      anon_sym_LBRACK,
  [84] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 9,
      ts_builtin_sym_end,
      anon_sym_reads,
      anon_sym_writes,
      anon_sym_const,
      anon_sym_dependency,
      anon_sym_extern,
      anon_sym_stack,
      anon_sym_fn,
      anon_sym_LBRACK,
  [99] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_reads,
    ACTIONS(147), 1,
      anon_sym_writes,
    STATE(35), 1,
      sym_reads,
    STATE(47), 1,
      sym_writes,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_dependency,
      anon_sym_extern,
      anon_sym_fn,
  [122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_writes,
    STATE(45), 1,
      sym_writes,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_dependency,
      anon_sym_extern,
      anon_sym_fn,
  [139] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_reads,
    ACTIONS(147), 1,
      anon_sym_writes,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_reads,
    STATE(55), 1,
      sym_writes,
    STATE(85), 1,
      sym_stack_in_out,
    STATE(90), 1,
      sym_stack_arg_list,
  [164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 7,
      ts_builtin_sym_end,
      anon_sym_writes,
      anon_sym_const,
      anon_sym_dependency,
      anon_sym_extern,
      anon_sym_fn,
      anon_sym_LBRACK,
  [177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 7,
      ts_builtin_sym_end,
      anon_sym_reads,
      anon_sym_writes,
      anon_sym_const,
      anon_sym_dependency,
      anon_sym_extern,
      anon_sym_fn,
  [190] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_hex_number,
    ACTIONS(19), 1,
      sym_decimal_number,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_GT,
    STATE(41), 1,
      aux_sym_invocation_repeat1,
    STATE(76), 1,
      sym_number,
    STATE(86), 1,
      sym_inlined_arg,
  [215] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_hex_number,
    ACTIONS(19), 1,
      sym_decimal_number,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_GT,
    STATE(39), 1,
      aux_sym_invocation_repeat1,
    STATE(76), 1,
      sym_number,
    STATE(78), 1,
      sym_inlined_arg,
  [240] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(166), 1,
      sym_hex_number,
    ACTIONS(169), 1,
      sym_decimal_number,
    ACTIONS(172), 1,
      anon_sym_GT,
    STATE(41), 1,
      aux_sym_invocation_repeat1,
    STATE(76), 1,
      sym_number,
    STATE(96), 1,
      sym_inlined_arg,
  [265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 6,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_dependency,
      anon_sym_extern,
      anon_sym_fn,
      anon_sym_LBRACK,
  [277] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_writes,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    STATE(59), 1,
      sym_writes,
    STATE(79), 1,
      sym_stack_in_out,
    STATE(90), 1,
      sym_stack_arg_list,
  [296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 5,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_dependency,
      anon_sym_extern,
      anon_sym_fn,
  [307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 5,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_dependency,
      anon_sym_extern,
      anon_sym_fn,
  [318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 5,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_dependency,
      anon_sym_extern,
      anon_sym_fn,
  [329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_dependency,
      anon_sym_extern,
      anon_sym_fn,
  [340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 5,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_dependency,
      anon_sym_extern,
      anon_sym_fn,
  [351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 5,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_dependency,
      anon_sym_extern,
      anon_sym_fn,
  [362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 5,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_dependency,
      anon_sym_extern,
      anon_sym_fn,
  [373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 5,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_dependency,
      anon_sym_extern,
      anon_sym_fn,
  [384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 5,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_dependency,
      anon_sym_extern,
      anon_sym_fn,
  [395] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_identifier,
    STATE(53), 1,
      aux_sym_ident_list_repeat1,
    ACTIONS(195), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_decimal_number,
    ACTIONS(172), 3,
      sym_identifier,
      sym_hex_number,
      anon_sym_GT,
  [421] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    STATE(79), 1,
      sym_stack_in_out,
    STATE(90), 1,
      sym_stack_arg_list,
  [434] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      aux_sym_ident_list_repeat1,
  [447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 3,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_ident_list_repeat1,
  [469] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    STATE(62), 1,
      sym_stack_in_out,
    STATE(90), 1,
      sym_stack_arg_list,
  [482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym_ident_list_repeat1,
  [495] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_ident_list_repeat1,
  [508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_function_body,
  [518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      sym_stack_arg_list,
  [528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LT,
  [538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 2,
      anon_sym_LPAREN,
      anon_sym_LT,
  [546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
  [556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(219), 1,
      anon_sym_COMMA,
  [566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_ident_list,
  [576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
  [586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_ident_list,
  [596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(219), 1,
      anon_sym_COMMA,
  [614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(219), 1,
      anon_sym_COMMA,
  [624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    ACTIONS(219), 1,
      anon_sym_COMMA,
  [642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_stack,
    STATE(34), 1,
      sym_huff_macro_stack_in_out,
  [660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_GT,
    ACTIONS(237), 1,
      anon_sym_COMMA,
  [670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_function_body,
  [680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    ACTIONS(225), 1,
      anon_sym_COMMA,
  [698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(225), 1,
      anon_sym_COMMA,
  [708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(219), 1,
      anon_sym_COMMA,
  [718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
  [728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_function_body,
  [738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_GT,
  [748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_ident_list,
  [758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_ident_list,
  [768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
  [775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_DASH_GT,
  [782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_COMMA,
  [789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
  [796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
  [803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_decimal_number,
  [810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
  [817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_COMMA,
  [824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_decimal_number,
  [831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
  [838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_COMMA,
  [845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
  [852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
  [859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
  [866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym_identifier,
  [873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_identifier,
  [880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym_identifier,
  [887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(29)] = 0,
  [SMALL_STATE(30)] = 27,
  [SMALL_STATE(31)] = 54,
  [SMALL_STATE(32)] = 69,
  [SMALL_STATE(33)] = 84,
  [SMALL_STATE(34)] = 99,
  [SMALL_STATE(35)] = 122,
  [SMALL_STATE(36)] = 139,
  [SMALL_STATE(37)] = 164,
  [SMALL_STATE(38)] = 177,
  [SMALL_STATE(39)] = 190,
  [SMALL_STATE(40)] = 215,
  [SMALL_STATE(41)] = 240,
  [SMALL_STATE(42)] = 265,
  [SMALL_STATE(43)] = 277,
  [SMALL_STATE(44)] = 296,
  [SMALL_STATE(45)] = 307,
  [SMALL_STATE(46)] = 318,
  [SMALL_STATE(47)] = 329,
  [SMALL_STATE(48)] = 340,
  [SMALL_STATE(49)] = 351,
  [SMALL_STATE(50)] = 362,
  [SMALL_STATE(51)] = 373,
  [SMALL_STATE(52)] = 384,
  [SMALL_STATE(53)] = 395,
  [SMALL_STATE(54)] = 409,
  [SMALL_STATE(55)] = 421,
  [SMALL_STATE(56)] = 434,
  [SMALL_STATE(57)] = 447,
  [SMALL_STATE(58)] = 456,
  [SMALL_STATE(59)] = 469,
  [SMALL_STATE(60)] = 482,
  [SMALL_STATE(61)] = 495,
  [SMALL_STATE(62)] = 508,
  [SMALL_STATE(63)] = 518,
  [SMALL_STATE(64)] = 528,
  [SMALL_STATE(65)] = 538,
  [SMALL_STATE(66)] = 546,
  [SMALL_STATE(67)] = 556,
  [SMALL_STATE(68)] = 566,
  [SMALL_STATE(69)] = 576,
  [SMALL_STATE(70)] = 586,
  [SMALL_STATE(71)] = 596,
  [SMALL_STATE(72)] = 604,
  [SMALL_STATE(73)] = 614,
  [SMALL_STATE(74)] = 624,
  [SMALL_STATE(75)] = 632,
  [SMALL_STATE(76)] = 642,
  [SMALL_STATE(77)] = 650,
  [SMALL_STATE(78)] = 660,
  [SMALL_STATE(79)] = 670,
  [SMALL_STATE(80)] = 680,
  [SMALL_STATE(81)] = 688,
  [SMALL_STATE(82)] = 698,
  [SMALL_STATE(83)] = 708,
  [SMALL_STATE(84)] = 718,
  [SMALL_STATE(85)] = 728,
  [SMALL_STATE(86)] = 738,
  [SMALL_STATE(87)] = 748,
  [SMALL_STATE(88)] = 758,
  [SMALL_STATE(89)] = 768,
  [SMALL_STATE(90)] = 775,
  [SMALL_STATE(91)] = 782,
  [SMALL_STATE(92)] = 789,
  [SMALL_STATE(93)] = 796,
  [SMALL_STATE(94)] = 803,
  [SMALL_STATE(95)] = 810,
  [SMALL_STATE(96)] = 817,
  [SMALL_STATE(97)] = 824,
  [SMALL_STATE(98)] = 831,
  [SMALL_STATE(99)] = 838,
  [SMALL_STATE(100)] = 845,
  [SMALL_STATE(101)] = 852,
  [SMALL_STATE(102)] = 859,
  [SMALL_STATE(103)] = 866,
  [SMALL_STATE(104)] = 873,
  [SMALL_STATE(105)] = 880,
  [SMALL_STATE(106)] = 887,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(15),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(17),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(17),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(65),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_invocation_repeat2, 2), SHIFT_REPEAT(14),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invocation_repeat2, 2), SHIFT_REPEAT(17),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_invocation_repeat2, 2), SHIFT_REPEAT(17),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_invocation_repeat2, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_invocation_repeat2, 2), SHIFT_REPEAT(65),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invocation, 8),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invocation, 8),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invocation, 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invocation, 5),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invocation, 9),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invocation, 9),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invocation, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invocation, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invocation, 7),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invocation, 7),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invocation, 6),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invocation, 6),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invocation, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invocation, 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_invocation_repeat2, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(105),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident_list, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident_list, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident_list, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_macro, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_macro, 5),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reads, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_huff_macro_stack_in_out, 6),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invocation_repeat1, 2), SHIFT_REPEAT(76),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invocation_repeat1, 2), SHIFT_REPEAT(17),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_invocation_repeat1, 2), SHIFT_REPEAT(17),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_invocation_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_writes, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_macro, 6),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_huff_const, 2, .production_id = 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract_dependency, 2, .production_id = 1),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ident_list_repeat1, 2), SHIFT_REPEAT(89),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ident_list_repeat1, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_invocation_repeat1, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_std_evm_op, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_arg_list, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_arg_list, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inlined_arg, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_arg_list, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [263] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_in_out, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_balls(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
