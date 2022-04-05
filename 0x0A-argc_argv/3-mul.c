#include <stdio.h>

int _atoi(char *s);

/**
 * main - a program that multiplies two  numbers
 * @argc: the length of the array argv
 * @argv: an array of pointers to char
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, results;

	if (argc == 3)
	{
		num1 = _atoi(argv[1]);
		num2 = _atoi(argv[2]);
		results = num1 * num2;

		printf("%d\n", results);
		return (0);
	}
	printf("Error\n");
	return (1);
}


/**
 * _atoi - converts a string to int
 * @s: the string to be converted
 * Return: int of string
 */
int _atoi(char *s)
{
	int num, i, digit, sign;

	num = 0;
	i = 0;
	sign = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';

			if (sign % 2)
				digit = -digit;

			num = num * 10 + digit;
		}
		i++;
	}
	return (num);
}
