#include "main.h"

/**
 * print_sign - prints a sign depending if n is greater than zero
 * n is zero or if n is less than zero
 * @n: we check n
 *
 * Return: returns 1 if greater than zero, returns 0 if is zero
 * returns -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
