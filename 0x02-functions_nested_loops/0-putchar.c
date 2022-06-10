#include "main.h"
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char print[9] = "_putchar";
int i = 0;
while (i < 8)
{
_putchar(print[i]);
i++;
}
_putchar('\n');
return (0);
}
