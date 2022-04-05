#include <stdio.h>
#include <stdlib.h>

int fill_arr(char *arr, unsigned int size, char c, unsigned int i);
/**
 * create_array - an array of chars
 * @size: size of array
 * @c: character to be initialized with
 *
 * Return: NULL if size is 0, otherwise pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *arr;

		arr = malloc(sizeof(char) * size);
		fill_arr(arr, size, c, 0);

		return (arr);
	}

	return (NULL);
}
/**
 * fill_arr - initializes an array with a character
 * @arr: the array
 * @size: the size of the array
 * @c: the character to be initialized
 * @i: the iterator
 *
 * Return: the initialized array
 */
int fill_arr(char *arr, unsigned int size, char c, unsigned int i)
{
	if(i == size)
		return (1);
	*(arr + i) = c;

	return (1 * fill_arr(arr , size, c, i + 1));
}
