#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file name
 * @letters: the number of letters it should read and print
 *
 * Return: - If success, return the actual number of letters.
 *         - If the file name is NULL or any failure, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t op, re, wr;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		free(buf);
		return (0);
	}

	re = read(op, buf, letters);
	if (re == -1)
	{
		free(buf);
		return (0);
	}

	wr = write(STDOUT_FILENO, buf, re);
	if (wr == -1 || wr != re)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(op);

	return (wr);
}
