#include <stdlib.h>
#include <time.h>

/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Returns the last digit of a number
 *and determines if the number is greater than 5
 *
 * Return: always returns 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_digit;

	last_digit = n % 10;

	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		n, last_digit);
	}
	return (0);
}
