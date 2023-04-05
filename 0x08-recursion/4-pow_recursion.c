#include "main.h"

/**
 * _pow_recursion-find the power of a number
 * @x: the number we are getting the power of
 * @y: what we are raising x to the power to
 *
 * Return: it returns he power of a number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
