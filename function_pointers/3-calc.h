#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* Function prototypes */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * get_op_func - Selects the correct function for the operation
 * @s: The operator passed as argument
 * Return: Pointer to the corresponding function, or NULL if invalid
 */
int (*get_op_func(char *s))(int, int);

#endif