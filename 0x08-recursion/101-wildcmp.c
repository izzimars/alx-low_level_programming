#include "main.h"
#include <stdio.h>

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
 * cmp- Entry point
 * Description: 'the program's description'
 * @s1: First operand
 * @s2: Second operand
 *
 * Return: An int
 */
int cmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (0);
	else if(*s1 == *s2)
		return(1);
	else if (*s2 == '*' && len(s1) >= len(s2))
		return(1);
	else
		return cmp(s1, ++s2);
}

/**
 * helperwildcmp- Entry point
 * Description: 'the program's description'
 * @s1: First operand
 * @s2: Second operand
 *
 * Return: An int
 */
int helperwildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		printf("+++++\n");
		printf("%c,   %c,\n",*s1, *s2);
		return(1);
	}
	else if (*s1 == '*' || *s1 == *s2)
	{
		printf("-------\n");	
		printf("%c,   %c,\n",*s1, *s2);
		return(helperwildcmp(++s1,s2));
	}
	else if(*s1 != *s2)
	{
		if (*s2 == '*' && len(s1) >= len(s2))
		{
			printf("*************\n");
			printf("%c,   %c,\n",*s1, *s2);
			return(helperwildcmp(++s1, s2));
		}
		else
		{
			char *temp;
			temp = s2;
			if (cmp(s1,++temp))
			{
				++s1;
				if (*s1 != '\0')
				{
					printf("....................\n");
					printf("%c,   %c,\n",*s1, *s2);
					return(helperwildcmp(s1,s2));
				}
				else
				{
					printf("<<<<<<<<<<<<<<<<<<\n");
					printf("%c,   %c,\n",*s1, *s2);
					return(1);
				}
			}
			else
			{
				printf("_______________________\n");
				return(0);
			}
		}
	}
	printf(">>>>>>>>>>>>>>>>>>>>>\n");
	return(0);
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
	if (len(s1) >= len(s2))
		return(helperwildcmp(s1, s2));
	else
		return(helperwildcmp(s2, s1));
}
