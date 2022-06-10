#include "main.h"
/**
 * main - print alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char word = 'a';
while (word <= 'z')
{
_putchar(word);
word++;
}
_putchar('\n');
}
