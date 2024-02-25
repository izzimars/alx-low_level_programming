#include <string.h>
#include "main.h"
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

/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
path_t *add_node(path_t **head, char *str)
{
	path_t *new;
	size_t nchar;

	new = malloc(sizeof(path_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->next = *head;
	*head = new;

	return (*head);
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
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(path_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("%s\n",  "(nil)");
		else
			printf("%s\n", h->str);
		h = h->next;
		nelem++;
	}
	return (nelem);
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
	path_t *head = NULL;
	while (token != NULL)
        {
		head = add_node(&head, token);
                token = strtok(NULL, ":");
        }
	print_list(head);
	return (0);
}

