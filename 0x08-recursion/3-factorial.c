/**
 * factorial - returns the factorial of the number n
 *
 * @n: integer to be factorialized?
 *
 * Return: -1 if @n == 0, 1 if @n == 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
