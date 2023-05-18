#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all of the elements in a  dlistint_t list
 * @h: pointer at the start of the linked list
 *
 * Return:this return the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
