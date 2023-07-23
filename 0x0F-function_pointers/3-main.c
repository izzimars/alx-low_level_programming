#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main- Entry point
 * Description: 'the program's description'
 * @argc: First operand
 * @argv: Second operand
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i, l;
	char *p;

	p = argv[2];
	while (*p != '\0')
	{
		++l;
		++p;
	}
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		if ((l == 1) && (get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]))))
		{
			i = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
			if (i == -1)
			{
				printf("Error\n");
				exit(100);
			}
			else
			{
				printf("%d\n", i);
				return (0);
			}
		}
		else
		{
			printf("Error\n");
			exit(99);
		}
	}
}
