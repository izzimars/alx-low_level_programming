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
	listint_t *lk, (*current), (*prev);
	unsigned int i = 0;

	if (head == NULL)
		return (0);
	lk = (listint_t *) malloc(sizeof(listint_t));
	if (lk == NULL)
		return (NULL);
	lk->n = n;
	current = *head;
	prev = *head;
	while ((i <= idx) && (current != NULL))
	{
		if (i == idx)
		{
			prev->next = lk;
			lk->next = current;
			return (lk);
		}
		prev = current;
		current = current->next;
		++i;
	}
	return (NULL);
}
