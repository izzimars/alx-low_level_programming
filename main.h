#ifndef _MAINH_
#define _MAINH_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for ALX project
 */
typedef struct path_h
{
	char *str;
	struct path_h *next;
} path_t;

char *getname(char *p);
int _strcmp(char *s1, char *s2);
char *_getenv(const char *name);
path_t *add_node(path_t **head, char *str);
char *_strcpy(char *src);
int _strlen(char *s);
path_t *add_node(path_t **head, char *str);
size_t print_list(path_t *h);

#endif
