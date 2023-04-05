#include "main.h"

/**
 * _recursion_helper-this function performs a binary search on a range until
 * it finds the square root.if the square root is found it returns it and if
 * the start becomes greater than the end the function returns -1 because the
 * square root does not exist
 * @n:the number we are calculating the square root for
 * @start:the start of the range to search the square root within
 * @end:the end value of the range to search the square within
 *
 * Return: returns the square root of n
 */

int _recursion_helper(int n, int start, int end)
{
	int sqrt, middle;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	if (start > end)
		return (-1);

	middle = (start + end) / 2;

	if ((middle * middle) == n)
	{
		sqrt = middle;
		return (sqrt);
	}
	else if ((middle * middle) < n)
	{
		start = middle + 1;
		sqrt = _recursion_helper(n, start, end);
	}
	else
	{
		end = middle - 1;
		sqrt = _recursion_helper(n, start, end);
	}
	return (sqrt);
}

/**
 * _sqrt_recursion-calls the function_helper which calculates the square root
 * @n:the number that we are returning the squareroot of
 *
 * Return: returns the _recursion_helper function
 */

int _sqrt_recursion(int n)
{
	return (_recursion_helper(n, 0, n));
}
