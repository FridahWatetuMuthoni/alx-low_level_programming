#include <stdio.h>

/**
 * main - first 50 Fibonacci numbers
 *
 * Return: always returns  0.
 */

int main(void)
{
	unsigned long i, first = 0, second = 1, total;

	for (i = 0; i < 50; i++)
	{
		total = first + second;
		printf("%lu", total);

		first = second;
		second = total;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
