#include "lists.h"

/**
 * add_dnodeint - Add an element of dlistint at the
 * beginning of dlistint_t list
 *
 * @head: head of the list
 * @n: The int data
 * Return: Address of the added data
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
		new->next = NULL;
	else
	{
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
