#include "search_algos.h"
/**
 * binary_search - divide and conquer
 * @array: where to search
 * @size: how much items in array
 * @value: what to search
 * Return: Index of element in array or
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid = 0, low = 0, high = size - 1, i = 0;

	if (!array)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = (low + high) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			high = mid - 1;
		else if (value > array[mid])
			low = mid + 1;
	}
	return (-1);
}
