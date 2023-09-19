#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * main - Copies the contents of a file to another file.
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Description: 01- Check if args count are correct. If error, exit with 97.
 *              02- Allocate memory. If error, exit with 99.
 *              03- Open 'from' file AND 'to' file.
 *              04- Read from 'from' file.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	char *buff;
	int cp_from, cp_to, r, w;

	/* Description 01 */
	if (argc != 3)
		argc_error();

	/* Description 02 */
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	/* Description 03 */
	cp_from = open(argv[1], O_RDONLY);
	cp_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	/* Description 04 */
	r = read(cp_from, buff, 1024);
	while (r > 0)
	{
		if (cp_from == -1 || r == -1)
			read_error(buff, argv[1]);

		w = write(cp_to, buff, r);
		if (cp_to == -1 || w == -1)
			write_error(buff, argv[2]);

		r = read(cp_from, buff, 1024);
		cp_to = open(argv[2], O_WRONLY | O_APPEND);
	};

	free(buff);
	close_fds(cp_from, cp_to);
	return (0);
}

/**
 * close_fds - Close file descriptors.
 * @ffd: The 'from' file descriptor.
 * @tfd: The 'to' file descriptor.
 *
 * Return: Nothing
 */
void close_fds(int ffd, int tfd)
{
	int c;

	c = close(ffd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffd);
		exit(100);
	}

	c = close(tfd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffd);
		exit(100);
	}
}

/**
 * read_error - handling error with reading.
 * @filename: file name
 * @buff: buffer to free
 *
 * Return: Nothing
 */
void read_error(char *buff, char *filename)
{
	dprintf(STDERR_FILENO,
	    "Error: Can't read from file %s\n", filename);
	free(buff);
	exit(98);
}

/**
 * write_error - handling error with writing
 * @filename: file name
 * @buff: buffer to free
 *
 * Return: Nothing
 */
void write_error(char *buff, char *filename)
{
	dprintf(STDERR_FILENO,
	    "Error: Can't write to %s\n", filename);
	free(buff);
	exit(99);
}

/**
 * argc_error - handling error with args count
 *
 * Return: Nothing
 */
void argc_error(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

