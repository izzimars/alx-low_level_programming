#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head != NULL)
	{
		while ((current = *head) != NULL)
		{
			*head = (*head)->next;
			free(current);
		}
		*head = NULL;
	}
}
