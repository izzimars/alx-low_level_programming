#ifndef variadic_functions
#define variadic_functions
#endif
#include <stdarg.h>

/**
 * _sum_them_all- Entry point
 * Description: 'the program's description'
 * @n: First operand
 * @...: Variable length operand;
 *
 * Return: An int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	sum = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	return (sum);
}
