#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concate two strings
 * @s1: first word
 * @s2: second word
 *
 * Return: Array
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *al;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	al = malloc(sizeof(char) * (i + j + 1));
	if (al == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i])
	{
		al[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		al[i] = s2[j];
		i++;
		j++;
	}
	return (al);
}

