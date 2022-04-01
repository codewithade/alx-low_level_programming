#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a string with new line
 *
 * @s: pointer to string to evaluate
 *
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
int i;

i = 0;
if (*(s + i) == '\0')
{
putchar('\n');
return;
}
putchar(*(s + i));
i++;
_puts_recursion(&(s[i]));
}
