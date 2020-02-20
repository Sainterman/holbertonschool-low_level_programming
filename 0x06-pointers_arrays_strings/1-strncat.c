#include "holberton.h"
/**
 * _strncat - concatenate @n bytes from @src to @dest
 *
 * @src: address of string to be concatenated into @dest
 *
 * @dest: address of string to be concatenated with @n bytes from @src
 *
 * @n: number of bytes(characters) to be concatenated form @src into @dest
 *
 * Return: @dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;

	for (j = 0 ; j < n && src[j] != '\0' ; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';

	return (dest);

}
