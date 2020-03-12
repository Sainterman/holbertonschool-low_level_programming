#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Calculate operation between 2 integers
 * @argc: Bumber of args
 * @arv: string of args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, answer;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation  = get_op_fun(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit (99);
	}

	answer = operation(num1, num2);
	printf("%d\n", answer);
	return (0);
}
