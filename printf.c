#include "main.h"

/**
 * _printf - Prints a string to stdout, and formats it as instructed by user.
 * @format: string to be printed
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	/* Array of Structs */
	Nickname a[] = {
		{"%s", formatString},
		{"%c", formatCharacter},
		{"%i", formatNumber},
		{"%d", formatNumber},
		{"%%", print_37}
	};
	/* Gives input to the macro */
	va_list args;
	int x = 0, y, length = 0;
	/* Starts the macro at the last known VAR */
	va_start(args, format);
	/* If NULL or single %, return -1, indicating Error */
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	/* Look for end of string */
	while (format[x] != '\0')
	{
		y = 4;
		while (y >= 0)
		{
			/* Looks at 2 characters at a time. */
			if (a[y].convPtr[0] == format[x]
				&& a[y].convPtr[1] == format[x + 1])
			{
				/* Perform function on VAR */
				length += a[y].funcPtr(args);
				x = x + 2;
				/* Start OUTER loop again without finishing inner */
				goto Here;
			}
			y--;
		}
		_putchar(format[x]);
		length++;
		x++;
	}
	/* Stops variadic process */
	va_end(args);
	/* Returns length of printed characters */
	return (length);
}
