#include <stdlib.h>
#include <stdio.h>

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, f;
	char *concatenated;

	i = 0;
	j = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	concatenated = malloc(sizeof(char) * (i + j + 2));

	if (!concatenated)
		return (NULL);

	for (k = 0; k < i; k++)
		concatenated[k] = s1[k];

	for (f = 0; f < j; f++)
		concatenated[k + f] = s2[f];

	return (concatenated);
}
