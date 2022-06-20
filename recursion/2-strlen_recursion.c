#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - Calculatesd the length of a string
 *
 * @s: String
 *
 * Return: String Length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(1 + s));
}
