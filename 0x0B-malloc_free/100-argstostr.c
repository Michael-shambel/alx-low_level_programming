#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *argstostr - cocacatenate all argument
 *@ac: first argument
 *@av: double pointer argument
 *
 * Return: character cocatinaed
 */
char *argstostr(int ac, char **av)
{
	int arg = 0, x = 0, y = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		while (av[x][y])
		{
			arg++;
			y++;
		}
		y = 0;
		x++;
	}

	s = malloc((sizeof(char) * arg) + ac + 1);

	x = 0;
	while (av[x])
	{
		while (av[x][y])
		{
			s[k] = av[x][y];
			k++;
			y++;
		}
		s[k] = '\n';

		y = 0;
		k++;
		x++;
	}
	k++;
	s[k] = '\0';
	return (s);
}
