#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- Entry point
 * Description: 'the program's description'
 * @agrc: First operand
 * @argv: Second argument
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n",atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return(1);
	}
}
