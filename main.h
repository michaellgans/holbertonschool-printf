#ifndef MAIN_H
#define MAIN_H

/**
 * struct format - Structure for _printf.
 *
 * @id: Indicates which format to use.
 * @fc: Associated function.
 */

typedef struct format
{
	char *id;
	int (*fc)(void *arg);
} format_t;

/* Prototypes */

int _printf(const char *format, ...);
void formatCharacter(void *arg);
void formatString(void *arg);
void formatDecimal(void *arg);
void formatInteger(void *arg);

#endif
