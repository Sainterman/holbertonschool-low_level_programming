#include <stdio.h>
/**
 * print_array - Print n elements of an array of integers
 *
 * @a: address of the array's start
 *
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
