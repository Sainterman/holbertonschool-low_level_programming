/**
 * cap_string - capitalize all words on a string
 * @str: stringg to be proceses
 * Return: address to string changed
 */
char *cap_string(char *str)
{
	int i, j;
	char space[] = {32, '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
			'}', '{' };

	i = 0;
	j = 0;

	while(str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;

		for (; j <= 12; j++)
		{
			if (space[j] == str[i])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
		i++;
	}

	return (str);
}
