# include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - Prints the alphabets in lower case
 *
 * Return: none
 */
void print_alphabet(void)
{
	char a = 'a', z = 'z';

	while (a <= z)
	{
		putchar(a);
		a++;
	}

	putchar('\n');

}
