/**
 * test - guess sqrt
 *
 * @s: number to find sqrt
 * @j: guess
 *
 * Return: sqrt of s
 */
int test(int s, int j)
{
	if (j * j == s)
		return (j);
	else if (j >= s)
		return (-1);
	j++;
	return (test(s, j++));
}
/**
 * _sqrt_recursion - calculates square rtoot of integer number if rational sqrt
 * @n:integer to calculate square root from
 *
 * Return: sqrt of n or -1 if not possible
 */
int _sqrt_recursion(int n)
{
	int y = 0;

	if (n < 0)
		return (-1);
	else
		return (test(n, y));
}
