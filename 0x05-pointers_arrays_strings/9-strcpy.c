/**
 * _strcpy - copy string in src to dest
 *
 * @dest: pointer where to copy string @src
 * @src: address of string to copy
 * Return: @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, n;

	while (src[i] != '\0')
	{
		i++;
	}

	for (n = 0; n < i; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}
