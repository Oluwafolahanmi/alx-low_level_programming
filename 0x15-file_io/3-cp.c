#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-main.c"

/**
 * _buffer - function that allocates 1024 bytes to buffer
 * @file: function parameter
 * Return: a pointer
 */

char *_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}

/**
 * close_file - function that closes descriptors
 * @fd: function parameter
 */

void close_file(int fd)
{
	int closed;

	closed = close(fd);
	if (closed == -1)
	{
		dprintf(STDERR_FILENO, "Error: cant't close file %d\n", fd);
		exit(100);
	}
}
