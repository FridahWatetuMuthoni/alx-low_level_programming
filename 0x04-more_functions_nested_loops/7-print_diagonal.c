#include "main.h"

/**
 * print_diagonal - prints a diagonal line given a number
 * @n: the number of times a pattern is printed
 *
 * Return: no return
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = i; j >= 1; j--)
			{
				if (j == 1)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
