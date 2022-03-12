# include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a = '0', z = '9', A = 'a', Z = 'f';

	while (a <= z)
	{
		putchar(a);
		a++;
	}

	while (A <= Z)
	{
		putchar(A);
		A++;
	}

	putchar('\n');
	return (0);
}
