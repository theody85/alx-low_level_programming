#include <unistd.h>

/**
 * _putchar - writes a character to the output stream
 * @c: The character to be written
 *
 * Return: the character
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}
