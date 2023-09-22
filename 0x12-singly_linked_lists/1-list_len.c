#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * * list_len - Returns the number of elements in a linked list_t list.
 * * @h: Pointer to the head of the list.
 * *
 * * Return: The number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t r = 0;

	while (h != NULL)
	{
		r++;
		h = h->next;
	}

	return (r);
}

