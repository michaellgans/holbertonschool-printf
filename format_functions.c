#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * formatCharacter - changes printf input to data type char
 * @args: user's input
 * @return: 1
 */
int formatCharacter(va_list args)
{
	char letter = va_arg(args, int);
	putchar(letter);

	return(1);
}
