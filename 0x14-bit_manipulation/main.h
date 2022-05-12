#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
unsigned int binary_to_uint(const char *b);
int _strlen(const char *s);
int is_validated(const char *b);
int _pow(int base, int power);
void print_binary(unsigned long int n);
int get_start_point(unsigned long int num);
#endif
