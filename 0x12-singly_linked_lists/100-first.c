#include <stdio.h>

void call_first(void) __attribute__((constructor));

/**
 * call_first - the function prints a string before the
 *        main function is executed.
 *
 * Return: does not return anyything
 */

void call_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
