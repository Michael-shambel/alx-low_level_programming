#include<stdio.h>

/**
 *  main - alphabet in decending order
 *
 *  Return: Always (success)
 */
int main(void)
{
char a;
for (a = 'z'; a >= 'a'; a--)
{
putchar(a);
}
putchar('\n');
return (0);
}
