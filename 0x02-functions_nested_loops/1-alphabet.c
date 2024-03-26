#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		_putchar(i);
		++i;
	}
	_putchar('\n');
}
