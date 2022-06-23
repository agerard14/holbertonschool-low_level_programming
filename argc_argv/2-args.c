#include "main.h"

/**
 * main - Prints all arguments it receives.
 *
 * @argc: number of parameters
 *
 * @argv: parameters recevied.
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
		printf("%s\n", argv[counter]);
	return (0);
}
