#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Description: Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always return 0
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar(10);
	return (0);
}
