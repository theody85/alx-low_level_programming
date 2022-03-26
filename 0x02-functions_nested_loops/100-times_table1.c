#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the number of times
 */
void print_times_table(int n)
{
	int i, j, d;
	
	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				d = i * j;

				if (j == 0)
				{
					_putchar(d + '0');

				}
				else if (j > 0 && d <= 9)
				{

					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(d + '0');
				}
				else if (d >= 10 && d <= 99)
				{

					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((d / 10) + '0');
					_putchar((d % 10) + '0');
				}
				else if (d >= 100 && d <= 999)
				{

					int r = d % 100;
					_putchar(',');
					_putchar(' ');
					_putchar((d / 100) + '0');
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				
				}
			}
			_putchar('\n');
		}
	}
}
