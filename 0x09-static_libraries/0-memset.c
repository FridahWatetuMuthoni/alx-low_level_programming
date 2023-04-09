#include "main.h"

/**
 * _memset- fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: pointer to the memory which we print b
 * @b: the constant being written
 * @n: number of bytes to write
 *
 * Return: returns the pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > i; i++)
	{
		s[i] = b;
	}
	return (s);
}
