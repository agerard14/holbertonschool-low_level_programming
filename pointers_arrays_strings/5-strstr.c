#include "main.h"
#include <string.h>

/**
 * _strstr - Locates a substring.
 *
 * @haystack: String.
 *
 * @needle: string to match.
 *
 * Return: Pointer to the byte in s of null.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int n1 = 0;
	unsigned int n2 = 0;
	unsigned int iterador = 0;
	unsigned int n3 = 0;

	while (needle[n3])
	{
		n3++;
	}

	if (!n3)
	{
		return (haystack);
	}

	while (haystack[n1])
	{
		if (haystack[n1] == needle[0])
		{
			for (n2 = 0; needle[n2]; n2++)
			{
				if (haystack[n1 + n2] == needle[n2])
				{
					iterador++;
					if (iterador == n3)
					{
						return (&haystack[n1]);
					}
					continue;
				}
				break;
			}
		}
		n1++;
	}
	return (0);
}
