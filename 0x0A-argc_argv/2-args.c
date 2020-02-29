#include <stdio.h>
/*
 * main - print all arguments the program recieves
 * @argc: integer number of arguments
 * @argv: pointer to first char in string of argments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
