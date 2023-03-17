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
	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i != 9 || j != 9)
			{
				putchar(' ');
				if (count % 2 == 0)
				{
					putchar(',');
				}
				count++;
			}
		}
	putchar('\n');
	return (0);
}
