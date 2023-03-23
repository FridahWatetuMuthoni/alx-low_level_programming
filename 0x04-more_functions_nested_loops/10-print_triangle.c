#include "main.h"

/**
 * print_triangle - prins a triangle pattern
 * @size: he number of patterns
 *
 * Return: returns nothing
 */

void print_triangle(int size)
{
	if (size >= 0)
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
