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
	int i;
	int tot;

	i = 1;
	tot = 0;
	while (i < argc)
	{
		if (argc == 1)
		{
			printf("0\n");
			return(0);
		}
		else if (sizeof(atoi(argv[i])) >= sizeof(3))
			tot += atoi(argv[i]);
		else
		{
			printf("Error");
			return(1);
		}
		i++;
	}
	printf("%d\n", tot);
	return(0);
}
