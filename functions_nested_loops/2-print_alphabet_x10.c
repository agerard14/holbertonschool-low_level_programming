#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 *
 * Description: Prints the alphabet in lowercase by a new line 10  * times.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int alphabet, iterador;

	for (alphabet = 1; alphabet <= 10; alphabet++)
	{
		for (iterador = 97; iterador <= 122; iterador++)
		{
			_putchar(iterador);
		}
		_putchar(10);
	}
}
