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

/**
 * _calloc- the function allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: the number of bytes of each element
 *
 * Return: returns a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int len;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = nmemb * size;

	ptr = malloc(len);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, len);

	return (ptr);
}
