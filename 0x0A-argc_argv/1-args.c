#include <stdio.h>
/**
 * main - print number of arguments passed to program
 * @argc: size of argv string
 * @argv: unused
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
