#include "main.h"
#include <stdio.h>

/**
 * jack_bauer- Entry point
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int i, j, k, l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (2 > 1)
	{
		_putchar(l + '0');
		_putchar(k + '0');
		_putchar(58);
		_putchar(j + '0');
		_putchar(i + '0');
		_putchar('\n');
		++i;
		if (i > 9)
		{
			i = 0;
			++j;
		}
		if (j > 5)
		{
			i = 0;
			j = 0;
			++k;
		}
		if (k > 9)
		{
			i = 0;
			j = 0;
			k = 0;
			++l;
		}
		if (l > 1 && k > 3)
			return;
	}
}
