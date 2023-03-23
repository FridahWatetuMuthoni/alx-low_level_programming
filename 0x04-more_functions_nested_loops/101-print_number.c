#include "main.h"

/**
 * print_number- function prints an interger
 * @n: the number being printed
 *
 * Return: does not return anything
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar('0' + (num % 10));
}
