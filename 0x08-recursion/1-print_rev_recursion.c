#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: pointer to string to evaluate
 *
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
int len;

len = _strlen(s);
if (len < 0)
{
putchar('\n');
return;
}
putchar(*(s + (len - 1)));
len--;
_print_rev_recursion(&(s[len]));
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
