#include "main.h"

/**
 * print_rev- reserves and prints th reversed string
 * @s: the string to be reversed
 *
 * Return: returns nothing
 */

void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
}
