#include "main.h"
#include <math.h>

/**
 * factorial - Returns the factorial of a given number.
 *
 * @n: number for factorial
 *
 * Return: factorial of the given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
