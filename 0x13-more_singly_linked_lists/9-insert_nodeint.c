#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index of the list where the new node should be added.
 * @n: The value to be added to the new node.
  * Return: The address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *r, *tmp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	r = malloc(sizeof(listint_t));
	if (r == NULL)
		return (NULL);

	r->n = n;

	if (idx == 0)
	{
		r->next = *head;
		*head = r;
		return (r);
	}

	tmp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (tmp == NULL || tmp->next == NULL)
		{
			free(r);
			return (NULL);
		}
		tmp = tmp->next;
	}

	r->next = tmp->next;
	tmp->next = r;

	return (r);
}

