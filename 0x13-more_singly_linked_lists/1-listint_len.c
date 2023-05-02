#include "lists.h"
#include <stdio.h>
/**
* listint_len - List length
* @h: Pointer to a list
*
* Return: returns the number of elements in the list
*/

size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (i);
	}

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
