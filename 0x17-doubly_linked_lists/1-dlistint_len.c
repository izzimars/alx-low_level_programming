#include "lists.h"

/**
 * dlistint_len - return the number of elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *cur;
	int i = 0;

	cur = (dlistint_t *) h;
	while (cur != NULL)
	{
		i++;
		cur = cur->next;
	}
	return (i);
}
