
/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string whose values are to be compared
 * @accept: the string that is to be compared with
 *
 * Return: number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		unsigned int flag = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				flag++;
		}
		if (flag == 0)
			return (i);


	}
	 return (0);
}
