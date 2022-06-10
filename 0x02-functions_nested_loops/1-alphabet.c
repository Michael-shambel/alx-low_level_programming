#include "main.h"
/**
 * main - print lowercase alphabet
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
char word = 'a';
while (word <= 'z')
{
_putchar(word);
word++;
}
_putchar('\n');
return (0);
}
