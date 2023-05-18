#include "lists.h"

/**
 * free_dlistint -Shows the free list
 *
 * @head: struct
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;

	while (head)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
