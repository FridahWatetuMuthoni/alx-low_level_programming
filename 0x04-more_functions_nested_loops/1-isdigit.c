#include "main.h"

/**
 * _isdigit - checks if a number is between 0-9
 * @c: the number we are checking
 *
 * Return: returns 1 if c is between 0-9 else returns 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
