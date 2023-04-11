#include "main.h"

/**
 * create_array-creates an array of size size
 * @size: the size of the array
 * @c:the charater we are initializing it with
 *
 * Return: returns a pointer that points to the memory location of the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int minimum = 0;
	char *str_arr;
	unsigned int i;

	if (minimum == size)
		return (NULL);

	str_arr = (char *)malloc(sizeof(char) * size);

	if (str_arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			str_arr[i] = c;
		}
	}

	return (str_arr);
}
