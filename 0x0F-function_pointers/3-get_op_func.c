#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func- Entry point
 * Description: 'the program's description'
 * @s: First operand
 *
 * Return: Always 0 (Success)
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (i < 5)
	{
		if (*s == *(ops[i].symbol))
			return (ops[i].operation);
		i++;
	}
	return (NULL);
}