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
	pid_t child_pid;
	int status;

	while (1)
	{
		printf("#cisfun$");
		bytes_read = getline(&line, &len, stdin);
		if (bytes_read == -1)
		{
			perror("Error:");
			return (1);
		}
		if (line[bytes_read - 1] == '\n')
			line[bytes_read - 1] = '\0';
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (child_pid == 0)
		{
			char *argv[] = {line, NULL};
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error:");
				return (1);
			}
		}
		wait(&status);
		sleep (1);
	}
	free(line);
	return (0);
}

