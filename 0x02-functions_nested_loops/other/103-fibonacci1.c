#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers starting from 1 and 2
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 1;
	long int a = 1, b = 2, c, sum = 0;
	
	while (n <= 50)
	{

		if ((a <= 4000000) && (a % 2 == 0))
		{
			sum += a;
		}

		c = a + b;
		a = b;
		b = c;
		
		n++;
	}
	printf("%ld\n", sum);
	return (0);
}
