#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: the number of arguments passed
 * @argv: an array of pointers that store the arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv);
	       	argv++;
	}
	return (0);
}

