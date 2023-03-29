#include  "main.h"

/**
 * rot13-the function uses ROT13 to encrypt messages
 * @str: the string being encrypted
 *
 * Return: returns a pointer to a string that has been changed
 */


char *rot13(char *str)
{
	int i, j;

	char alphabets[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13_letters[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alphabets[j])
			{
				str[i] = rot13_letters[j];
				break;
			}
		}
		i++;
	}
	return (str);
}

