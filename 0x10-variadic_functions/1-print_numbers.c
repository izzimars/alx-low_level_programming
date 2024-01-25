#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers- Entry point
 * Description: 'the program's description'
 * @separator: First operand
 * @n : Second operator
 *
 * Return: A pointer of type char
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator == NULL)
			continue;
		if ((n - i) > 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
