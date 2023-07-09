#ifndef HEAD_H
#define HEAD_H

/**
 * struct operationStructure - description
 *
 * @operationPointer: The operator
 * @functionPointer: The function used
 *
 * Description: Longer description
 */
typedef struct operationStructure
{
	char *operationPointer;
	int (*functionPointer)(int a, int b);
} structNickname;

/* prototypes? */

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *symbol))(int, int);

#endif
