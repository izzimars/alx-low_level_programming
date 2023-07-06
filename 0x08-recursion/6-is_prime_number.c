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
	if ((n % i) == 0)
		return (0);
	else if(i > n/2)
		return(1);
	else
		return(recursion(n,i));
}

/**
 * is_prime_number- Entry point
 * Description: 'the program's description'
 * @n: First operand
 *
 * Return: An int
 */
int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n < 2)
		return(0);
	else if((n % i) == 0)
		return(0);
	else
		return(recursion(n,i));
}
