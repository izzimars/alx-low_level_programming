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
	if (*lineptr == NULL)
	{
		bufsize = 128;
		*lineptr = malloc(bufsize);
		if (*lineptr == NULL)
			return -1;
	}
	while (1)
	{
		bytes_read = read(stream, &c, 1);
		if (bytes_read == -1)
			return -1;
		if (c == EOF)
		{
			break;
		}
		else if (bytes_read == 0)
		{
			if (pos == 0)
				return 0;
			else
				break;
		}
		else if ((char)c == '\n')
                {
                        break;
                }
		(*lineptr)[pos++] = c;
		if (pos >= bufsize - 1)
		{
			bufsize *= 2;
			char *temp = realloc(*lineptr, bufsize);
			if (temp == NULL)
				return -1;
			*lineptr = temp;
		}
	}
	(*lineptr)[pos] = '\0';
	*n = bufsize;
	return pos;
}

int main() {
    char *line = NULL;
    size_t len = 0;
    ssize_t bytes_read;

    printf("$");
    fflush(STDIN_FILENO);
    bytes_read = custom_getline(&line, &len, STDIN_FILENO);
    printf("%s\n", line);
    printf("%li", bytes_read);
    if (line != NULL)
    {
        free(line);
    }
    return 0;
}
