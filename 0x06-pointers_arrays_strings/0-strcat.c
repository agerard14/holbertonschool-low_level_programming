#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two string
 *
 * @dest: string-base.
 *
 * @src: string to add in the string-base.
 *
 * Return: Dest
 */

char *_strcat(char *dest, char *src)
{
  int n1;
  int n2;

  n1 = 0;

  while (*(dest + n1) != '\0')
    {
      n1++;
    }
  for (n2 = 0; *(src + n2) != '\0';n2++,n1++)
    {
      *(dest + n1) = *(src + n2);
    }
  
  *(dest + n1) = '\0';

  return  (dest);
}
