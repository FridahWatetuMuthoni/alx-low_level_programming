#include "main.h"

/**
 * string_toupper- changes the charaters of a string uppercase
 * @str: string being changed from lowercase to upper
 *
 * Return: returns a pointer to a string
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}
