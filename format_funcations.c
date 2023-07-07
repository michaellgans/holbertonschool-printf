#include "main.h"

/**
 * formatCharacter - changes printf input to data type char
 * @arg: user's input
 */

void formatCharacter(void *arg)
{
	int x;
	char *var;

	var = (char *)arg;
	for (x = 0; var[x] != '\0'; x++)
		putchar(var[x]);
}
/**
 * formatString - intakes integer's and changes to char
 * @arg: user's input
 */
void formatString(void *arg)
{
	int x;
	char *var;

	var = (char *)arg;
	for (x = 0; var[x] != '\0'; x++)
		putchar(var[x]);
}
/**
 * formatDecimal - takes printf input to data type decimal
 * @arg: user's input
 */
void formatDecimal(void *arg)
{
	int x;
	char *var;

	var = (int *)arg;
	for (x = 0; var[x] != '\0'; x++)
	putchar(var[x]);
}
/**
 * formatInteger - takes printf input to data type int
 * @arg: user's input
 */
void formatInteger(void *arg)
{
	int x;
	char *var;

	var = (int *)arg;
	for (x = 0; var[x] != '\0'; x++)
		putchar(var[x]);
}
