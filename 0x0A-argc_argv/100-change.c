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
	int i, count;

	count = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return(1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return(0);
	}
	else
	{
		i = atoi(argv[1]);
		while (i > 0)
		{
			if (i - 25 >= 0)
			{
				i -= 25;
				count += 1;
			}
			else if (i - 10 >= 0)
			{
				i -= 10;
				count += 1;
			}
			else if (i - 5 >= 0)
			{
				i -= 5;
				count += 1;
			}
			else if (i - 2 >= 0)
			{
				i -= 2;
				count += 1;
			}
			else
			{
				i -= 1;
				count += 1;
			}
		}
	}
	printf("%d\n", count);
	return(0);
}
