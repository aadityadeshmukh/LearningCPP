# Linked List

- Linked list is a list of nodes with pointers to the next element
- the 1st node is called head and last one is called tail
- to implement it with a structure 
	- create a structure
	- create a pointer to this structure object
	- structure will have 2 types of data elements
		- data
		- pointer to next element called as link
	- with the pointer add the data element value
	- add the link pointer value as null as this is the first item in the linked list
	- for next element
		- create a temp node object
		- get its pointer
		- assign data value
		- assign pointer of present head to the link value
		- make temp the new head