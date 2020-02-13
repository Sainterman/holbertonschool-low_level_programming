#include "holberton.h"
/**
 * print_to_98 - Print all integers betwen an int @n and 98
 *
 * @n: integer to start countog from to 98
 *
 *
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i >= 100)
			{
				_putchar(i / 100 + '0');
				_putchar((i / 10) % 10 + '0');
				_putchar(i % 10 + '0');
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			if (i != 98)
				_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			else if (i < 0 && i > -10)
			{
				_putchar('-');
				_putchar(-i % 10 + '0');
			}
			else if (i <= -10)
			{
				_putchar('-');
				_putchar(-i / 10 + '0');
				_putchar(-i % 10 + '0');
			}
			else
			{
				_putchar(i + '0');
			}
			if (i != 98)
				_putchar(',');
			_putchar(' ');
		}
	}
    	_putchar('\n');
}
