#include "main.h"

/**
 * is_valid - checks if a number is valid or not
 * @num: the number that we are checking
 * Return: returns 1 if number is okay else returns 0
 */

int is_valid(char *num)
{
	int i = 0;

	while (num[i] != '\0')
	{
		if (num[i] < '0' && num[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen- the function calculates the length of a string
 * @str: the string
 *
 * Return: returns the length of the string
 */

int _strlen(char *str)
{
	int i, len;

	len = 0;
	for (i = 0; str[i]; i++)
	{
		len++;
	}
	return (len);
}

/**
 * print_error - prints error if any
 *
 * Return: returns nothing
 */

void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main- accepts two values from the commandline and
 * performs multiplication
 * @argc: the number of commandline arguements
 * @argv: the array that contains the commandline arguements
 *
 * Return: returns 0 on success and terminates and exits with
 * a status of 98 if there is an error
 */

int main(int argc, char *argv[])
{
	char *num1, *num2;
	int *result;
	int digit1, digit2, num1_len, num2_len, i, j, carry, len, sum = 0;

	if (argc != 3 || !is_valid(argv[1]) || !is_valid(argv[2]))
	{
		print_error();
	}
	num1 = argv[1], num2 = argv[2];
	num1_len = _strlen(num1);
	num2_len = _strlen(num2);
	len = num1_len + num2_len;
	result = malloc(sizeof(int) * len);
	if (result == NULL)
	{
		return (1);
	}
	for (i = 0; i < len; i++)
	{
		result[i] = 0;
	}
	for (i = num1_len - 1; i >= 0; i--)
	{
		digit1 = num1[i] - '0';
		carry = 0;
		for (j = num2_len - 1; j >= 0; j--)
		{
			digit2 = num2[j] - '0';
			carry += (digit1 * digit2) + result[i + j + 1];
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[i + j + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			sum = 1;
		if (sum)
			_putchar(result[i] + '0');
	}
	if (!sum)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
