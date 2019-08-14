#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - creates a file
 *
 * @filename: name of the file to create
 * @text_content: string to write
 *
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (0);

	while (*text_content != 0)
	{
		len++;
		text_content++;
	}

	if (write(fd, text_content, len) != len)
		return (-1);

	close(fd);
	return (1);
}
