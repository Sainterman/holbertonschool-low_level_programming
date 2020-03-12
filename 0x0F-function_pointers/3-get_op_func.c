#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
/**
 * get_op_func - Get function operation based on char @s
 * @s: address of char with operation passed in main
 *
 * Return: Address to function with operation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i])
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			break;
		}
		i++;
	}
	return (ops[i].f);
}
