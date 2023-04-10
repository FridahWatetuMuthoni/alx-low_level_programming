#include "main.h"

/**
 * main- the function prints all the commandline arguements passed to main
 * @argc: the number of arguements
 * @argv: the array of arguements
 *
 * Return: always returns 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
