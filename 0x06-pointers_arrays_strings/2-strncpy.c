#include "holberton.h"
/**
 * _strncpy - copy @n bytes from string on @src into @dest,
 * if @dest size < @n then put '\0' character
 *
 * @dest: address of destiny string
 *
 * @src: Address of string to copy @n bytes from to @dest
 *
 * @n: Number of bytes or chars to be copied into @dest
 *
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
