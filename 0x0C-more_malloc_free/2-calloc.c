#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements in array
 * @size: number of bytes per element in array
 *
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (!array)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		array[i] = 0;

	return (array);
}
