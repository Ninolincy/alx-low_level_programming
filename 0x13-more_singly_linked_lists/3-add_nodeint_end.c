#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @n: integer to be added at end
 * @head: Pointer to listint_t list
 * Return: 0 success
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tmp;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	else
	{
		ptr->n = n;

		if (*head == NULL)
		{
			ptr->next = NULL;
			*head = ptr;
		}
		else
		{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = ptr;
		}
	}
	return (ptr);
}
