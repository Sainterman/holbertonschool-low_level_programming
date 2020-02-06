#include<stdio.h>
/**
 * main- Entry point
 *
 * Return: Always
 */
int main(void)
{
	int i;
	int j;

	i = 48;
	while (i <= 57)
	{
		j = 48;
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			if (!(i == 57 && j == 57))
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
