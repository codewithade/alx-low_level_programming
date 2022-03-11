#include <stdio.h>
#include <stdlib.h>
/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
for(;ch<='z';ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
