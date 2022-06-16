#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 *
 * @c: Pointer to string
 *
 * Return: The string in uppercase
 */

char *string_toupper(char *c)
{
	char a_lower = 97;
	char z_lower = 122;
	int i = 0;

	while (*(c + i) != '\0')
	{
		if (*(c + i) >= a_lower && *(c + i) <= z_lower)
		{
			*(c + i) -= 32;
		}
		i++;
	}

	return (c);
}
