#include <stdio.h>
#include "main.h"
/**
 * puts_half - reset a pointer
 *
 * @str: pointer to evaluate
 *
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
int i, count, n;

count = _strlen(str);
n = (count - 1) / 2;

if (count % 2 == 0)
{
for (i = count / 2; i < count; i++)
{
putchar(*(str + i));
}
}
else
{
for (i = count - n; i < count; i++)
{
putchar(*(str + i));
}
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
