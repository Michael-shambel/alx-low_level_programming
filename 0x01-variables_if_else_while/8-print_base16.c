#include <stdio.h>

/**
 * main - print heximal
 *
 * Return: Always(success)
 */
int main(void)
{
char w;
for (w = '0'; w <= '9'; w++)
{
putchar(w);
}
for (w = 'a'; w <= '9'; w++)
{
putchar(w);
}
putchar('\n');
return (0);
}
