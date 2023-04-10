#include "main.h"

/**
 * main-adds the commandline arguements that are postive
 * @argc: the number of commandline arguements
 * @argv: the array of commandline arguements
 *
 * Return: returns 0 is arguements are passed else returns 0
 */

int main(int argc, char *argv[])
{
	int i, sum, num;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (num = 0; argv[i][num]; num++)
		{
			if (argv[i][num] < '0' || argv[i][num] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
