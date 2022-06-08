#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase without "q" and "e"
 *
 * Description: Prints the alphabet in lowercase except "q" and "e"
 * followed by a new line.
 *
 * Return: Always return 0
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
		alphabet++;
	}

	putchar(10);
	return (0);
}
