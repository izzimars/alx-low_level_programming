#include "lists.h"

/**
 * insert_nodeint_at_index- Entry point
 * Description: 'the program's description'
 * @head: First operand
 * @idx: Second parameter
 * @n: Second operand
 *
 * Return: An int
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *lk, (*current);
	unsigned int i = 0;

	current = *head;
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && current != NULL; i++)
		{
			current = current->next;
		}
	}
	if (current == NULL && idx != 0)
		return (NULL);
	lk = malloc(sizeof(listint_t));
	if (lk == NULL)
		return (NULL);
	lk->n = n;
	if (idx == 0)
	{
		lk->next = *head;
		*head = lk;
	}
	else
	{
		lk->next = current->next;
		current->next = lk;
	}

	return (lk);
}
