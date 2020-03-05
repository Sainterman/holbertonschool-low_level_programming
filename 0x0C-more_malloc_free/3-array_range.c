#include <stdlib.h>
/**
 * array_range - reates an array of integers.
 * The array created should contain all the values from min (included)
 * to max (included), ordered from min to max
 * @min: minimum range
 * @max:  maximim number in array bro
 * Return: address of ints array
 */

int *array_range(int min, int max)
{
	int *array, size, i;

	if (min > max)
		return (NULL);

	size = max - min;
	array = malloc(sizeof(int) * (size + 1));

	if (!array)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
