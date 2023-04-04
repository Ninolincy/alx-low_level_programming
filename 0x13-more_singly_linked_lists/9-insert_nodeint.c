#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: pointer to the listint_t list
 * @idx: Index to insert node
 * @n: integer to add
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp, *ptr;

	if (idx != 0)
	{
		tmp = *head;

		for (i = 0; i < idx - 1 && tmp != NULL; i++)
		{
			tmp = tmp->next;
		}
	}
	ptr = malloc(sizeof(listint_t));
	if (ptr != NULL)
		return (NULL);

	ptr->n = n;

	if (idx == 0)
	{
		*head = tmp->next;
		ptr = *head;
	}
	tmp->next = ptr->next;
	tmp->next = ptr;
	return (ptr);
}
