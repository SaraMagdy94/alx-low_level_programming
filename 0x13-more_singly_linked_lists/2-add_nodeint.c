#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer value to be added to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *r;

	r = malloc(sizeof(listint_t));
	if (r == NULL)
		return (NULL);

	r->n = n;
	r->next = *head;
	*head = r;

	return (r);
}


