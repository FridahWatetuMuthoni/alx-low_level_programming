#include "main.h"

/**
 * argstostr- concatenates all the arguments of in the program
 * @ac:number of arguements
 * @av: pointer to an array of strings
 *
 * Return: returns a pointer to a new array
 */

char *argstostr(int ac, char **av)
{
	int i, j, len, index;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}

	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
		return (NULL);

	index = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[index] = av[i][j];
			index++;
		}
		str[index] = '\n';
		index++;
	}
	str[index] = '\0';

	return (str);
}
