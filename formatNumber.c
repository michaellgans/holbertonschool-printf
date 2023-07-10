#include "main.h"

/**
 * formatNumber - prints an int passed to it by the next arg in va_list
 * @args: next argument
 * Return: number of characters printed
 */

int formatNumber(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int x = 1;

	n = n / 10;
	num = n;

	/* Negative Numbers */
	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		x++;
	}
	/* Positive Numbers */
	if (num > 0)
	{
		/* Multi-Digit Numbers */
		while ((num / 10) != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		/* Number of digits needed to be printed */
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			x++;
		}
	}
	_putchar(last + '0');

	return (x);
}
