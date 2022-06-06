#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main -print last digit of the number
 *
 *
 * Return: Always(success)
 */
int main(void)
{
int n,	finald;
srand(time(0));
n = rand() - RAND_MAX / 2;
finald = n %  10;
if (finald > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, finald);
}
else if (finald == 0)
{
printf("Last digit of %d is %d and is 0\n", n, finald);
}
else if (finald < 6 && finald != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, finald);
}
return (0);
}
