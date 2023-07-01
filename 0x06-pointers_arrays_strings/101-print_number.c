#include "main.h"
#include <stdio.h>

/**
 * div- Entry point
 * Description: 'the program's description'
 * @n: First operand
 *
 * Return: An int
 */
int div(int n)
{
	int j, tmp;

	tmp = n;
	j = 1;
	while (tmp > 10)
	{
		tmp /= 10;
		j *= 10;
	}
	while (n > 10)
	{
		tmp = n / j;
		n %= j;
		j /= 10;
		if (tmp == 10)
		{
			_putchar(49);
			_putchar(48);
		}
			else
			_putchar(tmp + '0');
		while (n < j)
		{
			_putchar(48);
			j /= 10;
		}
	}
	return (n);
}


/**
 * print_number- Entry point
 * Description: 'the program's description'
 * @n: First operand
 *
 * Return: An int
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar(45);
		n *= -1;
	}
	if (n < 10)
		_putchar(n + '0');
	else if (n == 10)
	{
		_putchar(49);
		_putchar(48);
	}
	else
	{
		n = div(n);
		if (n == 10)
		{
			_putchar(48);
			_putchar(48);
		}
		else if (n == 1)
			_putchar(0);
		else
			_putchar('0' + n);
	}
}
