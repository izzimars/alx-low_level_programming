#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i;
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = (get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", i);
	return (0);
}
