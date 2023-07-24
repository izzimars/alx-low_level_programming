#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name- Entry point
 * Description: 'the program's description'
 * @name: First operand
 * @f: Second operand
 *
 * Return: Always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
