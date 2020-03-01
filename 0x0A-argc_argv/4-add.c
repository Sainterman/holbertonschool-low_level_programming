#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - add arguments that are numbers
 *
 * @argc: integer number of arguments to be added
 * @argv: pointer to string of arguments
 *
 * Return: 0 if no args, 1 IF not possible and sum if succesful
 */

int main(int argc, char *argv[])
{
	int i, sum, j;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (isdigit(argv[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (sum);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
