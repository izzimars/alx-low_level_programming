#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add- Entry point
 * Description: 'the program's description'
 * @a: First operand
 * @b: Second operand
 *
 * Return: Always 0 (Success)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- Entry point
 * Description: 'the program's description'
 * @a: First operand
 * @b: Second operand
 *
 * Return: Always 0 (Success)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- Entry point
 * Description: 'the program's description'
 * @a: First operand
 * @b: Second operand
 *
 * Return: Always 0 (Success)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- Entry point
 * Description: 'the program's description'
 * @a: First operand
 * @b: Second operand
 *
 * Return: Always 0 (Success)
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (-1);
	else
		return (a / b);
}

/**
 * op_mod- Entry point
 * Description: 'the program's description'
 * @a: First operand
 * @b: Second operand
 *
 * Return: Always 0 (Success)
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);
	else
		return (a % b);
}
