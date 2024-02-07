#include "lists.h"

/**
 * pop_listint - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

int pop_listint(listint_t **head)
{
	listint_t *current, (*prev);
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	current = *head;
	n = (*head)->n;
	prev = (*head)->next;
	free(current);
	*head = prev;
	return (n);
}
