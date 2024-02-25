#include "lists.h"

/**
 * delete_nodeint_at_index- Entry point
 * Description: 'the program's description'
 * @head: First operand
 * @index: Second parameter
 *
 * Return: An int
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, (*current);

	prev = NULL;
	current = *head;
	while(cur!= NULL) {
		cur->next = prev;
		prev = cur;
		cur->next = prev;
		prev = cur;
		cur = tmp;
	}
	*head = prev;
	return (1);
}
