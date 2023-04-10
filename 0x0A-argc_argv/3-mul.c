#include "main.h"

/**
 * main-multiplies two numbers
 * @argc: the number of arguements passed
 * @argv: the array containing the commandline arguements
 *
 * Return: returns 0 if two arguements are provided else 1
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int mult;

		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
