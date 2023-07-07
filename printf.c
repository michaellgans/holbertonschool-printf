#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints user input
 * @format: specifies that format of the input given
 * Return: Length of string
 */

int _printf(const char *format, ...)
{
	/* Define Variables */
	va_list args;
	int x, length;
	/* Initializing Varaibles */
	va_start(args, format);
	x = 0;
	length = strlen(format);
	/* Look for next argument */
	/* va_arg(args, int); */

	/* Print characters */
	while (format != NULL && format[x] != '\0')
	{
		if (x == '%')
		{
			x++;
			putchar(x);
		}
		putchar(format[x]);
		x++;
	}
	/* Finish looking for next variable */
	va_end(args);

	/* Return length of string printed */
	return (length);
}
