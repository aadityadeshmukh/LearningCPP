# Template functions

- Supports generic programming
- Allows to work type agnostically even if C++ is a strongly typed language
- Any normally defined function or class can be made a template using the `template` keyword
- the compiler creates a specialization for each identified data type at instantiation
- these types are used as placeholders by the template code which are replaced by the actual types at compile time

- `template <typename T>`
- `T functionName(T a, T b...){return outT}`
- While calling: `functionName <data type>` or `functionName(args)`
	- if no datatype is specified then the compiler uses a feature called type deduction

