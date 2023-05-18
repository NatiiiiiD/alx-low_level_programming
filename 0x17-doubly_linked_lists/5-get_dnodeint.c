#include "lists.h"

/**
 * get_dnodeint_at_index - Nth node
 *
 * @head: a pointer to head node
 *
 * @index: intg
 *
 * Return :at dlistint_t
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (index == count)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
