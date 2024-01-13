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
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 2)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
		exit(1);
	}
	exit(0);
}
