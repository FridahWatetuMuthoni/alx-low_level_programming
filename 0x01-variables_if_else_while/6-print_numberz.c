#include <stdio.h>

/**
 * main - prints numbers 0-9 using putchar
 *
 * Return: main always returns 0
 */

int main(void)
{
	int a = 0;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
	}
	putchar('\n');
	return (0);
}
