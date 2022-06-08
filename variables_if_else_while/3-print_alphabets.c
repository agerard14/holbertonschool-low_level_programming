#include <stdio.h>

/**
 * main - Indicates if a random number is positive or negative
 *
 * Description: Generates a random number.
 *   indicates if it's positive or negative
 *
 * Return: 0
 */

int main(void) {

 char alphabet = 'a';
 char alphabetM = 'A';

  
  while (alphabet <= 'z')
    {
      putchar(alphabet);
      alphabet++;
    }
  while (alphabetM <= 'Z')
    {
       putchar(alphabetM);
       alphabetM++;
    }

  putchar(10);
  return(0);
}
