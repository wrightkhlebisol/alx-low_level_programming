#include "lists.h"

/**
 * insert_dnodeint_at_index - Add node at index
 * @h: Head of node
 * @idx: Index to add node at
 * @n: Node value
 *
 * Return: Pointer to new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *prev = NULL;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int node_index = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = temp;
	new_node->prev = NULL;

	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
	{
		if (node_index == idx)
		{
			new_node->next = temp;
			new_node->prev = prev;
			prev->next = new_node;
			return (new_node);
		}
		node_index++;
		prev = temp;
		temp = temp->next;
	}

	temp->prev = new_node;
	*h = new_node;

	return (new_node);
}
