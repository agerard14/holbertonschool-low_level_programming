#include <stdio.h>

/**
 * main - Prints all avaliable numbers in base 10
 *
 * Description: Prints all single digit numbers of base 10 starting from 0
 * followed by a new line
 *
 * Return: Always return 0
 */

int main(void)
{
	int i;

	for (i = 47 ; i <= 58 ; i++)
	{
		putchar(i);
	}

	putchar(10);
	return (0);
}
