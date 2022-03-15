# include "main.h"

/**
 * print_alphabet_x10 - Prints 10x the alphabets in lower case
 *
 * Return: none
 */
void print_alphabet_x10(void)
{
	int n;


	for (n = 0; n < 10; n++)
	{
		char a = 'a', z = 'z';

		while (a <= z)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}

}
