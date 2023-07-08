#include "main.h"
#include <stddef.h>

/**
 * _strstr- Entry point
 * Description: 'the program's description'
 * @haystack: First operand
 * @needle: Second operand
 *
 * Return: An int
 */
char *_strstr(char *haystack, char *needle)
{
	int i,j,check,orj;

	i = 0;
	check = 0;
	orj = 0;
	while (*(needle + i) != '\0')
	{
		j = 0;
		while (*(haystack + j) != '\0')
		{
			if (*(haystack + j) == *(needle + i))
			{
				if (check == 0)
					orj = j;
				check = 1;
			}
			++j;
		}
		++i;
	}
	if (check == 1)
		return(haystack + orj);
	return(NULL);
}
