#include "main.h"
#include <string.h>

/**
 * _strdup - Creates a pointer with a copy of the str param
 *
 * @str: String to copy
 *
 * Return: a pointer to the duplicated string or
 * null if the memory is insufficient or if the str is NULL
 */

char *_strdup(char *str)
{
	char *cadena;
	int y = 0, memoria = 0;

	if (str == NULL)
		return (NULL);

	while (str[y])
		y++;

	cadena = malloc((y + 1) * sizeof(char));

	if (cadena == NULL)
		return (NULL);

	while (memoria < y)
	{
		cadena[memoria] = str[memoria];
		memoria++;
	}

	return (cadena);
}
