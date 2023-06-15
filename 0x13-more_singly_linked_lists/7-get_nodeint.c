#include "lists.h"

/*
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * Description: Returns the nth node of the list
 *
 * @head: pointer to a listint_t list
 * @index: Index of the node starting from 0
 * Return: 0 Success
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
