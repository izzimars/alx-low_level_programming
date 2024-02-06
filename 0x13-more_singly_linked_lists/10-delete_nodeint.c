#include "lists.h"

/**
 * delete_nodeint_at_index- Entry point
 * Description: 'the program's description'
 * @head: First operand
 * @index: Second parameter
 *
 * Return: An int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, (*current);
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	current = *head;
	if (index != 0)
	{
		for (i = 0; i < index && current != NULL; i++)
		{
			prev = current;
			current = current->next;
		}
	}
	if (current == NULL && index != 0)
		return (-1);
	if (index == 0 && (current->next != NULL))
	{
		*head = current->next;
	}
	else if (index == 0 && (current->next == NULL))
	{
		*head = NULL;
	}
	else
	{
		prev->next = current->next;
	}

	return (1);
}
