#include "main.h"

/**
 * _print_rev_recursion-prints a string in reverse
 * @s: the string being printed
 *
 * Return: does not return anything
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
