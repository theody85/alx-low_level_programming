#include "search_algos.h"

/**
 * print_subarr - Prints a subarray between two indexes
 * @arr: Array of integers
 * @l: Left index
 * @r: Right index
 */
void print_subarr(int *arr, int l, int r)
{
	int i;
	char *sep = "";

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		printf("%s%d", sep, arr[i]);
		sep = ", ";
	}
	printf("\n");
}

/**
 * binary_search - Searches a value in an array of integers
 * @array: Array of integers
 * @size: Array's size
 * @value: Value to search
 *
 * Return: Index at which the value was found, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int mid, l = 0, r = (int)size - 1;

	if (!array)
		return (-1);

	while (l <= r)
	{
		print_subarr(array, l, r);
		mid = (l + r) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			r = mid - 1;
		else if (value > array[mid])
			l = mid + 1;
	}

	return (-1);
}
