/**
 * _strcpy - copy string in src to dest
 *
 * @dest: pointer where to copy string @src
 * @src: address of string to copy
 * Retun: @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src)
	{
		*(dest + i) = *src;
		i++;
		src++;
	}

	return (dest);
}
