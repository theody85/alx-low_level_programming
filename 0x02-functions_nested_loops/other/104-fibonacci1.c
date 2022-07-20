#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers starting from 1 and 2
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 1;
	unsigned long int a = 1, b = 2, c;
	
	while (n <= 98)
	{

		if (n == 98)
			printf("%lu\n", a);
		else
			printf("%lu, ", a);

		c = a + b;
		a = b;
		b = c;
		n++;

	}
	return (0);
}
