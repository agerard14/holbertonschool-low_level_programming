#include "main.h"

/**
 * jack_bauer - Print all minute and hour of a day
 *
 * Description: Prints every minute of the day of Jack Bauer.
 * starting from 00:00 to 23:59.
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hours, minutes, first_digit, last_digit;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			last_digit = hours % 10;
			first_digit = hours / 10;

			_putchar('0' + first_digit);
			_putchar('0' + last_digit);
			_putchar(':');

			last_digit = minutes % 10;
			first_digit = minutes / 10;

			_putchar('0' + first_digit);
			_putchar('0' + last_digit);
			_putchar(10);
		}
	}
}
