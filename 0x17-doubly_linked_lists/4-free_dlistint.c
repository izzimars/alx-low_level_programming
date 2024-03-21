#include "lists.h"

/**
 * free_dlistint - Add an element of dlistint at the
 * beginning of dlistint_t list
 *
 * @head: head of the list
 * Return: Address of the added data
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur;

	if (head == NULL)
		return;
	cur = head;
	while (cur != NULL)
	{
		head = head->next;
		free(cur);
		cur = head;
	}
}
