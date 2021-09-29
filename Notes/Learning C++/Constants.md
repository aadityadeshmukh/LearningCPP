# Constants

- Constants are variable whose value does not change throughout the program
- declare it at the top and use all caps as standard notation guideline.


### Formatting

- use the `iomanip` library to format your output
- `cout.setf(ios::fixed)` statement will avoid the E notation output
- `cout.setf(ios::showpoint)` statement will show decimal point even if not necessary
- using `setprecision(2)` with `cout` will tell the compiler to show 2 decimal places
		-`cout<< "Blah Blah: " << setprecision(2) << variableName << endl;`