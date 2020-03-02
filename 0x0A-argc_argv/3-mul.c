#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 integers
 * @argc: integr with number of args, desired 3 to multiply argv[1] by argv[2]
 * @argv: pointer to first char in args string
 * Return: 1 if more than 1 number, else return multiplication of 2 integers
 */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
