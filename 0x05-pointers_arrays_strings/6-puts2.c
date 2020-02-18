#include "holberton.h"
/**
 * puts2 - print every other character of a string
 *
 * @str: address of the first element of string
 *
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
