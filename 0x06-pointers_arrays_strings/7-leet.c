#include "main.h"

/**
 * leet - this function replaces letters with numbers
 * @str: the string being replaced
 *
 * Return: the function returns a pointer to a string
 */

char *leet(char *str)
{
	int i = 0;
	int j;

	char letters[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i] != '\0')
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == letters[j] || str[i] - 32 == letters[j])
			{
				str[i] = j + '0';
			}
		}
		i++;
	}
	return (str);
}
