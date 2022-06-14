#include "main.h"

/**
 * _puts - this is the function of puts
 * @str: a param to puts function
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
