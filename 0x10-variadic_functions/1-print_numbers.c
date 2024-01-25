#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers- Entry point
 * Description: 'the program's description'
 * @seperator: First operand
 * @n : Second operator
 *
 * Return: A pointer of type char
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i, sum = 0;

	if (n == 0)
		return (0);
	va_start (ap, count);
	for (i = 0; i < n; i++)
		sum += va_arg (ap, int);
	va_end(ap);
	return (sum);
}
