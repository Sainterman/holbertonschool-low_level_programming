/**
 * _pow_recursion - find value of @x raised to the power of @y
 * @x: integer holding value to be raised to the power of @y
 * @y: integer to raise @x
 * Return: 1 for x to the power of 0, -1 if @y negative, otherwise return x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
