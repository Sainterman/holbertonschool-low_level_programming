#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything.
 * @format: address to string of formats
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list prints;
	char *string, w;
	int i = 0;

	va_start(prints, format);
	while (format[i] != '\0')
	{

		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(prints, int));
			break;
		case 'i':
			printf("%d", va_arg(prints, int));
			break;
		case 'f':
			printf("%f", va_arg(prints, double));
			break;
		case 's':
			string = va_arg(prints, char *);
			if (string == NULL)
				string = "(nil)";
			printf("%s", string);
			break;
		default:
			break;
		}
		i++;
		w = format[i];
		if ((w != '\0') &&
		    (w == 'c' || w == 'i' || w == 'f' || w == 's'))
			printf(", ");
	}
	printf("\n");
	va_end(prints);
}
