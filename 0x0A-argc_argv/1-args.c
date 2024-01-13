#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	exit(0);
}
