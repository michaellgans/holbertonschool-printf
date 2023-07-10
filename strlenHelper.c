#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: String to be measured
 * Return: length
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * _strlenc - Returns the length of a string while using constants.
 * @s: string to be measured
 * Return: length
 */

int _strlenc(const char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
