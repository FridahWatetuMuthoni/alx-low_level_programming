#include "main.h"

/**
 * array_range-creates a array of intergers in a certain range
 * @min: the start of the array
 * @max: the end of the array
 *
 * Return: returns a pointer to the created array
 */

int *array_range(int min, int max)
{
	int number_of_elements, i, size;
	int *ptr;

	if (min > max)
		return (NULL);

	number_of_elements = max - min + 1;
	size = number_of_elements * sizeof(int);

	ptr = malloc(size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < number_of_elements; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);

}
