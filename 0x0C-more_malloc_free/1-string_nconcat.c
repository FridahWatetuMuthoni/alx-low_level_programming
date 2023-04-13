#include "main.h"

/**
 * _strlen- calculate the length of the string
 * @str: the string we are calculating the length for
 *
 * Return: returns the length of the string
 */

int _strlen(char *str)
{
	int i;
	int len = 0;

	for (i = 0; str[i]; i++)
	{
		len++;
	}
	return (len);
}

/**
 * string_nconcat- concantenates strings
 * @s1: string one
 * @s2:string two
 * @n: the length of s2 to concantenate to s1
 *
 * Return: returns a pointer to the new created string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, s1_len, s2_len, len, size;
	int index;


	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	if (n >= s2_len)
		len = s2_len;
	else
		len = n;

	size = len +  s1_len;
	str = malloc(size + 1);

	if (str == NULL)
		return (NULL);

	index = 0;
	for (i = 0; i < s1_len; i++)
	{
		str[index]  = s1[i];
		index++;
	}
	for (i = 0; i < len; i++)
	{
		str[index] = s2[i];
		index++;
	}

	str[index] = '\0';
	return (str);
}
