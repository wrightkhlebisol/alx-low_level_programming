#include "lists.h"
/**
 * free_listint - Free a List
 * @head: Pointer to head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
