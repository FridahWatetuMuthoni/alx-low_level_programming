#include "main.h"

/**
 * _isupper - the function return if a letter is uppercase or lowercase
 * @c: the letter that we are checking
 *
 * Return: returns 1 if uppercase else returns 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
