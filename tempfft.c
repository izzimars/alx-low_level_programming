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
 * main - prints the environment
 *
 * Return: Always 0.
 */

char *_getenv(const char *name)
{
        char **env;
        char *p;
        char *pp;

        pp = (char *) name;
        for (env = environ; *env != NULL; env++)
        {
                p = getname(*env);
                if(_strcmp(p, pp) == 0)
                {
                        free(p);
			return (*env);
                }
                free(p);
        }
        return (NULL);
}

int main(int ac, char **av)
{
        char *p;
        char *token;
	char *result;
	
	result = _getenv("PATH");
        p = result;
	p = p + 5;
	token = strtok(p, ":");
        while (token != NULL)
        {
                printf("%s\n", token);
                token = strtok(NULL, ":");
        }
        return (0);
}

