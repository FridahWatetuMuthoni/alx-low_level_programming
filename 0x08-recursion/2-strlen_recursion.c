#include "main.h"

/**
 * _strlen_recursion-claculates the length of a string
 * @s:the string we are calculating its length
 *
 * Return: returns the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
