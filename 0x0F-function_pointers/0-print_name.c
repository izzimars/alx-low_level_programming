#include "function_pointers.h"

/**
 * print_name- Entry point
 * Description: 'the program's description'
 * @name: First operand
 * @f : Second operand
 *
 * Return: A pointer of type char
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
