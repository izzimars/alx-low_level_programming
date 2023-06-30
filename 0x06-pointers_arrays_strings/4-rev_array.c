#include "main.h"

/**
 * reverse_array- Entry point
 * Description: 'the program's description'
 * @a: First operand
 * @n: Second operand;
 *
 * Return: An int
 */
void reverse_array(int *a, int n)
{
	int arr[98];
	int i, j;

	j = 0;
	i = 0;
	while (j < n)
	{
		arr[j] = *(a + j);
		++j;
	}
	--j;
	while (j >= 0)
	{
		*(a + i) = arr[j];
		--j;
		++i;
	}
}
