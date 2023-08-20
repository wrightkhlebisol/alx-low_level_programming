#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at index
 * @head: Head of node
 * @index: Index to add node at
 *
 * Return: positive int for success, negative for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *prev = NULL;
	unsigned int node_index = 0;

	if (*head == NULL)
		return (-1);

	while (temp != NULL)
	{
		if (node_index == index)
		{
			if (node_index == 0)
			{
				*head = temp->next;
				/** temp->next->prev = NULL; */
				free(temp);
				return (1);
			}
			else
			{
				prev->next = temp->next;
				temp->next->prev = prev;
				free(temp);
				return (1);

			}
		}
		node_index++;
		prev = temp;
		temp = temp->next;
	}
	return (-1);
}
