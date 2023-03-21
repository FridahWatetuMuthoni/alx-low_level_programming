#include "main.h"

/**
 * print_times_table - the function prints the times table
 * @n: The value used to print the time table
 *
 * Return: returns nothing
 */

void print_times_table(int n)
{
	int num, total, product;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (total = 1; total <= n; total++)
			{
				_putchar(',');
				_putchar(' ');

				product = num * total;

				if (product <= 99)
					_putchar(' ');
				if (product <= 9)
					_putchar(' ');

				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10)) % 10 + '0');
				}
				else if (product <= 99 && product >= 10)
				{
					_putchar((product / 10) + '0');
				}
				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
