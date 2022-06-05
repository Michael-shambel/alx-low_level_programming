#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 *  main - print if the number is posetive or negative
 *
 *  return: always (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n>0)
{
printf("%d is a posetive number\n", n);
}
else if (n==0)
{
printf("%d is zero\n", n);
}
else (n<0)
{
printf("%d is a negative number\n", n);
}
return (0);
}
