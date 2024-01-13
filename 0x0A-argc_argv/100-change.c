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
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("%d\n", count);
		exit(0);
	}
	while (i)
	{
		if (i >= 25)
		{
			count++;
			i -= 25;
		}
		else if (i >= 10)
		{
			count++;
			i -= 10;
		}
		else if (i >= 5)
		{
			count++;
			i -= 5;
		}
		else if (i >= 2)
		{
			count++;
			i -= 2;
		}
		else if (i >= 1)
		{
			count++;
			i -= 1;
		}
	}
	printf("%d\n", count);
	exit(0);
}
