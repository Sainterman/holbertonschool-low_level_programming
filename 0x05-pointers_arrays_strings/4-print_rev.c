#include "holberton.h"

/**
 * _strlen - return size of string @s
 *
 * @s: address to first char of string
 *
 * Return: Size of string that begins on @s
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * print_rev - prints a string in reverse fllowd by new line
 *
 * @s: address to first char of string
 *
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	i--;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
