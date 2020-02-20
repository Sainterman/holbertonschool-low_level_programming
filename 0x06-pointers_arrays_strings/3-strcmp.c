/**
 * _strcmp - comparre string @s1 with string @s2
 *
 *
 *
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	for (; s1[i] == s2[i]; i++)
		if (s1 == s2)
			return (0);
	return (s1[i] - s2[i]);
}
