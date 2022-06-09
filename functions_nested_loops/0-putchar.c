#include "main.h"

/**
 * main - Entry point
 * Description: Print "_putchar" in standarouput
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit;
	char cont_digit[] = "_putchar";

	for (digit = 0; digit < 8; digit++)
	{
		_putchar(cont_digit[digit]);
	}
	_putchar(10);
	return(0);
}
