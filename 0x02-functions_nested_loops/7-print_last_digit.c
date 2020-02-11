#include "holberton.h"
/**
 * print_last_digit - print
 *
 * @n: Integer value to be processed and % 10 to get its last digit
 *
 * Return: integer value of the last digit of @n
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a >= 0)
	{
		_putchar(a + '0');
		return (a);
	}
	else
	{
		a = -a;
		_putchar(a + '0');
		return (a);
	}
}
