#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string that is used
 */
void puts_half(char *str)
{
	int i = 0, j, k;

	while (str[i] != '\0')
		i++;

	j = i / 2;
	k = (i - 2) / 2;

	if (i % 2 == 0)
	{

		while (j < i)
		{
			_putchar(str[j]);
			j++;
		}
	}
	else
	{
		while (k <= (i - 1))
		{
			_putchar(str[k]);
			k++;
		}
	}
	_putchar('\n');
}
