/**
 * _abs - check absolute value of int @a
 *
 * @a: Integer value to be evaluated
 *
 * Return: Returns absolute value of int @a, always positive integer
 */
int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (a * -1);
}
