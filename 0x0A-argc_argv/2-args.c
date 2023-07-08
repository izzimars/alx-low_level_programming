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
	char *s;

	i = 0;
	while (i < argc)
	{
		s = argv[i];
		while (*s != '\0' && argc > 0)
		{
			_putchar(*s);
			++s;
		}
		_putchar('\n');
		++i;
	}
	return(0);
}
