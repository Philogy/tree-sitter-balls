(comment) @comment

(number) @number

[
  ","
  "->"
] @punctuation.delimiter

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
  "<"
  ">"
] @punctuation.bracket

[
  "const"
  "extern"
  "dependency"
] @type


"fn" @keyword.function

(std_evm_op) @function.builtin
