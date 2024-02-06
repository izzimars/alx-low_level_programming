#include "lists.h"

/**
 * get_nodeint_at_index - frees a list
 * @head: head of the linked list.
 * @index: An integer parameter
 *
 * Return: no return.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int n = 0;

	if (head == NULL)
	{
		return (0);
	}
	current = head;
	while ((n <= index) && (current != NULL))
	{
		if (n == index)
			return (current);
		current = current->next;
		++n;
	}
	return (NULL);
}
