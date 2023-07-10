#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 * struct structNickname - formats the argument based on the char after %.
 *
 * _printf - Prints user input.
 * @format: Specifies the format of the input given.
 * Return: Length of string printed.
 */
int _printf(const char *format, ...)
{
	/* Define Variables */
	va_list args;
	int x;
	size_t y;
	char operationPointer;
	struct formatStructure structArray[] = {
		{"c", formatCharacter},
		{NULL, NULL}
	};
	/* Initializing Varaibles */
	x = 0;
	va_start(args, format);
	/* Search for % */
	while (format[x] != '\0')
	{
		if (format[x] == '%')
		{
			/* Looking at character after % */
			operationPointer = (format[x + 1]);
			for (y = 0; structArray[y].operationPointer != NULL; y++)
			{
				if (strcmp(structArray[y].operationPointer, &operationPointer) == 0)
				{
					structArray[y].functionPointer(args);
					break;
				}
			}
			/* Doesn't print character */
			x++;
		}
		else
			putchar(format[x]);
		x++;
	}
	/* Finish looking for next variable */
	va_end(args);
	/* Return length of string printed */
	return (x);
}
