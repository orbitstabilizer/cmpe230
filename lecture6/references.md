## Pointer to functions

## Complicated pointer expressions
1. a
2. Operator precedence table 
	1.  * -> pointer to 
	2. \[x\] -> array \[x\] of 
	3. () -> function call 
```C
int *f(); // f is a function returning pointer to int
int (*pf)(); // pf is a pointer to function returning int
int (*pfa[])();// an array of function pointers to functions returning int


char (*(*x[3])())[5]; // x is an array [3] of pointer to function returning
					// pointer to array [5] of char
```