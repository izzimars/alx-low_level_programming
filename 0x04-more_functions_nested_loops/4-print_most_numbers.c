#include "main.h"

/**
 * main - Entry point
 * Description: 'TASK ZERO'
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n == 50)
			continue;
		else if (n == 52)
			continue;
		else
			_putchar(n);
	}
	_putchar('\n');
	return;
}
