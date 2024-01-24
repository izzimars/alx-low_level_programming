#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator- Entry point
 * Description: 'the program's description'
 * @array: First operand
 * @size : Second operand
 * @action: Third operand
 *
 * Return: A pointer of type char
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
	{
		for (i = 0; i < ((int)size); i++)
			action(array[i]);
	}
}
