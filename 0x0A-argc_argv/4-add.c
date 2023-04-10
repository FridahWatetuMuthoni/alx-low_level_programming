#include "main.h"
#include <ctype.h>

/**
 * main-adds the commandline arguements that are postive
 * @argc: the number of commandline arguements
 * @argv: the array of commandline arguements
 *
 * Return: returns 0 is arguements are passed else returns 0
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (isdigit((int)argv[i][0]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
