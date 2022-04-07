#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of the memory
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
