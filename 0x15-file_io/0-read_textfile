#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: the file name
* @letters: the number of letters it should read and print
*
* Return: the actual number of letters (Success)
*         0 - if the file name is NULL or any failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		free(buff);
		return (0);
	}

	re = read(op, buff, letters);
	if (re == -1)
	{
		free(buff);
		return (0);
	}

	wr = write(STDOUT_FILENO, buff, re);
	if (wr == -1 || wr != re)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(op);

	return (wr);
}

