#include "main.h"

/**
 * main - Prints its own name.
 *
 * @argc: number of parameters
 *
 * @argv: parameters recevied.
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	for (int i = 0; i < argc; i++)
		printf("argv[%d] = %s\n", i, argv[i]);
	exit(EXIT_SUCCESS);
}
