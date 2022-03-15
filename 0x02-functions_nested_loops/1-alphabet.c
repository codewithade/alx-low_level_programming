#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
print_alphabet();
return (0);
}

void print_alphabet(void)
{
char ch;

ch = 'a';
for (; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
}
