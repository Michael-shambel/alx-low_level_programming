#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - calculate multip
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int sum = 0, k;
	char *arr;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			arr = argv[i];
			for (k = 0; k < strlen(arr); k++)
			{
				if (arr[k] < 48 || arr[k] > 57)
				{
					printf("error\n");
					return (1);
				}
			}
			sum = sum + atoi(arr);
			arr++;
		}
	printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
