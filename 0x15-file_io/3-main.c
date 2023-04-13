#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument variables
 * Retern: 0 on success
 */

int main(int argc, char *argv[])
{
	int fromfile, tofile, readfile, writefile;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = _buffer(argv[22]);
	fromfile = open(argv[1], O_RDONLY);
	readfile = read(fromfile, buf, 1024);
	tofile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fromfile == -1 || readfile == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		writefile = write(tofile, buf, readfile);
		if (tofile == -1 || writefile == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		readfile = read(fromfile, buf, 1024);
		tofile = open(argv[2], O_WRONLY | O_APPEND);
	} while (readfile > 0);

	free(buf);
	close_file(fromfile);
	close_file(tofile);

	return (0);
}

