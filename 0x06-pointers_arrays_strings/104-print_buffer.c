#include "main.h"

/**
 * print_buffer- the function prints a buffer
 * @b:the buffer
 * @size: the size
 *
 * Return: returns nothing
 */

void print_buffer(char *b, int size)
{
	int i, j, num;

	num = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (num < size)
	{
		j = size - num < 10 ? size - num : 10;
		printf("%08x:", num);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
			{
				printf("%02x", *(b + num + i));
			}
			else
			{
				printf(" ");
			}
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int charater = *(b + num + i);

			if (charater < 32 || charater > 132)
			{
				charater = '_';
			}
			printf("%c", charater);
		}
		printf("\n");
		num += 10;
	}
}

