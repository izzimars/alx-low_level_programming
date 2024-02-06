#include "lists.h"

/**
 * sum_listint - frees a list
 * @head: head of the linked list.
 *
 * Return: no return.
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	int n = 0;

	if (head == NULL)
	{
		return (0);
	}
	current = head;
	while (current != NULL)
	{
		n += current->n;
		current = current->next;
	}
	return (n);
}
