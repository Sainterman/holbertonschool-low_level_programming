#include "holberton.h"
/**
 * _print_rev_recursion - print string in reverse using recursion
 *
 * @s: pointer to beggining of string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion((void *)(s + 1));
		_putchar(*s);
	}
}
