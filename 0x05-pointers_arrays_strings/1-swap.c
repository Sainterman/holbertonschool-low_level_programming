/**
 * swap_int - swaps the value of two integers
 *
 * @a: address of int to be swaped with int on @b address
 *
 * @b: to be swapped @a.
 *
 */

void swap_int(int *a, int *b)
{
	int b1;

	b1 = *b;
	*b = *a;
	*a = b1;
}
