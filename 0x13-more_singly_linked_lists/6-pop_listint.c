#include "lists.h"

/**
 * pop_listint - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

int pop_listint(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
	{
		return (0);
	}
	current = *head;
	current->n = (*head)->n;
	*head = (*head)->next;
	return (current->n);
}
