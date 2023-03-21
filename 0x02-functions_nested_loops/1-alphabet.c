#include "main.h"

/**
 * print_alphabet - prints out the alphabes
 *
 * Return: always returns zero
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

