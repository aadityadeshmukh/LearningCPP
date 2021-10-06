# Transfomations

- The transform function
- used to run bulk transformations on elements in a container
- found in the `algorithm` error
- `transform()`
	- 4 arguments
		- start interator of source - input
		- end iterator of source - input
		- start of destination - output iterator
		- object operator - unary function
	- takes the source data and applies the operator and stores in destination container
	- capable of changing types from one to other
	
	- [[Lambda transformation]]
	- String Transformation
		- last argument to transform strings
			- `::toupper` etc
			- can define custom classes to make functions
	
