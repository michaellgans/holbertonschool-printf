#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - gets the operation
 * @symbol: operation
 * Return: result
 */

int (*get_op_func(char *symbol))(int, int)
{
	structNickname structArray[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	/* While the index of op does not = the sentinal value NULL */
	while (structArray[i].operationPointer != NULL)
	{
		/* do this */
		if (strcmp(symbol, structArray[i].operationPointer) == 0)
			return (structArray[i].functionPointer);
		i++;
	}

	return (NULL);
}
