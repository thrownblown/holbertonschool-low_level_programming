#include "holberton.h"

/**
 * main - copies files
 * @argc: arg count
 * @argv: arg array, should be len of 3
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int src, dst;
	char *tmp;
	ssize_t outchars, inchars = 1;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	tmp = malloc(1024 * sizeof(char));
	if (tmp == NULL)
		return (-1);

	src = open(argv[1], O_RDONLY);

	dst = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (inchars)
	{
		inchars = read(src, tmp, 1024);

		if (src == -1 || inchars == -1)
		{
			free(tmp);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

			outchars = write(dst, tmp, inchars);

		if (dst == -1 || outchars == -1)
		{
			free(tmp);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	free(tmp);

	if (close(src))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}
	else if (close(dst))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dst);
		exit(100);
	}

	return (0);
}
