#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Initializes new variable type.
 * @d: New variable.
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Owner of dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
