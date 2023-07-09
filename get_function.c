#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_function - Points to the corresponding function in formatFunction.
 * @symbol: Function indicator
 * Return: 0
 */

int (*get_function(char *symbol))(va_list args)
{
	/* Declare Variables */
	int x = 0;

	structNickname structArray[] = {
		{"c", formatCharacter},
		{NULL, NULL}
	};
	/* While the index of op does not = the sentinal value NULL. */
	while (structArray[x].operationPointer != NULL)
	{
		/* Do this action. */
		if (strcmp(symbol, structArray[x].operationPointer) == 0)
			return (structArray[x].functionPointer);
		x++;
	}

	return (NULL);
}
