/**
 * _isalpha - check if the given int representation
 * of char is a letter.
 *
 * @c: ASCII value of a character
 *
 * Return: 1 if @c is a letter and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c <= 97 && c >= 65) || (c <= 122 && c >= 97))
		return (1);
	else
		return (0);
}
