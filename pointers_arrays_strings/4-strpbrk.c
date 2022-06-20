#include "main.h"
#include <string.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 *
 * @s: String.
 *
 * @accept: string to match.
 *
 * Return: Pointer to the byte in s of null.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int t;

	char *result = NULL;

	for (; s[i]; i++)
	{
		for (t = 0; accept[t]; t++)
		{
			if (s[i] == accept[t])
				return (result = &s[i]);
		}
	}

	return (result);
}
