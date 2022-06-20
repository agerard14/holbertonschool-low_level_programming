#include "main.h"
#include <string.h>

/**
 * print_chessboard - Prints the chessboard.
 *
 * @a: Matrix.
 *
 * Return: Void.
 */

void print_chessboard(char (*a)[8])
{
	int b;
	int z;

	for (b = 0; b < 8; b++)
	{
		for (z = 0; z < 8; z++)
		{
			_putchar(a[b][z]);
		}
		_putchar(10);
	}
}
