#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *cur;
	int i = 0;

	cur = (dlistint_t *) h;
	while (cur != NULL)
	{
		printf("%d\n", cur->n);
		i++;
		cur = cur->next;
	}
	return (i);
}
