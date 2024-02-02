#include "lists.h"

/**
 * add_node- Entry point
 * Description: 'the program's description'
 * @head: First operand
 * @str: Second operand
 *
 * Return: An int
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *lk;
	size_t nchar;

	lk = (list_t *) malloc(sizeof(list_t));
	if (lk == NULL)
		return (NULL);

	lk->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	lk->len = nchar;
	lk->next = *head;
	*head = lk;

	return (*head);
}
