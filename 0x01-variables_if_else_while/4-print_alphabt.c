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
		if ((a != 'e') && (a != 'q'))
		{
			putchar(a);
			a++;
		}
		else
		{
			a++;
		}
	}

	putchar('\n');
	return (0);
}
