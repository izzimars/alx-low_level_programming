#include "lists.h"1-list_len.c

/**
 * list_len- Entry point
 * Description: 'the program's description'
 * @h: First operand
 *
 * Return: An int
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
