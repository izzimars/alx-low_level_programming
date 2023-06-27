#include "main.h"

/**
 * swap_int- Entry point
 * Description: 'the program's description'
 * @a: First operand
 * @b: Second operand
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int tempa, tempb;

	tempa = *a;
	tempb = *b;
	*a = tempb;
	*b = tempa;
}
