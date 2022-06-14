#include "main.h"
#include <string.h>
/**
 * _strlen - to get the length of string
 * @s: string pointer to pass the function
 * Return: returns the length of string
 */
int _strlen(char *s)
{
int len;
len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}
