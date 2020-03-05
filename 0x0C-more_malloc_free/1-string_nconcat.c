#include <stdlib.h>

/**
 * _strlen - Returns the length of a string.
 *
 * @s: address of first character in string.
 *
 * Return: integer length of a string.
 */

unsigned int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;
	return (i);
}

/**
 * string_nconcat - Prototype:
 * char *string_nconcat(char *s1, char *s2, unsigned int n);
 * The returned pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 * @s1: Address of string 1
 * @s2: Address of string 2
 * @n: Number of bytes to be concatenated from @s2 to @s1
 * in a new pointer to char
 *
 * Return: Null if not possible, Pointer to new concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int size, i;

	if (_strlen(s2) <= n)
	{
		size = _strlen(s2) + _strlen(s1) + 1;
	}
	else
		size = _strlen(s1) + n + 1;

	if (s1 == NULL)
		*s1 = "";

	if (s2 == NULL)
		*s2 = "";

	concatenated = malloc(sizeof(char) * size);

	if (!concatenated)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		if (i < _strlen(s1))
			concatenated[i] = s1[i];
		else
			concatenated[i] = s2[i - _strlen(s2)];
	}
	concatenated[i] = '\0';

	return (concatenated);
}
