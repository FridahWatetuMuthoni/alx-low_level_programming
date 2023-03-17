#include <stdio.h>

/**
 * main - The function prints all the possible combination for number 1-9
 *
 * Return: always returns zero
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
		for (j = 0; j <= 99; j++)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(' ');
			putchar('0' + j / 10);
			putchar('0' + j % 10);
			if (i % 10 != 8 || j % 10 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
