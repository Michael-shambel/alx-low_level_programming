#include "main.h"
#include <stdio.h>

/**
 * main -
 * @argc:
 * @argv:
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
