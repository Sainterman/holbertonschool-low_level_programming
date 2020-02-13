#include "holberton.h"
/**
 *
 *
 *
 *
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			k = size - i;
			for(j = 0; j < k / 2; j++)
			{
				_putchar(' ');
			}
			for (j = k; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
