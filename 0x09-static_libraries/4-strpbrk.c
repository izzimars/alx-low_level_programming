#include "main.h"
#include <stddef.h>

/**
 * _strpbrk- Entry point
 * Description: 'the program's description'
 * @s: First operand
 * @accept: Second operand
 *
 * Return: An int
 */
char *_strpbrk(char *s, char *accept)
{
	int i,j,temp;

	i = 0;
	temp = 100;
	while (*(accept + i) != '\0')
	{
		j = 0;
		while (*(s + j) != '\0')
		{
			if (*(s + j) == *(accept + i))
			{
				if (temp > j)
				{
					temp = j;
					break;
				}
			}
			++j;
		}
		++i;
	}
	if (temp != 100)
		return(s + temp);
	return(NULL);
}
