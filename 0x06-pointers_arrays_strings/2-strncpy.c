#include "holberton.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	printf("debugueando perros: %s", dest);
	for ( ; i < n; i++)
		dest[i] = '\0';
	printf("Debugueando perro: %s", dest);
	return dest;
}