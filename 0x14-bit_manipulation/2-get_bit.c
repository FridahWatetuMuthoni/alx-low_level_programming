#include "main.h"

/**
 * get_bit - the function gets the value of a bit at a given index.
 * @n: the bit we are using
 * @index: index to get the value at - indices start at 0.
 *
 * Return: if error occurs returns -1 else the value of bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;

	size = sizeof(unsigned long int);

	if (index >= (size * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
