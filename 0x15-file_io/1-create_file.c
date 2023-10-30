#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - reads a text file and prints it to the POSIX standard output
 * @filename:  name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: - If success, return 1.
 *         - Else, return -1.
 */
int create_file(const char *filename, char *text_content)
{
	int ope, wri, len;

	if (filename == NULL)
		return (-1);

	ope = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (ope == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(ope);
		return (1);
	}

	len = 0;
	while (text_content[len])
		len++;

	wri = write(ope, text_content, len);

	if (wri < 0)
		return (-1);
	close(ope);

	return (1);
}
