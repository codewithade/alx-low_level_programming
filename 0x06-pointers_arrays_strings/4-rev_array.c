#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverse a string
 *
 * @a: pointer to evaluate
 *
 * @n: number of chars
 *
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
int j, i;
int p[500];

i = 0;
while (i < n)
{
p[i] = *(a + i);
i++;
}

for (i = n - 1, j = 0; i >= 0; i--, j++)
{
*(a + j) = p[i];
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
