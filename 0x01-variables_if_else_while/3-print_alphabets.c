#include <stdio.h>

/**
 * main - The main function prints out the alphabets
 *
 * Return: always returns zero
 */

int main(void)
{
	int a;
	int b;

	a = 97;
	b = 65;
	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	while (b <= 90)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}

