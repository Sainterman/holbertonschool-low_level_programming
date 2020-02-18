#include "holberton.h"
/**
 * _puts - print a string that starts at @str followed by a new line, to stdout
 *
 * @str: Addres to first char of string
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}