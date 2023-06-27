#include "main.h"

/**
 * rev_string- Entry point
 * Description: 'the program's description'
 * @s: First operand
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i;
	char *str;

	i = 0;
	str = s;
	while (**str != '\0')
	{
		i++;
		str++;
	}
	while (i > 0)
	{
		*s = s[i];
		i--;
		s++;
	}
}
