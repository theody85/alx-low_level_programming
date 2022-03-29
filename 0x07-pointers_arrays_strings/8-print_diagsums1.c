#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: a square matrix
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum1 = 0;
	unsigned int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[size - 1 + (2 * i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
