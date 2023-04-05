#include "main.h"

/**
 * _puts_recursion-prints a string to standard output
 * @s: the string being printed
 *
 * Return: it does not return anything
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;

	_puts_recursion(s);
}
