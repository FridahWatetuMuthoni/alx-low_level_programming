#include "main.h"

/**
 * jack_bauer - prts every minute of the day of jack bauer
 *
 * Return: does not return anything
 */

void jack_bauer(void)
{
	int minute, hour;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + minute / 10);
			_putchar('0' + minute % 10);
			_putchar('\n');
		}
	}
}
