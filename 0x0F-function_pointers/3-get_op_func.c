#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * array_iterator- Entry point
 * Description: 'the program's description'
 * @array: First operand
 * @size : Second operand
 * @action: Third operand
 *
 * Return: A pointer of type char
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*s == *(ops[i].op))
			return (*(ops[i].f));
		i++;
	}
	return (ops[i].f)
}
