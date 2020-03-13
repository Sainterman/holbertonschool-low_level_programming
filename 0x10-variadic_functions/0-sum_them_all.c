#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int j;
	int suma;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		suma += va_arg(args, int);
	}
	va_end(args);
	return (suma);
}
