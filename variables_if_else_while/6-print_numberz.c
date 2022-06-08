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
	int i = 47;

	for (; i <= 58 ;)
	{
		putchar(i);
		i++;
	}

	putchar(10);
	return (0);
}
