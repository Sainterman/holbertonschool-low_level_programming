#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adding @a + @b
 * @a: integer
 * @b: integer
 * Return: @a + @b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substracting @a - @b
 * @a: integer
 * @b: integer
 * Return: @a - @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplying @a times @b
 * @a: integer
 * @b: integer
 * Return: @a * @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - dividing @a  by @b
 * @a: integer
 * @b: integer
 * Return: @a / @b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - @a modulo @b
 * @a: integer
 * @b: integer
 * Return: @a % @b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
