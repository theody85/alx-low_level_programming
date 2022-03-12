# include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a = 'a', z = 'z';

	while (z >= a)
	{
		putchar(z);
		z--;
	}

	putchar('\n');
	return (0);
}
