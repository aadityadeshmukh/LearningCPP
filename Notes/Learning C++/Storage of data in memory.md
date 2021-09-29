# Storage of data in memory

- Different data types need different methods of declaration
- All need to declared individually
- This is to ensure that each is declared correctly based on their usecase in the program

Casting:
-	`static_cast<data type> (expression or variable)`

Math functions
- `#include<cmath>` for various mathematical operations like ceiling (`ceil`) or floor (`floor`)
- `pow(r,2)` for `r squared`
- `sqrt(variable)` for square root
- `abs` for absolute value
- `fabs` for absolute value of float
- `%` mod operator for finding a remainder of a division (does not need cmath)

C standard library
- `rand()` generates a random number between 0 & RAND_MAX
	- Modding the output with the largest number in your range (`rand() % number`) gives a random number between 0 and the `number - 1`
	- add one to the output
	- this will always give the same output as it starts the generating from the same point
	- use seeding to start generation at varied points
- `srand()` generates a random number between 0 and 1 based on a seed
- seed could be anything
- most popular is `time`
- `time(0)` will give the current time in seconds from 1 Jan 1970. Seeding generator with current time guarantees unique numbers
	- part of the c time library

Order of priority

- Any type of decimal number & integer operation will default the answer to double
	- Becuase double has more space to store an accurate response.