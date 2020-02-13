#include "holberton.h"
/**
 * print_line - print @n underscore characters
 *
 *@n: length of underscore line
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
