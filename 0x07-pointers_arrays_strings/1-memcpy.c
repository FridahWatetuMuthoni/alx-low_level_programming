#include "main.h"

/**
 * _memcpy-it copies the data from src to dest
 * @dest:where the data will be copied
 * @src:where the data will be copied from
 * @n:number of bytes to copy
 *
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
