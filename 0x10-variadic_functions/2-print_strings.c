#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings- Entry point
 * Description: 'the program's description'
 * @separator: First operand
 * @n : Second operator
 *
 * Return: A pointer of type char
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *p;
	unsigned int i;

	if (n == 0)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(ap, char *);
		if (p)
			printf("%s", p);
		else
			printf("(nil)");
		if (separator && ((n - i) > 1))
			printf("%s", separator);
		va_end(ap);
	}
	printf("\n");
}
