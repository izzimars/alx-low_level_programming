#include "main.h"

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

	(void) argv;
	i = argc - 1;
	_putchar('0' + i);
	_putchar('\n');
	return(0);
}
