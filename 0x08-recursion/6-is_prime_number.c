#include "main.h"

/**
 * prime_helper- Entry point
 * Description: 'the program's description'
 * @n: First operand
 * @i: Second operand
 *
 * Return: An int
 */

int prime_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (i == n)
	{
		return (1);
	}
	else if (((n % i) == 0) && (n != i))
	{
		return (0);
	}
	return (prime_helper(n, i + 1));
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
	return (prime_helper(n, 2));
}
