# include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 0, s, m;

	while (n <= 9)
	{
		for (s = 0; s <= 9; s++)
		{
			for (m = 0; m <= 9; m++)
			{	
				if ((n < s) && (s < m))
				{
					putchar(n + '0');
					putchar(s + '0');
					putchar(m + '0');
					if (n != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		n++;
	}
	putchar('\n');

	return (0);
}
