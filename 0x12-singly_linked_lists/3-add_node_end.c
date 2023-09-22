#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * * add_node_end - Adds a new node at the end of a list_t list.
 * * @head: A pointer to a pointer to the head of the list_t list.
 * * @str: The string to be added to the new node.
 * *
 * * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *e;
	size_t len = 0;

	while (str[len])
		len++;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);
	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}

	n_node->len = len;
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}

	e = *head;
	while (e->next != NULL)
		e = e->next;
	e->next = n_node;
	return (n_node);
}
