#include "main.h"

/**
 * main - Entry point
 * Description: 'TASK ZERO'
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i,j;
	
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for(i=1; i <= n; i++)
	{
		j = 1;
		while(2 > 1)
		{
			if (j < i)
				_putchar(' ');
			else
			{
				_putchar('\\');
				_putchar('\n');
				break;
			}
			++j;
		}
	}
	return;
}
