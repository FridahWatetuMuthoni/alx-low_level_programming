#include <stdio.h>

/**
 * main - even Fibonacci sequence
 *
 * Return: return 0.
 */
int main(void)
{
	unsigned long i = 0, j = 1, sum;
	float total;

	while (1)
	{
		sum = i + j;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total += sum;

		i = j;
		j = sum;
	}
	printf("%.0f\n", sum);

	return (0);
}
