#include "main.h"

/**
 * main - Entry point
 * Description: 'TASK ZERO'
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int i,j;

	if (size <= 0)
	{
		return;
	}
	for(i=1; i <= size; i++)
	{
		j = 1;
		while( j <= size)
		{
			_putchar('#');
			++j;
		}
		_putchar('\n');
	}
	return;
}
