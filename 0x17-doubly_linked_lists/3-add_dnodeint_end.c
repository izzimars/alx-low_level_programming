#include "lists.h"

/**
 * add_dnodeint_end - Add an element of dlistint at the
 * beginning of dlistint_t list
 *
 * @head: head of the list
 * @n: The int data
 * Return: Address of the added data
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *cur;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		cur = *head;
		while (cur->next != NULL)
			cur = cur->next;
		cur->next = new;
		new->prev = cur;
	}
	return (new);
}
