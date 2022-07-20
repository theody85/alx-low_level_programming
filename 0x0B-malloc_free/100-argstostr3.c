#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates the arguments of a program
 * @ac: the number of arguments passed
 * @av: an array of pointers to the arguments passed
 *
 * Return: the new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;
	k = 0;
	len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	
	str = malloc(sizeof(char) * (len + 1));
	
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k++] = '\n';
	}
	str[k++] = '\0';
	return (str);
}
