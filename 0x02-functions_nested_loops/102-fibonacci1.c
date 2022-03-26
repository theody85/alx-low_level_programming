#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers starting from 1 and 2
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 0;
	long int a = 1, b = 2, c;
	
	printf("%ld, %ld ", a, b);
	
	while (n < 48)
	{
		c = a + b;

		if (n == 47)
			printf("%ld\n", c);
		else
			printf("%ld, ", c);

		a = b;
		b = c;
		n++;

	}
	return (0);
}
