#include "lists.h"
/**
 * listint_len - Count number of elements in a linked list
 * @h: List head
 * Return: Unsigned int or 0
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
