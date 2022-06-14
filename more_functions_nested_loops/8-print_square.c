#include "main.h"

/**
 * print_square - Prints a square.
 *
 * @size: ampount of "#"
 *
 * Return: Void
 */

void print_square(int size)
{
	int iterador, n;

	if (size > 1)
	{
		for (iterador = 0; iterador < size; iterador++)
		{
			for (n = 0; n < size; n++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
