#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmeb: number of elements of array
 * @size: size of bytes of elements
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	
	if(nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	return (arr);
}
