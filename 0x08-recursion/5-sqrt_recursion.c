#include "main.h"

/**
 * recursion- Entry point
 * Description: 'the program's description'
 * @n: First operand
 * @i: Second operand
 *
 * Return: An int
 */
int recursion(int n, int i)
{
	++i;
	if (n == i * i)
		return i;
	else if(i > n/2)
		return(-1);
	else
		return(recursion(n,i));
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
	int i;

	i = 2;
	if (n == 1)
		return(1);
	else if(n == i * i)
		return(n);
	else
		return(recursion(n,i));
}
