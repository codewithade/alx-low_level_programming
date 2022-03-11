#include <stdio.h>
#include <stdlib.h>
/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n=0;
for(;n<10;n++)
{
putchar(n+'0');
}
char ch='a';
for(;ch<='f';ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
