#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
 
void print_alphabet(void)
{
    int alphabet;
    for(alphabet = 97; alphabet <= 122; alphabet++)
    {
        _putchar(alphabet);
        _putchar(10);
    }
}
