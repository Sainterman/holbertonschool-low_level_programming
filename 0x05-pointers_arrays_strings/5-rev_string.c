#include "holberton.h"

/**
 * _strlen - Returns the length of a string.
 *
 * @s: address of first character in string.
 *
 * Return: integer length of a string.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * rev_string - reverse string that starts in @s address
 *
 * @s: address of string
 */
void rev_string(char *s)
{
	int i, j;
	char p;

	i = _strlen(s);
	i--;
	for (j = 0; j < i; j++)
	{
		p = s[i];
		s[i] = s[j];
		s[j] = p;
		i--;
	}
}
