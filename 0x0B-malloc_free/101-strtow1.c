#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: the string to be splitted
 *
 * Return: an array of pointers to the words
 */
char **strtow(char *str)
{
	int i, j , len;
	char **arr;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			len++;
	}

