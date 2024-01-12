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
 * equalizer- Entry point
 * Description: 'the program's description'
 * @s: First operand
 * @n: Second operand
 *
 * Return: An int
 */

char *equalizer(char *s, char *n)
{
	if (_strlen_recursion(s) ==  _strlen_recursion(n))
	{
		return (n);
	}
	n = n + 1;
	return (equalizer(s, n));
}

/**
 * wildcmphelp- Entry point
 * Description: 'the program's description'
 * @s1: First operand
 * @s2: Second operand
 * @flag: Third operand
 *
 * Return: An int
 */

int wildcmphelp(char *s1, char *s2, int flag)
{
	if (*s2 == '\0')
	{
		return (1);
	}
	else if (*s2 == '*')
	{
		flag = 1;
		if (*s2 + 1 == '\0')
		{
			return (1);
		}
		else if (_strlen_recursion(s1) >  _strlen_recursion(s2))
		{
			s1 = equalizer(s2, s1);
			return (wildcmphelp(s1, s2, flag));
		}
		else if (_strlen_recursion(s2) >  _strlen_recursion(s1))
		{
			return (wildcmphelp(s1, s2 + 1, flag));
		}

	}
	else if (*s2 != *s1)
	{
		if ((_strlen_recursion(s1) >=  _strlen_recursion(s2)) && flag)
		{
			return (wildcmphelp(s1 + 1, s2, flag));
		}
		return (0);
	}
	return (wildcmphelp(s1 + 1, s2 + 1, flag));
}

/**
 * wildcmp- Entry point
 * Description: 'the program's description'
 * @s1: First operand
 * @s2: Second operand
 *
 * Return: An int
 */

int wildcmp(char *s1, char *s2)
{
	return (wildcmphelp(s1, s2, 0));
}

