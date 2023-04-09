#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest:  the string being added too
 * @src: the string we adding to dest
 * @n: the bytes to be used from src
 *
 * Return: it returns a pointer to a string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, total_length;
	int dest_len = 0;
	int src_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[src_len] != '\0')
	{
		src_len++;
	}

	if (n > src_len)
	{
		total_length = dest_len + src_len;
	}
	else
	{
		total_length = dest_len + n;
	}

	j = 0;
	for (i = dest_len; i < total_length; i++)
	{
		dest[i] = src[j];
		j++;
	}

	dest[total_length + 1] = '\0';
	return (dest);
}
