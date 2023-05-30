#include "main.h"

/**
 * set_bit - the function sets the value of a bit to 1.
 * @n: pointer to the bit.
 * @index: index to set the value at
 *
 * Return: if error returns -1 else 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(unsigned long int);

	if (index >= (size * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
