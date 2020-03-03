/**
 * _strcpy - copy string in src to dest
 *
 * @dest: pointer where to copy string @src
 * @src: address of string to copy
 * Return: @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (src[0] == '\0')
		dest[0] = '\0';

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
