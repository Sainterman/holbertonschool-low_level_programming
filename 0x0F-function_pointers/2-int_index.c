#include "function_pointers.h"
/**
 * int_index - function thar searches for a integer @array of @size
 * using function @cmp
 * @array: group of integers to be compared
 * @size: length of @array
 * @cmp: function to be used with ints from @array
 * Return: returns the index of the first element for which
 * the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (array == NULL || cmp == NULL)
		return 0;
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
