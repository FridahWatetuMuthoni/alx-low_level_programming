#include "main.h"

/**
 * _strdup-creates a duplicate of str
 * @str: the string we are duplicating
 *
 * Return: returns a pointer to the duplicate string
 */

char *_strdup(char *str)
{
	int i, len;
	char *dup_str;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}


	dup_str = malloc(sizeof(char) * len + 1);

	if (dup_str == NULL)
	{
		return (NULL);
	}
	else
	{

		for (i = 0; str[i]; i++)
		{
			dup_str[i] = *str;
		}

		dup_str[len] = '\0';
	}

	return (dup_str);
}
