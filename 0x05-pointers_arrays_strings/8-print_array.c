#include "main.h"

/**
 * print_array- Entry point
 * Description: 'the program's description'
 * @a: First operand
 * @n: SEcond operand
 *
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	while (n > 0)
	{
		printf("%d, ", *a);
		a++;
		--n;
	}
}
