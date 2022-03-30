#include <unistd.h>

/**
 * _putchar - prints a character to the output stream
 * @c: the character it prints
 *
 * Return: the character
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}
