/**
 * _strstr - The _strstr() function finds the first occurrence of the substring
 * needle in the string haystack. The terminating null bytes (\0)
 * are not compared
 *
 * @haystack: pointer to string where to find the @needle
 * @needle: pointer to string to find in @haystack
 * Return: Returns a pointer to the beginning of the located substring, or NULL
 * if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int j, i;
	char *p;

	i = 0;
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			p = &haystack[i];
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (needle[j] != haystack[i + j])
					break;
			}
			if (needle[j] == '\0')
				return (p);
		}
		i++;
	}
	if (needle[j] == '\0')
		return (haystack);
	return ('\0');
}
