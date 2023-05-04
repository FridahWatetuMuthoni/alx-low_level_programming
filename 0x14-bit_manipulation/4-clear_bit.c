#include "main.h"

/**
 * clear_bit - the function lets the value of a bit at a given index to 0.
 * @n: pointer to the bit.
 * @index: index to set the value at - indices start at 0.
 *
 * Return: If error return -1 else return 1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = sizeof(unsigned long int);

	if (index >= (size * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
