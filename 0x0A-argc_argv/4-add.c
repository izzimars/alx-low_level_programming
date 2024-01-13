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
	int i = 1;
	char *p;
	int sum = 0;

	while ((argc--) - 1)
	{
		p = argv[i];
		while (*p != '\0')
		{
			if (*p < 48 || *p > 57)
			{
				printf("Error\n");
				exit(1);
			}
			p++;
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	exit(0);
}
