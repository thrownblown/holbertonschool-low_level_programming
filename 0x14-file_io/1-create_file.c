#include "holberton.h"

/**
 *create_file- file maker pro
 *@filename: title of file
 *@text_content: content for file
 *Return: -1 if err else 1
 */


int create_file(const char *filename, char *text_content)
{
	int file, output, i = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = '\0';
		close(file);
		return (1);
	}

	while (text_content[i])
	{
		output = write(file, &text_content[i], 1);
		if (output == -1)
			return (-1);
		i++;
	}

	close(file);
	return (1);
}
