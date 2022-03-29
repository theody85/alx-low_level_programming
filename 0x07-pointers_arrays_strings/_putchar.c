#include <unistd.h>

/**
 * _putchar - writes a char to the standard output stream
 * @c: the character that it writes
 *
 * Return: the character
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}
