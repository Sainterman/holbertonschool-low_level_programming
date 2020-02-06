#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always
 */
int main(void)
{
	int num;

	while (num <= 9)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
}
