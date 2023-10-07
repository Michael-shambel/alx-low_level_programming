#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int i = 0;
long j = 1, k = 2, tot = k;

while (k + j < 4000000)
{
k = k + j;
if (k % 2 == 0)
tot =  tot + k;
j = k - j;
++i;
}
printf("%ld\n", tot);
return (0);
}
