#include "lists.h"

/**
 * print_list- Entry point
 * Description: 'the program's description'
 * @h: First operand
 *
 * Return: An int
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
