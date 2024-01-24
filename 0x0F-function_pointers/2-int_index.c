#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index- Entry point
 * Description: 'the program's description'
 * @array: First operand
 * @size : Second operand
 * @cmp: Third operand
 *
 * Return: A pointer of type char
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < ((int)size); i++)
		{
			j = cmp(array[i]);
			if (j != 0)
				return (i);
		}
	}
	return (-1);
}
