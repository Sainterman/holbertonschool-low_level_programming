#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings.
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, f;
	char *concatenated;

	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	concatenated = malloc(sizeof(char) * (i + j) + 1);

	if (!concatenated)
		return (NULL);

	for (k = 0; k < i; k++)
		concatenated[k] = s1[k];

	for (f = 0; f <= j; f++)
		concatenated[k + f] = s2[f];

	return (concatenated);
}
