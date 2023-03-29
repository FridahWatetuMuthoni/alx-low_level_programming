#include "main.h"

/**
 * cap_string - the function capitalizes the string
 * @str: the string being capitalized
 *
 * Return: resturns a pointer to a string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (
				str[i - 1] == ' ' ||
				str[i - 1] == '\t' ||
				str[i - 1] == '\n' ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				str[i - 1] == '.' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '"' ||
				str[i - 1] == '(' ||
				str[i - 1] == ')' ||
				str[i - 1] == '{' ||
				str[i - 1] == '}' ||
				i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - ('a' - 'A');
			}
		}
		i++;
	}
	return (str);
}
