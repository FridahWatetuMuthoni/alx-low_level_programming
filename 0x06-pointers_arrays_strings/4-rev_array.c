#include "main.h"

/**
 * reverse_array - the function reverses an array
 * @a: the array being reversed
 * @n: the size of the array
 *
 * Return: returns nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
