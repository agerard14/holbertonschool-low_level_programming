#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase
 *
 * Description: Prints the alphabet in lowercase and uppercase
 * followed by a new line.
 *
 * Return: Always return 0
 */

int main(void)
{
	char alphabet = 'a';
	char alphabetM = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	while (alphabetM <= 'Z')
	{
		putchar(alphabetM);
		alphabetM++;
	}

	putchar(10);
	return (0);
}
