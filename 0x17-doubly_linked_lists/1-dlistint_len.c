#include "lists.h"

/**
 * dlistint_len - count the number of elements in a linked dlistint_t list
 * @h: Pointer to head
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	for (n = 0; h != NULL; n++)
		h = h->next;
	return (n);
}

