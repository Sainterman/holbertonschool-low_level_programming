/**
 * reverse_array - revers an array of ints
 *
 * @a: Address of the first element in array of ints
 *
 * @n: size of array of ints
 */
void reverse_array(int *a, int n)
{
	int i, aux;

	aux = 0;
	n--;
	for (i = 0; i < n; i++)
	{
		aux = a[i];
		a[i] = a[n];
		a[n] = aux;
		n--;
	}
}
