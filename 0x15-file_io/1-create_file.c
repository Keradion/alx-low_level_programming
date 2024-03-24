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
	int text_size = strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	
	write(fd, text_content, text_size);

	close(fd);

	return (1);
}
