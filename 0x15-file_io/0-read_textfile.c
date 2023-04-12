#include "main.h"
#include <stdlib.h>

/*
 * read_textfile - function reads and prints textfile
 * @filename - function parameter
 * @letters - function parameter
 * Return - 0 if fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, readfile, print;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	if (filename == NULL)
		return(0);
	buffer = malloc(sizeof(char) * letters);
	readfile = read(fd, buffer, letters);
	print = write(STDOUT_FILENO, buffer, readfile);

	free(buffer);
	close(fd);
	return (print);
}
