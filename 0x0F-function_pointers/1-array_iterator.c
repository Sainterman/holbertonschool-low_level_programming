#include "function_pointers.h"
/**
 * array_iterator - run the function @action with each element in @array
 * of @size as parameter
 * @array: Address to array of ints
 * @size: length of array
 * @action: function to be used with arg @array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
