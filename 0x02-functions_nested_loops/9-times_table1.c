#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: none
 */
void times_table(void)
{
	int i = 0, j, d;
	while (i <= 9)
	{
		for (j = 0;j <= 9;j++)
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
				_putchar(d + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((d / 10) + '0');
				_putchar((d % 10) + '0');
			}
		}
		_putchar('\n');
		i++;
	}
}	
