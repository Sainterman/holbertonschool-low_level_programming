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
	int i, needleLength, j;

	while (needle[needleLength])
		needleLength++;

	needleLength--;

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i - 1] == ' ' || i == 0)
		{
			for (j = 0; haystack[i] == needle[j]; j++)
			{
				i++;
			}
			if (j - 1 == needleLength)
			{
				return (&haystack[i]);
			}
		}
	}
	return ('\0');
}
