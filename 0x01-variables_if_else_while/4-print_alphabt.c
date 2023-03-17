#include <stdio.h>

/**
 * main - The main function prints out the alphabets
 * all letters except q and e
 *
 * Return: always returns zero
 */

int main(void)
{
	int a;

	a = 97;
	while (a <= 122)
	{
		if (a == 101 || a == 133)
			continue;
		else
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}

