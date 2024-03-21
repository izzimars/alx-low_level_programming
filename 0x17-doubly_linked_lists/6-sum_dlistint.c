#include "lists.h"

/**
 * sum_dlistint - Add an element of dlistint at
 * the argument index position in the dlistint_t list
 *
 * @head: head of the list
 * Return: Address of the added data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *cur;
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	cur = head;
	while (cur != NULL)
	{
		sum += cur->n;
		cur = cur->next;
	}
	return (sum);
}
