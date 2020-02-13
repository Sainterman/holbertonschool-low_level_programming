#include "holberton.h"
/**
 * more_numbers - print numbers from 0 to 14
 *
 */
void more_numbers(void)
{
	int i, number;

	for (i = 0; i <= 9; i++)
	{
		for (number = 0; number < 15; number++)
		{
			if (number >= 10)
			{
				_putchar(number / 10 + '0');
			}
			_putchar(number % 10 + '0');
		}
		_putchar('\n');
	}
}
