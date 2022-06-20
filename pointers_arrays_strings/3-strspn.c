#include "main.h"
#include <string.h>

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: String.
 *
 * @accept: character to match.
 *
 * Return: Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int iterador = 0;
  	unsigned int n1, n2, n3;

	for (n1 = 0; s[n1]; n1++)
	{
		n3 = 0;
		for (n2 = 0; accept[n2]; n2++)
		{
			if (s[n1] == accept[n2])
			{
				n3 = 1;
				iterador++;
				break;
			}
		}
		if (n3 == 0)
			return (iterador);
	}
	return (iterador);
}
