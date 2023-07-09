#ifndef MAIN_H
#define MAIN_H

/**
 * struct formatStructure - Structure for _printf.
 *
 * @operationPointer: Indicates which format to use.
 * @functionPointer: Associated function.
 *
 * Description: longer description
 *
 */

typedef struct formatStructure
{
	char *operationPointer;
	int (*functionPointer)(va_list args);
} structNickname;

/* Prototypes */

int _printf(const char *format, ...);
void formatCharacter(void *args);

#endif
