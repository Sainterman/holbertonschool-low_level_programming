/**
 * _strpbrk - The _strpbrk() function locates the first occurrence in the
 * string s of any of the bytes in the string accept
 *
 * @s: pointer to first char in string to locate the first ocurrence
 * @accept: pointer to string to compare from
 *
 * Return: Returns a pointer to the byte in @s that matches one of the bytes in
 * @accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return ('\0');
}
