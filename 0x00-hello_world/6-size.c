#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (success)
 *
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", Sizeof(char));
	printf("Size of an int: %i byte(s)\n", Sizeof(int));
	printf("Size of a long int: %i byte(s)\n", Sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", Sizeof(long long int));
	printf("Size of a float: %i byte(s)\n", Sizeof(float));
	return (0);
}
