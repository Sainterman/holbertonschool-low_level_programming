#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string that separates other strings, may be null
 * @n: Number of strngs to print
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *string;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char *);
		if (string == NULL)
			string = "(nil)";
		if (separator != NULL)
		{
			if (i < n - 1)
				printf("%s%s", string, separator);
			else
				printf("%s\n", string);
		}
		else
		{
			if (i < n - 1)
				printf("%s", string);
			else
				printf("%s\n", string);
		}
	}
	va_end(strings);
}
