#include "main.h"

/**
 *get_endianness - check endiness
 *
 *Return: integer 0 or 1
 *
 *
 */
int get_endianness(void)
{
	int i;
	char *j;

	i = 1;
	j = (char *) &i;
	return (*j);
}
