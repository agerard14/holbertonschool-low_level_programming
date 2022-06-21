#include "main.h"

/**
 * _isupper - Checks for uppercase character.
 *
 * @c: ASCII number
 *
 * Return: 1 if c is upper, otherwise return 0.
 */

int _isupper(int c)
{
        if (c >= 'A' && c <= 'Z')
                return (1);
        else
                return (0);
}
