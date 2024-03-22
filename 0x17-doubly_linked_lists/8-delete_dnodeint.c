#include "lists.h"

/**
 * delete_dnodeint_at_index - Add an element of dlistint at
 * the argument index position in the dlistint_t list
 *
 * @head: head of the list
 * @index: The int data
 * Return: Address of the added data
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur, (*pre);
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	cur = *head;
	pre = NULL;
	while (cur != NULL)
	{
		if (i == index)
		{
			if (pre == NULL)
			{
				*head = cur->next;
			}
			else
				pre->next = cur->next;
			free(cur);
			return (1);
		}
		pre = cur;
		cur = cur->next;
		i++;
	}
	return (-1);
}
