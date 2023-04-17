#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - creates the dog's information
 * @name: name of the dog
 * @age:age of the dog
 * @owner: owner of the dog
 *
 * Description:the struct creates the info on the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
