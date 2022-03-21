#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverse a string
 *
 * @s: pointer to evaluate
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
int i, count, j, a;
char p[20];

a = 0;
count = _strlen(s);
while (*(s + a) != '\0')
{
p[a] = *(s + a);
a++;
}

for (i = count - 1, j = 0; i >= 0; i--, j++)
{
*(s + j) = p[i];
}
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
