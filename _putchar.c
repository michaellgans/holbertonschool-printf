#include <unistd.h>
#include "main.h"

/**
 * _putchar - Whites a character to stdout
 * @c: Character to be printed
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
