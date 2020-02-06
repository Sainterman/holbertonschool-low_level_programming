#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always
 */
int main(void)
{
	char character;

	for (character = '0'; character <= '9'; character++)
		putchar(character);
	putchar('\n');
	return (0);
}
