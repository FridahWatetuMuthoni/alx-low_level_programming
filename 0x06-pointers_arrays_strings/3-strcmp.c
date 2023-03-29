#include "main.h"

/**
 * _strcmp -  compares if two strings are equal or the same
 * @s1: the first string being compared
 * @s2: the second string being compared
 *
 * Return: returns 1 if the strings are the same and
 * returns 0 if the strings and not
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int s1_len = 0;
	int s2_len = 0;

	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}
	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}

	for (i = 0; i < s1_len && i < s2_len; i++)
	{
		if (s1[i] == s2[i])
			return (0);
		else
			return (s1[i] - s2[i]);
	}
	return (*s1 - *s2);
}
