#include "lists.h"

/**
 * insert_dnodeint_at_index - Add an element of dlistint at
 * the argument index position in the dlistint_t list
 *
 * @h: head of the list
 * @idx: The int data
 * @n: The int data
 * Return: Address of the added data
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur, (*new), (*pre);
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t *));
	if (new == NULL)
		return (NULL);
	new->n = n;
	cur = *h;
	if (cur->prev != NULL)
		while (cur->prev != NULL)
			cur = cur->prev;
	pre = NULL;
	while (cur != NULL)
	{
		if (i == idx)
		{
			if (cur->prev == NULL)
			{
				new = add_dnodeint(h, n);
				return (new);
			}
			if (cur->next == NULL)
			{
				new = add_dnodeint_end(h, n);
				return (new);
			}
			if (cur != *h)
				pre->next = new;
			new->prev = pre;
			new->next = cur;
			cur->prev = new;
			return (new);
		}
		pre = cur;
		cur = cur->next;
		i++;
	}
	return (NULL);
}
