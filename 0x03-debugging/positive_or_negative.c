#include "main.h"

/**
 * positive_or_negative - returns of the number is positive or negative
 * @n: the number that we are checking if its positive
 *
 * Return: does not return anything
 */

void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	printf("\n");
}
