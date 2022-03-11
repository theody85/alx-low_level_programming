# include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a = 'a', z = 'z', A = 'A', Z = 'Z';

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
