/**
 * _memcpy - The _memcpy() function copies n bytes from memory area src
 * to memory area dest
 *
 * @dest: Where to copy into
 * @src: where to copy from
 * @n: Number of bytes from @src to copy into @dest
 *
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
