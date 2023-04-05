#include "main.h"

/**
 * is_prime_number-checks if a number is a prime number
 * @n: the number we are checking
 *
 * Return: returns 1 if a number is a prime number and 0 if it isnt
 */

int is_prime_number(int n)
{
	int divider = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);

	return (number_division(n, divider));
}

/**
 * number_division-divides numbers to check if they are prime numbers
 * @n: the number we are checking
 * @divider:what we are using to divide n with
 *
 * Return: a calll to self
 */

int number_division(int n, int divider)
{
	if (n % divider == 0)
		return (0);

	if (divider == (n / 2))
		return (1);
	return (number_division(n, divider + 1));
}
