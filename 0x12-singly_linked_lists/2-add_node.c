#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * * add_node - Adds a new node at the beginning of a list_t list.
 * * @head: A pointer to a pointer to the head of the list_t list.
 * * @str: The string to be added to the new node.
 * *
 * * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	size_t l = 0;

	while (str[l])
		l++;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);
	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}

	n_node->len = l;
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}
