#include "main.h"

/**
 * len- Entry point
 * Description: 'the program's description'
 * @s: Second operand;
 *
 * Return: An int
 */
int len(char *s)
{
        if (*s == '\0')
        {
                return(0);
        }
        return(1 + len(s + 1));
}

/**
 * pal- Entry point
 * Description: 'the program's description'
 * @n: First operand
 * @i: Second operand
 * @s: Third operand
 *
 * Return: An int
 */
int pal(int n, int i, char *s)
{
	if (n < i)
		return (1);
	else if(*(s + n) != *(s + i))
		return(0);
	else
	{
		--n;
		++i;
		return(pal(n,i,s));
	}
}

/**
 * is_palindrome(- Entry point
 * Description: 'the program's description'
 * @s: First operand
 *
 * Return: An int
 */
int is_palindrome(char *s)
{
	int n, i;
	
	n = len(s);
	--n;
	i = 0;
	return(pal(n,i,s));
}
