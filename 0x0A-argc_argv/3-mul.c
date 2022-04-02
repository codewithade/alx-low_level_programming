#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - entry point to program
 *
 * @argc: commad line args count
 *
 * @argv: arrays of command ine args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int res;

if (argc < 3)
{
printf("Error\n");
return (1);
}
res = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", res);
return (0);
}
