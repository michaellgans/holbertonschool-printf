#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct formatStructure_s - Structure for _printf.
 *
 * @operationPointer: Indicates which format to use.
 * @functionPointer: Associated function.
 *
 * Description: Longer description
 */

typedef struct formatStructure_s
{
	char *operationPointer;
	int (*functionPointer)(va_list args);
} structNickname_t;

/* Prototypes */

int _printf(const char *format, ...);
int formatCharacter(va_list args);
int (*get_function(char *symbol))(va_list args);

#endif
