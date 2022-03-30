#include "main.h"

/**
 * _print_rev_recursion - prints a string, followed by a new line.
 * @s: input string to be reversed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
