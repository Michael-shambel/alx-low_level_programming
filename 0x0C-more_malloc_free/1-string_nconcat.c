#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - join two string
 *@s1: first string
 *@s2: second string
 *@n: intiger
 *Return: character
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *u;
unsigned int i, j, k, l;

k = 0;
l = 0;
while (s1 && s1[k])
k++;
while (s2 && s2[l])
l++;

if (n < k)
u = malloc(sizeof(char) * (k + n + 1));
else
u = malloc(sizeof(char) * (k + l + 1));
i = 0;
j = 0;
if (!u)
return (NULL);
while (i < k)
{
u[i] = s1[i];
i++;
}
while (n < l && i < (k + n))
u[i++] = s2[j++];
while (n >= l && i < (k + l))
u[i++] = s2[j++];
u[i] = '\0';
return (u);
}
