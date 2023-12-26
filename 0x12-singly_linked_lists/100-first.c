#include "lists.h"
/**
 *__attribute__((constructor)) before_main - excute before main function
 *
 *Return: nothing
 *
 */

void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
