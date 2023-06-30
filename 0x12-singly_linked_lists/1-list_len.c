#include "lists.h"
/**
 * list_len - Number of elements in a linked list
 * @h: Linked list
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t num_elems = 0;

	if (h == NULL)
		return (-1);

	while (h != NULL)
	{
		h = h->next;
		num_elems++;
	}

	return (num_elems);
}
