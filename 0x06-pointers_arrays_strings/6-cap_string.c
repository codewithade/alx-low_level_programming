#include <stdio.h>
#include "main.h"
/**
 * cap_string - converts to upper
 *
 * @s: string to converts
 *
 * Return: Always 0 (Success)
 */
char *cap_string(char *s)
{
int i, len;
char upper[1024];
char c;

len =  _strlen(s);
i = 0;
c = *(s + i);
while (c != '\0' && i < len - 1)
{
c = *(s + i);
if (_isspecial(c) == '1' && _isspecial(*(s + i + 1)) != '1')
{
upper[i] = c;
upper[i + 1] = _toupper(*(s + i + 1));
i += 2;
}
else
{
upper[i] = c;
i++;
}
}
upper[i] = _toupper(*(s + i));
upper[i + 1] = '\0';

for (i = 0; i < len; i++)
	*(s + i) = upper[i];
*(s + i) = '\0';
return (s);
}

/**
 * _isspecial - special char
 *
 * @c: char to evaluate
 */
char _isspecial(char c)
{
char sp[14];
int i;

i = 0;
sp[0] = ' ';
sp[1] = '\t';
sp[2] = '\n';
sp[3] = ',';
sp[4] = ';';
sp[5] = '.';
sp[6] = '!';
sp[7] = '?';
sp[8] = '"';
sp[9] = '(';
sp[10] = ')';
sp[11] = '{';
sp[12] = '}';
sp[13] = '\0';

while(*(sp + i) != '\0')
{
if (c == *(sp + i))
       return ('1');
i++;
}
return c;
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
