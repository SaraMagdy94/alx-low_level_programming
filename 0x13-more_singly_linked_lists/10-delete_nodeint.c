#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at index index of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *r, *tmp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	r = *head;

	if (index == 0)
	{
		*head = r->next;
		free(r);
		return (1);
	}

	for (i = 0; i < index - 1 && r != NULL; i++)
		r = r->next;

	if (r == NULL || r->next == NULL)
		return (-1);

	tmp = r->next;
	r->next = tmp->next;
	free(tmp);

	return (1);
}

