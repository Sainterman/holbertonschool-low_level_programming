/**
 * _strlen_recursion - length of a string. using recursion
 *
 * @s: pointer to begining of string
 *
 * Return: size of string
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s != '\0')
	{
		a = _strlen_recursion(s + 1);
		a++;
	}
	return (a);
}
