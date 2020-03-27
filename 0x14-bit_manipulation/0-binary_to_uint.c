#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: address of sting with binary number
 * Return: Integer value of binary number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i = 0, j = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		if (b[j] == '1')
			number += 1 << i;
		else if (b[j] != '0')
			return (0);

		j++;
	}

	return (number);
}
