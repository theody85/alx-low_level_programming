int natural_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number whose square root is to be found
 * Return: the natural square root otherwise -1
 */
int _sqrt_recursion(int n)
{
	return (natural_sqrt_recursion(n, 0));
}
/**
 * natural_sqrt_recursion - calculates the natural square root of a number
 * @n: the number
 * @i: the iterator
 * Return: the natural square root
 */
int natural_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (natural_sqrt_recursion(n, i + 1));
}
