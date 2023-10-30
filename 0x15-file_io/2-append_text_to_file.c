#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: the NULL terminated string to add at the end of the file.
 *
 * Return: - If success, return 1.
 *         - Else, return -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ope, wri, len;

	if (filename == NULL)
		return (-1);

	ope = open(filename, O_WRONLY | O_APPEND);
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
	if (wri == -1)
		return (-1);

	close(ope);

	return (1);
}
