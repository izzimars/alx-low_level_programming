#include "main.h"

/**
 * sqrt_helper- Entry point
 * Description: 'the program's description'
 * @n: First operand
 * @i: Second operand
 *
 * Return: An int
 */

int sqrt_helper(int n, int i)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n  == 0)
	{
		return (0);
	}
	else if (n < 0 || i > n / 2)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion- Entry point
 * Description: 'the program's description'
 * @n: First operand
 *
 * Return: An int
 */

int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 2));
}
