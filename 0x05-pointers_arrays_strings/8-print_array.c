#include "main.h"

/**
 * print_array-prints and array of any size
 * @a:the array to be printed
 * @n: number of elements in the array
 *
 * Return: does not return anything
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (!(i == (n - 1)))
		{
			printf(", ");
		}
	}
	printf("\n");
}
