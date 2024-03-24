#include "main.h"
#include <string.h>
/**
 * append_text_to_file - apprends text at the end of a file
 * @filename: the name of the file
 * @text_content: text to append
 *
 * Return: 1 on success -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		write(fd, text_content, strlen(text_content));
	}

	close(fd);
	return (1);
}
