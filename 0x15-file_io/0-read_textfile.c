#include "main.h"

/**
 * read_textfile- Entry point
 * Description: 'the program's description'
 * @filename: First operand
 * @letters: Second operand
 *
 * Return: An int
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read, bytes_written;
	int source_fd;
	char *buffer;

	if (filename == NULL)
		return (0);
	source_fd = open(filename, O_RDONLY);
	if (source_fd == -1) 
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);
	bytes_read = read(source_fd, buffer, letters);
	if (bytes_read == -1)
		return (0);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	close(source_fd);
	if (bytes_written == -1)
		return (0);
	free(buffer);
	return (bytes_written);
}
