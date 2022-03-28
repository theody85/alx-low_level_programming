#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte.
 * @s: pointer to the memory location
 * @b: the constant byte
 * @n: number of spaces to be filled
 *
 * Return: the pointer to the address s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
