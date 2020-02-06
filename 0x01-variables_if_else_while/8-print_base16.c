#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always
 */
int main(void)
{
	char character;
	int num;
	for (num = 48; num <= 57; num++)
		putchar(num);
	for (character = 'a'; character <= 'f'; character++)
		putchar(character);
	putchar('\n');
	return (0);
}
