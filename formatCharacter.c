#include "main.h"

/**
 * formatCharacter - Prints a character.
 * @args: Argument passed by user.
 * Return: 1
 */

int formatCharacter(va_list args)
{
	char x;

	x = va_arg(args, int);
	_putchar(x);

	return (1);
}
