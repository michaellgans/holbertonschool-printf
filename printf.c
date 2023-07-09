#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - Prints user input.
 * @format: Specifies the format of the input given.
 * Return: Length of string printed.
 */

int _printf(const char *format, ...)
{
	/* Define Variables */
	va_list args;
	int x, y, length;
	char id;

	/* Initializing Varaibles */
	x = 0;
	length = strlen(format);
	va_start(args, format);

	while (format[x] != '\0')
	{
		if (format[x] == '%')
		{
			/* Looking at character after % */
			id = (format[x + 1]);

			for (y = 0; y < sizeof(structArray) / sizeof(structArray[0]); y++)
			{
				if (structArray[y].operationPointer == operationPointer)
				{
					structArray[y].functionPointer(args);
					break;
				}
			}
			/* Doesn't print character */
			x++;
		}
		else
		{
        		putchar(format[x]);
		}
		x++;
	}
	/* Finish looking for next variable */
	va_end(args);

	/* Return length of string printed */
	return (length);
}
