## C language
- Program Structure
		- variable definition & variable decleration
	
	gcc gives following warning if two global vars with same signature are created:
		linker gives this error.
	duplicate symbol '_g' in:
	    /var/folders/5h/2v3rz4857q11jcdkk83b_18w0000gn/T//ccNm9jAy.o
	    /var/folders/5h/2v3rz4857q11jcdkk83b_18w0000gn/T//ccgccCob.o
	ld: 1 duplicate symbol for architecture x86_64
	collect2: error: ld returned 1 exit status
	
	- semicolons terminate the statement, (seperator is different, in pascal ; is seperator)
	```pascal
	begin 
		x = x+1 ; // sep
		y = x // no need to ;
	end
	```
	
	- block structure is given with braces in c, (in python it is indentattion

 # Data types
	 - Derived types: 
		 - stuct
		 - pointer ! 
		 - union
		 - function type?? (function pointer? )
		 - 