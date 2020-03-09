#ifndef __FILE__
#define __FILE__
#endif
#include  <stdio.h>

/**
 * main - return the name of the current file
 *
 * Return: 0
 */

int main(void)
{
	char *filename = __FILE__;

	printf("%s\n", filename);
	return (0);
}
