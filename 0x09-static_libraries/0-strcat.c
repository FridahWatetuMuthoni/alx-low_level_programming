#include "main.h"

/**
 * _strcat - concatinates two strings
 * @dest: the string we are adding the second string to
 * @src: the string being added to dest
 *
 * Return: the function returns the pointer to dest string
 */

char *_strcat(char *dest, char *src)
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


	total_length = dest_len + src_len;
	j = 0;
	for (i = dest_len; i < total_length; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[total_length + 1] = '\0';
	return (dest);
}
