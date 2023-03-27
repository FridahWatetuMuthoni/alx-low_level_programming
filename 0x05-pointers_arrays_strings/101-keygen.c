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
	int i, index;
	char password[13];
	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{};:,.<>?";
	char size = sizeof(charset) - 1;

	srand(time(NULL));
	for (i = 0; i < 12; i++)
	{
		index = rand() % size;
		password[i] = charset[index];
	}
	password[13] = '\0';
	printf("%s\n", password);

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
