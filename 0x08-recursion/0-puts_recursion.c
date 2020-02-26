#include "holberton.h"
/**
 * _puts_recursion - prints a string, followed by a new line. using recursion
 *
 * @s:  pointer to begginning of string
 *
 *
 *
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
