#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index- Entry point
 * Description: 'the program's description'
 * @array: First operand
 * @size: Second operand
 * @cmp: third operand
 *
 * Return: Always 0 (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (size <= 0)
		return (-1);
	while (i < (int)size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
