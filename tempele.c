#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

extern char **environ;

/**
 * *_strcat - function commute srtings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}

/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if (i > 3)
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (op);
}

int main(int ac, char **av)
{
	struct stat st;
	char **env;
	char *p;
	char *token;
	char path[1024] = "";

	if (ac < 2)
	{
		printf("Usage: %s path_to_file ...\n", av[0]);
		return (1);
	}
	for (env = environ; *env != NULL; env++)
	{
		if(_strcmp(*env, "PATH") == 0)
			break;
	}
	p = *env;
	p = p + 5;
	token = strtok(p, ":");
	while (token != NULL)
	{
                _strcat(path, token);
                _strcat(path, "/");
                _strcat(path, av[1]);
		printf("%s:", path);
		if (stat(path, &st) == 0)
		{
			printf(" FOUND\n");
			break;
		}
		else
		{
			printf(" NOT FOUND\n");
			path[0] = '\0';
		}
		token = strtok(NULL, ":");
	}
	return (0);
}

