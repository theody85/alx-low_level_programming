#include <stdio.h>
/**
 * _strstr - gets the length of a prefix substring.
 * @s: the string whose values are to be compared
 * @accept: the string that is to be compared with
 *
 * Return: a pointer to the byte in s that matches
 * the byte in  accept
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i] == needle[j])
					i++;
				else
					return (NULL);
			}
			return (needle);
		}


	}
	 return (NULL);
}
