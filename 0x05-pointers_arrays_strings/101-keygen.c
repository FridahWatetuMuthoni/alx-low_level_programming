#include "main.h"
#include <time.h>
#include <stdlib.h>

/**
 * password_generator - generates a random password
 *
 * Return: does not return anything
 */

void password_generator(void)
{
	int password[100];
	int i, sum , num;

	sum = 0;
	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78;
		sum += (password[i] + '0');
		putchar(password[i] + '0');
		if((2772 - sum) - ('0' < 78))
		{
			num = 2772 - sum - '0';
			sum += num;
			putchar(num + '0');
			break;
		}
	}

}

/**
 * main - calls the password generator function
 *
 * Return: always returns 0
 */

int main(void)
{
	password_generator();
	return (0);
}
