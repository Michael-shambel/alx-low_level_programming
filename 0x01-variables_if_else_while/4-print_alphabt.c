#include<stdio.h>

/**
  * main - Prints some letters of alphabet
  *
  * Return: Always (Success)
  */
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (a != 'e' && a != 'q')
{
putchar(a);
}
}
putchar('\n');
return (0);
}

