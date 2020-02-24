/**
 * _strchr - locates a character in a string.
 *
 * @s: pointer to first char on string
 * @c: char to be found in @s string
 *
 * Return: pointer to the first occurence of character in string
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	if (s[i] == '\0')
		return (&s[i]);
	return ('\0');
}
