#include "main.h"

/**
 * append_text_to_file - function
 * @filename: function parameter
 * @text_content: function parameter
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length, append;

	length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0 ; text_content[length];)
			length++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	append = write(fd, text_content, length);

	if (fd == -1 || append == -1)
		return (-1);
	
	close(fd);

	return (1);
}
