unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	for (i = 0; s[i] != ' '; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				k++;
	return (k);
}
