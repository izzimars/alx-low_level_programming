#ifndef variadic_functions
#define variadic_functions
#endif
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers(- Entry point
 * Description: 'the program's description'
 * @n: First operand
 * @separator: Second operand
 *
 * Return: An int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && i == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}
}
