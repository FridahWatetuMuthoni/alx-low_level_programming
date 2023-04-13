#include "main.h"

/**
 * malloc_checked- used to create memory and returning
 * the pointer to that memory
 * @b:size of memory to be created
 *
 * Return: returns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *memory;
	unsigned int minimum = 0;

	if (b < minimum)
		exit(98);

	memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
