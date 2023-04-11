#include "main.h"

int word_length(char *str);
int word_count(char *str);

/**
 * word_length-gets the initial word
 * @str: The string to be searched.
 *
 * Return: returns the end of the initial word pointed to by str.
 */

int word_length(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}

	return (len);
}


/**
 * word_count - Counts the number of words in a string.
 * @str: The string we are counting the words from
 *
 * Return: returns the number of words in string.
 */

int word_count(char *str)
{
	int i = 0, words = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += word_length(str + i);
		}
	}

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: returns a pointer to an array of words
 */

char **strtow(char *str)
{
	char **arr;
	int i = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = word_count(str);
	if (words == 0)
		return (NULL);

	arr = malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[i] == ' ')
			i++;

		letters = word_length(str + i);

		arr[w] = malloc(sizeof(char) * (letters + 1));

		if (arr[w] == NULL)
		{
			for (; w >= 0; w--)
				free(arr[w]);

			free(arr);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			arr[w][l] = str[i++];

		arr[w][l] = '\0';
	}
	arr[w] = NULL;

	return (arr);
}
