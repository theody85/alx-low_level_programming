#include <stdlib.h>

int str_fill(char *src, char *dest, unsigned int i, unsigned int j, int k);
unsigned int _strlen(char *s, unsigned int i);

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: the length of s2 to be added
 *
 * Return: the new concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len1, len2, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1, 0);
	len2 = _strlen(s2, 0);

	if (n >= len2)
		n = len2;

	len = len1 + n + 1;

	s = malloc(sizeof(*s) * len);

	if (s == NULL)
		return (NULL);

	str_fill(s1, s, 0, len1, 0);
	str_fill(s2, s, len1, len - 1, 0);
	s[len] = '\0';

	return (s);

}
/**
 * str_fill - copies a string to a new destination
 * @src: the string to be copied
 * @dest: the copied string
 * @i: the start
 * @j: the stop
 * @k: the iterator
 *
 * Return: the copied string
 */
int str_fill(char *src, char *dest, unsigned int i, unsigned int j, int k)
{
	if (i == j)
		return (1);
	*(dest + i) = *(src + k);
	return (1 * str_fill(src, dest, i + 1, j, k + 1));
}
/**
 * _strlen - checks for the length of a string
 * @s: the string
 * @i: the iterator
 *
 * Return: the length of the string
 */
unsigned int _strlen(char *s, unsigned int i)
{
	if (*(s + i) == '\0')
		return (0);
	return (1 + _strlen(s, i + 1));
}
