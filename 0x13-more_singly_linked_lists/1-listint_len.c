#include "lists.h"

/**
 * listint_len- Entry point
 * Description: 'the program's description'
 * @h: First operand
 *
 * Return: An int
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
