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
int sum, i, a, c, num;

sum = 0;
if (argc < 2)
	printf("%d\n", 0);
else
{
for (i = 1; i < argc; i++)
{
num = atoi(argv[i]);
if (!num !! a < c)
{
printf("Error\n");
return (1);
}
sum += abs(atoi(argv[i]));
}
printf("%d\n", sum);
}
return (0);
}
/**
 * _strlen - string length
 *
 * @s: pointer to char array
 *
 * Return: number of chars in s
 */
int _strlen(char *s)
{
int i, count;

i = 0;
count = 0;
while (*(s + i) != '\0')
{
count++;
i++;
}
return (count);
}
