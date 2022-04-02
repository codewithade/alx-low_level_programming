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
int sum, i;

sum = 0;
i = 1;
if (argc < 2)
{
printf("%d\n", sum);
}
else
{
for (i = 1; i < argc; i++)
{
if (!atoi(argv[i]))
{
printf("%s\n", "Error");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}
