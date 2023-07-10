#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct formatStructure - Structure for _printf.
 * @operationPointer: Indicates which format to use.
 * @functionPointer: Associated function.
 */

typedef struct formatStructure
{
	char *operationPointer;
	int (*functionPointer)(va_list args);
} structNickname;

/* Prototypes */

int _printf(const char *format, ...);
int formatCharacter(va_list args);

#endif
