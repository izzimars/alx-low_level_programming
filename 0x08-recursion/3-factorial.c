#include "main.h"

/**
 * factorial- Entry point
 * Description: 'the program's description'
 * @n: First operand
 *
 * Return: An int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n < 2)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
