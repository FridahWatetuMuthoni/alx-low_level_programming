#include "main.h"

/**
 * factorial-returns the factorial of a number
 * @n: the number we are calculating the factorial for
 *
 * Return: returns the factorial of a number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (n * factorial(n - 1));
}
