#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to head
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
