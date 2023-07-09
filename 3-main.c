#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: index of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, result;
	char *operationPointer;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operationPointer = argv[2];

	if (strcmp(operationPointer, "+") != 0
		&& strcmp(operationPointer, "-") != 0
		&& strcmp(operationPointer, "*") != 0
		&& strcmp(operationPointer, "/") != 0
		&& strcmp(operationPointer, "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(operationPointer, "/") == 0
		|| strcmp(operationPointer, "%") == 0) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/**
	 * a = atoi(argv[1]);
	 * b = atoi(argv[3]);
	 * op = argv[2];
	 */

	result = get_op_func(operationPointer)(a, b);
	printf("%i\n", result);

	return (0);
}
