#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculate multip
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int j = 0, k = 0;

	if (argc > 1)
	{

		j = atoi(argv[1]);
		k = atoi(argv[2]);
		printf("%d\n", j * k);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
