#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of listint_t list
 * @head: pointer to listint_t lists
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr, *tmp;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (1);
	}
	tmp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}
	ptr = tmp->next;
	tmp->next = ptr->next;
	free(ptr);
	return (1);
}
