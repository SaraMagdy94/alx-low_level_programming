#include "lists.h"

/**
 * sum_listint - Returns the sum of all the
 * data (n) of a listint_t linked list.
 * @head: A pointer to the head of the list.
 * Return: The sum of all the data (n) or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int r = 0;

	while (head != NULL)
	{
		r += head->n;
		head = head->next;
	}

	return (r);
}

