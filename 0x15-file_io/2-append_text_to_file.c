#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: the NULL terminated string to add at the end of the file.
 *
 * Return:  1 - (Success)
 *         -1 - if the filename or any failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);
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
	if (wr == -1)
		return (-1);

	close(op);

	return (1);
}

