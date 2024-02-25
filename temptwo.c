#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

ssize_t custom_getline(char **lineptr, size_t *n, int stream) {
	size_t bufsize = *n;
	size_t pos = 0;
	int c;
	ssize_t bytes_read;

	if (lineptr == NULL || n == NULL)
		return -1;
	printf("I am here\n");
	if (*lineptr == NULL)
	{
		bufsize = 128;
		*lineptr = malloc(bufsize);
		if (*lineptr == NULL)
			return -1;
	}
	printf("a2===========\n");
	printf("a2===========1\n");
	while (1)
	{
		bytes_read = read(stream, &c, 1);
		if (bytes_read == -1)
			return -1;
		if (c == EOF)
		{
			printf("aaaaaaaaaaar");
			break;
		}
		else if (bytes_read == 0)
		{
			printf("grrrrr");
			if (pos == 0)
				return 0;
			else
				break;
		}
		else if (c == '\n' || c == '\r')
		{
			printf("aaaaaaaaaaar");
			(*lineptr)[pos] = '\0';
			return pos;
		}
		(*lineptr)[pos++] = c;
		printf("%li", pos);
		printf("===========%c==========", c);
		printf("%li=======", bytes_read);
		if (pos >= bufsize - 1)
		{
			bufsize *= 2;
			char *temp = realloc(*lineptr, bufsize);
			if (temp == NULL)
				return -1;
			*lineptr = temp;
		}
		printf("%ld\n", bytes_read);
	}
	printf("I am outside");
	(*lineptr)[pos] = '\0';
	*n = bufsize;
	return pos;
}

int main() {
    char *line = NULL;
    size_t len = 0;
    ssize_t bytes_read;

    while (1)
    {
        printf("$ ");
        bytes_read = custom_getline(&line, &len, STDIN_FILENO);
        if (bytes_read == -1)
            break;
        printf("%s", line);
    }
    if (line != NULL)
    {
        free(line);
    }
    return 0;
}
