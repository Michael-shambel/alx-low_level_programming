#include "main.h"
#include <stdio.h>

/**
 *error_f - check file
 *@file_from: intial file
 *@file_to: destination
 *@argv: argument vector
 *
 * Return: nothing
 */
void error_f(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 *main - copy content
 *@argc: argument count
 *@argv: argument vector
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t chars, wte;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_f(file_from, file_to, argv);
	chars = 1024;
	while (chars == 1024)
	{
		chars = read(file_from, buffer, 1024);
		if (chars == -1)
			error_f(-1, 0, argv);
		wte = write(file_to, buffer, chars);
		if (wte == -1)
			error_f(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
