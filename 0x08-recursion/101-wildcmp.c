#include "main.h"

/**
 * wildcmp-the function compares if two strings are the same
 * @s1: the first string being compared
 * @s2: the second string being compared
 *
 * Return: the function rturns 1 if they are equal else returns 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		else
		{
			return (*s2 == '\0');
		}
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
