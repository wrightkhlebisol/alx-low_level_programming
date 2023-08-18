#include "lists.h"

/**
 * dlistint_len - Get list length
 * @h: List head
 *
 * Return: List length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
