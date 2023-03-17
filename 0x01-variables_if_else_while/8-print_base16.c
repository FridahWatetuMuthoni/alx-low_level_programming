#include <stdio.h>

/**
 * main - The main function prints the hexadecimals numbers in lowercase
 *
 * Return: always returns 0
 */

int main(void)
{
	int c = 97;
	int num = 0;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
			putchar('0' + num);
		else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}
