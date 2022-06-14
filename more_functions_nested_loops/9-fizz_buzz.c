#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100 with Fizz Buzz.
 *
 * Return: Void
 */

int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
	if ((i % 3 == 0) && (i % 5 == 0))
		printf("Fizz Buzz\n");
	else if (i % 3 == 0)
		printf("Fizz\n");
	else if (i % 5 == 0)
		printf("Buzz\n");
	else 
		printf("%d\n",i);
	}
	return (0);
}
