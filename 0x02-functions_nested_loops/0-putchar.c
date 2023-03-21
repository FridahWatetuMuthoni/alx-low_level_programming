#include <stdio.h>

/**
 * _putchar - prints out a charater
 * @c: the charater that is printed out
 *
 * Description: _putchar takes in a charater as its arguement
 * and prints out the charater
 * Return: always returns the integer value of the charater
 */

int _putchar(char c);

/**
 * main - the function prints out _putchar
 *
 * Return: always returns zero
 */

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


/**
 * _putchar - prints out a charater
 * @c: the charater that is printed out
 *
 * Description: _putchar takes in a charater as its arguement
 * and prints out the charater
 * Return: always returns the integer value of the charater
 */

int _putchar(char c)
{
	return (putchar(c));
}
