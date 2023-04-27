#include "lists.h"

/**
* list_len - Returns number of elements in a linked list
* @h: Pointer to list
*
* Return: size_t
*/

size_t list_len(const list_t *h)
{
	size_t count;
	struct list_s *nextList;

	while (*nextList)
	{
		count++;
		if (*nextList == NULL)
			break;
		*nextList = h->next;
	}
	return (count);
}
