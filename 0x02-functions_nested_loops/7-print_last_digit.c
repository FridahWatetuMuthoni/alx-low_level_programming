#include "main.h"

/**
 * print_last_digit - returns the values of the last digit
 * @num: the number we get the last digit from
 *
 * Return: the last digit of num
 */

int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;

	if (num < 0)
		last_digit = -last_digit;
	return (last_digit);
}
