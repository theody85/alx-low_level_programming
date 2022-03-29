#include <stdio.h>
/**
 * _strpbrk - gets the length of a prefix substring.
 * @s: the string whose values are to be compared
 * @accept: the string that is to be compared with
 *
 * Return: a pointer to the byte in s that matches
 * the byte in  accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}


	}
	 return (NULL);
}
