#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: string to be written
 *
 * Return: -1 on failure 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int fd = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		write(fd, text_content, strlen(text_content));
	}

	close(fd);

	return (1);
}
