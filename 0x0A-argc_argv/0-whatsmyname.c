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
	char *s;

	s = argv[0];
	while (*s != '\0' && argc > 0)
	{
		_putchar(*s);
		++s;
	}
	_putchar('\n');
	return (0);
}
