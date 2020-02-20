/**
 * string_toupper - change lowercase characters to uppercase
 *
 * @str: address string to cnvert to uppercase
 *
 * Return: Address of the string converted
 *
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
		i++;
	}
	return (str);
}
