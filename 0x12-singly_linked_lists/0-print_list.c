#include "lists.h"
#include <stdio.h>

/**
* print_list - Prints all elements of list_t list
* @h: Pointer to list
*
* Return: size_t
*/

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		
		count++;
		h = h->next;
	}
	return (count);
}
