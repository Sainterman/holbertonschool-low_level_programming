/**
 * _islower - function that checks for lowercase character.
 * @c: the ASCII decimal value of a letter
 *
 * Return: Returns 1 if letter is lowercase and 0 if upper
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
