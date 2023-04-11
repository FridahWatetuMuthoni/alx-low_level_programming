#include "main.h"

/**
 * _strlen- calculates the lenght of a string
 * @str: the string we are calulating the length for
 *
 * Return: returns the length of a string
 */

int _strlen(char *str)
{
	int len = 0, i;

	for (i = 0; str[i]; i++)
	{
		len++;
	}
	return (len);
}

/**
 * str_concat-the function concatenates two string
 * @s1:string one
 * @s2:string two
 *
 * Return: returns a pointer a the new string
 */

char *str_concat(char *s1, char *s2)
{
	int i, s1_len, s2_len, size, index;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	size = s1_len + s2_len;
	new_str = malloc(sizeof(char) * size);

	if (new_str == NULL)
		return (NULL);

	index = 0;
	for (i = 0; i < s1_len; i++)
	{
		new_str[index] = s1[i];
		index++;
	}
	for (i = 0; i < s2_len; i++)
	{
		new_str[index] = s2[i];
		index++;
	}

	return (new_str);
}
