# What happens when you declare a variable

- When you declare a variable the compiler goes and finds a memory to allocate according to data type.
	- for example it will look for 4 bytes of space for `int`
- it will either give a temporary name or the name provided by the user
- *Note:* Always initialize variables
	- Compiler does not clear out the data when it allocates the memory
	- So if its an old memory it will just give it a different name.
	- Whatever value the memory previously held is still there
	- Initialization helps creating proper data for the memory to hold
- The compiler then keeps a pointer to that memory. Basically an address to the memory block
- If the variable value changes the compiler comes back and changes the value held by the memory block based on address and name of the variable. 