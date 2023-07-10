#include "main.h"

/**
 * _printf - Prints a string to stdout, and formats it as instructed by user.
 * @format: string to be printed
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	structNickname a[] = {
		{"%s", formatString},
		{"%c", formatCharacter},
		{"%i", formatNumber},
		{"%d", formatNumber},
		{"%%", print_37},
		{NULL, NULL}
	};

	va_list args;
	int x, y, length = 0;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[x] != '\0')
	{
		y = 4;
		while (y >= 0)
		{
			if (a[y].convPtr[0] == format[x] && a[y].convPtr[0] == format[x + 1])
			{
				length += a[y].funcPtr(args);
				x = x + 2;
				goto Here;
			}
			y--;
		}
		_putchar(format[x]);
		length++;
		x++;
	}
	va_end(args);
	return (length);
}
