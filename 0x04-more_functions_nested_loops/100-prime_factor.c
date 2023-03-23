#include "main.h"

/**
 * largest_prime_number- find the largest prime number
 *
 * Return: returns nothing
 */

void largest_prime_number(void)
{
	long num = 612852475143;
	long factor = 2;

	while (num > 1)
	{
		if ((num % factor) == 0)
		{
			num /= factor;
		}
		else
		{
			factor++;
		}
	}
	printf("%ld\n", factor);
}

/**
 * main- calls the largest_prime_number function
 *
 * Return: always zero
 */

int main(void)
{
	largest_prime_number();
	return (0);
}
