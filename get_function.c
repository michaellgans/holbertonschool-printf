#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_function - Points to the corresponding function in formatFunction.
 * @id: Function indicator
 * Return: 0
 */

int (*get_function(char *id))(void *arg)
{
	format_t ids[] = {
		{"c", formatCharacter},
		{"s", formatString},
		{"d", formatDecimal},
		{"i", formatInteger},
		{NULL, NULL}
	};

	/* Find associated function by searching for the indicator. */
	int x;

	x = 0;

	/* While the index of op does not = the sentinal value NULL. */
	while (ids[x].id != NULL)
	{
		/* Do this action. */
		if (strcmp(s, ids[x].id) == 0)
			return (ids[x].fc);
		x++;
	}

	return (NULL);
}
