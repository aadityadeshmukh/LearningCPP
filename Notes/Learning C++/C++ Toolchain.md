# Toolchain

- C++ is a compiled language
- 5 main steps in the C++ toolchain
	- Edit Source Code
	- Preprocessor
		- creates something called as a translation unit
		- a compiler works with TUs
		- TUs are large files created by the preprocessor by combining CPP / H files, expanding macros, conditional compiling etc
	- Compilation
		- Converts TUs to object code
		- object code includes symbol table
			- Allows object code to link with code in other object files & libraries
	- Linker
		- A linker takes the object files as input
		- resolves all interdependencies
		- combines them into something an OS can run
	- Runtime
		- an executable