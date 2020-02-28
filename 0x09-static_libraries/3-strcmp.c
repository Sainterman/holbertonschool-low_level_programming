/**
 * _strcmp - comparre string @s1 with string @s2
 *
 * @s1: address of string to be compared with string @s2
 *
 * @s2: address of string to be comp with @s1
 *
 * Return: difference between ascii values where the string differs or 0 if
 * is the same
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
