#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "cat";
    char *t;

    t = _strstr(s, f);
    if (f == NULL)
	    printf("Error");
    else
    	printf("%s\n", t);
    return (0);
}
