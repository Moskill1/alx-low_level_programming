#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to STDOUT.
 * @filename: the name of the file to be read
 * @letters: the number of letters to be read
 *
 * Return: the actual number of bytes read and printed, or 0 if fucttion fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, w, t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	return (0);

	t = read(fd, buf, letters);
	if (t == -1)
	{
	free(buf);
	return (0);
	}

	w = write(STDOUT_FILENO, buf, t);
	free(buf);
	close(fd);

	return (w);
}
