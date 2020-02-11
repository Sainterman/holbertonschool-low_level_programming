#include "holberton.h"
/**
 * times_table - Printing the 9 times table starting with 0
 *
 *
 *
 *
 */
void times_table(void)
{
	int a, b, c, dec, un;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			dec = c / 10;
			un = c % 10;
			if (dec == 0)
			{
				if (b != 0)
					_putchar(' ');
				_putchar(un + '0');
				if (b != 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
			else
			{
				_putchar(dec + '0');
				_putchar(un + '0');
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	_putchar('\n');
	}
}
