#include <stdio.h>

/**
 * main - Lists all the natural numbers
 *
 * Return: return 0
 */

int main(void)
{
	int i, total;

	total = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			total += i;
	}

	printf("%d\n", total);

	return (0);
}
