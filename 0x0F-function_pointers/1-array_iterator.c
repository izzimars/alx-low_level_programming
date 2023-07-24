#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator- Entry point
 * Description: 'the program's description'
 * @array: First operand
 * @size: Second operand
 * @action: third operand
 *
 * Return: Always 0 (Success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	i = 0;
	if (!array || !action)
		return;
	while (i < (int)size)
	{
		action(array[i]);
		i++;
	}
}
