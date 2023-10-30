#include "main.h"

/**
 *read_textfile - read textfile and print the letter
 *@filename: name of the file
 *@letters: number of letter
 *
 *Return: number of letters
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rd, wte;
	char *buffer;

	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);
	rd = read(file, buffer, letters);
	wte = write(STDOUT_FILENO, buffer, rd);

	close(file);
	free(buffer);
	return (wte);
}
