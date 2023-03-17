#include <stdio.h>

/**
 * main - The function prints all the possible combination for number 1-9
 *
 * Return: always returns zero
 */

int main(void)
{
	int i, j;
	int count;

	count = 1;
	for (i = 0; i < 100; i++)
		for (j = 0; j < 100; j++)
		{
			putchar('0' + i % 10);
			putchar('0' + j % 10);
			if (i != 9 || j != 9)
			{
				if (count % 2 == 0)
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					putchar(' ');
				}
				count++;
			}
		}
	putchar('\n');
	return (0);
}
