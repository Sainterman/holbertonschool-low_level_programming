#include <stdio.h>
/**
 * main - print first argument passed to program
 * @argc: int unused
 * @argv: pointer to char holding arguments of the program
 * Return: always 0
 */
int main(__attribute__((unused)) int argc,  char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
