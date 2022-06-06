#include<stdio.h>

/**
 *
 * main - print alphabet except two of them
 *
 * Return: Always( success)
 */
int main
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (a != 'e'; &&a != 'q')
{
puchar(a);
}
}
putchar('\n');
return (0);
}

