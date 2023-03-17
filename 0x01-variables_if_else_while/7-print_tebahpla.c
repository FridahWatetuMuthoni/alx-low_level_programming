#include <stdio.h>

/**
 * main - The main function prints out the alphabets in reverse
 *
 * Return: always returns zero
 */

int main(void)
{
	int a;

	a = 122;
	while (a >= 97)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}

