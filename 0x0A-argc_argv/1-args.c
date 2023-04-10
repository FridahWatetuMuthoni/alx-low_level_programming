#include "main.h"

/**
 * main- prints the number of arguements passed to main
 * @argc: the number of arguements passed to main
 * @argv: the array of commandline arguements
 *
 * Return: always returns zero
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
