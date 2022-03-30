int _natural_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number whose square root is to be found
 *
 * Return: the square root of the number
 */
int _sqrt_recursion(int n)
{
	return (_natural_sqrt_recursion(n, 0));

}

/**
 * _natural_sqrt_recursion - calculates the natural square root.
 * @n: the number whose square root is to be found
 * @i: iterator
 *
 * Return: the resulting square root
 */
int _natural_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_natural_sqrt_recursion(n, i + 1));
}
