#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (success)
 *
 */
int main(void)
{
	printf("size of a char: %i byte(s)\n", Sizeof(char));
	printf("size of an int: %i byte(s)\n", Sizeof(int));
	printf("size of a long int: %i byte(s)\n", Sizeof(long int));
	printf("size of a long long int: %i byte(s)\n", Sizeof(long long int));
	printf("size of a float: %i byte(s)\n", Sizeof(float));
	return (0);
}
