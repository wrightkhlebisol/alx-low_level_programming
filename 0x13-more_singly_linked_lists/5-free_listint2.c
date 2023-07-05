#include "lists.h"
/**
 * free_listint2 - Free a List
 * @head: Pointer to head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		free(*head);
		*head = temp->next;
	}
}
