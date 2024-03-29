#include "main.h"

/**
 * _strlen_recursion- Entry point
 * Description: 'the program's description'
 * @s: First operand
 *
 * Return: An int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palihelper- Entry point
 * Description: 'the program's description'
 * @s: First operand
 * @n: Second operand
 * @c: Third operand
 *
 * Return: An int
 */

int palihelper(char *s, int n, int c)
{
	if (*s != *(s + c))
	{
		return (0);
	}
	else if ((n % 2 == 0) && (*s == *(s + n)))
	{
		return (1);
	}
	else if ((n % 2 == 1) &&  (*s == *(s + n + 1)))
	{
		return (1);
	}
	return (palihelper((s + 1), n, (c - 2)));
}

/**
 * is_palindrome- Entry point
 * Description: 'the program's description'
 * @s: First operand
 *
 * Return: An int
 */

int is_palindrome(char *s)
{
	int c, n;

	c = _strlen_recursion(s) - 1;
	n = (int)(_strlen_recursion(s) / 2);
	return (palihelper(s, n, c));
}
