# include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 0, s;

	while (n <= 9)
	{
		for (s = 0; s <= 9; s++)
		{
			if (n < s)
			{
				putchar(n + '0');
				putchar(s + '0');
				if (n != 8 || (n == 8 && s != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		n++;
	}
	putchar('\n');

	return (0);
}
