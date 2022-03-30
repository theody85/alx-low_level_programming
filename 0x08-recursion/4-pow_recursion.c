/**
 * _pow_recursion - return the value of x raised to the power y
 * @x: the value
 * @y: the power
 *
 * Return: the value raised to the power
 */
int _pow_recursion(int x, int y)
{
	if (y <= 0)
	{
		if (y == 0)
			return (1);
		return (-1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
