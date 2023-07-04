#include "lists.h"
/**
 * print_listint - Prints elements of a list
 * @h: Struct list
 * Return: Unsigned int
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
