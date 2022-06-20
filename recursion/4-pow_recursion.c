#include "main.h"
#include <math.h>

/**
 * _pow_recursion - X is raised to the power of y.
 *
 * @x: base
 *
 * @y: exponent
 *
 * Return: x raised to the power of y or -1.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
