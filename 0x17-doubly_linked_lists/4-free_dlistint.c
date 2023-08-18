#include "lists.h"

/**
 * free_dlistint - Free list
 * @head: Node head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	if (head == NULL)
		return;

	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
