#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
char s[] = "Last digit of";
int l = abs(n%10);
if(l>5)
{
printf("%s %d is %d and is greater than 5\n", s,n,l);
}
else if(l==0)
{
printf("%s %d is %d and is 0\n", s,n,l);
}
else if(l<6 && l!=0)
{
printf("%s %d is %d and is less than 6 and not 0\n",s,n,l);
}
return (0);
}
