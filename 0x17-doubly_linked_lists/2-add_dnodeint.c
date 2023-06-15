#include "lists.h"

/**
 * add_dnodeint - Adds new node atthe beginning of a list
 * @head: Pointer to head
 * @n: Node
 * Return: Address of new element or NULL if failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->previous = NULL;
	temp->next = *head;
	*head = temp;
	if (temp->next != NULL)
		(temp->next)->previous = temp;
	return (temp);
}
