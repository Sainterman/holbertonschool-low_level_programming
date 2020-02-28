int test(int s, int j)
{
	if (j * j == s)
		return (j);
	else if (j >= s)
		return (-1);
	else
	{
		j++;
		return (test(s, j++));
	}
}
int _sqrt_recursion(int n)
{
	int y = 0;

	if (n < 0)
		return (-1);
	else
		return (test(n, y));
}
