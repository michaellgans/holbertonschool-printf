# holbertonschool-printf

***********************
# What is this project...

		- In this project we have created our own version of the printf function.
		This function will produce an output according to a format, and handle specific 
		convertion specifiers. We also created a man page for the function to help give
		more information on this version of printf. To create this project some of the
		tools we used were variadic functions, pointers, structures and typedef. 

*********************************
# Why did we create this project...

		- We wanted to teach ourselves how to create our own function by taking the printf
		function and making it our own. This is surface level recreation of printf where we
		have learned a lot about what all it takes to write script for a function to be able
		to work correctly.

*************************
# How to install...

*************************************
# How to use (with examples)...

		-We programed certain format specifiers that can be used in our version of printf.
		As this is not a fully fleshed out function like the original we only support the 
		following types:

			d or i = signed decimal integer
			c = single character
			s = string of characters

		-Upon successful return, all functions return the number of characters written,
		excluding the terminating null character used to end the string.
		
![printf example](https://github.com/michaellgans/holbertonschool-printf/assets/126268722/dbe73473-65f1-4a0f-bef7-34052848b467)

*************
# Created by...

		- This project was created by Michael Gans and Chris Gillis. If you would like to get
		a hold of them please reach out via email to either chris85gillis@gmail.com or
		_______

********************
# History of Printf...

		-Early programming languages such as Fortran used special statements with completely
		different syntax from other calculations to build formatting descriptions. In this example,
		the format is specified on line 601, and the WRITE command refers to it by line number:

		
		ALGOL 68 had more function-like API, but still used special syntax (the $ delimiters 
		surround special formatting syntax):


		But using the normal function calls and data types simplifies the language and compiler,
		and allows the implementation of the input/output to be written in the same language.
		These advantages outweigh the disadvantages (such as a complete lack of type safety in
		many instances) and in most newer languages I/O is not part of the syntax.

		C's printf has its origins in BCPL's writef function (1966). In comparison to C and printf,
		*N is a BCPL language escape sequence representing a newline character (for which C uses
		the escape sequence \n) and the order of the format specification's field width and type
		is reversed in writef:[1]


		Probably the first copying of the syntax outside the C language was the Unix printf shell command,
		which first appeared in Version 4, as part of the port to C.[2]

			-https://en.wikipedia.org/wiki/Printf#History-

flowchart?
differences between this printf and printf?
