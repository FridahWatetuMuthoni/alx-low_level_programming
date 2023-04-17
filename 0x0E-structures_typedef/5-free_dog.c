#include "dog.h"

/**
 * free_dog- a function that frees the created dog
 * @d: pointer to the created dog
 *
 * Return: doesnt return anything
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
