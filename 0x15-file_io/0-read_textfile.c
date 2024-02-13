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
	int source_fd, n = 0;
	char buffer[1024];

	if (filename == NULL)
		return (0);
	source_fd = open(filename, O_RDONLY);
	if (source_fd == -1) 
		return (-1);
	while (n < (int)letters)
	{
		bytes_read = read(source_fd, buffer + n, 1);
		if (bytes_read == -1) 
		{
			close(source_fd);
			return (-1);
		}
		if (bytes_read == 0)
			break;
		if (n == 1023)
		{
			bytes_written = write(1, buffer, n);
			n = 0;
		}
		++n;
	}
	bytes_written = write(1, buffer, n);
	close(source_fd);
	if (bytes_written == -1)
		return (-1);
	return (bytes_written);
}
