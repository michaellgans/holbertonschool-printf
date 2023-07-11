<p align="center"><strong>_printf()</strong></p>

*************************
# What is this project...

		- This project involves the development of a custom printf function. Our goal was to create a 
  		function that generates an output based on a specific format by interpreting various conversion 
    		specifiers. To accomplish this, we leveraged tools such as variadic functions, pointers, 
      		structures, and typedefs.  In addition, we authored a comprehensive man page to provide detailed 
		information about the inner workings of this customized function. 


********************************
# Requirements for this project...

		- Allowed editors: vi, vim, emacs
		- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror
  			-Wextra -pedantic -std=gnu89
		- All your files should end with a new line
		- A README.md file, at the root of the folder of the project is mandatory
		- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
		- You are not allowed to use global variables
		- No more than 5 functions per file
		- In the following examples, the main.c files are shown as examples. You can use them to test 
  			 your functions, but you don’t have to push them to your repo (if you do we won’t take 
      			 them into account). We will use our own main.c files at compilation. Our main.c files 
	  		 might be different from the one shown in the examples
		- The prototypes of all your functions should be included in your header file called main.h
		- Don’t forget to push your header file
		- All your header files should be include guarded
		- Note that we will not provide the _putchar function for this project 


***********************************
# Why did we create this project...

		- The purpose of creating this project was to gain hands-on experience in developing our
		own function by rewriting the printf function. Through this endeavor, we aimed to deepen
		our understanding of the intricacies involved in writing code for a function to ensure
		proper functionality. Through this project, we were able to practice writing our own, more
  		complicated programs using the tools involved.


*******************
# How to install...

You can download the files from our [github repository.](https://github.com/michaellgans/holbertonschool-printf)

		- Once downloaded you can add these files to your working directory in order to use this
  		version of printf.

		- Please compile using the following format to capture all of the applicable .c files:

			gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

		- In your main program or other functions, you can now call the installed function by its name 
  		(_printf).  The function will execute its defined code and will return the length of the printed 
    		string if successful.


*******************************
# How to use _printf()...

		- As this is not the origional printf() function, we only support the following types
  		of format specifiers:

			%d or %i = signed numbers (0-9)
			%c = single character
			%s = string of characters

		- Upon successful return, all functions return the number of characters written, excluding the 
  		terminating null character ('\0') used to end the string.
  
<p align="center">The following is a flowchart following the workflow of _printf().</p>
![Flowchart for _printf()](https://github.com/michaellgans/holbertonschool-printf/assets/131380667/b0dc8d04-b24b-425e-b147-84cbab2be194)

<p align="center">The following is a diagram visualizing the theory behind variadic functions.</p>

![Variadic Machine](https://github.com/michaellgans/holbertonschool-printf/assets/131380667/f49eff86-5bfb-4f81-8445-2744bd4ed734)

********************************************
# Differences between this _printf() and the original printf()...

                - The primary distinction between our printf implementation and the original version
		lies in the level of functionality they offer. Given the time constraints, our printf
		was developed with a limited set of features and will not match the full functionality of
		the original printf. However, there is potential for further development to enhance our
		printf and bring it closer to the level of functionality offered by the original version.


**********************
# History of printf()...

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


		Probably the first copying of the syntax outside the C language was the Unix printf shell 
  		command, which first appeared in Version 4, as part of the port to C.[2]


Source Material Credit: [HISTORY OF PRINTF](https://en.wikipedia.org/wiki/Printf)
Origional printf() Code: [printf() code](http://sourceware.org/git/?p=glibc.git;a=blob;f=stdio-common/printf.c;h=4c8f3a2a0c38ab27a2eed4d2ff3b804980aa8f9f;hb=3321010338384ecdc6633a8b032bb0ed6aa9b19a)


***************
# Created by...

                - This project was created by Michael Gans and Chris Gillis. If you would like to get
                a hold of them please reach out via email to either michaellgans@hotmail.com or chris85gillis@gmail.com
