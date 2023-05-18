#include "lists.h"

/**
 * sum_dlistint - shows sums all of the data of a dlistint_t linked list
 * @head: is the pointer to the beginning of the linked list
 *
 * Return: is to sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
