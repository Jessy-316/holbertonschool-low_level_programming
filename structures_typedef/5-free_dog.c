#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees dogs.
 * @d: Pointer to dog free.
 *
 * Return: Void.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);

	free(d);
}
