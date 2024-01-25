#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all- Entry point
 * Description: 'the program's description'
 * @format: First operand
 *
 * Return: A pointer of type char
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int j = 0, flag = 0;
	char *p;

	va_start(ap, format);
	while (format[j] != '\0')
	{
		switch (format[j])
		{
			case 's':
				p = va_arg(ap, char *);
				if (p)
				{
					printf("%s", p);
					break;
				}
				printf("(nil)");
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			default:
				flag = 1;
		}
		j++;
		if (format[j] == '\0'  || flag)
		{
			flag = 0;
			continue;
		}
		printf(", ");
	}
	va_end(ap);
	printf("\n");
}
