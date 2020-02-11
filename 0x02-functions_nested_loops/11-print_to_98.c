#include "holberton.h"
/**
 *
 *
 *
 *
 *
 */
void print_to_98(int n)
{
	int i,s;

	if (n > 98)
	{
		for(i = n; i >= 98; i--)
		{
			if(n >= 100)
			{
				_putchar(n / 100 + '0');
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
				_putchar(' ');
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
				_putchar(' ');
			}
			_putchar(',')
		}
	}
	

	_putchar('\n');
}
