#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: the size of array argv
 * @argv: an array of pointers
 * Return: 0 (Success)
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
