#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - program entry point
 *
 * @argc: cmd line args count
 * @argv: cmd line array of args
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int num1, num2, result, s;
char *operator, *add, *sub, *div, *mul, *mod;

if (argc < 4)
{
	printf("Error\n");
	exit(98);
}

num1 = atoi(*(argv + 1));
operator = *(argv + 2);
num2 = atoi(*(argv + 3));

s = (num2 == 0) ? 0 : 1;

add = "+";
sub = "-";
div = "/";
mul = "*";
mod = "%";

if ((s == 0) && (strcmp(operator, div) == 0 || strcmp(operator, mod) == 0))
{
        printf("Error\n");
        return (100);
}

if (strcmp(operator, add) == 0)
{
	result = get_op_func(add)(num1, num2);
	printf("%d\n", result);
}
else if (strcmp(operator, sub) == 0)
{
	result = get_op_func(sub)(num1, num2);
	printf("%d\n", result);
}
else if (strcmp(operator, mul) == 0)
{
	result = get_op_func(mul)(num1, num2);
	printf("%d\n", result);
}
else if (strcmp(operator, div) == 0)
{
	result = get_op_func(div)(num1, num2);
	printf("%d\n", result);
}
else if (strcmp(operator, mod) == 0)
{
	result = get_op_func(mod)(num1, num2);
	printf("%d\n", result);
}
else
{
	printf("Error\n");
	exit(99);
}

return (0);
}
