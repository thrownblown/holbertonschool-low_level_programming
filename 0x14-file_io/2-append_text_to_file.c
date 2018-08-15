#include "holberton.h"

/**
 * append_text_to_file - tacks on text
 * @filename: file title
 * @text_content: file content to tack
 *
 * Return: -1 if err else 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = '\0';

	file = open(filename, O_WRONLY | O_APPEND, 0600);
	if (file == -1)
		return (-1);

	while (text_content[i])
		write(file, &text_content[i++], 1);

	close(file);

	return (1);
}
