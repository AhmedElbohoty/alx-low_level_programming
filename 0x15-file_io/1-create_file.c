#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - reads a text file and prints it to the POSIX standard output
 * @filename:  name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 - (Success)
 *         -1 - if the filename or any failure
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, len;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (op == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(op);
		return (1);
	}

	len = 0;
	while (text_content[len])
		len++;

	wr = write(op, text_content, len);

	if (wr < 0)
		return (-1);

	close(op);

	return (1);
}

