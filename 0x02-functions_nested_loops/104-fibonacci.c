#include <stdio.h>

/**
 * main - 98 Fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	unsigned long first = 0, second = 1, sum;
	unsigned long first_half1, first_half2, second_half1, second_half2;
	unsigned long half1, half2;

	for (i = 0; i < 92; i++)
	{
		sum = first + second;
		printf("%lu, ", sum);

		first = second;
		second = sum;
	}

	first_half1 = first / 10000000000;
	second_half1 = second / 10000000000;
	first_half2 = first % 10000000000;
	second_half2 = second % 10000000000;

	for (i = 93; i < 99; i++)
	{
		half1 = first_half1 + second_half1;
		half2 = first_half2 + second_half2;
		if (first_half2 + second_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (i != 98)
			printf(", ");

		first_half1 = second_half1;
		first_half2 = second_half2;
		second_half1 = half1;
		second_half2 = half2;
	}
	printf("\n");
	return (0);
}
