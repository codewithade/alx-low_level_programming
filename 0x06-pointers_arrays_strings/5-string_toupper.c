#include <stdio.h>
#include "main.h"
/**
 * string_toupper - converts to upper
 *
 * @s: string to converts
 *
 * Return: Always 0 (Success)
 */
char *string_toupper(char *s)
{
int i, len;
char upper[500];

len =  _strlen(s);
i = 0;

while (*(s + i) != '\0')
{
upper[i] = _toupper(*(s + i));
i++;
}
upper[i] = '\0';

for (i = 0; i < len; i++)
	*(s + i) = upper[i];
*(s + i) = '\0';
return (s);
}

/**
 * _toupper - conerts a char to uppercase
 *
 * @c: char to convert
 *
 * @Return: Upper case char
 */
char _toupper(char c)
{
char i, j;

for (i = 'a', j = 'A'; i <= 'z'; i++, j++)
{
if (c == i || c == j)
	return (j);
}

return (c);
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
