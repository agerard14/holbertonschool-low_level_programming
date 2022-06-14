#include "main.h"
#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100 with Fizz Buzz.
 *
 * Return: Void
 */

int main(void)
{
	int i;

	printf("1");

	for (i = 2; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
