#include "main.h"

/**
 * binary_to_uint- Entry point
 * Description: 'the program's description'
 * @b: First operand
 *
 * Return: An int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, sum = 0, pow, j = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		i++;
	}
	pow = i - 1;
	while (i  > 0)
	{
		sum += ((unsigned int)(b[j] - '0') * powtwo(pow));
		i--;
		j++;
		pow--;
	}
	return (sum);
}

/**
 * powtwo- Entry point
 * Description: 'the program's description'
 * @pow: First operand
 *
 * Return: An int
 */
unsigned int powtwo(unsigned int pow)
{
	unsigned int acc = 1;

	while (pow > 0)
	{
		acc *= 2;
		pow--;
	}
	return (acc);
}
