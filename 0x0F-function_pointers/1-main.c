#include <stdio.h>
#include "function_pointers.h"

/**
 *  * print_elem - prints an integer, in hexadecimal
 *   * @elem: the integer to print
 *    *
 *     * Return: Nothing.
 *      */
void print_elem(int elem)
{
		printf("(%d)\n", elem);
}

/**
 *  * main - check the code .
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
		array_iterator(NULL, 5, &print_elem);
			return (0);
}
