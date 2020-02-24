/**
 * -strspn - gets the length of a prefix substring.
 *
 * @s: pointer to string to compare it's prefix substring
 * @accept: pointer to string that contains characters
 *
 * Return: Returns the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			break;

		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				k++;
	}
	return (k);
}
