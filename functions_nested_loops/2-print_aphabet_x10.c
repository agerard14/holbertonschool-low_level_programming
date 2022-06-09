#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
    int iterador,alphabet;
    for(iterador = 0; iterador <= 10; iterador++)
    {
        for(alphabet = 97; alphabet <= 122; alphabet++)
        {
            _putchar(alphabet);
            _putchar(10);
        }
        
    }
    
}
