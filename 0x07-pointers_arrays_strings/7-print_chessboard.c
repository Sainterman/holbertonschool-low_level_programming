#include "holberton.h"
/**
 * print_chessboard - function that prints the chessboard.
 *
 * @a: pointer to first place of array size 8
 *
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	j = 0;
	for (; j < 8 ; j++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[j][i]);
		}
		_putchar('\n');
	}
}
