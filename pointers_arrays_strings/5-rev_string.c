#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string.
 *
 * @s: String.
 *
 * Return: Void
 */

void rev_string(char *s)
{
	int l = 0;
	int i;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	s--;

	for (i = 0; i < l; i++)
	{
		_putchar(*s);
		s--;
	}
	_putchar(10);
}
