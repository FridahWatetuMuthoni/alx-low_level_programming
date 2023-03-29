#include "main.h"

/**
 * print_number - the function prints numbers to the console
 * @n: the number being printed
 *
 * Return: returns nothing
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');


}
