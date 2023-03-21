#include <stdio.h>

/**
 * main - the function prints out _putchar
 *
 * Return: always returns zero
 */

int _putchar( char c);

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}


int _putchar( char c )
{
	return putchar(c);
}
