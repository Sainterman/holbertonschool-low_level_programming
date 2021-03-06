#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of array to be allocated
 * @c: char to fill array
 * Return: pointer p to new array o NULL if not possible
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *) malloc(sizeof(c) * size);

	if (!p)
		return (NULL);

	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
