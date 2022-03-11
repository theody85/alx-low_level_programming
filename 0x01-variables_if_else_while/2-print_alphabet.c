# include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a = 'a', z = 'z';

	while (a <= z)
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
