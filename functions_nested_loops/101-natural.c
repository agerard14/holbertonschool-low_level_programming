#include "main.h"
#include <stdio.h>

/**
 * main - Prints the sum of all the multiples of 3 or 5 below 1024.
 *
 * Return: 0
 */

int main(void)
{
	int i, suma = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			suma += i;
		}
	}
	printf("%d\n", suma);
	return (0);
}
