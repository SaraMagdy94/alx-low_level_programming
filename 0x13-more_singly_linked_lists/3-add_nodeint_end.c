#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer value to be added to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *r, *tmp;

	r = malloc(sizeof(listint_t));
	if (r == NULL)
		return (NULL);

	r->n = n;
	r->next = NULL;

	if (*head == NULL)
	{
		*head = r;
		return (r);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = r;

	return (r);
}


