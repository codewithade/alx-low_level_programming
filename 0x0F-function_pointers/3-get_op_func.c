#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - returns op
 *
 * @s: operator passed as argument to function
 *
 * Return: ptr to func corresponding to operator
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[OP_MAX] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
int i;

i = 0;
while (i < OP_MAX)
{
	if (strcmp(s, ops[i].op) == 0)
		return (ops[i].f);
	i++;
}
return (NULL);
}
