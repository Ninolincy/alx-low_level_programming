#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: Pointer to head
 * Return: Number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;
	
	for (n = 0; h != NULL; n++)
	{
		printf("%d\n", h->n);
		h  = h->next;
	}
	return (n);
}

