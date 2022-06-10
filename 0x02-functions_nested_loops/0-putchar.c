#include "main.h"
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char print[3] = "putchar";
int i = 0;
while (i < 2)
{
putchar(print[i]);
i++;
}
_putchar('\n');
return (0);
}
