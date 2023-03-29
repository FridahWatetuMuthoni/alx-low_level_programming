#include  "main.h"

/**
 * rot13-the function uses ROT13 to encrypt messages
 * @str: the string being encrypted
 *
 * Return: returns a pointer to a string that has been changed
 */

char *rot13(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = ((*str - 'a') + 13) % 26 + 'a';
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			*str = ((*str - 'A') + 13) % 26 + 'A';
		}
		str++;
	}
	return (str);
}
