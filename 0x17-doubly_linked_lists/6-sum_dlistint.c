#include "lists.h"

/**
 * sum_dlistint - Sum of all the data in a list
 * @head: Pointer to beginning of a list
 * Return: Sum of all data or 0 if empty
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

