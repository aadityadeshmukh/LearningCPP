# Function parameters

Match your function parameters by:
	- Type
	- Order
	- Number
	
Two ways of passing parameters:
- Pass by value
- Pass by reference
	- Essentially passing a pointer to the location of the memory space
	- allows the calling function and called function to access the same memory space
	- A reference is a trick of syntax. Its an entry in the namespace without a value of its own. It is a just a reference to the value of the object it is referring to
	- Always const modify your reference
	- C does not have references


Note: By default any data type is pass by value. Arrays are pass by reference.
- This makes sense as we dont want to create a copy of a large temporary array just to access the data 

Scope:
- How long a variable will live
- Local
	- normally any parameter passed by value
	- any parameter defined and used in a function
	- any parameter defined in main can have local scope to main
- Global
	- any parameter defined outside main and any function
	- any parameter defined in main and passed by reference