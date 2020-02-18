#include "holberton.h"

/**
 * puts_half - Print half of a string followed by new line
 *
 * @str: address of first element in string to be printed
 *
 */

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;

	i--;
	for (j = i / 2 + 1; j <= i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
