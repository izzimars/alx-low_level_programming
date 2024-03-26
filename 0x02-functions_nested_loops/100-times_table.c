#include "main.h"
#include <stdio.h>

/**
 * print_to_98- Entry point
 * Description: 'the program's description'
 * @n - an int;
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	while (2 > 1)
	{
		printf("%d, ", n);
		if (n > 98)
			n = n - 1;
		else if (n < 98)
			n = n + 1;
		else if (n == 98)
			break;
	}
}
