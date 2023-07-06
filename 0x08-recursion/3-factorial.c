#include "main.h"

/**
 * factorial- Entry point
 * Description: 'the program's description'
 * @n: Second operand;
 *
 * Return: An int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return(-1);
	}
	else if (n < 1)
	{
		return(1);
	}
	else
		return(n * factorial(n - 1));
}
