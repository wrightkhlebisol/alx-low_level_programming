#include "lists.h"

/**
 * print_dlistint - Print list members
 * @h: list head
 *
 * Return: List length
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num_nodes);
}
