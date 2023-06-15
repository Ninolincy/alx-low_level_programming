#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: the listint_t
 *
 * Return: 0 success
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
