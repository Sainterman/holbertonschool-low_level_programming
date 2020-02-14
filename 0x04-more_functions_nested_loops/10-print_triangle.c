#include "holberton.h"
/**
 * print_triangle - draw a triangle made of # chars in @size returns
 *
 * @size: size of triangle integer
 *
 */
void print_triangle(int size)
{
	int i, j, aux;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				aux = size - i - 1;
				if (j < aux)
				{
					_putchar(' ');
				}
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
