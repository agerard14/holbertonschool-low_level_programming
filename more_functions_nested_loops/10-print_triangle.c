#include "main.h"

/**
 * print_triangle - Print a triangle.
 *
 * @size: Size of the triangle
 *
 * Return: Void
 */

void print_triangle(int size)
{
	int n, t, espacio;

	if (size > 0)
	{
		for (n = 0; n < size; n++)
		{
			for (espacio = size - n; espacio > 1; espacio--)
			{
				_putchar(' ');
			}

			for (t = 0; t <= n; t++)
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
