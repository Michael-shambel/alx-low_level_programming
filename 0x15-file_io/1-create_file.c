#include "main.h"

/**
 *create_file - create file
 *@filename: name of file
 *@text_content: conetent of text
 *
 *Return: an integer to create a file
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int nolett;
	int wte;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (nolett = 0; text_content[nolett]; nolett++)
		;
	wte = write(file, text_content, nolett);
	if (wte == -1)
		return (-1);
	close(file);
	return (1);
}
