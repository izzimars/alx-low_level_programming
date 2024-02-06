#include "lists.h"

/**
 * add_nodeint- Entry point
 * Description: 'the program's description'
 * @head: First operand
 * @str: Second operand
 *
 * Return: An int
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *lk;

	lk = (listint_t *) malloc(sizeof(listint_t));
	if (lk == NULL)
		return (NULL);
	lk->n = n;
	lk->next = *head;
	*head = lk;

	return (*head);
}
