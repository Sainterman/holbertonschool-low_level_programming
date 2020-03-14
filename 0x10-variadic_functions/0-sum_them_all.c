#include <stdarg.h>

/**
 * sum_them_all -  function that returns the sum of all its parameters.
 *
 * @n: amount of numbers to be sumed
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	int suma = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		suma += va_arg(args, int);
	}
	va_end(args);
	return (suma);
}
