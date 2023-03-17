#include <stdio.h>

/**
 * main - The main function prints out the alphabets
 *
 * Return: always returns zero
 */

int main(void)
{
	int a;

	a = 97;
	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

