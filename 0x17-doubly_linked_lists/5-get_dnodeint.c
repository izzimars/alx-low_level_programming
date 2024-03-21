#include "lists.h"

/**
 * get_dnodeint_at_index - Add an element of dlistint at
 * the argument index position in the dlistint_t list
 *
 * @head: head of the list
 * @index: The int data
 * Return: Address of the added data
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	cur = head;
	while (cur != NULL)
	{
		if (i == index)
			return (cur);
		cur = cur->next;
		i++;
	}
	return (NULL);
}
