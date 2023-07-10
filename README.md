# holbertonschool-printf

*************************
# what is this project...

		- This project involves the development of a custom printf function. Our goal was to
		create a function that generates an output based on a specific format and handles various
		conversion specifiers. In addition, we crafted a comprehensive man page to provide detailed
		information about this customized printf implementation. To accomplish this, we leveraged tools
		such as variadic functions, pointers, structures, and typedefs.


***********************************
# why did we create this project...

		- The purpose of creating this project was to gain hands-on experience in developing our
		own function by customizing the printf function. Through this endeavor, we aimed to deepen
		our understanding of the intricacies involved in writing code for a function to ensure its
		proper functionality. By embarking on this surface-level recreation of printf, we have acquired
		valuable insights and knowledge about the various aspects required to create a well-working function.


*******************
# how to install...

		- You can extract the files from... 

[PRINTF REPOSITORY FILES](https://github.com/michaellgans/holbertonschool-printf)

		- Once downloaded you can add these files to your own set of libraries
		in order to use our version of printf.


*******************************
# how to use (with examples)...

		- We programed certain format specifiers that can be used in our version of printf.
		As this is not a fully fleshed out function like the original we only support the 
		following types:

			d or i = signed decimal integer
			c = single character
			s = string of characters

		- Upon successful return, all functions return the number of characters written,
		excluding the terminating null character used to end the string.
		
![printf example](https://github.com/michaellgans/holbertonschool-printf/assets/126268722/dbe73473-65f1-4a0f-bef7-34052848b467)

		*The above image is an example of what our printf function can do. (minus the float type)


************************************************************
# differences between this printf and the original printf...

                - The primary distinction between our printf implementation and the original version
		lies in the level of functionality they offer. Given the time constraints, our printf
		was developed with a limited set of features and may not match the full capabilities of
		the original printf. However, there is potential for further development to enhance our
		printf and bring it closer to the level of functionality offered by the original version.


**********************
# history of printf...

		- Early programming languages such as Fortran used special statements with completely
		different syntax from other calculations to build formatting descriptions. In this example,
		the format is specified on line 601, and the WRITE command refers to it by line number:


![History of Printf](https://github.com/michaellgans/holbertonschool-printf/assets/126268722/038bd870-1aab-4c2d-8cb5-cf4c9b32d7db)

		
		ALGOL 68 had more function-like API, but still used special syntax (the $ delimiters 
		surround special formatting syntax):


![History of Printf 2](https://github.com/michaellgans/holbertonschool-printf/assets/126268722/484673a6-8e22-4776-a87f-ba23857e0804)


		But using the normal function calls and data types simplifies the language and compiler,
		and allows the implementation of the input/output to be written in the same language.
		These advantages outweigh the disadvantages (such as a complete lack of type safety in
		many instances) and in most newer languages I/O is not part of the syntax.

		C's printf has its origins in BCPL's writef function (1966). In comparison to C and printf,
		*N is a BCPL language escape sequence representing a newline character (for which C uses
		the escape sequence \n) and the order of the format specification's field width and type
		is reversed in writef:[1]


![History of Printf 3](https://github.com/michaellgans/holbertonschool-printf/assets/126268722/f9b04df8-b9cb-4c5c-a1b1-7a56000e57e7)


		Probably the first copying of the syntax outside the C language was the Unix printf shell command,
		which first appeared in Version 4, as part of the port to C.[2]


Source Material Credit: [HISTORY OF PRINTF](https://en.wikipedia.org/wiki/Printf)


***************
# created by...

                - This project was created by Michael Gans and Chris Gillis. If you would like to get
                a hold of them please reach out via email to either chris85gillis@gmail.com or
                _______

flowchart?
