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

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i != 9)
			putchar(',');
	}

	putchar('\n');
	return (0);
}
