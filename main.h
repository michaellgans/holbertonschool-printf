#ifndef MAIN_H
#define MAIN_H

/* Included library in header for streamlined functions */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - links conversion identifier to function used.
 * @convPtr: points to the identifier used to format.
 * @funcPtr: points to the function used to format.
 */

typedef struct format
{
	char *convPtr;
	int (*funcPtr)();
} Nickname;

/* Prototypes */
int _printf(const char *format, ...);
int formatCharacter(va_list args);
int formatString(va_list args);
int formatNumber(va_list args);
int print_37(void);
int _strlen(char *s);
int _strlenc(const char *s);
int _putchar(char c);

#endif
