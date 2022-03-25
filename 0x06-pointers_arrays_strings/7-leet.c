#include <stdio.h>
#include "main.h"
/**
 * leet - encodes a string
 *
 * @s: pointer to evaluate
 *
 * Return: encoded string
 */
char *leet(char *s)
{
int i;
char c;

i = 0;
while (*(s + i) != '\0')
{
c = get_code(*(s + i));
*(s + i) = c;
i++;
}
*(s + i) = '\0';
return (s);
}

/**
 * get_code - get the code for char
 *
 * @c: char to encode
 *
 * Return: Always the char
 */
char get_code(char c)
{
int i;
char a[6];
char b[6];
char r[6];

i = 0;
a[0] = 'a';
b[0] = 'A';
r[0] = '4';
a[1] = 'e';
b[1] = 'E';
r[1] = '3';
a[2] = 'o';
b[2] = 'O';
r[2] = '0';
a[3] = 't';
b[3] = 'T';
r[3] = '7';
a[4] = 'l';
b[4] = 'L';
r[4] = '1';
a[5] = '\0';
b[5] = '\0';
r[5] = '\0';
while (a[i] != '\0')
{
if (c == a[i] || c == b[i])
	return (r[i]);
i++;
}
return (c);
}
