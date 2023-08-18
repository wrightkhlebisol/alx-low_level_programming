#include "lists.h"

/**
 * get_dnodeint_at_index - Get node at index
 * @head: Node head
 * @index: index of node to return
 *
 * Return: Pointer to node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int cur_index = 0;

	if (head == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (cur_index == index)
			return (temp);
		cur_index++;
		temp = temp->next;
	}

	return (NULL);
}
