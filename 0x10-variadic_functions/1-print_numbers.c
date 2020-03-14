#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: String to separate each number
 * @n: Amount of numbers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	if (n == 0)
		return;

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			if (i < n - 1)
				printf("%d%s", va_arg(numbers, int), separator);
			else
				printf("%d\n", va_arg(numbers, int));
		}
		else
		{
			if (i < n - 1)
				printf("%d", va_arg(numbers, int));
			else
				printf("%d\n", va_arg(numbers, int));
		}
	}
	va_end(numbers);
}
