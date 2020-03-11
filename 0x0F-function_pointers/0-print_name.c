#include <stdio.h>
/**
 * print_name - prints a name
 * @name:
 * @f: address of function, pointer to function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
