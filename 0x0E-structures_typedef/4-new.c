#include "try.h"

/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: qualities of new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	Return (new_dog);
}
