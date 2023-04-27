#include "lists.h"
#include <stdlib.h>

/**
* free_list - Frees a list_t list
* @head: head of the list
*
* Return: void
*/

void free_list(list_t *head)
{
	free(head);
}
