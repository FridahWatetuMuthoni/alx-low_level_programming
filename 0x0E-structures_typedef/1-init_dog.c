#include "dog.h"

/**
 * init_dog- a function that initializes a variable of struct dog
 * @d: pointer to the dog struct
 * @name: name of the dog that is being initialized
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: the function does not return anything
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
