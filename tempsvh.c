#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern char **environ;

/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */

char *getname(char *p)
{
        char *pp;
        int i = 0, j = 0;

        while (p[i] != '=')
                ++i;
        pp = malloc (sizeof(char) * (i + 1));
        if (pp == NULL)
                return (NULL);
        for (j = 0; j < i; j++)
		pp[j] = p[j];
        pp[j] = '\0';
        return (pp);
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
                if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
                        break;
                op = *(s1 + i) - *(s2 + i);
                i++;
	}
	return (op);
}

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
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string.
 */
int _strlen(char *s)
{
        int count = 0;

        while (*(s + count) != '\0')
                count++;
        return (count);
}

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *src)
{
        int count = 0, i;
        char *dest;

        i = _strlen(src);
        dest = malloc(sizeof(char) * (i + 1));
        while (count >= 0)
        {       
                *(dest + count) = *(src + count);
                if (*(src + count) == '\0')
                        break;
                count++;
        }
        dest[count] = '\0';
	return (dest);
}

int _unsetenv(const char *name)
{
	char **env;
        char *p;
        char *pp;
        int i, flag = 0;

        pp = (char *) name;
        for (env = environ, i = 0; env[i] != NULL; i++)
        {
                p = getname(env[i]);
                if(_strcmp(p, pp) == 0)
                {
			free(p);
			free(environ[i]);
			flag = 1;
		}
		if (flag == 1)
			environ[i] = environ[i + 1];
	}
	if (flag == 0)
		return (0);
	environ[i] = NULL;
	for (env = environ, i = 0; env[i] != NULL; i++)
                printf("%s\n", env[i]);
	return 0;
}

/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
int _setenv(const char *name, const char *value, int overwrite)
{
	char **env;
        char *p;
        char *pp;
	char *ppp;
	int i;

        pp = (char *) name;
	ppp = (char *) value;
        for (env = environ, i = 0; env[i] != NULL; i++)
        {
                p = getname(env[i]);
                if(_strcmp(p, pp) == 0)
		{
			free(p);
			if (overwrite == 0)
			{
				printf("I am here =====\n");
				return (0);
			}
			free(environ[i]);
			environ[i] = _strcat(environ[i],pp);
			environ[i] = realloc(environ[i], _strlen(pp) + _strlen(ppp) + 2);
			environ[i] = _strcat(environ[i], "=");
			environ[i] = strcat(environ[i], ppp);
			return (0);
		}
	}
	p = malloc(_strlen(pp) + _strlen(ppp) + 2);
	if (p == NULL) {
		return -1;
	}
	p = _strcat(p, pp);
	p = _strcat(p, "=");
	p = _strcat(p, ppp);
	environ[i] = p;
	environ[i + 1] = NULL;
	for (env = environ, i = 0; env[i] != NULL; i++)
		printf("%s\n", env[i]);
	return (0);
}

int main() {
    if (_setenv("MYVARIAC", "myvaluespaceinspreadthouugh", 0) == 0) {
        printf("Environment variable set successfully\n");
    } else {
        printf("Failed to set environment variable\n");
    }
    _unsetenv("MYVARIAC");
    return (0);
}
