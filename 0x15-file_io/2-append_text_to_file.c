#include "main.h"

/**
 *append_text_to_file - append text
 *@filename: filename
 *@text_content: added content
 *
 *Return: int if file exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int nolett;
	int wte;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);
	if (text_content)
	{
		for (nolett = 0; text_content[nolett]; nolett++)
			;
		wte = write(file, text_content, nolett);
		if (wte == -1)
			return (-1);
	}
	close(file);
	return (1);
}
