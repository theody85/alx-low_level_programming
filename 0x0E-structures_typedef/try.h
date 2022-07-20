#ifndef TRY_H
#define TRY_H

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * struct dog - a new datatype
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: This creates a new dog with qualities such as name,
 * age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

typedef struct dog dog_t;

#endif
