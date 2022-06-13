#include "main.h"

/**
 * print_most_numbers - Print numbers from 0 to 9 without 2 and 4
 *
 * Return: Void
 */

void print_most_numbers(void)
{
	int i = '0';  
	while (i <= '9')
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
		i++;
	}
	_putchar(10);
}
