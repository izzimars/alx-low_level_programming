#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i, j;

	j = 1;
	while (j <= 10)
	{
		i = 97;
		while (i <= 122)
		{
			_putchar(i);
			++i;
		}
		_putchar('\n');
		++j;
	}
}
