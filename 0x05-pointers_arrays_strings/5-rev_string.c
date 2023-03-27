#include "main.h"

/**
 * rev_string- reversing a string
 * @s: string to be reversed
 *
 * Return: returns nothing
 */

void rev_string(char *s)
{
	int i, len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	len = len - 1;
	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];

		s[i] = s[len - i];
		s[len - i] = temp;
	}
}
