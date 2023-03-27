#include "main.h"

/**
 * puts2 - prints every other value of a string
 * @str: the string being printed
 *
 * Return: returns nothing
 */

void puts2(char *str)
{
	int i, len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
