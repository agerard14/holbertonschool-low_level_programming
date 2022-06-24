#include "main.h"
#include <stdlib.h>
#include <math.h>

/**
 * create_array - Creates an array of chars, and initializes it
 * with a specific char.
 *
 * @size: Size of the new array
 *
 * @c: Char to use in the new array
 *
 * Return: A new array with the same char, or NULL if size is 0
 * or 1 if malloc fails
 */

char *create_array(unsigned int size, char c)
{
	char *caracter;
	unsigned int y;

	caracter = (char *)malloc(sizeof(char) * size);

	if (caracter == NULL || size == 0)
	{
		return (NULL);
	}
	for (y = 0; y < size; y++)
	{
		caracter[y] = c;
	}
	return (caracter);
}
