#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0 else if little-endian - 1.
 */

int get_endianness(void)
{
	int number = 1;
	char *the_endian = (char *)&number;

	if (*the_endian == 1)
		return (1);

	return (0);
}
