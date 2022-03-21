#include <stdio.h>
#include "main.h"
/**
 * print_rev - reset a pointer
 *
 * @s: pointer to evaluate
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
int i, count;

count = _strlen(s);

for (i = count - 1; i >= 0; i--)
{
putchar(*(s + i));
}
putchar('\n');
}

/**
 * _strlen - return string lenght
 *
 * @s: pointer to the string
 *
 * Return: Always 0 (Success)
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
