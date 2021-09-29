#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize a var of type struct dog
 * @d: struct's name
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's dog name
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
