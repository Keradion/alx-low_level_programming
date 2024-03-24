#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: the name of the file to be read
 * @letters: number of letters in the file
 *
 * Return: if no file exits, NULL or number of letters it could read / print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	char *file_buff = NULL;
	ssize_t char_read = 0;
	ssize_t char_write = 0;

	if (filename == NULL || letters == 0)
		return (0);

	file_buff = malloc(sizeof(char) * letters);
	if (file_buff == NULL)
	{
		close(fd);
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(file_buff);
		return (0);
	}
	char_read = read(fd, file_buff, letters);
	if (char_read == -1)
	{
		free(file_buff);
		close(fd);
		return (0);
	}

	char_write = write(STDOUT_FILENO, file_buff, letters);
	if (char_write == -1)
	{
		free(file_buff);
		close(fd);
		return (0);
	}
	free(file_buff);
	close(fd);
	return (char_read);
}

