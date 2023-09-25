#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0, n = 0;
while (s[i] != '\0')
{
while (accept[n] != '\0')
{
if (s[i] == accept[n])
{
return (s + i);
}
n++;
}
i++;
}
return (NULL);
}


