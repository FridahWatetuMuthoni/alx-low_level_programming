#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: the first value being swapped
 * @b: the second value being swapped
 *
 * Return: always returns nothing
 */

void swap_int(int *a, int *b)
{
	int num1, num2;

	num1 = *a;
	num2 = *b;
	*a = num2;
	*b = num1;
}
