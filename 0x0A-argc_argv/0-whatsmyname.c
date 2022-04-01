#include <stdio.h>

/**
 * main - A program that prints its name
 * @argc: The size of the array agrv
 * @argv: An array of pointers to char
 *
 * Return: 0 on success
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
