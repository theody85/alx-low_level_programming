#include "try.h"

/**
 * print_dog - prints the qualities of a dog
 * @d: the dog whose qualities are to be printed
 *
 * Returns: Nothing
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
