#include "main.h"
#include <string.h>

/**
 * cap_string - Capitalize the string.
 *
 * @c: Pointer to string
 *
 * Return: The string in Capitalize
 */

char *cap_string(char *c)
{
	int chars[13] = {' ', '.', ',', '\n', ';', '(', ')', '!', '?',
		'"', '{', '}', '\t'};
	int i = 0;
	int j;

	while (c[i] != '\0')
	{
		j = 0;
		if (i == 0)
		{
			if (c[i] >= 'a' && c[i] <= 'z')
				c[i] -= 32;
			i++;
			continue;
		}

		while (j < 13)
		{
			if (c[i] == chars[j])
			{
				if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
				{
					c[i + 1] -= 32;
					break;
				}
			}
			j++;
		}
		i++;
	}
	return (c);
}
