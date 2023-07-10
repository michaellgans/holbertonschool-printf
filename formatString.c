#include "main.h"

/**
 * formatString - Prints a string passed to it from the user.
 * @args: argument
 * Return: length of string
 */

int formatString(va_list args)
{
	/* Declare Variables */
	char *a;
	int x, length;
	/* Initialize Variables */
	a = va_arg(args, char *);

	if (a == NULL)
	{
		a = "(null)";
		length = _strlen(a);

		for (x = 0; x < length; x++)
			_putchar(a[x]);

		return (length);
	}
	else
	{
		length = _strlen(a);

		for (x = 0; x < length; x++)
			_putchar(a[x]);

		return (length);
	}
}
