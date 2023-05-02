#include "lists.h"
#include <stdio.h>

/**
* print_listint - prints all the elements of a list
* @h: List
*
* Return: Number of nodes
*/

size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (1);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
