#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op_t - Short description
 * @symbol: First member
 * @operation: Second member
 *
 * Description: Longer description
 */
typedef struct
{
	const char *symbol;
	int (*operation)(int, int);
} op_t;

int (*get_op_func(char *s))(int, int);
int op_mod(int a, int b);
int op_div(int a, int b);
int op_mul(int a, int b);
int op_sub(int a, int b);
int op_add(int a, int b);
#endif
