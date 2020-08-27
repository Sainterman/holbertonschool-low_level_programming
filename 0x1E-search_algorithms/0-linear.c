#include "search_algos.h"

/**
 * linear_search - search value in array of ints
 * @array: address to start of array
 * @size: Size of array
 * @value: To search for
 * Return: Index of value if found, otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
