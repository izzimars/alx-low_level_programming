#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t bytes_read;

	while (1)
	{
		printf("#cisfun$ ");
		bytes_read = getline(&line, &len, STDIN_FILENO);
		if (bytes_read == -1)
		{
			perror("Error:");
			return (1);
		}
		printf("%li === %s\n", bytes_read, line);
	}
	free(line);
	return (0);
}

