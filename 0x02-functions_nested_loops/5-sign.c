#include "holberton.h"
/**
 * print_sign - return 1, 0 or -1 for positive, zero or negative
 * integer respectively
 *
 * @n: Integer value to be checked for negative or positive sign
 *
 * Return: 1 for positive int, 0 for integer 0 and -1 for nevative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
