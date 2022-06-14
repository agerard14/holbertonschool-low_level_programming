#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string, followed by a new line, to stdout.
 *
 * @str: A string.
 *
 * Return: Void
 */

void _puts(char *str)
{
  while (*str != '\0')
    {
      _putchar(*str);
      str++;
    }
  _putchar(10);
}
