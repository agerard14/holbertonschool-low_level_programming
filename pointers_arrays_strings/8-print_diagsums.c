#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the diagonals of a square matrix
 *  of integers.
 *
 * @a: Matrix.
 *
 * @size: size of the matrix
 *
 * Return: Void.
 */

void print_diagsums(int *a, int size)
{
	int i;
	int suma1 = 0;
	int suma2 = 0;

	for (i = 0; i < (size * size); i += (size + 1))
	{
		suma1 += a[i];
	}

	for (i = size - 1; i < ((size * size) - (size - 1)); i += (size - 1))
	{
		suma2 += a[i];
	}

	printf("%d, %d\n", suma1, suma2);
}
