#include "lists.h"

/**
 * print_listint- Entry point
 * Description: 'the program's description'
 * @h: First operand
 *
 * Return: An int
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
