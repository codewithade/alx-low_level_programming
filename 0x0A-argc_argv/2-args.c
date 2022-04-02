#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - entry point to program
 *
 * @argc: commad line args count
 *
 * @argv: arrays of command ine args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;

i = 0;
while (argc--)
	printf("%s\n", argv[i++]);
return (0);
}
