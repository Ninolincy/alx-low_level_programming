#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @n: integer to add at beginning of node
 * @head: pointer to the pointer head listint_t
 * Return: 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	if (head == NULL)
		return (NULL);

	tmp = malloc(sizeof(listint_t));
	if (!tmp)
		return (NULL);

	tmp->n = n;
	tmp->next = *head;

	*head = tmp;

	return (tmp);
}
