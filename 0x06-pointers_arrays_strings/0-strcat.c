#include "holberton.h"

/**
 * _strcat - concatenate string @src to another string @dest
 *
 * @src: address of string to concat
 *
 * @dest: addres of String to concat into
 *
 * Return: @dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i])
		i++;

	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);


}
