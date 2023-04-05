#include "main.h"

/**
 * _recursion_helper-this function calculate the natural square root
 * @n:the number we are calculating the square root for
 * @root:the start of the range to search the square root from
 *
 * Return: returns the square root of n
 */

int _recursion_helper(int n, int root)
{
	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	if ((root * root) == n)
	{
		return (root);
	}
	if (root == n / 2)
		return (-1);

	return (_recursion_helper(n, root + 1));
}

/**
 * _sqrt_recursion-calls the function_helper which calculates the square root
 * @n:the number that we are returning the squareroot of
 *
 * Return: returns the _recursion_helper function
 */

int _sqrt_recursion(int n)
{
	return (_recursion_helper(n, 0));
}
