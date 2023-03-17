#include <stdio.h>

/**
 * main - Write a program that prints all possible combinations of
 * single-digit numbers.
 *
 * Return: always returns 0
 */

int main(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			putchar(',');
		}

	putchar('\n');
	return (0);
}
