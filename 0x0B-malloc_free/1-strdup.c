#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: address of striong to copy
 *
 * Return: address of duplicate string
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i = 0, j = 0;

	if (!str)
		return (NULL);

	while (str[i] != '\0')
		i++;

	duplicate = (char *) malloc(1 + sizeof(char) * i);

	if (!duplicate)
		return (NULL);

	for (j = 0; j <= i; j++)
	{
		duplicate[j] = str[j];
	}

	return (duplicate);
}
